// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149584380 FUN_149584380 body=1134 status=ok
// SIG undefined FUN_149584380(void)

int FUN_149584380(longlong param_1,undefined8 *param_2,undefined8 *param_3,code *param_4,
                 undefined8 *param_5)

{
  ushort *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  size_t sVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  char *pcVar16;
  ulonglong uVar17;
  longlong lVar18;
  char *pcVar19;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = param_2[0xb];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x54);
  local_70 = 0;
  for (lVar5 = *(longlong *)(param_1 + 0x210); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x10)) {
    if (*(undefined8 **)(lVar5 + 8) == param_2) {
      uVar6 = FUN_14955a402(param_1,"vtable constructor called recursively: %s",*param_2);
      *param_5 = uVar6;
      iVar4 = 6;
      goto LAB_1495843f1;
    }
  }
  lVar5 = FUN_149559683(param_1,*param_2);
  iVar4 = 7;
  if (lVar5 != 0) {
    plVar7 = (longlong *)FUN_145e3bd67(0x30);
    if (plVar7 == (longlong *)0x0) {
      if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
        *(undefined1 *)(param_1 + 0x61) = 1;
        if (0 < *(int *)(param_1 + 0xd4)) {
          *(undefined4 *)(param_1 + 0x170) = 1;
        }
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        *(undefined2 *)(param_1 + 0x17c) = 0;
        if (*(longlong *)(param_1 + 0x138) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
        }
      }
    }
    else {
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      *plVar7 = param_1;
      plVar7[1] = (longlong)param_3;
      *(undefined1 *)((longlong)plVar7 + 0x1d) = 1;
      lVar10 = -32000000;
      if (param_2[0xe] != 0) {
        lVar10 = -0x100000000;
        plVar13 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
        do {
          lVar10 = lVar10 + 0x100000000;
          lVar18 = *plVar13;
          plVar13 = plVar13 + 4;
        } while (lVar18 != param_2[0xe]);
        lVar10 = lVar10 >> 0x1b;
      }
      *(undefined8 *)(param_2[0xb] + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar10);
      local_58 = *(undefined8 *)(param_1 + 0x210);
      local_50 = 0;
      *(longlong ***)(param_1 + 0x210) = &local_68;
      local_90 = &local_70;
      local_98 = plVar7 + 2;
      local_88 = plVar7;
      local_80 = lVar5;
      local_68 = plVar7;
      local_60 = param_2;
      iVar4 = (*param_4)(param_1,param_3[3],uVar2,uVar6);
      lVar5 = local_80;
      plVar13 = local_88;
      *(undefined8 *)(param_1 + 0x210) = local_58;
      if (iVar4 == 0) {
        puVar3 = (undefined8 *)plVar7[2];
        iVar4 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          *(undefined8 *)local_88[2] = *param_3;
          *(int *)(param_3 + 2) = *(int *)(param_3 + 2) + 1;
          *(undefined4 *)(local_88 + 3) = 1;
          if (local_50 == 0) {
            uVar6 = FUN_14955a402(param_1,"vtable constructor did not declare schema: %s",*param_2);
            *param_5 = uVar6;
            FUN_149569a63(plVar13);
            iVar4 = 1;
          }
          else {
            local_88[5] = param_2[0xc];
            param_2[0xc] = local_88;
            local_88 = (longlong *)CONCAT62(local_88._2_6_,*(short *)((longlong)param_2 + 0x46));
            if (0 < *(short *)((longlong)param_2 + 0x46)) {
              lVar5 = 0;
              local_78 = 0;
              do {
                lVar10 = lVar5 * 0x20;
                pcVar19 = "";
                if ((*(byte *)(param_2[1] + 0x1c + lVar10) & 4) == 0) {
LAB_149584701:
                  sVar8 = strlen(pcVar19);
                  if ((sVar8 & 0x3fffffff) != 0) {
                    uVar9 = (ulonglong)((uint)sVar8 & 0x3fffffff);
                    uVar11 = 0;
                    pcVar16 = pcVar19;
LAB_14958471f:
                    pcVar12 = pcVar19 + uVar11;
                    if (pcVar12 == (char *)0x0) goto LAB_14958475d;
                    lVar18 = 0;
                    do {
                      if ((&DAT_14bd3ff30)[(byte)"hidden"[lVar18]] !=
                          (&DAT_14bd3ff30)[(byte)pcVar16[lVar18]]) goto LAB_14958475d;
                      lVar18 = lVar18 + 1;
                    } while (lVar18 != 6);
                    if ((uVar11 != 0) && (pcVar12[-1] != ' ')) goto LAB_14958475d;
                    if ((pcVar12[6] & 0xdfU) != 0) goto LAB_14958475d;
                    uVar15 = 7 - (pcVar12[6] == 0);
                    if (uVar15 + (int)uVar11 <= ((uint)sVar8 & 0x3fffffff)) {
                      uVar14 = uVar15 + uVar11;
                      uVar17 = uVar11;
                      do {
                        pcVar19[uVar17] = pcVar19[uVar14];
                        uVar17 = uVar17 + 1;
                        uVar14 = uVar14 + 1;
                      } while (uVar14 <= uVar9);
                    }
                    if ((uVar11 != 0) && (*pcVar12 == '\0')) {
                      pcVar12[-1] = '\0';
                    }
                    puVar1 = (ushort *)(param_2[1] + 0x1c + lVar10);
                    *puVar1 = *puVar1 | 2;
                    local_88 = (longlong *)
                               CONCAT62(local_88._2_6_,*(undefined2 *)((longlong)param_2 + 0x46));
                    local_78 = 0x400;
                    goto LAB_149584770;
                  }
                }
                else {
                  pcVar19 = *(char **)(param_2[1] + lVar10);
                  sVar8 = strlen(pcVar19);
                  pcVar19 = pcVar19 + sVar8 + 1;
                  if (pcVar19 != (char *)0x0) goto LAB_149584701;
                }
LAB_149584768:
                *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | (uint)(ushort)local_78;
LAB_149584770:
                lVar5 = lVar5 + 1;
              } while (lVar5 < (short)local_88);
              iVar4 = 0;
              lVar5 = local_80;
            }
          }
        }
      }
      else {
        if (((iVar4 == 7) && (*(char *)(param_1 + 0x61) == '\0')) &&
           (*(char *)(param_1 + 0x62) == '\0')) {
          *(undefined1 *)(param_1 + 0x61) = 1;
          if (0 < *(int *)(param_1 + 0xd4)) {
            *(undefined4 *)(param_1 + 0x170) = 1;
          }
          *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
          *(undefined2 *)(param_1 + 0x17c) = 0;
          if (*(longlong *)(param_1 + 0x138) != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
          }
        }
        if (local_70 == 0) {
          uVar6 = FUN_14955a402(param_1,"vtable constructor failed: %s",local_80);
          *param_5 = uVar6;
        }
        else {
          uVar6 = FUN_14955a402(param_1,&DAT_149dfbe46);
          *param_5 = uVar6;
          FUN_145e3b961(local_70);
        }
        FUN_14955d65a(param_1,local_88);
      }
    }
    FUN_14955d65a(param_1,lVar5);
  }
LAB_1495843f1:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14958475d:
  uVar11 = uVar11 + 1;
  pcVar16 = pcVar16 + 1;
  if (uVar11 == uVar9) goto LAB_149584768;
  goto LAB_14958471f;
}



// FUNCTION 1495847ef FUN_1495847ef body=118 status=ok
// SIG undefined FUN_1495847ef(void)

undefined4 FUN_1495847ef(longlong param_1,char *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *_Str1;
  
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 4);
    iVar4 = 2;
    do {
      puVar1 = (undefined4 *)(param_1 + (longlong)iVar4 * 4);
      _Str1 = (char *)(param_1 + (longlong)iVar4 * 4 + 8);
      iVar3 = strncmp(_Str1,param_2,(longlong)param_3);
      if ((iVar3 == 0) && (_Str1[param_3] == '\0')) {
        return *puVar1;
      }
      iVar4 = iVar4 + puVar1[1];
    } while (iVar4 < iVar2);
  }
  return 0;
}



// FUNCTION 149584865 FUN_149584865 body=1537 status=ok
// SIG undefined FUN_149584865(void)

ulonglong FUN_149584865(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  
  bVar12 = *param_1;
  lVar8 = 1;
  switch((&DAT_14bd42100)[bVar12]) {
  case 0:
    if (param_1[1] == 0x27) {
      *param_2 = 0x97;
      uVar11 = 1;
      do {
        lVar8 = uVar11 + 1;
        uVar11 = uVar11 + 1;
      } while (((&DAT_14bd400b0)[param_1[lVar8]] & 8) != 0);
      if ((uVar11 & 1) != 0 || param_1[lVar8] != 0x27) {
        *param_2 = 0xb4;
        for (; (param_1[uVar11] != 0 && (param_1[uVar11] != 0x27)); uVar11 = uVar11 + 1) {
        }
      }
      uVar11 = (ulonglong)(((int)uVar11 + 1) - (uint)(param_1[(int)uVar11] == 0));
      goto LAB_1495849dc;
    }
  case 2:
switchD_149584899_caseD_2:
    uVar11 = (ulonglong)((int)lVar8 - 1);
    param_1 = param_1 + lVar8;
    do {
      bVar12 = *param_1;
      uVar11 = (ulonglong)((int)uVar11 + 1);
      param_1 = param_1 + 1;
    } while (((&DAT_14bd400b0)[bVar12] & 0x46) != 0);
LAB_149584b40:
    *param_2 = 0x3b;
    goto LAB_1495849dc;
  case 1:
    uVar11 = 0;
    lVar8 = 0x100000000;
    do {
      lVar3 = uVar11 + 1;
      lVar8 = lVar8 + 0x100000000;
      uVar11 = uVar11 + 1;
    } while ((byte)(&DAT_14bd42100)[param_1[lVar3]] < 2);
    if (((&DAT_14bd400b0)[param_1[lVar3]] & 0x46) == 0) {
      *param_2 = 0x3b;
      FUN_149584e66(param_1,uVar11 & 0xffffffff);
      goto LAB_1495849dc;
    }
    lVar8 = lVar8 >> 0x20;
    goto switchD_149584899_caseD_2;
  case 3:
    goto switchD_149584899_caseD_3;
  case 4:
  case 5:
    *param_2 = 0x99;
    bVar12 = param_1[1];
    uVar11 = 1;
    if (bVar12 != 0) {
      iVar7 = 0;
      do {
        iVar10 = (int)uVar11;
        if (((&DAT_14bd400b0)[bVar12] & 0x46) == 0) {
          if (0 < iVar7 && bVar12 == 0x28) {
            param_1 = param_1 + iVar10;
            uVar11 = (ulonglong)(iVar10 + 1);
            goto LAB_149584dfa;
          }
          if ((bVar12 != 0x3a) || (param_1[(longlong)iVar10 + 1] != 0x3a)) break;
          iVar10 = iVar10 + 1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        bVar12 = param_1[(longlong)iVar10 + 1];
        uVar11 = (longlong)iVar10 + 1;
      } while (bVar12 != 0);
      if (iVar7 != 0) goto LAB_1495849dc;
    }
    goto LAB_149584915;
  case 6:
    *param_2 = 0x99;
    uVar11 = 0;
    do {
      lVar8 = uVar11 + 1;
      uVar11 = uVar11 + 1;
    } while (0xfffffffffffffff5 < (ulonglong)param_1[lVar8] - 0x3a);
    goto LAB_1495849dc;
  case 7:
    uVar11 = 0;
    do {
      lVar8 = uVar11 + 1;
      uVar11 = uVar11 + 1;
    } while (((&DAT_14bd400b0)[param_1[lVar8]] & 1) != 0);
    goto LAB_149584a87;
  case 8:
    uVar11 = 1;
    bVar6 = param_1[1];
    while (iVar7 = (int)uVar11, bVar6 != 0) {
      if (bVar6 == bVar12) {
        lVar8 = (longlong)iVar7;
        uVar11 = lVar8 + 1;
        iVar7 = (int)uVar11;
        if (param_1[lVar8 + 1] != bVar12) {
          if (bVar12 != 0x27) goto LAB_149584b40;
          *param_2 = 0x73;
          goto LAB_1495849dc;
        }
      }
      uVar11 = (longlong)iVar7 + 1;
      bVar6 = param_1[(longlong)iVar7 + 1];
    }
LAB_149584915:
    *param_2 = 0xb4;
    goto LAB_1495849dc;
  case 9:
    if (bVar12 == 0x5d) {
      uVar4 = 0x3b;
      uVar11 = 1;
    }
    else {
      uVar11 = 1;
      do {
        pbVar1 = param_1 + uVar11;
        if (*pbVar1 == 0) {
          uVar4 = 0xb4;
          goto LAB_149584963;
        }
        uVar11 = uVar11 + 1;
      } while (*pbVar1 != 0x5d);
      uVar4 = 0x3b;
    }
LAB_149584963:
    *param_2 = uVar4;
    goto LAB_1495849dc;
  case 10:
    if (param_1[1] != 0x7c) {
      *param_2 = 0x66;
      break;
    }
    *param_2 = 0x6e;
    goto LAB_1495849c9;
  case 0xb:
    if (param_1[1] != 0x2d) {
      *param_2 = 0x6a;
      break;
    }
    for (uVar11 = 2; (param_1[uVar11] != 0 && (param_1[uVar11] != 10)); uVar11 = uVar11 + 1) {
    }
    goto LAB_149584a87;
  case 0xc:
    bVar12 = param_1[1];
    if (bVar12 == 0x3c) {
      *param_2 = 0x67;
    }
    else {
      if (bVar12 == 0x3e) goto LAB_1495849c2;
      if (bVar12 != 0x3d) {
        *param_2 = 0x38;
        break;
      }
      *param_2 = 0x37;
    }
    goto LAB_1495849c9;
  case 0xd:
    if (param_1[1] == 0x3e) {
      *param_2 = 0x68;
    }
    else {
      if (param_1[1] != 0x3d) {
        *param_2 = 0x36;
        break;
      }
      *param_2 = 0x39;
    }
    goto LAB_1495849c9;
  case 0xe:
    *param_2 = 0x35;
    uVar11 = (ulonglong)((param_1[1] == 0x3d) + 1);
    goto LAB_1495849dc;
  case 0xf:
    if (param_1[1] != 0x3d) goto switchD_149584899_caseD_1b;
LAB_1495849c2:
    *param_2 = 0x34;
LAB_1495849c9:
    uVar11 = 2;
    goto LAB_1495849dc;
  case 0x10:
    if ((param_1[1] != 0x2a) || (param_1[2] == 0)) {
      *param_2 = 0x6c;
      break;
    }
    uVar11 = 4;
    if (param_1[3] != 0x2f || param_1[2] != 0x2a) {
      lVar8 = 3;
      bVar12 = param_1[3];
      do {
        if (bVar12 == 0) {
          iVar7 = 0;
          goto LAB_149584e4c;
        }
        lVar3 = lVar8 + 1;
        lVar8 = lVar8 + 1;
        bVar2 = bVar12 != 0x2a;
        bVar12 = param_1[lVar3];
      } while (param_1[lVar3] != 0x2f || bVar2);
      iVar7 = 1;
LAB_149584e4c:
      uVar11 = (ulonglong)(uint)((int)lVar8 + iVar7);
    }
LAB_149584a87:
    *param_2 = 0xb3;
    goto LAB_1495849dc;
  case 0x11:
    *param_2 = 0x16;
    break;
  case 0x12:
    *param_2 = 0x17;
    break;
  case 0x13:
    *param_2 = 1;
    break;
  case 0x14:
    *param_2 = 0x69;
    break;
  case 0x15:
    *param_2 = 0x6b;
    break;
  case 0x16:
    *param_2 = 0x6d;
    break;
  case 0x17:
    *param_2 = 0x1a;
    break;
  case 0x18:
    *param_2 = 0x65;
    break;
  case 0x19:
    *param_2 = 0x70;
    break;
  case 0x1a:
    if ((ulonglong)param_1[1] - 0x3a < 0xfffffffffffffff6) {
      *param_2 = 0x8b;
      break;
    }
    goto switchD_149584899_caseD_3;
  default:
switchD_149584899_caseD_1b:
    *param_2 = 0xb4;
    break;
  case 0x1c:
    *param_2 = 0xb4;
    uVar11 = 0;
    goto LAB_1495849dc;
  }
  uVar11 = 1;
LAB_1495849dc:
  return uVar11 & 0xffffffff;
  while ((uVar11 = (ulonglong)((int)uVar5 + 1), uVar9 != 0x29 &&
         (((&DAT_14bd400b0)[uVar9] & 1) == 0))) {
LAB_149584dfa:
    uVar5 = uVar11;
    param_1 = param_1 + 1;
    uVar9 = (ulonglong)*param_1;
    if (uVar9 == 0) goto LAB_149584e28;
  }
  if (*param_1 != 0x29) {
LAB_149584e28:
    *param_2 = 0xb4;
    uVar11 = uVar5;
  }
  goto LAB_1495849dc;
switchD_149584899_caseD_3:
  *param_2 = 0x98;
  if (((*param_1 == 0x30) && ((param_1[1] | 0x20) == 0x78)) &&
     (((&DAT_14bd400b0)[param_1[2]] & 8) != 0)) {
    lVar8 = 3;
    do {
      pbVar1 = param_1 + lVar8;
      lVar8 = lVar8 + 1;
    } while (((&DAT_14bd400b0)[*pbVar1] & 8) != 0);
    uVar11 = (ulonglong)((int)lVar8 - 1);
  }
  else {
    uVar11 = 0xffffffffffffffff;
    do {
      lVar8 = uVar11 + 1;
      uVar11 = uVar11 + 1;
    } while (0xfffffffffffffff5 < (ulonglong)param_1[lVar8] - 0x3a);
    if (param_1[lVar8] == 0x2e) {
      do {
        lVar8 = uVar11 + 1;
        uVar11 = uVar11 + 1;
      } while (0xfffffffffffffff5 < (ulonglong)param_1[lVar8] - 0x3a);
      *param_2 = 0x96;
    }
    uVar5 = (ulonglong)(int)uVar11;
    uVar9 = (ulonglong)param_1[uVar5];
    if (((param_1[uVar5] | 0x20) == 0x65) &&
       ((bVar12 = param_1[uVar5 + 1], 0xfffffffffffffff5 < (ulonglong)bVar12 - 0x3a ||
        (((bVar12 == 0x2d || (bVar12 == 0x2b)) &&
         (0xfffffffffffffff5 < (ulonglong)param_1[uVar5 + 2] - 0x3a)))))) {
      lVar8 = uVar11 << 0x20;
      uVar11 = (lVar8 + 0x200000000 >> 0x20) - 1;
      lVar8 = lVar8 + 0x100000000;
      do {
        lVar8 = lVar8 + 0x100000000;
        lVar3 = uVar11 + 1;
        uVar11 = uVar11 + 1;
      } while (0xfffffffffffffff5 < (ulonglong)param_1[lVar3] - 0x3a);
      *param_2 = 0x96;
      uVar5 = lVar8 >> 0x20;
      uVar9 = (ulonglong)param_1[uVar5];
    }
    if (((&DAT_14bd400b0)[uVar9] & 0x46) != 0) {
      param_1 = param_1 + uVar5;
      uVar11 = uVar5 & 0xffffffff;
      do {
        param_1 = param_1 + 1;
        *param_2 = 0xb4;
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while (((&DAT_14bd400b0)[*param_1] & 0x46) != 0);
    }
  }
  goto LAB_1495849dc;
}



// FUNCTION 149584e66 FUN_149584e66 body=226 status=ok
// SIG undefined FUN_149584e66(void)

void FUN_149584e66(byte *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (1 < (int)param_2) {
    bVar1 = (&DAT_14bd42200)
            [((uint)(byte)(&DAT_14bd3ff30)[*param_1] << 2 ^ param_2 ^
             (uint)(byte)(&DAT_14bd3ff30)[param_1[(ulonglong)param_2 - 1]] +
             (uint)(byte)(&DAT_14bd3ff30)[param_1[(ulonglong)param_2 - 1]] * 2) % 0x7f];
    while (bVar1 != 0) {
      uVar2 = (ulonglong)(bVar1 - 1);
      if ((byte)(&DAT_14bd40570)[uVar2] == param_2) {
        uVar3 = 0;
        while ((param_1[uVar3] & 0xdf) ==
               "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@REINDEXEDESCAPEACHECKEYBEFOREIGNOREGEXPLAINSTEADDATABASELECTABLEFTHENDEFERRABLELSEXCLUDELETEMPORARYISNULLSAVEPOINTERSECTIESNOTNULLIKEXCEPTRANSACTIONATURALTERAISEXCLUSIVEXISTSCONSTRAINTOFFSETRIGGERANGENERATEDETACHAVINGLOBEGINNEREFERENCESUNIQUERYWITHOUTERELEASEATTACHBETWEENOTHINGROUPSCASCADEFAULTCASECOLLATECREATECURRENT_DATEIMMEDIATEJOINSERTMATCHPLANALYZEPRAGMABORTUPDATEVALUESVIRTUALWAYSWHENWHERECURSIVEAFTERENAMEANDEFERREDISTINCTAUTOINCREMENTCASTCOLUMNCOMMITCONFLICTCROSSCURRENT_TIMESTAMPARTITIONDROPRECEDINGFAILASTFILTEREPLACEFIRSTFOLLOWINGFROMFULLIMITIFORDERESTRICTOTHERSOVERIGHTROLLBACKROWSUNBOUNDEDUNIONUSINGVACUUMVIEWINDOWBYINITIALLYPRIMARY"
               [*(ushort *)(&DAT_14bd40440 + uVar2 * 2) + uVar3 + 0x80]) {
          uVar3 = uVar3 + 1;
          if (param_2 == uVar3) {
            *param_3 = (uint)(byte)(&DAT_14bd42280)[uVar2];
            return;
          }
        }
      }
      bVar1 = (&DAT_14bd42320)[uVar2];
    }
  }
  return;
}



// FUNCTION 149584f48 FUN_149584f48 body=89 status=ok
// SIG undefined FUN_149584f48(void)

longlong FUN_149584f48(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x90);
  lVar3 = (longlong)iVar2;
  if (iVar2 < *(int *)(param_1 + 0x94)) {
    *(int *)(param_1 + 0x90) = iVar2 + 1;
    lVar1 = *(longlong *)(param_1 + 0x88);
    *(char *)(lVar1 + lVar3 * 0x18) = (char)param_2;
    *(undefined2 *)(lVar1 + 2 + lVar3 * 0x18) = 0;
    *(undefined4 *)(lVar1 + 4 + lVar3 * 0x18) = param_3;
    *(undefined4 *)(lVar1 + 8 + lVar3 * 0x18) = param_4;
    *(undefined4 *)(lVar1 + 0xc + lVar3 * 0x18) = param_5;
    *(undefined8 *)(lVar1 + 0x10 + lVar3 * 0x18) = 0;
    *(undefined1 *)(lVar1 + 1 + lVar3 * 0x18) = 0;
    return lVar3;
  }
  iVar2 = FUN_149584fe6();
  if (iVar2 != 0) {
    return 1;
  }
  lVar3 = FUN_149584f48(param_1,param_2,param_3,param_4);
  return lVar3;
}



// FUNCTION 149584fa1 FUN_149584fa1 body=69 status=ok
// SIG undefined FUN_149584fa1(void)

undefined8
FUN_149584fa1(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_149584fe6();
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = FUN_149584f48(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 149584fe6 FUN_149584fe6 body=274 status=ok
// SIG undefined FUN_149584fe6(void)

undefined8 FUN_149584fe6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = 0x2a;
  if ((longlong)*(int *)(param_1 + 0x94) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x94) * 2;
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = *plVar1;
  if (*(int *)(lVar2 + 0x90) < lVar4) {
    if (*(char *)(lVar2 + 0x61) != '\0') {
      return 7;
    }
    if (*(char *)(lVar2 + 0x62) != '\0') {
      return 7;
    }
    *(undefined1 *)(lVar2 + 0x61) = 1;
    if (0 < *(int *)(lVar2 + 0xd4)) {
      *(undefined4 *)(lVar2 + 0x170) = 1;
    }
    *(int *)(lVar2 + 0x178) = *(int *)(lVar2 + 0x178) + 1;
    *(undefined2 *)(lVar2 + 0x17c) = 0;
    if (*(longlong *)(lVar2 + 0x138) == 0) {
      return 7;
    }
    *(undefined4 *)(*(longlong *)(lVar2 + 0x138) + 0x18) = 7;
    return 7;
  }
  uVar5 = FUN_14955d6fd(lVar2,*(undefined8 *)(param_1 + 0x88),lVar4 * 0x18);
  if (uVar5 == 0) {
    return 7;
  }
  lVar4 = *plVar1;
  if ((lVar4 != 0) && (uVar5 < *(ulonglong *)(lVar4 + 0x1c8))) {
    uVar3 = 0x80;
    if (*(ulonglong *)(lVar4 + 0x1b8) <= uVar5) goto LAB_1495850bb;
    if (*(ulonglong *)(lVar4 + 0x1c0) <= uVar5) {
      uVar3 = (uint)*(ushort *)(lVar4 + 0x17e);
      goto LAB_1495850bb;
    }
  }
  uVar3 = (*DAT_14c765d30)(uVar5);
LAB_1495850bb:
  *(uint *)((longlong)plVar1 + 0x3c) = uVar3;
  *(int *)(param_1 + 0x94) = (int)((ulonglong)(longlong)(int)uVar3 / 0x18);
  *(ulonglong *)(param_1 + 0x88) = uVar5;
  return 0;
}



// FUNCTION 1495850f8 FUN_1495850f8 body=205 status=ok
// SIG undefined FUN_1495850f8(void)

void FUN_1495850f8(undefined8 *param_1,longlong param_2,char *param_3,uint param_4)

{
  size_t sVar1;
  void *_Dst;
  ulonglong _Size;
  
  if (*(char *)(param_2 + 1) != 0) {
    FUN_149569985(*param_1,(int)*(char *)(param_2 + 1),*(undefined8 *)(param_2 + 0x10));
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  if ((int)param_4 < 0) {
    FUN_14955a5b6(param_1,(int)((ulonglong)(param_2 - param_1[0x11]) >> 3) * -0x55555555,param_3,
                  param_4);
    return;
  }
  if (param_4 == 0) {
    if (param_3 != (char *)0x0) {
      sVar1 = strlen(param_3);
      param_4 = (uint)sVar1 & 0x3fffffff;
      goto LAB_149585195;
    }
  }
  else if (param_3 != (char *)0x0) {
LAB_149585195:
    _Size = (ulonglong)param_4;
    _Dst = (void *)FUN_14955d750(*param_1,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_3,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
      goto LAB_149585123;
    }
  }
  _Dst = (void *)0x0;
LAB_149585123:
  *(void **)(param_2 + 0x10) = _Dst;
  *(undefined1 *)(param_2 + 1) = 0xf9;
  return;
}



// FUNCTION 1495851c5 FUN_1495851c5 body=287 status=ok
// SIG undefined FUN_1495851c5(void)

void FUN_1495851c5(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *param_2;
  lVar1 = param_1[3];
  lVar2 = *(longlong *)(lVar1 + 0x50);
  *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffcff | 0x100;
  lVar4 = (longlong)*(int *)(param_1 + 0x12) * 0x18 + param_1[0x11];
  do {
    if (0x3e < *(byte *)(lVar4 + -0x18)) goto LAB_149585295;
    switch(*(byte *)(lVar4 + -0x18)) {
    case 2:
      if (*(int *)(lVar4 + -0x10) != 0) {
        *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) & 0xfe;
      }
    case 0:
    case 1:
      *(byte *)((longlong)param_1 + 0xc9) = *(byte *)((longlong)param_1 + 0xc9) | 2;
      break;
    case 3:
    case 5:
      *(code **)(lVar4 + -8) = FUN_149577104;
      goto LAB_14958525a;
    case 4:
      *(code **)(lVar4 + -8) = FUN_149577148;
LAB_14958525a:
      *(undefined1 *)(lVar4 + -0x17) = 0xfb;
      break;
    case 6:
    case 7:
    case 8:
      *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffcff | 0x200;
      break;
    case 9:
      if (iVar3 < *(int *)(lVar4 + -0x2c)) {
        iVar3 = *(int *)(lVar4 + -0x2c);
      }
    default:
      if ((int)*(uint *)(lVar4 + -0x10) < 0) {
        *(undefined4 *)(lVar4 + -0x10) =
             *(undefined4 *)(lVar2 + (ulonglong)~*(uint *)(lVar4 + -0x10) * 4);
      }
      break;
    case 10:
      if (iVar3 < *(int *)(lVar4 + -0x10)) {
        iVar3 = *(int *)(lVar4 + -0x10);
      }
    }
LAB_149585295:
    lVar4 = lVar4 + -0x18;
    if (lVar4 == param_1[0x11]) {
      if (*(longlong *)(lVar1 + 0x50) != 0) {
        FUN_14955d65a(*param_1);
      }
      *(undefined8 *)(lVar1 + 0x50) = 0;
      *(undefined4 *)(lVar1 + 0x44) = 0;
      *param_2 = iVar3;
      return;
    }
  } while( true );
}



// FUNCTION 1495852e4 FUN_1495852e4 body=150 status=ok
// SIG undefined FUN_1495852e4(void)

void FUN_1495852e4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  uVar1 = *param_1;
  if (*(ushort *)(param_1 + 0x18) != 0) {
    FUN_149569891(param_1[0x13],(uint)*(ushort *)(param_1 + 0x18) * 2);
    if (param_1[0x13] != 0) {
      FUN_14955d65a(uVar1);
    }
  }
  *(short *)(param_1 + 0x18) = (short)param_2;
  lVar2 = FUN_14955d750(uVar1,(longlong)(param_2 * 2) * 0x38);
  param_1[0x13] = lVar2;
  if (0 < param_2 && lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar2 + 0x28);
    iVar4 = param_2 * 2 + 1;
    do {
      *puVar3 = uVar1;
      *(undefined2 *)(puVar3 + -4) = 1;
      *(undefined4 *)(puVar3 + -1) = 0;
      puVar3 = puVar3 + 7;
      iVar4 = iVar4 + -1;
    } while (1 < iVar4);
  }
  return;
}



// FUNCTION 14958537a FUN_14958537a body=72 status=ok
// SIG undefined FUN_14958537a(void)

int FUN_14958537a(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = 0;
  if (*(char *)(lVar1 + 0xb5) == '\0') {
    iVar2 = FUN_14955cf5d(lVar1,param_1 + 1);
    if (iVar2 == 0) {
      iVar2 = 0;
      if (*(char *)(lVar1 + 0x69) != '\0') {
        *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 0x10;
        iVar2 = 0;
      }
    }
    else {
      *(int *)(param_1 + 3) = iVar2;
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    }
  }
  return iVar2;
}



// FUNCTION 1495853c2 FUN_1495853c2 body=61 status=ok
// SIG undefined FUN_1495853c2(void)

undefined8 FUN_1495853c2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1495853ff(param_2 + 7);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 9) & 0x30) != 0)) {
    uVar2 = FUN_1495854a6(param_1,param_2,lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1495853ff FUN_1495853ff body=167 status=ok
// SIG undefined FUN_1495853ff(void)

undefined ** FUN_1495853ff(longlong param_1)

{
  undefined **ppuVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  iVar5 = 0x3f;
  iVar8 = 0;
  do {
    iVar9 = (iVar8 + iVar5) / 2;
    ppuVar1 = &PTR_s_application_id_14bd42600 + (longlong)iVar9 * 3;
    puVar3 = *ppuVar1;
    if (param_1 == 0) {
      iVar6 = -(uint)(puVar3 != (undefined *)0x0);
LAB_149585478:
      if (iVar6 == 0) {
        return ppuVar1;
      }
    }
    else {
      if (puVar3 != (undefined *)0x0) {
        lVar7 = 0;
        do {
          bVar2 = *(byte *)(param_1 + lVar7);
          if (bVar2 == puVar3[lVar7]) {
            if ((ulonglong)bVar2 == 0) {
              return ppuVar1;
            }
          }
          else {
            iVar6 = (uint)(byte)(&DAT_14bd3ff30)[bVar2] -
                    (uint)(byte)(&DAT_14bd3ff30)[(byte)puVar3[lVar7]];
            if (iVar6 != 0) goto LAB_149585478;
          }
          lVar7 = lVar7 + 1;
        } while( true );
      }
      iVar6 = 1;
    }
    iVar4 = iVar9 + 1;
    if (iVar6 < 0) {
      iVar5 = iVar9 + -1;
      iVar4 = iVar8;
    }
    iVar8 = iVar4;
    if (iVar5 < iVar8) {
      return (undefined **)0x0;
    }
  } while( true );
}



// FUNCTION 1495854a6 FUN_1495854a6 body=379 status=ok
// SIG undefined FUN_1495854a6(void)

undefined8 * FUN_1495854a6(longlong param_1,char *param_2,undefined8 param_3)

{
  int *piVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    uVar5 = (uint)sVar2 & 0x3fffffff;
  }
  puVar3 = (undefined8 *)FUN_145e3bd67(uVar5 + 0x31);
  if (puVar3 == (undefined8 *)0x0) {
    if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
      *(undefined1 *)(param_1 + 0x61) = 1;
      if (0 < *(int *)(param_1 + 0xd4)) {
        *(undefined4 *)(param_1 + 0x170) = 1;
      }
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      *(undefined2 *)(param_1 + 0x17c) = 0;
      if (*(longlong *)(param_1 + 0x138) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
      }
    }
  }
  else {
    puVar4 = puVar3 + 6;
    memcpy(puVar4,param_2,(ulonglong)(uVar5 + 1));
    puVar3[1] = puVar4;
    *puVar3 = &DAT_14bd42540;
    puVar3[3] = param_3;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 2) = 1;
    puVar4 = (undefined8 *)FUN_14958256b(param_1 + 0x1f8,puVar4,puVar3);
    if (puVar4 == (undefined8 *)0x0) {
      return puVar3;
    }
    if (puVar4 != puVar3) {
      FUN_149585621(param_1,puVar4);
      piVar1 = (int *)(puVar4 + 2);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return puVar3;
      }
      if ((code *)puVar4[4] != (code *)0x0) {
        (*(code *)puVar4[4])(puVar4[3]);
      }
      FUN_14955d65a(param_1,puVar4);
      return puVar3;
    }
    if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
      *(undefined1 *)(param_1 + 0x61) = 1;
      if (0 < *(int *)(param_1 + 0xd4)) {
        *(undefined4 *)(param_1 + 0x170) = 1;
      }
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      *(undefined2 *)(param_1 + 0x17c) = 0;
      if (*(longlong *)(param_1 + 0x138) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
      }
    }
    FUN_14955d65a(param_1,puVar4);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 149585621 FUN_149585621 body=62 status=ok
// SIG undefined FUN_149585621(void)

void FUN_149585621(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x28);
  if (lVar2 == 0) {
    return;
  }
  *(byte *)(lVar2 + 0x40) = *(byte *)(lVar2 + 0x40) | 2;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x2d8) == 0)) {
    piVar1 = (int *)(lVar2 + 0x3c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) goto LAB_14958564a;
  }
  FUN_149585e6d();
LAB_14958564a:
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 14958565f FUN_14958565f body=519 status=ok
// SIG undefined FUN_14958565f(void)

int FUN_14958565f(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 *local_130;
  uint local_128;
  int local_124;
  uint uStack_120;
  ushort local_11c;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_130 = local_118;
  local_138 = 0;
  local_128 = 200;
  local_124 = 0;
  uStack_120 = 0;
  local_11c = 0;
  FUN_1495555b8(&local_138,"CREATE TABLE x");
  if (*(char *)((longlong)param_2 + 0xb) == '\0') {
    FUN_149555a84(&local_138,"(\"%s\"",*param_2);
    lVar5 = 1;
  }
  else {
    bVar1 = *(byte *)((longlong)param_2 + 10);
    uVar4 = 0x28;
    lVar5 = 0;
    do {
      FUN_149555a84(&local_138,"%c\"%s\"",uVar4,(&PTR_DAT_14bd42fc0)[lVar5 + (ulonglong)bVar1]);
      lVar5 = lVar5 + 1;
      uVar4 = 0x2c;
    } while ((uint)lVar5 < (uint)*(byte *)((longlong)param_2 + 0xb));
  }
  bVar1 = *(byte *)((longlong)param_2 + 9);
  cVar6 = (bVar1 & 0x20) != 0;
  if ((bool)cVar6) {
    FUN_1495555b8(&local_138,",arg HIDDEN");
    bVar1 = *(byte *)((longlong)param_2 + 9);
  }
  if (0x3f < bVar1) {
    FUN_1495555b8(&local_138,",schema HIDDEN");
    cVar6 = cVar6 + '\x01';
  }
  if (uStack_120 + 1 < local_128) {
    local_130[uStack_120] = 0x29;
    uStack_120 = uStack_120 + 1;
  }
  else {
    FUN_1495557b3(&local_138,&DAT_149dfbe79,1);
  }
  if (((local_130 != (undefined1 *)0x0) && (local_130[uStack_120] = 0, local_124 != 0)) &&
     ((local_11c & 0x400) == 0)) {
    FUN_14955d93a(&local_138);
  }
  iVar2 = FUN_14955bbec(param_1,local_118);
  if (iVar2 == 0) {
    puVar3 = (undefined8 *)FUN_145e3bd67(0x30);
    iVar2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[4] = param_2;
      puVar3[3] = param_1;
      *(char *)((longlong)puVar3 + 0x29) = (char)lVar5;
      *(char *)(puVar3 + 5) = cVar6;
      goto LAB_14958582d;
    }
    iVar2 = 7;
  }
  else {
    uVar4 = FUN_14955b92e(param_1);
    uVar4 = FUN_1495558d3(&DAT_149dfbe46,uVar4);
    *param_6 = uVar4;
  }
  puVar3 = (undefined8 *)0x0;
LAB_14958582d:
  *param_5 = puVar3;
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 149585867 FUN_149585867 body=271 status=ok
// SIG undefined FUN_149585867(void)

undefined8 FUN_149585867(longlong param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_38 [40];
  int local_10 [2];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_2[0x10] = 0;
  param_2[0x11] = 0x3ff00000;
  if (*(char *)(param_1 + 0x28) != '\0') {
    local_10[0] = 0;
    local_10[1] = 0;
    iVar1 = *param_2;
    if (0 < iVar1) {
      pcVar2 = (char *)(*(longlong *)(param_2 + 2) + 5);
      iVar4 = 1;
      do {
        if ((*pcVar2 != '\0') && (pcVar2[-1] == '\x02')) {
          if ((int)(uint)*(byte *)(param_1 + 0x29) <= *(int *)(pcVar2 + -5)) {
            local_10[(longlong)*(int *)(pcVar2 + -5) - (ulonglong)*(byte *)(param_1 + 0x29)] = iVar4
            ;
          }
        }
        pcVar2 = pcVar2 + 0xc;
        bVar5 = iVar4 != iVar1;
        iVar4 = iVar4 + 1;
      } while (bVar5);
      lVar3 = (longlong)local_10[0];
      if (lVar3 != 0) {
        *(undefined4 *)(*(longlong *)(param_2 + 8) + -8 + lVar3 * 8) = 1;
        *(undefined1 *)(*(longlong *)(param_2 + 8) + -4 + lVar3 * 8) = 1;
        lVar3 = (longlong)local_10[1];
        if (lVar3 != 0) {
          param_2[0x10] = 0;
          param_2[0x11] = 0x40340000;
          param_2[0x12] = 0x14;
          param_2[0x13] = 0;
          *(undefined4 *)(*(longlong *)(param_2 + 8) + -8 + lVar3 * 8) = 2;
          *(undefined1 *)(*(longlong *)(param_2 + 8) + -4 + lVar3 * 8) = 1;
        }
        goto LAB_149585959;
      }
    }
    param_2[0x10] = -0x400000;
    param_2[0x11] = 0x41dfffff;
    param_2[0x12] = 0x7fffffff;
    param_2[0x13] = 0;
  }
LAB_149585959:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149585977 FUN_149585977 body=16 status=ok
// SIG undefined FUN_149585977(void)

undefined8 FUN_149585977(void)

{
  FUN_145e3b961();
  return 0;
}



// FUNCTION 149585987 FUN_149585987 body=60 status=ok
// SIG undefined FUN_149585987(void)

undefined8 FUN_149585987(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_145e3bd67(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 7;
  }
  else {
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = param_1;
    *param_2 = (longlong)puVar1;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1495859c3 FUN_1495859c3 body=67 status=ok
// SIG undefined FUN_1495859c3(void)

undefined8 FUN_1495859c3(longlong param_1)

{
  FUN_149556ce4(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_145e3b961(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_145e3b961(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_145e3b961(param_1);
  return 0;
}



// FUNCTION 149585a06 FUN_149585a06 body=503 status=ok
// SIG undefined FUN_149585a06(void)

int FUN_149585a06(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 longlong param_5)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined4 local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  FUN_149556ce4(param_1[1]);
  param_1[1] = 0;
  FUN_145e3b961(param_1[3]);
  param_1[3] = 0;
  FUN_145e3b961(param_1[4]);
  param_1[4] = 0;
  if (0 < (int)param_4) {
    bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x20) + 9);
    uVar6 = 0;
    do {
      lVar4 = FUN_149558f28(*(undefined8 *)(param_5 + uVar6 * 8));
      if (lVar4 != 0) {
        lVar4 = FUN_1495558d3(&DAT_149dfbe46,lVar4);
        param_1[(ulonglong)((bVar1 & 0x20) == 0) + uVar6 + 3] = lVar4;
        if (lVar4 == 0) {
          iVar3 = 7;
          goto LAB_149585bb8;
        }
      }
      uVar6 = uVar6 + 1;
    } while (param_4 != uVar6);
  }
  local_54 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x80);
  local_58 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_50 = 0;
  local_4c = 0;
  FUN_1495555b8(&local_68,"PRAGMA ");
  if (param_1[4] != 0) {
    FUN_149555a84(&local_68,&DAT_14bd43233);
  }
  FUN_1495555b8(&local_68,**(undefined8 **)(lVar2 + 0x20));
  if (param_1[3] != 0) {
    FUN_149555a84(&local_68,&DAT_14bd43237);
  }
  iVar3 = 7;
  if ((lStack_60 != 0) &&
     (((*(undefined1 *)(lStack_60 + (ulonglong)local_50) = 0, lVar4 = lStack_60, local_54 == 0 ||
       ((local_4c & 0x400) != 0)) || (lVar4 = FUN_14955d93a(&local_68), lVar4 != 0)))) {
    local_78 = param_1 + 1;
    local_70 = 0;
    iVar3 = FUN_14955ba6b(*(undefined8 *)(lVar2 + 0x18),lVar4,0x80,0);
    FUN_145e3b961(lVar4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    uVar5 = FUN_14955b92e(*(undefined8 *)(lVar2 + 0x18));
    uVar5 = FUN_1495558d3(&DAT_149dfbe46,uVar5);
    *(undefined8 *)(lVar2 + 0x10) = uVar5;
  }
LAB_149585bb8:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 149585c76 FUN_149585c76 body=131 status=ok
// SIG undefined FUN_149585c76(void)

undefined8 FUN_149585c76(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 < (int)(uint)*(byte *)(*param_1 + 0x29)) {
    lVar1 = param_1[1];
    lVar2 = FUN_14955975f(lVar1,param_3);
    if ((*(uint *)(lVar2 + 8) >> 0xb & 1) != 0) {
      *(ushort *)(lVar2 + 8) = (ushort)*(uint *)(lVar2 + 8) & 0xe7ff | 0x1000;
    }
    FUN_1495597cd(lVar1);
    FUN_1495594c1(*param_2,lVar2);
  }
  else {
    FUN_1495590c8(param_2,param_1[((longlong)param_3 - (ulonglong)*(byte *)(*param_1 + 0x29)) + 3],
                  0xffffffff,1,0xffffffffffffffff);
  }
  return 0;
}



// FUNCTION 149585d03 FUN_149585d03 body=139 status=ok
// SIG undefined FUN_149585d03(void)

void FUN_149585d03(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)((longlong)param_2 + 0x54);
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x84) <= iVar1 + 3) {
    FUN_14955a364(param_1,"too many columns on %s",*param_2);
  }
  lVar3 = FUN_14955d6fd(lVar2,param_2[0xb],(longlong)iVar1 * 8 + 0x10);
  if (lVar3 == 0) {
    if (param_3 != 0) {
      FUN_14955d65a(lVar2,param_3);
      return;
    }
  }
  else {
    iVar1 = *(int *)((longlong)param_2 + 0x54);
    *(int *)((longlong)param_2 + 0x54) = iVar1 + 1;
    *(longlong *)(lVar3 + (longlong)iVar1 * 8) = param_3;
    *(undefined8 *)(lVar3 + 8 + (longlong)iVar1 * 8) = 0;
    param_2[0xb] = lVar3;
  }
  return;
}



// FUNCTION 149585d8e FUN_149585d8e body=223 status=ok
// SIG undefined FUN_149585d8e(void)

void FUN_149585d8e(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  
  if (*(int *)(param_1 + 0x28) < 3) {
    *(undefined4 *)(param_1 + 0x28) = 2;
  }
  else {
    iVar26 = 2;
    lVar25 = 2;
    lVar27 = 0x40;
    do {
      lVar4 = *(longlong *)(param_1 + 0x20);
      plVar1 = (longlong *)(lVar4 + lVar27);
      if (*(longlong *)(lVar4 + 8 + lVar27) == 0) {
        if (*plVar1 != 0) {
          FUN_14955d65a(param_1);
        }
        *plVar1 = 0;
      }
      else {
        if (iVar26 < lVar25) {
          lVar24 = (longlong)iVar26 * 0x20;
          lVar22 = *plVar1;
          uVar6 = *(undefined4 *)((longlong)plVar1 + 4);
          lVar23 = plVar1[1];
          uVar7 = *(undefined4 *)((longlong)plVar1 + 0xc);
          lVar21 = plVar1[3];
          plVar3 = (longlong *)(lVar4 + 0x10 + lVar24);
          *plVar3 = plVar1[2];
          plVar3[1] = lVar21;
          puVar2 = (undefined4 *)(lVar4 + lVar24);
          *puVar2 = (int)lVar22;
          puVar2[1] = uVar6;
          puVar2[2] = (int)lVar23;
          puVar2[3] = uVar7;
        }
        iVar26 = iVar26 + 1;
      }
      lVar25 = lVar25 + 1;
      lVar27 = lVar27 + 0x20;
    } while (lVar25 < *(int *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = iVar26;
    if (2 < iVar26) {
      return;
    }
  }
  puVar5 = *(undefined4 **)(param_1 + 0x20);
  puVar2 = (undefined4 *)(param_1 + 0x270);
  if (puVar5 != puVar2) {
    uVar6 = *puVar5;
    uVar7 = puVar5[1];
    uVar8 = puVar5[2];
    uVar9 = puVar5[3];
    uVar10 = puVar5[4];
    uVar11 = puVar5[5];
    uVar12 = puVar5[6];
    uVar13 = puVar5[7];
    uVar14 = puVar5[8];
    uVar15 = puVar5[9];
    uVar16 = puVar5[10];
    uVar17 = puVar5[0xb];
    uVar18 = puVar5[0xd];
    uVar19 = puVar5[0xe];
    uVar20 = puVar5[0xf];
    *(undefined4 *)(param_1 + 0x2a0) = puVar5[0xc];
    *(undefined4 *)(param_1 + 0x2a4) = uVar18;
    *(undefined4 *)(param_1 + 0x2a8) = uVar19;
    *(undefined4 *)(param_1 + 0x2ac) = uVar20;
    *(undefined4 *)(param_1 + 0x290) = uVar14;
    *(undefined4 *)(param_1 + 0x294) = uVar15;
    *(undefined4 *)(param_1 + 0x298) = uVar16;
    *(undefined4 *)(param_1 + 0x29c) = uVar17;
    *(undefined4 *)(param_1 + 0x280) = uVar10;
    *(undefined4 *)(param_1 + 0x284) = uVar11;
    *(undefined4 *)(param_1 + 0x288) = uVar12;
    *(undefined4 *)(param_1 + 0x28c) = uVar13;
    *puVar2 = uVar6;
    *(undefined4 *)(param_1 + 0x274) = uVar7;
    *(undefined4 *)(param_1 + 0x278) = uVar8;
    *(undefined4 *)(param_1 + 0x27c) = uVar9;
    if (puVar5 != (undefined4 *)0x0) {
      FUN_14955d65a(param_1);
    }
    *(undefined4 **)(param_1 + 0x20) = puVar2;
  }
  return;
}



// FUNCTION 149585e6d FUN_149585e6d body=497 status=ok
// SIG undefined FUN_149585e6d(void)

void FUN_149585e6d(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_2[2];
  while (puVar7 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar7[5];
    if (((param_1 == 0) || (*(longlong *)(param_1 + 0x2d8) == 0)) &&
       (*(int *)((longlong)param_2 + 0x54) == 0)) {
      FUN_14958256b(puVar7[6] + 0x20,*puVar7,0);
    }
    FUN_149582813(param_1,puVar7);
    puVar7 = puVar1;
  }
  lVar6 = param_2[4];
  while (lVar6 != 0) {
    if ((param_1 == 0) || (*(longlong *)(param_1 + 0x2d8) == 0)) {
      lVar5 = *(longlong *)(lVar6 + 0x18);
      if (*(longlong *)(lVar6 + 0x20) == 0) {
        if (lVar5 == 0) {
          lVar5 = lVar6;
        }
        FUN_14958256b(param_2[0xe] + 0x50,*(undefined8 *)(lVar5 + 0x10));
        lVar5 = *(longlong *)(lVar6 + 0x18);
      }
      else {
        *(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x18) = lVar5;
      }
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
      }
    }
    FUN_1495860eb(param_1,*(undefined8 *)(lVar6 + 0x30));
    FUN_1495860eb(param_1,*(undefined8 *)(lVar6 + 0x38));
    lVar5 = *(longlong *)(lVar6 + 8);
    FUN_14955d65a(param_1,lVar6);
    lVar6 = lVar5;
  }
  FUN_14958605e(param_1,param_2);
  if (*param_2 != 0) {
    FUN_14955d65a(param_1);
  }
  if (param_2[5] != 0) {
    FUN_14955d65a(param_1);
  }
  if (param_2[3] != 0) {
    FUN_149582a1c(param_1,param_2[3],1);
  }
  if (param_2[6] != 0) {
    FUN_149582d29(param_1);
  }
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x2d8) == 0)) {
    plVar2 = (longlong *)param_2[0xc];
    param_2[0xc] = 0;
    while (plVar2 != (longlong *)0x0) {
      lVar6 = *plVar2;
      plVar3 = (longlong *)plVar2[5];
      if (lVar6 == 0) {
        param_2[0xc] = (longlong)plVar2;
        plVar2[5] = 0;
        plVar2 = plVar3;
      }
      else {
        plVar2[5] = *(longlong *)(lVar6 + 0x220);
        *(longlong **)(lVar6 + 0x220) = plVar2;
        plVar2 = plVar3;
      }
    }
  }
  if (param_2[0xb] != 0) {
    iVar4 = *(int *)((longlong)param_2 + 0x54);
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        if ((lVar6 != 1) && (*(longlong *)(param_2[0xb] + lVar6 * 8) != 0)) {
          FUN_14955d65a(param_1);
          iVar4 = *(int *)((longlong)param_2 + 0x54);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
      if (param_2[0xb] == 0) goto LAB_149585fc4;
    }
    FUN_14955d65a(param_1);
  }
LAB_149585fc4:
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 14958605e FUN_14958605e body=141 status=ok
// SIG undefined FUN_14958605e(void)

void FUN_14958605e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if (0 < *(short *)(param_2 + 0x46)) {
    iVar1 = 0;
    do {
      if (*plVar2 != 0) {
        FUN_14955d65a(param_1);
      }
      if (plVar2[1] != 0) {
        FUN_14958288e(param_1);
      }
      if (plVar2[2] != 0) {
        FUN_14955d65a(param_1);
      }
      iVar1 = iVar1 + 1;
      plVar2 = plVar2 + 4;
    } while (iVar1 < *(short *)(param_2 + 0x46));
    plVar2 = *(longlong **)(param_2 + 8);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
  }
  FUN_14955d65a(param_1,plVar2);
  return;
}



// FUNCTION 1495860eb FUN_1495860eb body=122 status=ok
// SIG undefined FUN_1495860eb(void)

void FUN_1495860eb(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    FUN_14958288e(param_1);
  }
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    FUN_149582d29(param_1);
  }
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    FUN_149582a1c(param_1,*(longlong *)(lVar1 + 0x10),1);
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_14958288e(param_1);
  }
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 149586165 FUN_149586165 body=147 status=ok
// SIG undefined FUN_149586165(void)

void FUN_149586165(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  while (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x48);
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_14958288e(param_1);
    }
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_149582d29(param_1);
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_149582a1c(param_1,*(longlong *)(param_2 + 0x10),1);
    }
    FUN_149582cb1(param_1,*(undefined8 *)(param_2 + 0x30));
    FUN_1495861f8(param_1,*(undefined8 *)(param_2 + 0x38));
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_14955d65a(param_1);
    }
    FUN_14955d65a(param_1,param_2);
    param_2 = lVar1;
  }
  return;
}



// FUNCTION 1495861f8 FUN_1495861f8 body=108 status=ok
// SIG undefined FUN_1495861f8(void)

void FUN_1495861f8(undefined8 param_1,longlong *param_2)

{
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*param_2 != 0) {
    FUN_149582d29(param_1);
  }
  if (param_2[1] != 0) {
    FUN_14958288e(param_1);
  }
  if (param_2[2] != 0) {
    FUN_149582d29(param_1);
  }
  if (param_2[3] != 0) {
    FUN_14958288e(param_1);
  }
  FUN_14955d65a(param_1,param_2);
  return;
}



// FUNCTION 149586264 FUN_149586264 body=71 status=ok
// SIG undefined FUN_149586264(void)

void FUN_149586264(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (((*(byte *)(param_2 + 5) & 1) == 0) &&
     (((param_2 = param_3, param_3 == 0 || ((*(byte *)(param_3 + 5) & 1) == 0)) &&
      (lVar1 = FUN_1495862ab(param_1), lVar1 != 0)))) {
    return;
  }
  FUN_1495862ab(param_1,param_2);
  return;
}



// FUNCTION 1495862ab FUN_1495862ab body=418 status=ok
// SIG undefined FUN_1495862ab(void)

undefined8 * FUN_1495862ab(longlong *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  
  if (param_2 != (byte *)0x0) {
    lVar5 = *param_1;
    do {
      bVar6 = *param_2;
      if (bVar6 == 0xad) {
        bVar6 = param_2[2];
      }
      if (bVar6 < 0xa6) {
        if (0x6e < bVar6) {
          if (bVar6 == 0xa4) goto LAB_14958632f;
          if (bVar6 != 0x6f) goto LAB_149586341;
LAB_1495863b9:
          puVar4 = (undefined8 *)
                   FUN_1495865a6(param_1,*(undefined1 *)(lVar5 + 0x5e),0,
                                 *(undefined8 *)(param_2 + 8));
LAB_149586405:
          if (puVar4 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          if (puVar4[3] == 0) {
            lVar5 = FUN_1495865a6(param_1,*(undefined1 *)(*param_1 + 0x5e),puVar4,*puVar4);
            if (lVar5 != 0) {
              return puVar4;
            }
            return (undefined8 *)0x0;
          }
          return puVar4;
        }
        if (bVar6 == 0x24) {
LAB_14958630e:
          param_2 = param_2 + 0x10;
          goto LAB_149586312;
        }
        if (bVar6 == 0x4d) goto LAB_14958632f;
LAB_149586341:
        if ((*(uint *)(param_2 + 4) >> 8 & 1) == 0) {
          return (undefined8 *)0x0;
        }
        pbVar1 = *(byte **)(param_2 + 0x10);
        if ((pbVar1 == (byte *)0x0) || ((pbVar1[5] & 1) == 0)) {
          pbVar2 = *(byte **)(param_2 + 0x18);
          piVar3 = *(int **)(param_2 + 0x20);
          pbVar1 = pbVar2;
          if ((piVar3 != (int *)0x0) &&
             ((((*(uint *)(param_2 + 4) >> 0xb & 1) == 0 && (*(char *)(lVar5 + 0x61) == '\0')) &&
              (0 < (longlong)*piVar3)))) {
            lVar7 = 0;
            do {
              pbVar1 = *(byte **)((longlong)piVar3 + lVar7 + 8);
              if ((pbVar1[5] & 1) != 0) break;
              lVar7 = lVar7 + 0x20;
              pbVar1 = pbVar2;
            } while ((longlong)*piVar3 * 0x20 != lVar7);
          }
        }
      }
      else {
        if (bVar6 != 0xae) {
          if (bVar6 == 0xab) goto LAB_14958630e;
          if (bVar6 != 0xa6) goto LAB_149586341;
LAB_14958632f:
          if (*(longlong *)(param_2 + 0x40) != 0) {
            if ((longlong)*(short *)(param_2 + 0x30) < 0) {
              return (undefined8 *)0x0;
            }
            lVar7 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_2 + 0x40) + 8) + 0x10 +
                     (longlong)*(short *)(param_2 + 0x30) * 0x20);
            bVar6 = *(byte *)(lVar5 + 0x5e);
            if (lVar7 != 0) {
              lVar5 = FUN_14958201d(lVar5 + 0x240,lVar7,0);
            }
            if (*(longlong *)(lVar5 + 0x10) == 0) {
              return (undefined8 *)0x0;
            }
            puVar4 = (undefined8 *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)bVar6 * 0x28 + -0x28);
            goto LAB_149586405;
          }
          if (bVar6 == 0x6f) goto LAB_1495863b9;
          goto LAB_149586341;
        }
        param_2 = (byte *)(*(longlong *)(param_2 + 0x20) + 8);
LAB_149586312:
        pbVar1 = *(byte **)param_2;
      }
      param_2 = pbVar1;
    } while (param_2 != (byte *)0x0);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14958644d FUN_14958644d body=345 status=ok
// SIG undefined FUN_14958644d(void)

undefined8 * FUN_14958644d(longlong param_1,uint param_2,char *param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  size_t sVar3;
  undefined8 *_Dst;
  ulonglong uVar4;
  
  if (param_3 == (char *)0x0) {
    _Dst = *(undefined8 **)(param_1 + 0x10);
  }
  else {
    lVar2 = FUN_14958201d(param_1 + 0x240,param_3,0);
    _Dst = *(undefined8 **)(lVar2 + 0x10);
    if (param_4 != 0 && _Dst == (undefined8 *)0x0) {
      sVar3 = strlen(param_3);
      uVar4 = (ulonglong)((uint)sVar3 & 0x3fffffff);
      sVar3 = uVar4 + 0x79;
      if (param_1 == 0) {
        _Dst = (undefined8 *)FUN_145e3bd67(sVar3);
      }
      else {
        _Dst = (undefined8 *)FUN_14955d750(param_1);
      }
      if (_Dst != (undefined8 *)0x0) {
        memset(_Dst,0,sVar3);
        puVar1 = _Dst + 0xf;
        *_Dst = puVar1;
        *(undefined1 *)(_Dst + 1) = 1;
        _Dst[5] = puVar1;
        *(undefined1 *)(_Dst + 6) = 2;
        _Dst[10] = puVar1;
        *(undefined1 *)(_Dst + 0xb) = 3;
        memcpy(puVar1,param_3,uVar4 + 1);
        lVar2 = FUN_14958256b(param_1 + 0x240,puVar1,_Dst);
        if (lVar2 == 0) goto LAB_14958646b;
        if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
          *(undefined1 *)(param_1 + 0x61) = 1;
          if (0 < *(int *)(param_1 + 0xd4)) {
            *(undefined4 *)(param_1 + 0x170) = 1;
          }
          *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
          *(undefined2 *)(param_1 + 0x17c) = 0;
          if (*(longlong *)(param_1 + 0x138) != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
          }
        }
        FUN_14955d65a(param_1,lVar2);
      }
      _Dst = (undefined8 *)0x0;
    }
  }
LAB_14958646b:
  puVar1 = _Dst + ((ulonglong)param_2 & 0xff) * 5 + -5;
  if (_Dst == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 1495865a6 FUN_1495865a6 body=605 status=ok
// SIG undefined FUN_1495865a6(void)

longlong * FUN_1495865a6(longlong *param_1,uint param_2,longlong *param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  lVar2 = *param_1;
  if (param_3 == (longlong *)0x0) {
    lVar6 = lVar2;
    if (param_4 != 0) {
      lVar6 = FUN_14958201d(lVar2 + 0x240,param_4,0);
    }
    param_3 = (longlong *)(*(longlong *)(lVar6 + 0x10) + ((ulonglong)param_2 & 0xff) * 0x28 + -0x28)
    ;
    if (param_3 != (longlong *)0x0 && *(longlong *)(lVar6 + 0x10) != 0) goto LAB_1495865c9;
  }
  else {
LAB_1495865c9:
    if (param_3[3] != 0) {
      return param_3;
    }
  }
  uVar9 = (ulonglong)param_2 & 0xff;
  if (*(longlong *)(lVar2 + 0x150) != 0) {
    lVar6 = FUN_149559683(lVar2,param_4);
    if (lVar6 == 0) goto LAB_149586631;
    (**(code **)(lVar2 + 0x150))(*(undefined8 *)(lVar2 + 0x160),lVar2,uVar9,lVar6);
    FUN_14955d65a(lVar2,lVar6);
  }
  if (*(longlong *)(lVar2 + 0x158) == 0) goto LAB_149586631;
  lVar6 = FUN_14955c570(lVar2);
  if (lVar6 != 0) {
    FUN_14955916b(lVar6,param_4,0xffffffff,1,0);
    if (((~*(uint *)(lVar6 + 8) & 0x202) == 0) && (*(char *)(lVar6 + 10) == '\x02')) {
      lVar7 = *(longlong *)(lVar6 + 0x10);
    }
    else {
      if ((*(uint *)(lVar6 + 8) & 1) != 0) goto LAB_149586775;
      lVar7 = FUN_14956b88d(lVar6,2);
    }
    if (lVar7 != 0) {
      (**(code **)(lVar2 + 0x158))
                (*(undefined8 *)(lVar2 + 0x160),lVar2,*(undefined1 *)(lVar2 + 0x5e),lVar7);
    }
  }
LAB_149586775:
  FUN_149559090(lVar6);
LAB_149586631:
  lVar6 = lVar2;
  if (param_4 != 0) {
    lVar6 = FUN_14958201d(lVar2 + 0x240,param_4,0);
  }
  lVar6 = *(longlong *)(lVar6 + 0x10);
  if (lVar6 != 0) {
    lVar7 = lVar6 + uVar9 * 0x28;
    plVar10 = (longlong *)(lVar7 + -0x28);
    if (plVar10 != (longlong *)0x0) {
      lVar6 = lVar6 + uVar9 * 0x28;
      if (*(longlong *)(lVar6 + -0x10) != 0) {
        return plVar10;
      }
      lVar3 = *plVar10;
      lVar8 = 0;
      do {
        bVar1 = (&DAT_14bd432a7)[lVar8];
        lVar5 = lVar2;
        if (lVar3 != 0) {
          lVar5 = FUN_14958201d(lVar2 + 0x240,lVar3,0);
        }
        plVar4 = (longlong *)(*(longlong *)(lVar5 + 0x10) + -0x28 + (ulonglong)bVar1 * 0x28);
        if (*(longlong *)(lVar5 + 0x10) == 0) {
          plVar4 = (longlong *)0x0;
        }
        if (plVar4[3] != 0) {
          lVar2 = *plVar4;
          lVar3 = plVar4[1];
          lVar8 = plVar4[3];
          *(longlong *)(lVar7 + -0x18) = plVar4[2];
          *(longlong *)(lVar7 + -0x10) = lVar8;
          *plVar10 = lVar2;
          *(longlong *)(lVar7 + -0x20) = lVar3;
          *(undefined8 *)(lVar6 + -8) = 0;
          return plVar10;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
    }
  }
  FUN_14955a364(param_1,"no such collation sequence: %s",param_4);
  *(undefined4 *)(param_1 + 3) = 0x101;
  return (longlong *)0x0;
}



// FUNCTION 149586803 FUN_149586803 body=171 status=ok
// SIG undefined FUN_149586803(void)

int FUN_149586803(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  do {
    iVar1 = FUN_149584865(lVar2,&local_2c);
    lVar2 = iVar1 + lVar2;
    iVar1 = 0x3b;
    if (((local_2c - 0x3bU < 0x3a) &&
        ((0x300000000000001U >> ((ulonglong)(local_2c - 0x3bU) & 0x3f) & 1) != 0)) ||
       (local_2c - 0xa1U < 2)) goto LAB_149586871;
  } while (local_2c == 0xb3);
  iVar1 = 0x3b;
  if (*(short *)(&DAT_14bd432d0 + (longlong)local_2c * 2) != 0x3b) {
    iVar1 = local_2c;
  }
LAB_149586871:
  *param_1 = lVar2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 1495868af FUN_1495868af body=10111 status=ok
// SIG undefined FUN_1495868af(void)

undefined2 FUN_1495868af(ulonglong *param_1,uint param_2,undefined8 *param_3,longlong *param_4)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  void *pvVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined2 uVar20;
  ushort uVar21;
  undefined2 *puVar22;
  int *piVar23;
  char *pcVar24;
  uint *puVar25;
  longlong *plVar26;
  undefined *puVar27;
  longlong lVar28;
  char cVar29;
  char cVar30;
  ulonglong uVar31;
  longlong lVar32;
  int iVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 *puStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 *local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined1 *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar3 = *param_1;
  uVar31 = (ulonglong)param_2;
  cVar2 = (&DAT_14bd45cf0)[uVar31];
  if (((longlong)cVar2 == 0) && (param_1[0x12e] <= uVar3)) {
    FUN_149589128(param_1);
    uVar20 = 0;
    goto LAB_14958696b;
  }
  uVar6 = local_c8._4_4_;
  uVar5 = local_d8._4_4_;
  switch(uVar31) {
  case 0:
    *(undefined1 *)((longlong)param_4 + 0x113) = 1;
    break;
  case 1:
    *(undefined1 *)((longlong)param_4 + 0x113) = 2;
    break;
  case 2:
    FUN_14958917a(param_4);
    break;
  case 3:
    FUN_14958941d(param_4,*(undefined4 *)(uVar3 - 0x10));
    break;
  case 4:
    *(undefined4 *)(uVar3 + 0x20) = 7;
    break;
  case 5:
  case 6:
  case 7:
  case 0x57:
  case 0x59:
  case 0x132:
    *(uint *)(uVar3 + 8) = (uint)*(ushort *)(uVar3 + 2);
    break;
  case 8:
  case 9:
    FUN_149589522(param_4,*(undefined2 *)(uVar3 - 0x16));
    break;
  case 10:
    uVar11 = 0;
    goto LAB_149588a98;
  case 0xb:
    uVar11 = 1;
    goto LAB_149588a98;
  case 0xc:
    uVar11 = 2;
LAB_149588a98:
    FUN_1495895b8(param_4,uVar11,uVar3 + 8);
    break;
  case 0xd:
    local_c8 = CONCAT44(uVar6,*(undefined4 *)(uVar3 - 0x28));
    puStack_d0 = (undefined1 *)((ulonglong)puStack_d0 & 0xffffffff00000000);
    local_d8 = (undefined1 **)((ulonglong)local_d8 & 0xffffffff00000000);
    FUN_149589688(param_4,uVar3 - 0x10,uVar3 + 8,*(undefined4 *)(uVar3 - 0x58));
    break;
  case 0xe:
    lVar32 = *param_4;
    *(char *)((longlong)param_4 + 0x24) = *(char *)((longlong)param_4 + 0x24) + '\x01';
    piVar13 = (int *)(lVar32 + 0x178);
    *piVar13 = *piVar13 + 1;
    *(undefined2 *)(lVar32 + 0x17c) = 0;
    break;
  case 0xf:
  case 0x12:
  case 0x15:
  case 0x2d:
  case 0x2f:
  case 0x3c:
  case 0x46:
  case 0x4f:
  case 0x60:
  case 0xe8:
    *(undefined4 *)(uVar3 + 0x20) = 0;
    break;
  case 0x10:
    *(undefined4 *)(uVar3 - 0x28) = 1;
    break;
  case 0x11:
  case 0x2e:
  case 0x5e:
  case 0x77:
  case 0x87:
    *(undefined4 *)(uVar3 + 8) = 1;
    break;
  case 0x13:
    local_d8 = (undefined1 **)0x0;
    FUN_149589ca3(param_4,uVar3 - 0x28,uVar3 - 0x10,*(undefined1 *)(uVar3 + 8));
    break;
  case 0x14:
    local_d8 = *(undefined1 ***)(uVar3 + 8);
    FUN_149589ca3(param_4,0,0,0);
    goto LAB_14958883c;
  case 0x16:
    if ((*(int *)(uVar3 + 0x10) == 5) && (*(longlong *)(uVar3 + 8) != 0)) {
      lVar32 = 0;
      do {
        uVar18 = (ulonglong)*(byte *)(*(longlong *)(uVar3 + 8) + lVar32);
        if (uVar18 == 0) {
          cVar30 = (&DAT_14bd3ff30)[(byte)"rowid"[lVar32]];
          cVar29 = '\0';
LAB_149586fdc:
          if (cVar29 != cVar30) goto LAB_149587120;
          break;
        }
        cVar29 = (&DAT_14bd3ff30)[uVar18];
        cVar30 = (&DAT_14bd3ff30)[(byte)"rowid"[lVar32]];
        if (cVar29 != cVar30) goto LAB_149586fdc;
        lVar32 = lVar32 + 1;
      } while (lVar32 != 5);
      *(undefined4 *)(uVar3 - 0x10) = 0x280;
    }
    else {
LAB_149587120:
      *(undefined4 *)(uVar3 - 0x10) = 0;
      FUN_14955a364(param_4,"unknown table option: %.*s");
    }
    break;
  case 0x17:
    FUN_14958a63d(param_4,uVar3 - 0x10,uVar3 + 8);
    break;
  case 0x18:
  case 0x3f:
  case 0x66:
    *(undefined4 *)(uVar3 + 0x28) = 0;
  case 0x61:
  case 0x6a:
  case 0x7c:
  case 0x81:
  case 0x82:
  case 0x8c:
  case 0x8e:
  case 0x90:
  case 0x95:
  case 0x9e:
  case 0xa4:
  case 0xd9:
  case 0xdb:
  case 0xdc:
  case 0xdf:
  case 0xe4:
  case 0xee:
    *(undefined8 *)(uVar3 + 0x20) = 0;
    break;
  case 0x19:
    *(int *)(uVar3 - 0x38) = (*(int *)(uVar3 + 8) + *(int *)(uVar3 + 0x10)) - *(int *)(uVar3 - 0x40)
    ;
    break;
  case 0x1a:
    *(int *)(uVar3 - 0x68) = (*(int *)(uVar3 + 8) + *(int *)(uVar3 + 0x10)) - *(int *)(uVar3 - 0x70)
    ;
    break;
  case 0x1b:
    *(int *)(uVar3 - 8) = (*(int *)(uVar3 + 8) - *(int *)(uVar3 - 0x10)) + *(int *)(uVar3 + 0x10);
    break;
  case 0x1c:
    param_3 = (undefined8 *)*param_3;
    goto LAB_149586ed9;
  case 0x1d:
    uVar11 = param_3[1];
    *(undefined8 *)(uVar3 + 0x20) = *param_3;
    *(undefined8 *)(uVar3 + 0x28) = uVar11;
    break;
  case 0x1e:
  case 0x41:
    lVar32 = *(longlong *)(uVar3 + 0x10);
    param_4[0xc] = *(longlong *)(uVar3 + 8);
    param_4[0xd] = lVar32;
    break;
  case 0x1f:
    lVar16 = *(longlong *)(uVar3 - 0x10);
    lVar28 = (ulonglong)*(uint *)(uVar3 - 8) + lVar16;
    goto LAB_149587864;
  case 0x20:
    lVar28 = *(longlong *)(uVar3 + 8);
    lVar32 = *(longlong *)(uVar3 - 0x10);
    lVar16 = *(longlong *)(uVar3 - 0x28) + 1;
    goto LAB_14958786b;
  case 0x21:
    lVar28 = (ulonglong)*(uint *)(uVar3 - 8) + *(longlong *)(uVar3 - 0x10);
    lVar16 = *(longlong *)(uVar3 - 0x28);
LAB_149587864:
    lVar32 = *(longlong *)(uVar3 + 8);
    goto LAB_14958786b;
  case 0x22:
    lVar32 = FUN_14958aad5(param_4,0xaa,*(undefined8 *)(uVar3 + 8),0);
    lVar28 = (ulonglong)*(uint *)(uVar3 - 8) + *(longlong *)(uVar3 - 0x10);
    lVar16 = *(longlong *)(uVar3 - 0x28);
    goto LAB_14958786b;
  case 0x23:
    local_88 = *(undefined1 **)(uVar3 + 8);
    iStack_80 = *(int *)(uVar3 + 0x10);
    uStack_7c = *(undefined4 *)(uVar3 + 0x14);
    lVar32 = FUN_14958abbb(param_4,0x73);
    if (lVar32 != 0) {
      FUN_14958ac94(lVar32);
    }
    lVar16 = *(longlong *)(uVar3 + 8);
    lVar28 = (ulonglong)*(uint *)(uVar3 + 0x10) + lVar16;
LAB_14958786b:
    FUN_14958a8bd(param_4,lVar32,lVar16,lVar28);
    break;
  case 0x24:
    FUN_14958ad26(param_4,*(undefined4 *)(uVar3 + 8));
    break;
  case 0x25:
    uVar6 = *(undefined4 *)(uVar3 + 8);
    uVar34 = *(undefined4 *)(uVar3 - 0x10);
    local_d8 = (undefined1 **)CONCAT44(uVar5,*(undefined4 *)(uVar3 - 0x28));
    uVar11 = 0;
    goto LAB_14958863f;
  case 0x26:
    uVar6 = *(undefined4 *)(uVar3 + 8);
    local_d8 = (undefined1 **)0x0;
    goto LAB_149588a30;
  case 0x27:
    uVar11 = *(undefined8 *)(uVar3 - 0x10);
    goto LAB_1495886e3;
  case 0x28:
    local_d8 = (undefined1 **)CONCAT44(uVar5,*(undefined4 *)(uVar3 + 8));
    FUN_14958c2b2(param_4,0,uVar3 - 0x28,*(undefined8 *)(uVar3 - 0x10));
    break;
  case 0x29:
    goto switchD_14958691d_caseD_29;
  case 0x2a:
    FUN_14958c7b2(param_4,uVar3 + 8);
    break;
  case 0x2b:
    uVar11 = *(undefined8 *)(uVar3 - 0x10);
    lVar32 = 0;
    goto LAB_149588a82;
  case 0x2c:
    lVar32 = uVar3 + 8;
    uVar11 = *(undefined8 *)(uVar3 - 0x28);
LAB_149588a82:
    FUN_14958c86c(param_4,uVar11,lVar32);
    break;
  case 0x30:
    uVar5 = ~*(uint *)(uVar3 + 0xc) & *(uint *)(uVar3 - 0x10) | *(uint *)(uVar3 + 8);
    goto LAB_149586a5a;
  case 0x31:
    *(undefined8 *)(uVar3 - 0x10) = 0;
    break;
  case 0x32:
    *(undefined8 *)(uVar3 - 0x28) = 0;
    break;
  case 0x33:
    *(undefined4 *)(uVar3 - 0x28) = *(undefined4 *)(uVar3 + 8);
    *(undefined4 *)(uVar3 - 0x24) = 0xff;
    break;
  case 0x34:
    *(int *)(uVar3 - 0x28) = *(int *)(uVar3 + 8) << 8;
    *(undefined4 *)(uVar3 - 0x24) = 0xff00;
    break;
  case 0x35:
    *(undefined4 *)(uVar3 - 0x10) = 8;
    break;
  case 0x36:
    *(undefined4 *)(uVar3 - 0x10) = 9;
    break;
  case 0x37:
    *(undefined4 *)(uVar3 + 8) = 10;
    break;
  case 0x38:
    *(undefined4 *)(uVar3 + 8) = 7;
    break;
  case 0x39:
  case 0x3e:
  case 0x89:
    *(undefined4 *)(uVar3 - 0x10) = 0;
    break;
  case 0x3a:
    *(undefined4 *)(uVar3 - 0x28) = 0;
    break;
  case 0x3b:
  case 0x4a:
  case 0xa2:
    uVar5 = *(uint *)(uVar3 + 8);
LAB_149586a5a:
    *(uint *)(uVar3 - 0x10) = uVar5;
    break;
  case 0x3d:
  case 0x4e:
  case 0x8a:
  case 0xcc:
  case 0xcf:
  case 0xe9:
    *(undefined4 *)(uVar3 - 0x10) = 1;
    break;
  case 0x40:
    *(undefined4 *)(param_4 + 0xd) = 0;
    break;
  case 0x42:
    uVar6 = *(undefined4 *)(uVar3 - 0x28);
    uVar34 = *(undefined4 *)(uVar3 + 8);
    uVar11 = *(undefined8 *)(uVar3 - 0x40);
    local_d8 = (undefined1 **)((ulonglong)uVar5 << 0x20);
LAB_14958863f:
    FUN_14958ad7f(param_4,uVar11,uVar34,uVar6);
    break;
  case 0x43:
    uVar6 = *(undefined4 *)(uVar3 + 8);
    local_d8 = *(undefined1 ***)(uVar3 - 0x28);
LAB_149588a30:
    local_a8 = 1;
    local_b0 = 0;
    local_b8 = (ulonglong)local_b8._4_4_ << 0x20;
    uStack_c0 = 0;
    local_c8 = 0;
    puStack_d0 = (undefined1 *)CONCAT44(puStack_d0._4_4_,uVar6);
    FUN_14958b0ca(param_4,0,0,0);
    break;
  case 0x44:
    uVar11 = *(undefined8 *)(uVar3 - 0x28);
LAB_1495886e3:
    FUN_14958c226(param_4,uVar11);
    break;
  case 0x45:
    local_d8 = (undefined1 **)CONCAT44(uVar5,*(undefined4 *)(uVar3 - 0x10));
    FUN_14958c2b2(param_4,*(undefined8 *)(uVar3 - 0x88),uVar3 - 0x40,*(undefined8 *)(uVar3 - 0x28));
    goto switchD_14958691d_caseD_29;
  case 0x47:
  case 0x49:
    *(undefined4 *)(uVar3 + 0x20) = 0xb;
    break;
  case 0x48:
    *(undefined4 *)(uVar3 - 0x28) = *(undefined4 *)(uVar3 + 8);
    break;
  case 0x4b:
    *(undefined4 *)(uVar3 + 8) = 4;
    break;
  case 0x4c:
  case 0xa3:
    *(undefined4 *)(uVar3 + 8) = 5;
    break;
  case 0x4d:
    uVar6 = *(undefined4 *)(uVar3 - 0x10);
    uVar11 = *(undefined8 *)(uVar3 + 8);
    uVar10 = 0;
    goto LAB_149588701;
  case 0x50:
    puStack_d0 = *(undefined1 **)(uVar3 + 8);
    local_d8 = *(undefined1 ***)(uVar3 - 0x28);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(uVar3 - 0x70));
    local_c8 = CONCAT44(uVar6,*(undefined4 *)(uVar3 - 0xa0));
    FUN_14958cd1a(param_4,uVar3 - 0xb8,uVar3 - 0x58,uVar3 - 0x40);
    break;
  case 0x51:
    uVar6 = *(undefined4 *)(uVar3 - 0x10);
    uVar11 = *(undefined8 *)(uVar3 + 8);
    uVar10 = 1;
LAB_149588701:
    FUN_14958c9bb(param_4,uVar11,uVar10,uVar6);
    break;
  case 0x52:
    local_78 = 0;
    uStack_70 = 0;
    local_88 = (undefined1 *)0x9;
    iStack_80 = 0;
    uStack_7c = 0;
    FUN_14958cf93(param_4,*(undefined8 *)(uVar3 + 8));
LAB_14958883c:
    if (*(longlong *)(uVar3 + 8) != 0) {
      FUN_149582a1c(*param_4,*(longlong *)(uVar3 + 8),1);
    }
    break;
  case 0x53:
    lVar32 = *(longlong *)(uVar3 + 8);
    if (lVar32 == 0) {
      FUN_149582c24(*param_4);
    }
    else {
      *(undefined8 *)(lVar32 + 0x68) = *(undefined8 *)(uVar3 - 0x10);
      FUN_14958f27a(param_4,lVar32);
    }
    goto LAB_1495880a9;
  case 0x54:
    lVar32 = *(longlong *)(uVar3 + 8);
    if (lVar32 == 0) {
      FUN_149582c24(*param_4);
    }
    else {
      *(undefined8 *)(lVar32 + 0x68) = *(undefined8 *)(uVar3 - 0x10);
      FUN_14958f27a(param_4,lVar32);
    }
    *(longlong *)(uVar3 - 0x40) = lVar32;
    break;
  case 0x55:
    lVar32 = *(longlong *)(uVar3 + 8);
    if (lVar32 != 0) {
      FUN_14958f27a(param_4,lVar32);
    }
    *(longlong *)(uVar3 + 8) = lVar32;
    break;
  case 0x56:
    lVar32 = *(longlong *)(uVar3 - 0x28);
    puVar9 = *(undefined1 **)(uVar3 + 8);
    if (puVar9 == (undefined1 *)0x0) {
LAB_149588bef:
      if (lVar32 != 0) {
        FUN_149582a1c(*param_4,lVar32,1);
      }
      puVar9 = (undefined1 *)0x0;
    }
    else {
      if (*(longlong *)(puVar9 + 0x50) != 0) {
        iStack_80 = 0;
        FUN_14958f27a(param_4,puVar9);
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = &local_88;
        puStack_d0 = puVar9;
        uVar11 = FUN_14958f2de(param_4,0,0,0);
        local_b8 = 0;
        uStack_c0 = uStack_c0 & 0xffffffff00000000;
        local_c8 = 0;
        local_d8 = (undefined1 **)0x0;
        puStack_d0 = (undefined1 *)0x0;
        puVar9 = (undefined1 *)FUN_14958f426(param_4,0,uVar11,0);
        if (puVar9 == (undefined1 *)0x0) goto LAB_149588bef;
      }
      *puVar9 = *(undefined1 *)(uVar3 - 0x10);
      *(longlong *)(puVar9 + 0x50) = lVar32;
      if (lVar32 != 0) {
        *(byte *)(lVar32 + 5) = *(byte *)(lVar32 + 5) & 0xfb;
      }
      puVar9[5] = puVar9[5] & 0xfb;
      if (*(int *)(uVar3 - 0x10) != 0x85) {
        *(undefined1 *)((longlong)param_4 + 0x22) = 1;
      }
    }
    *(undefined1 **)(uVar3 - 0x28) = puVar9;
    break;
  case 0x58:
    *(undefined4 *)(uVar3 - 0x10) = 0x85;
    break;
  case 0x5a:
    local_b8 = *(ulonglong *)(uVar3 + 8);
    local_c8 = *(longlong *)(uVar3 - 0x10);
    puStack_d0 = *(undefined1 **)(uVar3 - 0x28);
    local_d8 = *(undefined1 ***)(uVar3 - 0x40);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(uVar3 - 0xa0));
    uVar11 = FUN_14958f426(param_4,*(undefined8 *)(uVar3 - 0x88),*(undefined8 *)(uVar3 - 0x70),
                           *(undefined8 *)(uVar3 - 0x58));
    *(undefined8 *)(uVar3 - 0xb8) = uVar11;
    break;
  case 0x5b:
    local_b8 = *(ulonglong *)(uVar3 + 8);
    local_c8 = *(longlong *)(uVar3 - 0x10);
    puStack_d0 = *(undefined1 **)(uVar3 - 0x40);
    local_d8 = *(undefined1 ***)(uVar3 - 0x58);
    uStack_c0 = CONCAT44(uStack_c0._4_4_,*(undefined4 *)(uVar3 - 0xb8));
    lVar16 = FUN_14958f426(param_4,*(undefined8 *)(uVar3 - 0xa0),*(undefined8 *)(uVar3 - 0x88),
                           *(undefined8 *)(uVar3 - 0x70));
    *(longlong *)(uVar3 - 0xd0) = lVar16;
    lVar32 = *(longlong *)(uVar3 - 0x28);
    if (lVar16 == 0) {
      if (lVar32 != 0) {
        lVar16 = *param_4;
        do {
          lVar32 = *(longlong *)(lVar32 + 0x40);
          FUN_149582958(lVar16);
        } while (lVar32 != 0);
      }
    }
    else {
      *(longlong *)(lVar16 + 0x78) = lVar32;
    }
    break;
  case 0x5c:
    local_b8 = 0;
    local_c8 = 0;
    local_d8 = (undefined1 **)0x0;
    puStack_d0 = (undefined1 *)0x0;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,0x200);
    uVar11 = FUN_14958f426(param_4,*(undefined8 *)(uVar3 - 0x10),0,0);
    goto LAB_149587a10;
  case 0x5d:
    puVar9 = *(undefined1 **)(uVar3 - 0x58);
    local_b8 = 0;
    local_c8 = 0;
    local_d8 = (undefined1 **)0x0;
    puStack_d0 = (undefined1 *)0x0;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,0x600);
    puVar14 = (undefined1 *)FUN_14958f426(param_4,*(undefined8 *)(uVar3 - 0x10),0,0);
    if (puVar9 != (undefined1 *)0x0) {
      puVar9[5] = puVar9[5] & 0xfb;
    }
    if (puVar14 != (undefined1 *)0x0) {
      *puVar14 = 0x85;
      *(undefined1 **)(puVar14 + 0x50) = puVar9;
      puVar9 = puVar14;
    }
    goto LAB_149587e98;
  case 0x5f:
    *(undefined4 *)(uVar3 + 8) = 2;
    break;
  case 0x62:
    piVar13 = (int *)FUN_14958f62a(param_4,*(undefined8 *)(uVar3 - 0x58),
                                   *(undefined8 *)(uVar3 - 0x28));
    *(int **)(uVar3 - 0x58) = piVar13;
    if (*(int *)(uVar3 + 0x10) != 0) {
      FUN_14958f711(param_4,piVar13,uVar3 + 8,1);
      piVar13 = *(int **)(uVar3 - 0x58);
    }
    if ((piVar13 != (int *)0x0) &&
       (lVar32 = (longlong)*piVar13, *(longlong *)(piVar13 + lVar32 * 8 + -4) == 0)) {
      uVar11 = FUN_1495a97c9(*param_4,*(undefined8 *)(uVar3 - 0x40),*(undefined8 *)(uVar3 - 0x10));
      *(undefined8 *)(piVar13 + lVar32 * 8 + -4) = uVar11;
      piVar13[lVar32 * 8 + -1] = (piVar13[lVar32 * 8 + -1] & 0xfffffffcU) + 1;
    }
    break;
  case 99:
    local_88 = (undefined1 *)0x0;
    iStack_80 = 0;
    uVar11 = FUN_14958f7cb(*param_4,0xb1,&local_88,0);
    uVar11 = FUN_14958f62a(param_4,*(undefined8 *)(uVar3 - 0x28),uVar11);
    goto LAB_1495869d5;
  case 100:
    uVar11 = FUN_14958aad5(param_4,0xb1,0,0);
    uVar10 = FUN_14958f7cb(*param_4,0x3b,uVar3 - 0x28,1);
    uVar11 = FUN_14958aad5(param_4,0x8b,uVar10,uVar11);
    uVar10 = *(undefined8 *)(uVar3 - 0x58);
    goto LAB_149587e0b;
  case 0x65:
  case 0x70:
  case 0xf4:
  case 0xf5:
    uVar11 = *(undefined8 *)(uVar3 + 0x10);
    *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(uVar3 + 8);
    *(undefined8 *)(uVar3 - 8) = uVar11;
    break;
  case 0x67:
    if (*param_4 == 0) {
      param_3 = (undefined8 *)FUN_145e3bd67(0x78);
    }
    else {
      param_3 = (undefined8 *)FUN_14955d750(*param_4,0x78);
    }
    if (param_3 != (undefined8 *)0x0) {
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[0xe] = 0;
    }
LAB_149586ed9:
    *(undefined8 **)(uVar3 + 0x20) = param_3;
    break;
  case 0x68:
    piVar13 = *(int **)(uVar3 + 8);
    *(int **)(uVar3 - 0x10) = piVar13;
    if (piVar13 != (int *)0x0) {
      lVar32 = (longlong)*piVar13;
      if (1 < lVar32) {
        uVar18 = lVar32 + 1;
        piVar23 = piVar13 + lVar32 * 0x1c + -0xb;
        do {
          *(char *)piVar23 = (char)piVar23[-0x1c];
          piVar23 = piVar23 + -0x1c;
          uVar18 = uVar18 - 1;
        } while (2 < uVar18);
      }
      *(undefined1 *)(piVar13 + 0x11) = 0;
    }
    break;
  case 0x69:
    piVar13 = *(int **)(uVar3 - 0x10);
    if ((piVar13 != (int *)0x0) && (0 < *piVar13)) {
      *(undefined1 *)(piVar13 + (ulonglong)(*piVar13 - 1) * 0x1c + 0x11) =
           *(undefined1 *)(uVar3 + 8);
    }
    break;
  case 0x6b:
    uStack_c0 = *(ulonglong *)(uVar3 + 8);
    local_c8 = *(longlong *)(uVar3 - 0x10);
    local_d8 = (undefined1 **)(uVar3 - 0x40);
    puStack_d0 = (undefined1 *)0x0;
    uVar11 = FUN_14958f2de(param_4,*(undefined8 *)(uVar3 - 0x88),uVar3 - 0x70,uVar3 - 0x58);
    *(undefined8 *)(uVar3 - 0x88) = uVar11;
    FUN_14958f92b(param_4,uVar11,uVar3 - 0x28);
    break;
  case 0x6c:
    uStack_c0 = *(ulonglong *)(uVar3 + 8);
    local_c8 = *(longlong *)(uVar3 - 0x10);
    local_d8 = (undefined1 **)(uVar3 - 0x28);
    puStack_d0 = (undefined1 *)0x0;
    piVar13 = (int *)FUN_14958f2de(param_4,*(undefined8 *)(uVar3 - 0xb8),uVar3 - 0xa0,uVar3 - 0x88);
    *(int **)(uVar3 - 0xb8) = piVar13;
    if (piVar13 == (int *)0x0) {
      if (*(longlong *)(uVar3 - 0x58) != 0) {
        FUN_149582d29(*param_4);
      }
    }
    else {
      iVar7 = *piVar13;
      *(longlong *)(piVar13 + (longlong)iVar7 * 0x1c + -2) = *(longlong *)(uVar3 - 0x58);
      *(byte *)(piVar13 + (longlong)iVar7 * 0x1c + -10) =
           *(byte *)(piVar13 + (longlong)iVar7 * 0x1c + -10) | 4;
    }
    break;
  case 0x6d:
    uStack_c0 = *(ulonglong *)(uVar3 + 8);
    local_c8 = *(longlong *)(uVar3 - 0x10);
    uVar11 = *(undefined8 *)(uVar3 - 0x88);
    puStack_d0 = *(undefined1 **)(uVar3 - 0x58);
LAB_149588b69:
    local_d8 = (undefined1 **)(uVar3 - 0x28);
    uVar11 = FUN_14958f2de(param_4,uVar11,0,0);
    goto LAB_149586e31;
  case 0x6e:
    if ((((*(longlong *)(uVar3 - 0x88) == 0) && (*(int *)(uVar3 - 0x20) == 0)) &&
        (*(longlong *)(uVar3 - 0x10) == 0)) && (*(longlong *)(uVar3 + 8) == 0)) {
      uVar11 = *(undefined8 *)(uVar3 - 0x58);
      goto LAB_149586e31;
    }
    puVar1 = *(uint **)(uVar3 - 0x58);
    uVar18 = (ulonglong)*puVar1;
    if (uVar18 != 1) {
      if (puVar1 == (uint *)0x0) {
        uVar11 = 0;
      }
      else {
        if (1 < (int)*puVar1) {
          uVar19 = uVar18 + 1;
          puVar25 = puVar1 + uVar18 * 0x1c + -0xb;
          do {
            *(char *)puVar25 = (char)puVar25[-0x1c];
            puVar25 = puVar25 + -0x1c;
            uVar19 = uVar19 - 1;
          } while (2 < uVar19);
        }
        *(undefined1 *)(puVar1 + 0x11) = 0;
        uVar11 = *(undefined8 *)(uVar3 - 0x58);
      }
      local_b8 = 0;
      local_c8 = 0;
      local_d8 = (undefined1 **)0x0;
      puStack_d0 = (undefined1 *)0x0;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,0x800);
      puStack_d0 = (undefined1 *)FUN_14958f426(param_4,0,uVar11,0);
      uStack_c0 = *(ulonglong *)(uVar3 + 8);
      uVar11 = *(undefined8 *)(uVar3 - 0x88);
      local_c8 = *(longlong *)(uVar3 - 0x10);
      goto LAB_149588b69;
    }
    local_c8 = *(longlong *)(uVar3 - 0x10);
    uStack_c0 = *(ulonglong *)(uVar3 + 8);
    local_d8 = (undefined1 **)(uVar3 - 0x28);
    puStack_d0 = (undefined1 *)0x0;
    piVar13 = (int *)FUN_14958f2de(param_4,*(longlong *)(uVar3 - 0x88),0,0);
    *(int **)(uVar3 - 0x88) = piVar13;
    if (piVar13 != (int *)0x0) {
      lVar16 = (longlong)*piVar13;
      lVar32 = *(longlong *)(uVar3 - 0x58);
      *(undefined8 *)(piVar13 + lVar16 * 0x1c + -0x16) = *(undefined8 *)(lVar32 + 0x18);
      *(undefined8 *)(piVar13 + lVar16 * 0x1c + -0x18) = *(undefined8 *)(lVar32 + 0x10);
      *(undefined8 *)(piVar13 + lVar16 * 0x1c + -0x10) = *(undefined8 *)(lVar32 + 0x30);
      if ((*(byte *)(lVar32 + 0x48) & 4) != 0) {
        *(undefined8 *)(piVar13 + lVar16 * 0x1c + -2) = *(undefined8 *)(lVar32 + 0x68);
        *(undefined8 *)(lVar32 + 0x68) = 0;
        *(byte *)(lVar32 + 0x48) = *(byte *)(lVar32 + 0x48) & 0xfb;
        *(byte *)(piVar13 + lVar16 * 0x1c + -10) = *(byte *)(piVar13 + lVar16 * 0x1c + -10) | 4;
      }
      *(undefined8 *)(lVar32 + 0x30) = 0;
      *(undefined8 *)(lVar32 + 0x10) = 0;
      *(undefined8 *)(lVar32 + 0x18) = 0;
    }
    FUN_149582b1a(*param_4,*(undefined8 *)(uVar3 - 0x58));
    break;
  case 0x6f:
  case 0x7d:
    *(undefined8 *)(uVar3 + 0x20) = 0;
    *(undefined4 *)(uVar3 + 0x28) = 0;
    break;
  case 0x71:
    plVar26 = (longlong *)(uVar3 + 8);
    lVar32 = FUN_14958f97b(param_4,0,plVar26,0);
    if (lVar32 != 0 && 1 < *(byte *)((longlong)param_4 + 0x114)) {
      FUN_14958fa77(param_4,*(undefined8 *)(lVar32 + 0x18),plVar26);
    }
    *plVar26 = lVar32;
    break;
  case 0x72:
    lVar32 = FUN_14958f97b(param_4,0,(longlong *)(uVar3 - 0x28),uVar3 + 8);
    if (lVar32 != 0 && 1 < *(byte *)((longlong)param_4 + 0x114)) {
      FUN_14958fa77(param_4,*(undefined8 *)(lVar32 + 0x18),uVar3 + 8);
    }
    *(longlong *)(uVar3 - 0x28) = lVar32;
    break;
  case 0x73:
    uVar11 = FUN_14958f97b(param_4,0,uVar3 + 8,0);
    goto LAB_1495870dd;
  case 0x74:
    uVar11 = FUN_14958f97b(param_4,0,uVar3 - 0x28,uVar3 + 8);
    goto LAB_1495869d5;
  case 0x75:
    lVar32 = FUN_14958f97b(param_4,0,uVar3 - 0x58,uVar3 - 0x28);
    *(longlong *)(uVar3 - 0x58) = lVar32;
    if (lVar32 != 0) {
      uVar11 = FUN_14958faeb(*param_4,uVar3 + 8);
      lVar32 = *(longlong *)(uVar3 - 0x58);
LAB_149588938:
      *(undefined8 *)(lVar32 + 0x20) = uVar11;
    }
    break;
  case 0x76:
    lVar32 = FUN_14958f97b(param_4,0,uVar3 - 0x28,0);
    *(longlong *)(uVar3 - 0x28) = lVar32;
    if (lVar32 != 0) {
      uVar11 = FUN_14958faeb(*param_4,uVar3 + 8);
      lVar32 = *(longlong *)(uVar3 - 0x28);
      goto LAB_149588938;
    }
    break;
  case 0x78:
    uVar6 = FUN_14958fb40(param_4,uVar3 - 0x10,0,0);
    *(undefined4 *)(uVar3 - 0x10) = uVar6;
    break;
  case 0x79:
    uVar6 = FUN_14958fb40(param_4,uVar3 - 0x28,uVar3 - 0x10,0);
    *(undefined4 *)(uVar3 - 0x28) = uVar6;
    break;
  case 0x7a:
    uVar6 = FUN_14958fb40(param_4,uVar3 - 0x40,uVar3 - 0x28,uVar3 - 0x10);
    *(undefined4 *)(uVar3 - 0x40) = uVar6;
    break;
  case 0x7b:
  case 0x8f:
  case 0x96:
  case 0xd8:
  case 0xed:
  case 0xff:
  case 0x112:
  case 0x13e:
    goto switchD_14958691d_caseD_7b;
  case 0x7e:
    uVar11 = *(undefined8 *)(uVar3 + 0x10);
    *(undefined8 *)(uVar3 - 0x28) = *(undefined8 *)(uVar3 + 8);
    *(undefined8 *)(uVar3 - 0x20) = uVar11;
    break;
  case 0x7f:
    *(undefined8 *)(uVar3 - 0x10) = 0;
    *(undefined4 *)(uVar3 - 8) = 1;
    break;
  case 0x80:
    puVar15 = *(undefined8 **)(uVar3 - 0x10);
    goto LAB_149586dba;
  case 0x83:
  case 0x8d:
    goto switchD_14958691d_caseD_83;
  case 0x84:
    piVar13 = (int *)FUN_14958f62a(param_4,*(undefined8 *)(uVar3 - 0x58),
                                   *(undefined8 *)(uVar3 - 0x28));
    *(int **)(uVar3 - 0x58) = piVar13;
    if (piVar13 != (int *)0x0) {
      iVar7 = *(int *)(uVar3 + 8);
      lVar32 = (longlong)*piVar13;
      iVar33 = 0;
      if (*(int *)(uVar3 - 0x10) != -1) {
        iVar33 = *(int *)(uVar3 - 0x10);
      }
      *(byte *)(piVar13 + lVar32 * 8 + -2) = (byte)iVar33;
      if ((iVar7 != -1) &&
         (*(byte *)(piVar13 + lVar32 * 8 + -1) = *(byte *)(piVar13 + lVar32 * 8 + -1) | 0x20,
         iVar33 != iVar7)) {
        *(byte *)(piVar13 + lVar32 * 8 + -2) = (byte)iVar33 | 2;
      }
    }
    break;
  case 0x85:
    piVar13 = (int *)FUN_14958f62a(param_4,0,*(undefined8 *)(uVar3 - 0x28));
    *(int **)(uVar3 - 0x28) = piVar13;
    if (piVar13 != (int *)0x0) {
      iVar7 = *(int *)(uVar3 + 8);
      lVar32 = (longlong)*piVar13;
      iVar33 = 0;
      if (*(int *)(uVar3 - 0x10) != -1) {
        iVar33 = *(int *)(uVar3 - 0x10);
      }
      *(byte *)(piVar13 + lVar32 * 8 + -2) = (byte)iVar33;
      if ((iVar7 != -1) &&
         (*(byte *)(piVar13 + lVar32 * 8 + -1) = *(byte *)(piVar13 + lVar32 * 8 + -1) | 0x20,
         iVar33 != iVar7)) {
        *(byte *)(piVar13 + lVar32 * 8 + -2) = (byte)iVar33 | 2;
      }
    }
    break;
  case 0x86:
  case 0xcb:
  case 0xce:
    *(undefined4 *)(uVar3 + 8) = 0;
    break;
  case 0x88:
  case 0x8b:
    *(undefined4 *)(uVar3 + 0x20) = 0xffffffff;
    break;
  case 0x91:
    uVar11 = FUN_14958aad5(param_4,0x92,*(undefined8 *)(uVar3 + 8),0);
    goto LAB_149586ccf;
  case 0x92:
    uVar10 = *(undefined8 *)(uVar3 - 0x28);
    uVar11 = *(undefined8 *)(uVar3 + 8);
    goto LAB_149587a03;
  case 0x93:
    uVar11 = *(undefined8 *)(uVar3 - 0x28);
    uVar10 = *(undefined8 *)(uVar3 + 8);
LAB_149587a03:
    uVar11 = FUN_14958aad5(param_4,0x92,uVar10,uVar11);
LAB_149587a10:
    *(undefined8 *)(uVar3 - 0x40) = uVar11;
    break;
  case 0x94:
    FUN_14958f92b(param_4,*(undefined8 *)(uVar3 - 0x28),uVar3 - 0x10);
    FUN_14958fd0c(param_4,*(undefined8 *)(uVar3 - 0x28),*(undefined8 *)(uVar3 + 8));
    break;
  case 0x97:
    FUN_14958f92b(param_4,*(undefined8 *)(uVar3 - 0x58),uVar3 - 0x40);
    piVar13 = *(int **)(uVar3 - 0x10);
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)0x0;
    }
    else if (*(int *)(*param_4 + 0x84) < *piVar13) {
      FUN_14955a364(param_4,"too many columns in %s","set list");
      piVar13 = *(int **)(uVar3 - 0x10);
    }
    local_d8 = (undefined1 **)CONCAT44(local_d8._4_4_,*(undefined4 *)(uVar3 - 0x70));
    puStack_d0 = (undefined1 *)0x0;
    FUN_149590b67(param_4,*(undefined8 *)(uVar3 - 0x58),piVar13,*(undefined8 *)(uVar3 + 8));
    break;
  case 0x98:
    uVar11 = FUN_14958f62a(param_4,*(undefined8 *)(uVar3 - 0x58),*(undefined8 *)(uVar3 + 8));
    *(undefined8 *)(uVar3 - 0x58) = uVar11;
    FUN_14958f711(param_4,uVar11,uVar3 - 0x28,1);
    break;
  case 0x99:
    uVar11 = FUN_149592b54(param_4,*(undefined8 *)(uVar3 - 0x88),*(undefined8 *)(uVar3 - 0x40),
                           *(undefined8 *)(uVar3 + 8));
LAB_149586e31:
    *(undefined8 *)(uVar3 - 0x88) = uVar11;
    break;
  case 0x9a:
    lVar32 = FUN_14958f62a(param_4,0,*(undefined8 *)(uVar3 + 8));
    FUN_14958f711(param_4,lVar32,uVar3 - 0x28,1);
LAB_1495880a9:
    *(longlong *)(uVar3 - 0x28) = lVar32;
    break;
  case 0x9b:
    uVar11 = FUN_149592b54(param_4,0,*(undefined8 *)(uVar3 - 0x40),*(undefined8 *)(uVar3 + 8));
    *(undefined8 *)(uVar3 - 0x58) = uVar11;
    break;
  case 0x9c:
    puStack_d0 = *(undefined1 **)(uVar3 + 8);
    uVar6 = *(undefined4 *)(uVar3 - 0x70);
    uVar10 = *(undefined8 *)(uVar3 - 0x28);
    uVar11 = *(undefined8 *)(uVar3 - 0x10);
    uVar8 = *(undefined8 *)(uVar3 - 0x40);
    goto LAB_1495884d8;
  case 0x9d:
    uVar6 = *(undefined4 *)(uVar3 - 0x70);
    uVar10 = *(undefined8 *)(uVar3 - 0x28);
    uVar8 = *(undefined8 *)(uVar3 - 0x40);
    puStack_d0 = (undefined1 *)0x0;
    uVar11 = 0;
LAB_1495884d8:
    local_d8 = (undefined1 **)CONCAT44(uVar5,uVar6);
    FUN_149592cb7(param_4,uVar8,uVar11,uVar10);
    break;
  case 0x9f:
    local_d8 = *(undefined1 ***)(uVar3 + 8);
    uVar11 = FUN_149594678(*param_4,*(undefined8 *)(uVar3 - 0xa0),*(undefined8 *)(uVar3 - 0x70),
                           *(undefined8 *)(uVar3 - 0x10));
    *(undefined8 *)(uVar3 - 0xe8) = uVar11;
    break;
  case 0xa0:
    local_d8 = (undefined1 **)0x0;
    uVar11 = FUN_149594678(*param_4,*(undefined8 *)(uVar3 - 0x58),*(undefined8 *)(uVar3 - 0x28),0);
    goto LAB_149587fde;
  case 0xa1:
    if (*param_4 == 0) {
      puVar15 = (undefined8 *)FUN_145e3bd67(0x40);
    }
    else {
      puVar15 = (undefined8 *)FUN_14955d750(*param_4,0x40);
    }
    if (puVar15 != (undefined8 *)0x0) {
      puVar15[2] = 0;
      puVar15[3] = 0;
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[4] = 0;
    }
    goto LAB_149586dba;
  case 0xa5:
  case 0xa8:
  case 0xe0:
  case 0xe5:
    uVar11 = *(undefined8 *)(uVar3 - 0x10);
    goto LAB_1495869d5;
  case 0xa6:
    uVar11 = FUN_14959472f(param_4,*(undefined8 *)(uVar3 - 0x28),uVar3 + 8);
    goto LAB_1495869d5;
  case 0xa7:
    uVar11 = FUN_14959472f(param_4,0,uVar3 + 8);
    goto LAB_1495870dd;
  case 0xa9:
  case 0xaa:
    local_88 = *(undefined1 **)(uVar3 + 8);
    iStack_80 = *(int *)(uVar3 + 0x10);
    uStack_7c = *(undefined4 *)(uVar3 + 0x14);
    uVar20 = 0x3b;
    goto LAB_1495870d8;
  case 0xab:
    puVar15 = (undefined8 *)(uVar3 - 0x28);
    local_a0 = (undefined8 *)FUN_14958f7cb(*param_4,0x3b,puVar15,1);
    uVar11 = FUN_14958f7cb(*param_4,0x3b,uVar3 + 8,1);
    if (1 < *(byte *)((longlong)param_4 + 0x114)) {
      FUN_14958fa77(param_4,uVar11,uVar3 + 8);
      FUN_14958fa77(param_4,local_a0,puVar15);
    }
    uVar11 = FUN_14958aad5(param_4,0x8b,local_a0,uVar11);
    *puVar15 = uVar11;
    break;
  case 0xac:
    local_a0 = (undefined8 *)(uVar3 - 0x58);
    local_90 = FUN_14958f7cb(*param_4,0x3b,local_a0,1);
    local_98 = uVar3 - 0x28;
    uVar11 = FUN_14958f7cb(*param_4,0x3b,local_98,1);
    uVar10 = FUN_14958f7cb(*param_4,0x3b,uVar3 + 8,1);
    uVar8 = FUN_14958aad5(param_4,0x8b,uVar11,uVar10);
    if (1 < *(byte *)((longlong)param_4 + 0x114)) {
      FUN_14958fa77(param_4,uVar10,uVar3 + 8);
      FUN_14958fa77(param_4,uVar11,local_98);
    }
    uVar11 = FUN_14958aad5(param_4,0x8b,local_90,uVar8);
    *local_a0 = uVar11;
    break;
  case 0xad:
  case 0xae:
    uVar20 = *(undefined2 *)(uVar3 + 2);
    local_88 = *(undefined1 **)(uVar3 + 8);
    iStack_80 = *(int *)(uVar3 + 0x10);
    uStack_7c = *(undefined4 *)(uVar3 + 0x14);
LAB_1495870d8:
    uVar11 = FUN_14958abbb(param_4,uVar20);
    goto LAB_1495870dd;
  case 0xaf:
    uVar11 = FUN_14958f7cb(*param_4,0x98,uVar3 + 8,1);
    goto LAB_1495870dd;
  case 0xb0:
    plVar26 = (longlong *)(uVar3 + 8);
    if ((**(char **)(uVar3 + 8) == '#') &&
       (0xfffffffffffffff5 < (ulonglong)(byte)(*(char **)(uVar3 + 8))[1] - 0x3a)) {
      local_88 = (undefined1 *)*plVar26;
      iStack_80 = *(int *)(uVar3 + 0x10);
      uStack_7c = *(undefined4 *)(uVar3 + 0x14);
      if (*(char *)((longlong)param_4 + 0x1e) == '\0') {
        FUN_14955a364(param_4,"near \"%T\": syntax error",&local_88);
        *plVar26 = 0;
      }
      else {
        lVar32 = FUN_14958aad5(param_4,0xad,0,0);
        *plVar26 = lVar32;
        if (lVar32 != 0) {
          FUN_149581ec6(local_88 + 1,lVar32 + 0x2c);
        }
      }
    }
    else {
      uVar6 = *(undefined4 *)(uVar3 + 0x10);
      local_88 = (undefined1 *)*plVar26;
      iStack_80 = *(int *)(uVar3 + 0x10);
      uStack_7c = *(undefined4 *)(uVar3 + 0x14);
      uVar11 = FUN_14958abbb(param_4,0x99);
      *(undefined8 *)(uVar3 + 8) = uVar11;
      FUN_14959482b(param_4,uVar11,uVar6);
    }
    break;
  case 0xb1:
    lVar32 = *(longlong *)(uVar3 - 0x28);
    if ((*(int *)(uVar3 + 0x10) != 0) &&
       (lVar16 = FUN_14958f7cb(*param_4,0x6f,uVar3 + 8,1), lVar16 != 0)) {
      *(longlong *)(lVar16 + 0x10) = lVar32;
      *(byte *)(lVar16 + 5) = *(byte *)(lVar16 + 5) | 0x11;
      lVar32 = lVar16;
    }
    *(longlong *)(uVar3 - 0x28) = lVar32;
    break;
  case 0xb2:
    uVar11 = FUN_14958f7cb(*param_4,0x24,uVar3 - 0x10,1);
    *(undefined8 *)(uVar3 - 0x70) = uVar11;
    FUN_149594ae0(*param_4,uVar11,*(undefined8 *)(uVar3 - 0x40));
    break;
  case 0xb3:
    uVar11 = FUN_149594b10(param_4,*(undefined8 *)(uVar3 - 0x10),uVar3 - 0x58,
                           *(undefined4 *)(uVar3 - 0x28));
    goto LAB_149586d3b;
  case 0xb4:
    puVar15 = (undefined8 *)FUN_149594b10(param_4,0,uVar3 - 0x40,0);
    goto LAB_149586dba;
  case 0xb5:
    uVar11 = FUN_149594b10(param_4,*(undefined8 *)(uVar3 - 0x28),uVar3 - 0x70,
                           *(undefined4 *)(uVar3 - 0x40));
    FUN_149594bac(param_4,uVar11,*(undefined8 *)(uVar3 + 8));
    goto LAB_1495883ca;
  case 0xb6:
    uVar11 = FUN_149594b10(param_4,0,uVar3 - 0x58,0);
    FUN_149594bac(param_4,uVar11,*(undefined8 *)(uVar3 + 8));
    *(undefined8 *)(uVar3 - 0x58) = uVar11;
    break;
  case 0xb7:
    uVar11 = FUN_149594b10(param_4,0,uVar3 + 8,0);
    goto LAB_1495870dd;
  case 0xb8:
    piVar13 = (int *)FUN_14958f62a(param_4,*(undefined8 *)(uVar3 - 0x40),
                                   *(undefined8 *)(uVar3 - 0x10));
    lVar32 = FUN_14958aad5(param_4,0xae,0,0);
    *(longlong *)(uVar3 - 0x58) = lVar32;
    if (lVar32 == 0) {
      if (piVar13 != (int *)0x0) {
        FUN_149582d29(*param_4,piVar13);
      }
    }
    else {
      *(int **)(lVar32 + 0x20) = piVar13;
      if (*piVar13 != 0) {
        puVar1 = (uint *)(*(longlong *)(uVar3 - 0x58) + 4);
        *puVar1 = *puVar1 | *(uint *)(*(longlong *)(piVar13 + 2) + 4) & 0x200104;
      }
    }
    break;
  case 0xb9:
    uVar11 = FUN_149594bf0(param_4,*(undefined8 *)(uVar3 - 0x28),*(undefined8 *)(uVar3 + 8));
    goto LAB_1495869d5;
  case 0xba:
  case 0xbb:
  case 0xbc:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
    uVar10 = *(undefined8 *)(uVar3 - 0x28);
    uVar11 = *(undefined8 *)(uVar3 + 8);
    uVar20 = *(undefined2 *)(uVar3 - 0x16);
    goto LAB_149586fae;
  case 0xc1:
    uVar11 = *(undefined8 *)(uVar3 + 0x10);
    *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(uVar3 + 8);
    *(undefined8 *)(uVar3 - 8) = uVar11;
    *(byte *)(uVar3 - 5) = *(byte *)(uVar3 - 5) | 0x80;
    break;
  case 0xc2:
    uVar5 = *(uint *)(uVar3 - 8);
    *(uint *)(uVar3 - 8) = uVar5 & 0x7fffffff;
    uVar11 = FUN_14958f62a(param_4,0,*(undefined8 *)(uVar3 + 8));
    uVar11 = FUN_14958f62a(param_4,uVar11,*(undefined8 *)(uVar3 - 0x28));
    lVar32 = FUN_149594b10(param_4,uVar11,uVar3 - 0x10,0);
    *(longlong *)(uVar3 - 0x28) = lVar32;
    if ((int)uVar5 < 0) {
      lVar32 = FUN_14958aad5(param_4,0x13,lVar32,0);
      *(longlong *)(uVar3 - 0x28) = lVar32;
    }
    goto LAB_14958855e;
  case 0xc3:
    uVar5 = *(uint *)(uVar3 - 0x38);
    *(uint *)(uVar3 - 0x38) = uVar5 & 0x7fffffff;
    uVar11 = FUN_14958f62a(param_4,0,*(undefined8 *)(uVar3 - 0x28));
    uVar11 = FUN_14958f62a(param_4,uVar11,*(undefined8 *)(uVar3 - 0x58));
    uVar11 = FUN_14958f62a(param_4,uVar11,*(undefined8 *)(uVar3 + 8));
    lVar32 = FUN_149594b10(param_4,uVar11,uVar3 - 0x40,0);
    *(longlong *)(uVar3 - 0x58) = lVar32;
    if ((int)uVar5 < 0) {
      lVar32 = FUN_14958aad5(param_4,0x13,lVar32,0);
      *(longlong *)(uVar3 - 0x58) = lVar32;
    }
LAB_14958855e:
    if (lVar32 != 0) {
      *(byte *)(lVar32 + 4) = *(byte *)(lVar32 + 4) | 0x80;
    }
    break;
  case 0xc4:
    uVar11 = *(undefined8 *)(uVar3 - 0x10);
    uVar21 = *(ushort *)(uVar3 + 2);
    goto LAB_1495870ee;
  case 0xc5:
    uVar10 = *(undefined8 *)(uVar3 - 0x28);
    uVar20 = 0x33;
    uVar11 = 0;
LAB_149586fae:
    uVar11 = FUN_14958aad5(param_4,uVar20,uVar10,uVar11);
    goto LAB_1495869d5;
  case 0xc6:
    puVar9 = (undefined1 *)
             FUN_14958aad5(param_4,0x2d,*(undefined8 *)(uVar3 - 0x28),*(undefined8 *)(uVar3 + 8));
    *(undefined1 **)(uVar3 - 0x28) = puVar9;
    if (((*(char **)(uVar3 + 8) != (char *)0x0 && puVar9 != (undefined1 *)0x0) &&
        (**(char **)(uVar3 + 8) == 'w')) && (*(byte *)((longlong)param_4 + 0x114) < 2)) {
      lVar32 = *param_4;
      *puVar9 = 0x32;
LAB_149587606:
      if (*(longlong *)(puVar9 + 0x18) != 0) {
        FUN_14958288e(lVar32);
      }
      *(undefined8 *)(puVar9 + 0x18) = 0;
    }
    break;
  case 199:
    puVar9 = (undefined1 *)
             FUN_14958aad5(param_4,0xa8,*(undefined8 *)(uVar3 - 0x40),*(undefined8 *)(uVar3 + 8));
    *(undefined1 **)(uVar3 - 0x40) = puVar9;
    if (((*(char **)(uVar3 + 8) != (char *)0x0 && puVar9 != (undefined1 *)0x0) &&
        (**(char **)(uVar3 + 8) == 'w')) && (*(byte *)((longlong)param_4 + 0x114) < 2)) {
      lVar32 = *param_4;
      *puVar9 = 0x33;
      goto LAB_149587606;
    }
    break;
  case 200:
  case 0xc9:
    uVar11 = *(undefined8 *)(uVar3 + 8);
    uVar21 = *(ushort *)(uVar3 - 0x16);
    goto LAB_1495870ee;
  case 0xca:
    uVar11 = *(undefined8 *)(uVar3 + 8);
    uVar21 = *(short *)(uVar3 - 0x16) == 0x69 | 0xaa;
LAB_1495870ee:
    uVar11 = FUN_14958aad5(param_4,uVar21,uVar11,0);
LAB_149586ccf:
    *(undefined8 *)(uVar3 - 0x10) = uVar11;
    break;
  case 0xcd:
    uVar11 = FUN_14958f62a(param_4,0,*(undefined8 *)(uVar3 - 0x28));
    lVar32 = FUN_14958f62a(param_4,uVar11,*(undefined8 *)(uVar3 + 8));
    lVar16 = FUN_14958aad5(param_4,0x30,*(undefined8 *)(uVar3 - 0x58),0);
    *(longlong *)(uVar3 - 0x58) = lVar16;
    if (lVar16 == 0) {
      if (lVar32 != 0) {
        lVar16 = *param_4;
LAB_149588d6b:
        FUN_149582d29(lVar16,lVar32);
      }
    }
    else {
      *(longlong *)(lVar16 + 0x20) = lVar32;
    }
    goto LAB_149587d22;
  case 0xd0:
    if (*(longlong *)(uVar3 - 0x10) != 0) {
      lVar16 = FUN_14958aad5(param_4,0x31,*(undefined8 *)(uVar3 - 0x58),0);
      *(longlong *)(uVar3 - 0x58) = lVar16;
      lVar32 = *(longlong *)(uVar3 - 0x10);
      if (lVar16 == 0) {
        if (lVar32 != 0) {
          lVar16 = *param_4;
          goto LAB_149588d6b;
        }
      }
      else {
        *(longlong *)(lVar16 + 0x20) = lVar32;
        FUN_149594d72(param_4,*(undefined8 *)(uVar3 - 0x58));
      }
      goto LAB_149587d22;
    }
    FUN_149594cd8(param_4,*(undefined8 *)(uVar3 - 0x58));
    local_88 = &DAT_149e377d0;
    if (*(int *)(uVar3 - 0x40) == 0) {
      local_88 = &DAT_149dfd150;
    }
    iStack_80 = 1;
    uVar11 = FUN_14958f7cb(*param_4,0x98,&local_88,0);
    goto LAB_149586d3b;
  case 0xd1:
    uVar11 = FUN_14958aad5(param_4,0x88,0,0);
    *(undefined8 *)(uVar3 - 0x28) = uVar11;
    goto LAB_1495885a2;
  case 0xd2:
    uVar11 = FUN_14958aad5(param_4,0x31,*(undefined8 *)(uVar3 - 0x58),0);
    *(undefined8 *)(uVar3 - 0x58) = uVar11;
    lVar32 = *(longlong *)(uVar3 - 0x10);
    goto LAB_149587d1d;
  case 0xd3:
    piVar13 = (int *)FUN_14958f97b(param_4,0,uVar3 - 0x28,uVar3 - 0x10);
    local_b8 = 0;
    local_c8 = 0;
    local_d8 = (undefined1 **)0x0;
    puStack_d0 = (undefined1 *)0x0;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    lVar32 = FUN_14958f426(param_4,0,piVar13,0);
    if (*(longlong *)(uVar3 + 8) != 0) {
      if (piVar13 == (int *)0x0 || lVar32 == 0) {
        FUN_149582d29(*param_4);
      }
      else {
        iVar7 = *piVar13;
        *(longlong *)(piVar13 + (longlong)iVar7 * 0x1c + -2) = *(longlong *)(uVar3 + 8);
        *(byte *)(piVar13 + (longlong)iVar7 * 0x1c + -10) =
             *(byte *)(piVar13 + (longlong)iVar7 * 0x1c + -10) | 4;
      }
    }
    uVar11 = FUN_14958aad5(param_4,0x31,*(undefined8 *)(uVar3 - 0x58),0);
    *(undefined8 *)(uVar3 - 0x58) = uVar11;
LAB_149587d1d:
    FUN_149594db4(param_4,uVar11,lVar32);
LAB_149587d22:
    if (*(int *)(uVar3 - 0x40) != 0) {
      uVar11 = FUN_14958aad5(param_4,0x13,*(undefined8 *)(uVar3 - 0x58),0);
      goto LAB_149586d3b;
    }
    break;
  case 0xd4:
    uVar11 = FUN_14958aad5(param_4,0x14,0,0);
    *(undefined8 *)(uVar3 - 0x40) = uVar11;
LAB_1495885a2:
    FUN_149594db4(param_4,uVar11,*(undefined8 *)(uVar3 - 0x10));
    break;
  case 0xd5:
    lVar32 = FUN_14958aad5(param_4,0x9a,*(undefined8 *)(uVar3 - 0x40),0);
    *(longlong *)(uVar3 - 0x58) = lVar32;
    if (lVar32 == 0) {
      if (*(longlong *)(uVar3 - 0x28) != 0) {
        FUN_149582d29(*param_4);
      }
      if (*(longlong *)(uVar3 - 0x10) != 0) {
        FUN_14958288e(*param_4);
      }
    }
    else {
      uVar11 = *(undefined8 *)(uVar3 - 0x28);
      if (*(longlong *)(uVar3 - 0x10) != 0) {
        uVar11 = FUN_14958f62a(param_4);
        lVar32 = *(longlong *)(uVar3 - 0x58);
      }
      *(undefined8 *)(lVar32 + 0x20) = uVar11;
      FUN_149594d72(param_4,*(undefined8 *)(uVar3 - 0x58));
    }
    break;
  case 0xd6:
    uVar10 = FUN_14958f62a(param_4,*(undefined8 *)(uVar3 - 0x58),*(undefined8 *)(uVar3 - 0x28));
    *(undefined8 *)(uVar3 - 0x58) = uVar10;
    uVar11 = *(undefined8 *)(uVar3 + 8);
LAB_149587e0b:
    uVar11 = FUN_14958f62a(param_4,uVar10,uVar11);
    goto LAB_149586d3b;
  case 0xd7:
    uVar11 = FUN_14958f62a(param_4,0,*(undefined8 *)(uVar3 - 0x28));
    *(undefined8 *)(uVar3 - 0x40) = uVar11;
    puVar15 = (undefined8 *)FUN_14958f62a(param_4,uVar11,*(undefined8 *)(uVar3 + 8));
    goto LAB_149586dba;
  case 0xdd:
    uVar11 = FUN_14958f62a(param_4,*(undefined8 *)(uVar3 - 0x28),*(undefined8 *)(uVar3 + 8));
    goto LAB_1495869d5;
  case 0xde:
    uVar11 = FUN_14958f62a(param_4,0,*(undefined8 *)(uVar3 + 8));
LAB_1495870dd:
    *(undefined8 *)(uVar3 + 8) = uVar11;
    break;
  case 0xe1:
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,*(undefined4 *)(uVar3 - 0xe8));
    uVar6 = *(undefined4 *)(uVar3 - 0xb8);
    uVar18 = *(ulonglong *)(uVar3 + 8);
    local_90 = *(ulonglong *)(uVar3 - 0x28);
    local_98 = uVar3 - 0x58;
    uVar11 = FUN_14958f97b(param_4,0,local_98,0);
    puStack_d0 = (undefined1 *)CONCAT44(puStack_d0._4_4_,local_a0._0_4_);
    local_d8 = (undefined1 **)local_90;
    local_a8 = 0;
    local_b8 = local_b8 & 0xffffffff00000000;
    local_c8 = uVar3 - 0x100;
    uStack_c0 = uVar18;
    local_b0 = uVar6;
    FUN_14958b0ca(param_4,uVar3 - 0xa0,uVar3 - 0x88,uVar11);
    if ((1 < *(byte *)((longlong)param_4 + 0x114)) &&
       ((undefined8 *)param_4[0x29] != (undefined8 *)0x0)) {
      FUN_14958fa77(param_4,*(undefined8 *)param_4[0x29],local_98);
    }
    break;
  case 0xe2:
  case 0x10c:
    *(undefined4 *)(uVar3 + 8) = 2;
    break;
  case 0xe3:
    *(undefined4 *)(uVar3 + 0x20) = 0;
    break;
  case 0xe6:
    local_d8 = (undefined1 **)CONCAT44(uVar5,*(undefined4 *)(uVar3 + 8));
    uVar11 = FUN_149594de0(param_4,*(undefined8 *)(uVar3 - 0x58),uVar3 - 0x28,
                           *(undefined4 *)(uVar3 - 0x10));
    goto LAB_149586d3b;
  case 0xe7:
    local_d8 = (undefined1 **)CONCAT44(uVar5,*(undefined4 *)(uVar3 + 8));
    uVar11 = FUN_149594de0(param_4,0,uVar3 - 0x28,*(undefined4 *)(uVar3 - 0x10));
    goto LAB_1495869d5;
  case 0xea:
    FUN_149594e4f(param_4,*(undefined8 *)(uVar3 + 8),*(undefined4 *)(uVar3 - 0x10));
    break;
  case 0xeb:
    uVar11 = *(undefined8 *)(uVar3 + 8);
    lVar32 = 0;
    goto LAB_149587763;
  case 0xec:
    uVar11 = *(undefined8 *)(uVar3 + 8);
    lVar32 = uVar3 - 0x10;
LAB_149587763:
    FUN_14959508b(param_4,lVar32,uVar11);
    break;
  case 0xef:
    local_d8 = (undefined1 **)((ulonglong)uVar5 << 0x20);
    FUN_149595234(param_4,uVar3 - 0x10,uVar3 + 8,0);
    break;
  case 0xf0:
    lVar32 = uVar3 + 8;
    lVar16 = uVar3 - 0x28;
    lVar28 = uVar3 - 0x40;
    goto LAB_149587b63;
  case 0xf1:
    lVar32 = uVar3 - 0x10;
    lVar16 = uVar3 - 0x40;
    lVar28 = uVar3 - 0x58;
LAB_149587b63:
    local_d8 = (undefined1 **)((ulonglong)uVar5 << 0x20);
LAB_149587db4:
    FUN_149595234(param_4,lVar28,lVar16,lVar32);
    break;
  case 0xf2:
    lVar32 = uVar3 + 8;
    lVar16 = uVar3 - 0x28;
    lVar28 = uVar3 - 0x40;
    goto LAB_149587dac;
  case 0xf3:
    lVar32 = uVar3 - 0x10;
    lVar16 = uVar3 - 0x40;
    lVar28 = uVar3 - 0x58;
LAB_149587dac:
    local_d8 = (undefined1 **)CONCAT44(uVar5,1);
    goto LAB_149587db4;
  case 0xf6:
    local_88 = *(undefined1 **)(uVar3 - 0x40);
    iStack_80 = (*(int *)(uVar3 + 8) - (int)local_88) + *(int *)(uVar3 + 0x10);
    FUN_1495985ff(param_4,*(undefined8 *)(uVar3 - 0x10));
    break;
  case 0xf7:
    local_b0 = *(undefined4 *)(uVar3 - 0xb8);
    uStack_c0 = *(ulonglong *)(uVar3 + 8);
    local_c8 = *(longlong *)(uVar3 - 0x28);
    puStack_d0 = *(undefined1 **)(uVar3 - 0x50);
    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(uVar3 - 0xe8));
    local_d8 = (undefined1 **)CONCAT44(uVar5,*(undefined4 *)(uVar3 - 0x58));
    FUN_149598acf(param_4,(undefined4 *)(uVar3 - 0xa0),(undefined4 *)(uVar3 - 0x88),
                  *(undefined4 *)(uVar3 - 0x70));
    if (*(int *)(uVar3 - 0x80) == 0) {
      uVar6 = *(undefined4 *)(uVar3 - 0xa0);
      uVar34 = *(undefined4 *)(uVar3 - 0x9c);
      uVar35 = *(undefined4 *)(uVar3 - 0x98);
      uVar36 = *(undefined4 *)(uVar3 - 0x94);
    }
    else {
      uVar6 = *(undefined4 *)(uVar3 - 0x88);
      uVar34 = *(undefined4 *)(uVar3 - 0x84);
      uVar35 = *(undefined4 *)(uVar3 - 0x80);
      uVar36 = *(undefined4 *)(uVar3 - 0x7c);
    }
    *(undefined4 *)(uVar3 - 0xe8) = uVar6;
    *(undefined4 *)(uVar3 - 0xe4) = uVar34;
    *(undefined4 *)(uVar3 - 0xe0) = uVar35;
    *(undefined4 *)(uVar3 - 0xdc) = uVar36;
    break;
  case 0xf8:
    *(uint *)(uVar3 + 8) = (uint)*(ushort *)(uVar3 + 2);
    break;
  case 0xf9:
    *(undefined4 *)(uVar3 - 0x10) = 0x41;
    break;
  case 0xfa:
    *(undefined4 *)(uVar3 + 0x20) = 0x21;
    break;
  case 0xfb:
  case 0xfc:
    *(uint *)(uVar3 + 8) = (uint)*(ushort *)(uVar3 + 2);
    *(undefined8 *)(uVar3 + 0x10) = 0;
    break;
  case 0xfd:
    *(undefined4 *)(uVar3 - 0x28) = 0x7f;
    *(undefined8 *)(uVar3 - 0x20) = *(undefined8 *)(uVar3 + 8);
    break;
  case 0xfe:
  case 0x111:
    *(undefined8 *)(uVar3 + 0x20) = 0;
    break;
  case 0x100:
    uVar11 = *(undefined8 *)(uVar3 - 0x10);
    *(undefined8 *)(*(longlong *)(*(longlong *)(uVar3 - 0x28) + 0x50) + 0x48) = uVar11;
    *(undefined8 *)(*(longlong *)(uVar3 - 0x28) + 0x50) = uVar11;
    break;
  case 0x101:
    *(longlong *)(*(longlong *)(uVar3 - 0x10) + 0x50) = *(longlong *)(uVar3 - 0x10);
    break;
  case 0x102:
    uVar6 = *(undefined4 *)(uVar3 + 0xc);
    uVar34 = *(undefined4 *)(uVar3 + 0x10);
    uVar35 = *(undefined4 *)(uVar3 + 0x14);
    *(undefined4 *)(uVar3 - 0x28) = *(undefined4 *)(uVar3 + 8);
    *(undefined4 *)(uVar3 - 0x24) = uVar6;
    *(undefined4 *)(uVar3 - 0x20) = uVar34;
    *(undefined4 *)(uVar3 - 0x1c) = uVar35;
    pcVar24 = 
    "qualified table names are not allowed on INSERT, UPDATE, and DELETE statements within triggers"
    ;
    goto LAB_149588177;
  case 0x103:
    pcVar24 = "the INDEXED BY clause is not allowed on UPDATE or DELETE statements within triggers";
    goto LAB_149588177;
  case 0x104:
    pcVar24 = "the NOT INDEXED clause is not allowed on UPDATE or DELETE statements within triggers"
    ;
LAB_149588177:
    FUN_14955a364(param_4,pcVar24);
    break;
  case 0x105:
    local_c8 = *(longlong *)(uVar3 + 8);
    puStack_d0 = *(undefined1 **)(uVar3 - 0xa0);
    local_d8 = (undefined1 **)CONCAT71(local_d8._1_7_,*(undefined1 *)(uVar3 - 0x88));
    uVar11 = FUN_1495990da(param_4,uVar3 - 0x70,*(undefined8 *)(uVar3 - 0x28),
                           *(undefined8 *)(uVar3 - 0x10));
    goto LAB_149587fde;
  case 0x106:
    uStack_c0 = *(ulonglong *)(uVar3 + 8);
    local_c8 = *(longlong *)(uVar3 - 0xa0);
    puStack_d0 = *(undefined1 **)(uVar3 - 0x10);
    local_d8 = (undefined1 **)CONCAT71(local_d8._1_7_,*(undefined1 *)(uVar3 - 0x88));
    uVar11 = FUN_1495991a7(param_4,uVar3 - 0x58,*(undefined8 *)(uVar3 - 0x40),
                           *(undefined8 *)(uVar3 - 0x28));
    goto LAB_149587fde;
  case 0x107:
    local_d8 = *(undefined1 ***)(uVar3 + 8);
    uVar11 = FUN_14959927e(param_4,uVar3 - 0x40,*(undefined8 *)(uVar3 - 0x10),
                           *(undefined8 *)(uVar3 - 0x70));
    goto LAB_1495883f0;
  case 0x108:
    uVar11 = FUN_149599301(*param_4,*(undefined8 *)(uVar3 - 0x10),*(undefined8 *)(uVar3 - 0x28),
                           *(undefined8 *)(uVar3 + 8));
    goto LAB_1495869d5;
  case 0x109:
    lVar32 = FUN_14958aad5(param_4,0x47,0,0);
    *(longlong *)(uVar3 - 0x40) = lVar32;
    if (lVar32 != 0) {
      *(undefined1 *)(lVar32 + 1) = 4;
    }
    break;
  case 0x10a:
    lVar32 = FUN_14958f7cb(*param_4,0x47,uVar3 - 0x10,1);
    *(longlong *)(uVar3 - 0x70) = lVar32;
    if (lVar32 != 0) {
      *(undefined1 *)(lVar32 + 1) = *(undefined1 *)(uVar3 - 0x40);
    }
    break;
  case 0x10b:
    *(undefined4 *)(uVar3 + 8) = 1;
    break;
  case 0x10d:
    *(undefined4 *)(uVar3 + 8) = 3;
    break;
  case 0x10e:
    FUN_1495993d8(param_4,*(undefined8 *)(uVar3 + 8),*(undefined4 *)(uVar3 - 0x10));
    break;
  case 0x10f:
    local_c8 = *(longlong *)(uVar3 + 8);
    local_d8 = *(undefined1 ***)(uVar3 - 0x40);
    puStack_d0 = *(undefined1 **)(uVar3 - 0x10);
    puVar27 = &DAT_14bd48658;
    uVar11 = 0x18;
    goto LAB_1495881fd;
  case 0x110:
    local_c8 = *(longlong *)(uVar3 + 8);
    local_d8 = (undefined1 **)0x0;
    puStack_d0 = (undefined1 *)0x0;
    puVar27 = &DAT_14bd48840;
    uVar11 = 0x19;
LAB_1495881fd:
    FUN_1495cb8c5(param_4,uVar11,puVar27);
    break;
  case 0x113:
    iVar7 = FUN_14958537a(param_4);
    if (iVar7 == 0) {
      local_a0 = (undefined8 *)*param_4;
      iVar7 = *(int *)(local_a0 + 5);
      if (0 < iVar7) {
        lVar32 = local_a0[4];
        iVar33 = 0;
        do {
          plVar26 = *(longlong **)(*(longlong *)(lVar32 + 0x18) + 0x10);
          if (plVar26 != (longlong *)0x0) {
            do {
              FUN_1495cc339(param_4,plVar26[2],0);
              plVar26 = (longlong *)*plVar26;
            } while (plVar26 != (longlong *)0x0);
            iVar7 = *(int *)(local_a0 + 5);
          }
          iVar33 = iVar33 + 1;
          lVar32 = lVar32 + 0x20;
        } while (iVar33 < iVar7);
      }
    }
    break;
  case 0x114:
    FUN_1495994eb(param_4,uVar3 - 0x10,uVar3 + 8);
    break;
  case 0x115:
    lVar16 = 0;
    lVar32 = 0;
    goto LAB_149587fb8;
  case 0x116:
    lVar32 = uVar3 + 8;
    lVar16 = uVar3 - 0x10;
LAB_149587fb8:
    FUN_149599753(param_4,lVar16,lVar32);
    break;
  case 0x117:
    FUN_1495998ef(param_4,*(undefined8 *)(uVar3 - 0x40),uVar3 + 8);
    break;
  case 0x118:
    *(int *)(uVar3 - 8) = ((int)param_4[0x20] - *(int *)(uVar3 - 0x10)) + (int)param_4[0x21];
    FUN_149599cbb(param_4,uVar3 - 0x10);
    break;
  case 0x119:
    lVar32 = *param_4;
    *(char *)((longlong)param_4 + 0x24) = *(char *)((longlong)param_4 + 0x24) + '\x01';
    piVar13 = (int *)(lVar32 + 0x178);
    *piVar13 = *piVar13 + 1;
    *(undefined2 *)(lVar32 + 0x17c) = 0;
    FUN_14959a104(param_4,*(undefined8 *)(uVar3 + 8));
    break;
  case 0x11a:
    FUN_14959a346(param_4,*(undefined8 *)(uVar3 - 0x70),uVar3 - 0x28,uVar3 + 8);
    break;
  case 0x11b:
    lVar32 = 0;
    goto LAB_1495881c9;
  case 0x11c:
    lVar32 = uVar3 + 8;
LAB_1495881c9:
    FUN_14959a61c(param_4,lVar32);
    break;
  case 0x11d:
    local_d8 = (undefined1 **)CONCAT44(uVar5,*(undefined4 *)(uVar3 - 0x58));
    FUN_14959a88e(param_4,uVar3 - 0x40,uVar3 - 0x28,uVar3 + 8);
    break;
  case 0x11e:
    FUN_1495cd4fb(param_4);
    param_4[0x2c] = 0;
    *(undefined4 *)(param_4 + 0x2d) = 0;
    break;
  case 0x11f:
  case 0x120:
  case 0x121:
    if (param_4[0x2c] == 0) {
      param_4[0x2c] = *(longlong *)(uVar3 + 8);
      *(undefined4 *)(param_4 + 0x2d) = *(undefined4 *)(uVar3 + 0x10);
    }
    else {
      *(int *)(param_4 + 0x2d) =
           ((int)*(longlong *)(uVar3 + 8) + *(int *)(uVar3 + 0x10)) - (int)param_4[0x2c];
    }
    break;
  case 0x122:
  case 0x123:
    lVar32 = *(longlong *)(uVar3 + 8);
    if (lVar32 != 0) {
      *(longlong *)(lVar32 + 8) = param_4[0x31];
      param_4[0x31] = lVar32;
      param_4[0x32] = lVar32;
    }
    break;
  case 0x124:
    local_d8 = *(undefined1 ***)(uVar3 - 0x10);
    uVar11 = FUN_14959a99e(param_4,0,uVar3 - 0x70,*(undefined8 *)(uVar3 - 0x58));
    goto LAB_1495883f0;
  case 0x125:
    local_d8 = *(undefined1 ***)(uVar3 - 0x10);
    uVar11 = FUN_14959a99e(param_4,*(undefined8 *)(uVar3 - 0xa0),uVar3 - 0x70,
                           *(undefined8 *)(uVar3 - 0x58));
LAB_149587fde:
    *(undefined8 *)(uVar3 - 0xa0) = uVar11;
    break;
  case 0x127:
    FUN_14959ab75(param_4,*(undefined8 *)(uVar3 + 8),*(undefined8 *)(uVar3 - 0x28));
    *(undefined8 *)(*(longlong *)(uVar3 + 8) + 0x40) = *(undefined8 *)(uVar3 - 0x28);
    goto switchD_14958691d_caseD_83;
  case 0x128:
    if (*(longlong *)(uVar3 - 0x10) != 0) {
      pvVar12 = *(void **)(uVar3 - 0x58);
      if (pvVar12 == (void *)0x0) {
LAB_149586d2e:
        pvVar17 = (void *)0x0;
      }
      else {
        uVar18 = (ulonglong)*(uint *)(uVar3 - 0x50);
        pvVar17 = (void *)FUN_14955d750(*param_4,uVar18 + 1);
        if (pvVar17 == (void *)0x0) goto LAB_149586d2e;
        memcpy(pvVar17,pvVar12,uVar18);
        *(undefined1 *)((longlong)pvVar17 + uVar18) = 0;
      }
      **(undefined8 **)(uVar3 - 0x10) = pvVar17;
      goto switchD_14958691d_caseD_144;
    }
    uVar11 = 0;
    goto LAB_149586d3b;
  case 0x129:
    uVar10 = *(undefined8 *)(uVar3 - 0x28);
    uVar11 = *(undefined8 *)(uVar3 - 0x10);
    puVar9 = *(undefined1 **)(uVar3 + 8);
    local_d8 = (undefined1 **)0x0;
    goto LAB_149587e93;
  case 0x12a:
    local_d8 = (undefined1 **)(uVar3 - 0x70);
    uVar11 = *(undefined8 *)(uVar3 + 8);
    FUN_14959ac44(param_4,uVar11,*(undefined8 *)(uVar3 - 0x28),*(undefined8 *)(uVar3 - 0x10));
LAB_1495883ca:
    *(undefined8 *)(uVar3 - 0x70) = uVar11;
    break;
  case 299:
    lVar32 = *(longlong *)(uVar3 - 0x10);
    lVar16 = *(longlong *)(uVar3 + 8);
    if (lVar16 == 0) {
      if (lVar32 != 0) {
        FUN_149582d29(*param_4);
      }
    }
    else {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      *(longlong *)(lVar16 + 0x18) = lVar32;
    }
    *(longlong *)(uVar3 - 0x40) = lVar16;
    break;
  case 300:
    local_d8 = (undefined1 **)(uVar3 - 0x58);
    uVar11 = *(undefined8 *)(uVar3 - 0x10);
    puVar9 = *(undefined1 **)(uVar3 + 8);
    uVar10 = 0;
LAB_149587e93:
    FUN_14959ac44(param_4,puVar9,uVar10,uVar11);
LAB_149587e98:
    *(undefined1 **)(uVar3 - 0x58) = puVar9;
    break;
  case 0x12e:
    lVar32 = *(longlong *)(uVar3 + 8);
    if (lVar32 != 0) {
      *(undefined8 *)(lVar32 + 0x10) = 0;
      *(undefined8 *)(lVar32 + 0x18) = 0;
      if ((longlong *)(uVar3 - 0x10) != (longlong *)0x0) {
        pvVar12 = *(void **)(uVar3 - 0x10);
        if (pvVar12 == (void *)0x0) {
LAB_149586d98:
          pvVar17 = (void *)0x0;
        }
        else {
          local_a0 = (undefined8 *)(ulonglong)*(uint *)(uVar3 - 8);
          pvVar17 = (void *)FUN_14955d750(*param_4,(longlong)local_a0 + 1);
          puVar15 = local_a0;
          if (pvVar17 == (void *)0x0) goto LAB_149586d98;
          memcpy(pvVar17,pvVar12,(size_t)local_a0);
          *(undefined1 *)((longlong)pvVar17 + (longlong)puVar15) = 0;
        }
        *(void **)(lVar32 + 8) = pvVar17;
      }
    }
    *(longlong *)(uVar3 - 0x10) = lVar32;
    break;
  case 0x12f:
    local_c8 = (ulonglong)local_c8._1_7_ << 8;
    puStack_d0 = (undefined1 *)0x0;
    local_d8 = (undefined1 **)CONCAT44(uVar5,0x55);
    uVar11 = FUN_14959acd7(param_4,0,0x5a,0);
    *(undefined8 *)(uVar3 + 0x20) = uVar11;
    break;
  case 0x130:
    local_c8 = CONCAT71(local_c8._1_7_,*(undefined1 *)(uVar3 + 8));
    puStack_d0 = (undefined1 *)0x0;
    local_d8 = (undefined1 **)CONCAT44(uVar5,0x55);
    uVar11 = FUN_14959acd7(param_4,*(undefined4 *)(uVar3 - 0x28),*(undefined4 *)(uVar3 - 0x10),
                           *(undefined8 *)(uVar3 - 8));
LAB_1495869d5:
    *(undefined8 *)(uVar3 - 0x28) = uVar11;
    break;
  case 0x131:
    puStack_d0 = *(undefined1 **)(uVar3 - 8);
    local_c8 = CONCAT71(local_c8._1_7_,*(undefined1 *)(uVar3 + 8));
    local_d8 = (undefined1 **)CONCAT44(uVar5,*(undefined4 *)(uVar3 - 0x10));
    uVar11 = FUN_14959acd7(param_4,*(undefined4 *)(uVar3 - 0x70),*(undefined4 *)(uVar3 - 0x40),
                           *(undefined8 *)(uVar3 - 0x38));
LAB_1495883f0:
    *(undefined8 *)(uVar3 - 0x70) = uVar11;
    break;
  case 0x134:
  case 0x136:
  case 0x138:
    *(ulonglong *)(uVar3 - 0x10) = (ulonglong)*(ushort *)(uVar3 - 0x16);
    *(undefined8 *)(uVar3 - 8) = 0;
    break;
  case 0x137:
    uVar11 = *(undefined8 *)(uVar3 - 0x10);
    *(ulonglong *)(uVar3 - 0x10) = (ulonglong)*(ushort *)(uVar3 + 2);
    *(undefined8 *)(uVar3 - 8) = uVar11;
    break;
  case 0x139:
    *(undefined1 *)(uVar3 + 0x20) = 0;
    break;
  case 0x13a:
    uVar4 = *(undefined1 *)(uVar3 + 8);
    goto LAB_149586ab0;
  case 0x13b:
  case 0x13c:
    uVar4 = *(undefined1 *)(uVar3 - 0x16);
LAB_149586ab0:
    *(undefined1 *)(uVar3 - 0x10) = uVar4;
    break;
  case 0x13d:
    *(undefined1 *)(uVar3 + 8) = *(undefined1 *)(uVar3 + 2);
    break;
  case 0x13f:
    *(undefined8 *)(*(longlong *)(uVar3 + 8) + 0x48) = *(undefined8 *)(uVar3 - 0x10);
    goto switchD_14958691d_caseD_7b;
  case 0x141:
    if (*param_4 == 0) {
      pvVar12 = (void *)FUN_145e3bd67(0x90);
    }
    else {
      pvVar12 = (void *)FUN_14955d750();
    }
    if (pvVar12 == (void *)0x0) {
      if (*(longlong *)(uVar3 + 8) != 0) {
        FUN_14958288e(*param_4);
      }
    }
    else {
      memset(pvVar12,0,0x90);
      *(undefined1 *)((longlong)pvVar12 + 0x20) = 0xa3;
      *(undefined8 *)((longlong)pvVar12 + 0x48) = *(undefined8 *)(uVar3 + 8);
    }
    *(void **)(uVar3 + 8) = pvVar12;
    break;
  case 0x142:
    puVar15 = *(undefined8 **)(uVar3 - 0x10);
LAB_149586dba:
    *(undefined8 **)(uVar3 - 0x40) = puVar15;
    break;
  case 0x143:
    if (*param_4 == 0) {
      pvVar12 = (void *)FUN_145e3bd67(0x90);
    }
    else {
      pvVar12 = (void *)FUN_14955d750();
    }
    if (pvVar12 == (void *)0x0) {
      *(undefined8 *)(uVar3 - 0x10) = 0;
    }
    else {
      pvVar17 = (void *)0x0;
      memset(pvVar12,0,0x90);
      *(void **)(uVar3 - 0x10) = pvVar12;
      pvVar12 = *(void **)(uVar3 + 8);
      if (pvVar12 != (void *)0x0) {
        uVar18 = (ulonglong)*(uint *)(uVar3 + 0x10);
        pvVar17 = (void *)FUN_14955d750(*param_4,uVar18 + 1);
        if (pvVar17 == (void *)0x0) {
          pvVar17 = (void *)0x0;
        }
        else {
          memcpy(pvVar17,pvVar12,uVar18);
          *(undefined1 *)((longlong)pvVar17 + uVar18) = 0;
        }
      }
      **(undefined8 **)(uVar3 - 0x10) = pvVar17;
    }
    break;
  case 0x144:
switchD_14958691d_caseD_144:
    uVar11 = *(undefined8 *)(uVar3 - 0x10);
LAB_149586d3b:
    *(undefined8 *)(uVar3 - 0x58) = uVar11;
  }
switchD_14958691d_caseD_da:
  uVar21 = *(ushort *)(&DAT_14bd45fe0 + uVar31 * 2);
  puVar22 = (undefined2 *)((longlong)cVar2 * 0x18 + 0x18 + uVar3);
  uVar20 = *(undefined2 *)
            (&DAT_14bd44950 +
            ((longlong)*(short *)(&DAT_14bd49380 + (ulonglong)(ushort)puVar22[-0xc] * 2) +
            (ulonglong)uVar21) * 2);
  *param_1 = (ulonglong)puVar22;
  *puVar22 = uVar20;
  puVar22[1] = uVar21;
LAB_14958696b:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
switchD_14958691d_caseD_83:
  uVar11 = *(undefined8 *)(uVar3 + 8);
  goto LAB_1495869d5;
switchD_14958691d_caseD_7b:
  uVar11 = *(undefined8 *)(uVar3 + 8);
  goto LAB_149586ccf;
switchD_14958691d_caseD_29:
  if ((param_4[0x28] != 0) && (lVar32 = *(longlong *)(param_4[0x28] + 0x20), lVar32 != 0)) {
    *(char *)(lVar32 + 0x2c) = (char)*(undefined4 *)(uVar3 + 8);
  }
  goto switchD_14958691d_caseD_da;
}



// FUNCTION 14958902f FUN_14958902f body=249 status=ok
// SIG undefined FUN_14958902f(void)

void FUN_14958902f(longlong param_1,ushort param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (0x6b < param_2 - 200) {
    return;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  switch((uint)param_2) {
  case 200:
  case 0xea:
  case 0xeb:
  case 0xf7:
    if (*param_3 != 0) {
      FUN_149582a1c(*puVar1,*param_3,1);
      return;
    }
    break;
  case 0xd3:
  case 0xd4:
  case 0xf1:
  case 0xf3:
  case 0xff:
  case 0x10f:
  case 0x111:
  case 0x114:
  case 0x11b:
  case 0x120:
  case 0x12e:
    lVar3 = *param_3;
    goto LAB_149589070;
  case 0xd8:
  case 0xe2:
  case 0xe3:
  case 0xef:
  case 0xf2:
  case 0xf4:
  case 0xf8:
  case 0xf9:
  case 0x101:
  case 0x106:
  case 0x10e:
  case 0x110:
  case 0x12d:
    if (*param_3 != 0) {
      FUN_149582d29(*puVar1);
      return;
    }
    break;
  case 0xe9:
  case 0xf0:
  case 0xfb:
  case 0xfc:
  case 0x102:
    FUN_149582b1a(*puVar1,*param_3);
    return;
  case 0xec:
    FUN_149582c24(*puVar1,*param_3);
    return;
  case 0xf6:
  case 0x129:
    lVar3 = *param_3;
    if (lVar3 != 0) {
      uVar2 = *puVar1;
      do {
        lVar3 = *(longlong *)(lVar3 + 0x40);
        FUN_149582958(uVar2);
      } while (lVar3 != 0);
    }
    break;
  case 0x100:
  case 0x103:
  case 0x108:
    lVar3 = *param_3;
    goto LAB_1495890f2;
  case 0x10a:
  case 0x12a:
  case 299:
  case 300:
  case 0x12f:
    FUN_149582958(*puVar1,*param_3);
    return;
  case 0x117:
  case 0x11c:
    FUN_149586165(*puVar1,*param_3);
    return;
  case 0x119:
    lVar3 = param_3[1];
LAB_1495890f2:
    FUN_149582cb1(*puVar1,lVar3);
    return;
  case 0x131:
  case 0x132:
  case 0x133:
    lVar3 = param_3[1];
LAB_149589070:
    if (lVar3 != 0) {
      FUN_14958288e(*puVar1);
      return;
    }
  }
  return;
}



// FUNCTION 149589128 FUN_149589128 body=82 status=ok
// SIG undefined FUN_149589128(void)

void FUN_149589128(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1[1];
  plVar2 = (longlong *)*param_1;
  while (param_1 + 2 < plVar2) {
    *param_1 = (longlong)(plVar2 + -3);
    FUN_14958902f(param_1,*(undefined2 *)((longlong)plVar2 + 2),plVar2 + 1);
    plVar2 = (longlong *)*param_1;
  }
  FUN_14955a364(lVar1,"parser stack overflow");
  param_1[1] = lVar1;
  return;
}



// FUNCTION 14958917a FUN_14958917a body=675 status=ok
// SIG undefined FUN_14958917a(void)

void FUN_14958917a(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  
  if (*(char *)((longlong)param_1 + 0x1e) != '\0') {
    return;
  }
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0x61) == '\0') && ((int)param_1[6] == 0)) {
    plVar8 = (longlong *)param_1[2];
    if (plVar8 == (longlong *)0x0) {
      if ((param_1[0x14] == 0) && ((*(byte *)(lVar1 + 0x5c) & 8) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23) = 1;
      }
      plVar8 = (longlong *)FUN_14955a44a(param_1);
      if (plVar8 == (longlong *)0x0) goto LAB_1495891b6;
    }
    FUN_149584f48(plVar8,0x44,0,0,0);
    if ((*(char *)(lVar1 + 0x61) == '\0') &&
       ((*(int *)((longlong)param_1 + 0x74) != 0 || (param_1[0xb] != 0)))) {
      if (*(char *)(*plVar8 + 0x61) == '\0') {
        puVar9 = (undefined1 *)plVar8[0x11];
      }
      else {
        puVar9 = &DAT_14cc1ee40;
      }
      *(int *)(puVar9 + 8) = (int)plVar8[0x12];
      if (0 < *(int *)(lVar1 + 0x28)) {
        lVar12 = 0;
        uVar10 = 0;
        do {
          uVar5 = 1 << ((byte)uVar10 & 0x1f);
          if ((*(uint *)((longlong)param_1 + 0x74) >> ((uint)uVar10 & 0x1f) & 1) != 0) {
            *(uint *)((longlong)plVar8 + 0xcc) = *(uint *)((longlong)plVar8 + 0xcc) | uVar5;
            if ((uVar10 != 1) &&
               (*(char *)(*(longlong *)(*(longlong *)(*plVar8 + 0x20) + 8 + lVar12) + 0x11) != '\0')
               ) {
              *(uint *)(plVar8 + 0x1a) = *(uint *)(plVar8 + 0x1a) | uVar5;
            }
            puVar2 = *(undefined4 **)(*(longlong *)(lVar1 + 0x20) + 0x18 + lVar12);
            uVar7 = puVar2[1];
            iVar6 = FUN_149584f48(plVar8,2,uVar10 & 0xffffffff,
                                  (*(uint *)(param_1 + 0xe) >> ((uint)uVar10 & 0x1f) & 1) != 0,
                                  *puVar2);
            if (*(char *)(*plVar8 + 0x61) == '\0') {
              lVar3 = plVar8[0x11];
              *(undefined1 *)(lVar3 + 1 + (longlong)iVar6 * 0x18) = 0xfd;
              *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar6 * 0x18) = uVar7;
            }
            if ((*(char *)(lVar1 + 0xb5) == '\0') && (0 < (longlong)(int)plVar8[0x12])) {
              *(undefined2 *)(plVar8[0x11] + -0x16 + (longlong)(int)plVar8[0x12] * 0x18) = 1;
            }
          }
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 0x20;
        } while ((longlong)uVar10 < (longlong)*(int *)(lVar1 + 0x28));
      }
      if (0 < (int)param_1[0x23]) {
        lVar12 = 0;
        do {
          for (plVar11 = *(longlong **)(*(longlong *)(param_1[0x2e] + lVar12 * 8) + 0x60);
              (plVar11 != (longlong *)0x0 && (*plVar11 != lVar1)); plVar11 = (longlong *)plVar11[5])
          {
          }
          uVar7 = FUN_149584f48(plVar8,0xa2,0,0,0);
          FUN_14955a5b6(plVar8,uVar7);
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)param_1[0x23]);
      }
      *(undefined4 *)(param_1 + 0x23) = 0;
      FUN_14959ae18(param_1);
      FUN_14959aec6(param_1);
      piVar4 = (int *)param_1[0xb];
      if ((piVar4 != (int *)0x0) && (*(undefined1 *)((longlong)param_1 + 0x23) = 0, 0 < *piVar4)) {
        piVar13 = piVar4 + 2;
        lVar12 = 0;
        do {
          FUN_14959afe0(param_1,*(undefined8 *)piVar13,piVar13[6]);
          lVar12 = lVar12 + 1;
          piVar13 = piVar13 + 8;
        } while (lVar12 < *piVar4);
      }
      FUN_149584f48(plVar8,0xb,0,1,0);
    }
    if (((int)param_1[6] == 0) && (*(char *)(lVar1 + 0x61) == '\0')) {
      FUN_14955a62a(plVar8,param_1);
      *(undefined4 *)(param_1 + 3) = 0x65;
      return;
    }
  }
  else if ((int)param_1[3] != 0) {
    return;
  }
LAB_1495891b6:
  *(undefined4 *)(param_1 + 3) = 1;
  return;
}



// FUNCTION 14958941d FUN_14958941d body=261 status=ok
// SIG undefined FUN_14958941d(void)

void FUN_14958941d(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  uVar7 = 0;
  iVar2 = FUN_1495a2d6b(param_1,0x16,"BEGIN",0,0);
  if (iVar2 == 0) {
    plVar4 = (longlong *)param_1[2];
    if (plVar4 == (longlong *)0x0) {
      if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23) = 1;
      }
      plVar4 = (longlong *)FUN_14955a44a(param_1);
      if (plVar4 == (longlong *)0x0) {
        return;
      }
    }
    if ((param_2 != 7) && (0 < *(int *)(lVar1 + 0x28))) {
      lVar6 = 8;
      uVar5 = 0;
      do {
        uVar7 = uVar7 & 0xffffffff00000000;
        FUN_149584f48(plVar4,2,uVar5 & 0xffffffff,(param_2 == 9) + '\x01',uVar7);
        uVar3 = 1 << ((byte)uVar5 & 0x1f);
        *(uint *)((longlong)plVar4 + 0xcc) = *(uint *)((longlong)plVar4 + 0xcc) | uVar3;
        if ((uVar5 != 1) &&
           (*(char *)(*(longlong *)(*(longlong *)(*plVar4 + 0x20) + lVar6) + 0x11) != '\0')) {
          *(uint *)(plVar4 + 0x1a) = *(uint *)(plVar4 + 0x1a) | uVar3;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while ((longlong)uVar5 < (longlong)*(int *)(lVar1 + 0x28));
    }
    FUN_149584f48(plVar4,1,0,0,uVar7 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 149589522 FUN_149589522 body=150 status=ok
// SIG undefined FUN_149589522(void)

void FUN_149589522(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  pcVar3 = "COMMIT";
  if (param_2 == 0xc) {
    pcVar3 = "ROLLBACK";
  }
  uVar4 = 0;
  iVar1 = FUN_1495a2d6b(param_1,0x16,pcVar3,0,0);
  if (iVar1 == 0) {
    lVar2 = param_1[2];
    if (lVar2 == 0) {
      if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23) = 1;
      }
      lVar2 = FUN_14955a44a(param_1);
      if (lVar2 == 0) {
        return;
      }
    }
    FUN_149584f48(lVar2,1,1,param_2 == 0xc,uVar4 & 0xffffffff00000000);
  }
  return;
}



// FUNCTION 1495895b8 FUN_1495895b8 body=208 status=ok
// SIG undefined FUN_1495895b8(void)

void FUN_1495895b8(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar3 = FUN_14958faeb(*param_1,param_3);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar4 = FUN_14955a44a(param_1);
    if (lVar4 == 0) goto LAB_149589674;
  }
  uVar5 = 0;
  iVar1 = FUN_1495a2d6b(param_1,0x20,
                        &DAT_14bd46524 + *(int *)(&DAT_14bd46524 + (ulonglong)param_2 * 4),lVar3,0);
  if (iVar1 == 0) {
    uVar2 = FUN_149584f48(lVar4,0,param_2,0,uVar5 & 0xffffffff00000000);
    FUN_14955a5b6(lVar4,uVar2,lVar3,0xfffffff9);
    return;
  }
LAB_149589674:
  FUN_14955d65a(*param_1,lVar3);
  return;
}



// FUNCTION 149589688 FUN_149589688 body=1533 status=ok
// SIG undefined FUN_149589688(void)

void FUN_149589688(longlong *param_1,char *param_2,longlong param_3,int param_4,uint param_5,
                  uint param_6,int param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 *puVar13;
  char *pcVar14;
  uint uVar15;
  ulonglong uVar16;
  char *pcVar17;
  int iVar18;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint local_64;
  ulonglong local_60;
  longlong local_58;
  char *local_50;
  ulonglong local_48;
  
  local_64 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0xb5) == '\0') || (*(int *)(lVar1 + 0xb0) != 1)) {
    uVar6 = FUN_1495a2df6(param_1,param_2,param_3,&local_50);
    if ((int)uVar6 < 0) goto LAB_149589869;
    uVar16 = (ulonglong)uVar6;
    if (((param_4 != 0) && (uVar16 = 1, uVar6 != 1)) && (*(int *)(param_3 + 8) != 0)) {
      FUN_14955a364(param_1,"temporary table name must be unqualified");
      goto LAB_1495898ea;
    }
    pcVar14 = (char *)FUN_14958faeb(lVar1,local_50);
    param_2 = local_50;
    if (1 < *(byte *)((longlong)param_1 + 0x114)) {
      FUN_14958fa77(param_1,pcVar14,local_50);
    }
  }
  else {
    uVar16 = (ulonglong)*(byte *)(lVar1 + 0xb4);
    pcVar14 = "sqlite_master";
    if (*(byte *)(lVar1 + 0xb4) == 1) {
      pcVar14 = "sqlite_temp_master";
    }
    pcVar14 = (char *)FUN_149559683(lVar1,pcVar14);
  }
  uVar8 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar8;
  *(undefined4 *)(param_1 + 0x1f) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar4;
  if (pcVar14 == (char *)0x0) goto LAB_149589869;
  pcVar17 = "view";
  if (param_5 == 0) {
    pcVar17 = "table";
  }
  iVar5 = FUN_1495a2e5f(param_1,pcVar14,pcVar17,pcVar14);
  if (iVar5 != 0) goto LAB_149589b3c;
  if (*(char *)(lVar1 + 0xb4) == '\x01') {
    param_4 = 1;
  }
  uVar6 = (uint)uVar16;
  local_58 = uVar16 * 0x20;
  local_78 = *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + local_58);
  pcVar17 = "sqlite_master";
  if (param_4 == 1) {
    pcVar17 = "sqlite_temp_master";
  }
  local_60 = local_78;
  iVar5 = FUN_1495a2d6b(param_1,0x12,pcVar17,0);
  if (iVar5 != 0) goto LAB_149589b3c;
  if (local_64 == 0) {
    local_78 = local_60;
    iVar5 = FUN_1495a2d6b(param_1,(&DAT_14bd46561)[(longlong)param_4 + (longlong)(int)param_5 * 2],
                          pcVar14,0);
    if (iVar5 != 0) goto LAB_149589b3c;
  }
  if (*(char *)((longlong)param_1 + 0x114) == '\0') {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + local_58);
    iVar5 = FUN_14958537a(param_1);
    if (iVar5 != 0) goto LAB_149589b3c;
    lVar9 = FUN_14955d004(lVar1,pcVar14,uVar2);
    if (lVar9 == 0) {
      lVar9 = FUN_149581e2b(lVar1,pcVar14,uVar2);
      if (lVar9 == 0) goto LAB_14958983a;
      pcVar17 = "there is already an index named %s";
      param_2 = pcVar14;
    }
    else {
      if (param_7 != 0) {
        plVar11 = (longlong *)param_1[0x14];
        if ((longlong *)param_1[0x14] == (longlong *)0x0) {
          plVar11 = param_1;
        }
        if (((*(uint *)((longlong)plVar11 + 0x74) >> (uVar6 & 0x1f) & 1) == 0) &&
           (*(uint *)((longlong)plVar11 + 0x74) =
                 *(uint *)((longlong)plVar11 + 0x74) | 1 << ((byte)uVar16 & 0x1f), uVar6 == 1)) {
          FUN_14955dea7(plVar11);
        }
        goto LAB_149589b3c;
      }
      pcVar17 = "table %T already exists";
    }
    FUN_14955a364(param_1,pcVar17,param_2);
  }
  else {
LAB_14958983a:
    if (lVar1 == 0) {
      puVar10 = (undefined8 *)FUN_145e3bd67(0x80);
    }
    else {
      puVar10 = (undefined8 *)FUN_14955d750(lVar1,0x80);
    }
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[5] = 0;
      puVar10[6] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[0xf] = 0;
      *puVar10 = pcVar14;
      *(undefined2 *)((longlong)puVar10 + 0x44) = 0xffff;
      puVar10[0xe] = *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x18 + local_58);
      *(undefined4 *)((longlong)puVar10 + 0x3c) = 1;
      *(undefined2 *)((longlong)puVar10 + 0x4a) = 200;
      param_1[0x28] = (longlong)puVar10;
      if ((*(char *)((longlong)param_1 + 0x1e) == '\0') &&
         (iVar5 = strcmp(pcVar14,"sqlite_sequence"), iVar5 == 0)) {
        *(undefined8 **)(puVar10[0xe] + 0x68) = puVar10;
      }
      if (*(char *)(lVar1 + 0xb5) != '\0') {
LAB_149589869:
        if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
      plVar11 = (longlong *)param_1[2];
      if (plVar11 == (longlong *)0x0) {
        if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
          *(undefined1 *)((longlong)param_1 + 0x23) = 1;
        }
        plVar11 = (longlong *)FUN_14955a44a(param_1);
        if (plVar11 == (longlong *)0x0) goto LAB_149589869;
      }
      FUN_1495a3043(param_1,1,uVar16);
      if (local_64 != 0) {
        local_78 = local_78 & 0xffffffff00000000;
        FUN_149584f48(plVar11,0xa2,0,0);
      }
      iVar18 = (int)param_1[7];
      iVar5 = iVar18 + 1;
      *(int *)(param_1 + 0xf) = iVar5;
      local_60 = CONCAT44(local_60._4_4_,iVar18 + 2);
      *(int *)((longlong)param_1 + 0x7c) = iVar18 + 2;
      iVar18 = iVar18 + 3;
      *(int *)(param_1 + 7) = iVar18;
      local_78._0_4_ = 2;
      FUN_149584f48(plVar11,0x5d,uVar16,iVar18);
      uVar15 = 1 << ((byte)uVar16 & 0x1f);
      *(uint *)((longlong)plVar11 + 0xcc) = *(uint *)((longlong)plVar11 + 0xcc) | uVar15;
      if ((uVar6 != 1) &&
         (*(char *)(*(longlong *)(*(longlong *)(*plVar11 + 0x20) + 8 + local_58) + 0x11) != '\0')) {
        *(uint *)(plVar11 + 0x1a) = *(uint *)(plVar11 + 0x1a) | uVar15;
      }
      local_78._0_4_ = 0;
      iVar7 = FUN_149584f48(plVar11,0x12,iVar18,0);
      local_78._0_4_ = (uint)((*(byte *)(lVar1 + 0x30) & 2) == 0) * 3 + 1;
      FUN_149584f48(plVar11,0x5e,uVar16,2);
      local_78._0_4_ = (uint)*(byte *)(lVar1 + 0x5e);
      FUN_149584f48(plVar11,0x5e,uVar16,5);
      if (*(char *)(*plVar11 + 0x61) == '\0') {
        iVar12 = (int)plVar11[0x12] + -1;
        if (-1 < iVar7) {
          iVar12 = iVar7;
        }
        puVar13 = (undefined1 *)((longlong)iVar12 * 0x18 + plVar11[0x11]);
      }
      else {
        puVar13 = &DAT_14cc1ee40;
      }
      *(int *)(puVar13 + 8) = (int)plVar11[0x12];
      local_64 = local_64 | param_5;
      if (local_64 == 0) {
        local_78 = CONCAT44(local_78._4_4_,1);
        uVar8 = FUN_149584f48(plVar11,0x8b,uVar16,local_60 & 0xffffffff);
        *(undefined4 *)(param_1 + 0x17) = uVar8;
      }
      else {
        local_78 = (ulonglong)local_78._4_4_ << 0x20;
        FUN_149584f48(plVar11,0x45,0,local_60 & 0xffffffff);
      }
      FUN_1495a3091(param_1,uVar16);
      local_78 = local_78 & 0xffffffff00000000;
      FUN_149584f48(plVar11,0x78,0,iVar5);
      local_78 = local_78 & 0xffffffff00000000;
      uVar8 = FUN_149584f48(plVar11,0x4a,6,iVar18);
      FUN_14955a5b6(plVar11,uVar8,&DAT_14bd465b0,0xffffffff);
      local_78._0_4_ = iVar5;
      FUN_149584f48(plVar11,0x79,0,iVar18);
      if (0 < (longlong)(int)plVar11[0x12]) {
        *(undefined2 *)(plVar11[0x11] + -0x16 + (longlong)(int)plVar11[0x12] * 0x18) = 8;
      }
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      FUN_149584f48(plVar11,0x74,0,0);
LAB_1495898ea:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    *(undefined4 *)(param_1 + 3) = 7;
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
  }
LAB_149589b3c:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 149589ca3 FUN_149589ca3 body=2452 status=ok
// SIG undefined FUN_149589ca3(void)

void FUN_149589ca3(longlong *param_1,longlong *param_2,longlong *param_3,char param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ushort uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  longlong lVar19;
  byte bVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  char *pcVar23;
  longlong *plVar24;
  undefined1 *puVar25;
  bool bVar26;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong *local_c0;
  int local_b4;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  char *local_98;
  int local_8c;
  ulonglong local_88;
  undefined1 local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_3 == (longlong *)0x0 && param_5 == 0) ||
     (puVar3 = (undefined8 *)param_1[0x28], puVar3 == (undefined8 *)0x0)) goto LAB_149589cef;
  plVar24 = (longlong *)*param_1;
  if (param_5 == 0) {
    iVar6 = FUN_1495a3174(plVar24,*puVar3);
    if (iVar6 != 0) {
      *(byte *)((longlong)puVar3 + 0x41) = *(byte *)((longlong)puVar3 + 0x41) | 0x10;
    }
    if ((*(char *)((longlong)plVar24 + 0xb5) != '\0') &&
       (lVar11 = plVar24[0x16], *(int *)(puVar3 + 7) = (int)lVar11, (int)lVar11 == 1)) {
      *(byte *)(puVar3 + 8) = *(byte *)(puVar3 + 8) | 1;
    }
LAB_149589d89:
    if (param_4 < '\0') {
      uVar15 = *(uint *)(puVar3 + 8);
      if ((uVar15 & 8) != 0) {
        pcVar23 = "AUTOINCREMENT not allowed on WITHOUT ROWID tables";
        goto LAB_149589e8f;
      }
      if ((uVar15 & 4) == 0) {
        FUN_14955a364(param_1,"PRIMARY KEY missing on table %s",*puVar3);
        goto LAB_149589e97;
      }
      *(uint *)(puVar3 + 8) = uVar15 | 0x280;
      FUN_1495a3205(param_1,puVar3);
    }
    iVar6 = -1000000;
    if (puVar3[0xe] != 0) {
      iVar6 = -1;
      plVar10 = (longlong *)(plVar24[4] + 0x18);
      do {
        iVar6 = iVar6 + 1;
        lVar11 = *plVar10;
        plVar10 = plVar10 + 4;
      } while (lVar11 != puVar3[0xe]);
    }
    local_98 = (char *)((longlong)plVar24 + 0xb5);
    if ((puVar3[6] != 0) &&
       (local_f8 = (char *)puVar3[6], FUN_1495a371c(param_1,puVar3,4), (int)param_1[6] != 0)) {
      if (puVar3[6] != 0) {
        FUN_149582d29(plVar24);
      }
      puVar3[6] = 0;
    }
    uVar14 = *(ushort *)((longlong)puVar3 + 0x46);
    if ((*(byte *)(puVar3 + 8) & 0x60) == 0) {
LAB_149589e14:
      iVar7 = 0;
      if (0 < (short)uVar14) {
        uVar15 = uVar14 + 1;
        pbVar18 = (byte *)(puVar3[1] + 0x1a);
        iVar7 = 0;
        do {
          iVar7 = iVar7 + (uint)*pbVar18;
          uVar15 = uVar15 - 1;
          pbVar18 = pbVar18 + 0x20;
        } while (1 < uVar15);
      }
      uVar15 = ((uint)(*(ushort *)((longlong)puVar3 + 0x44) >> 0xf) + iVar7) * 4;
      uVar21 = (ulonglong)uVar15;
      if (uVar15 < 8) {
        if (uVar21 != 0) {
          sVar5 = 0x28;
          do {
            sVar5 = sVar5 + -10;
            bVar26 = uVar21 == 0;
            uVar21 = 0;
          } while (bVar26);
          uVar21 = 0;
          goto LAB_14958a01f;
        }
        sVar5 = 0;
      }
      else {
        sVar5 = 0x28;
        if (0xff < uVar15) {
          sVar5 = 0x28;
          uVar22 = uVar21;
          do {
            sVar5 = sVar5 + 0x28;
            uVar21 = uVar22 >> 4;
            bVar26 = 0xfff < uVar22;
            uVar22 = uVar21;
          } while (bVar26);
        }
        uVar22 = uVar21;
        if (0xf < uVar21) {
          do {
            sVar5 = sVar5 + 10;
            uVar21 = uVar22 >> 1;
            bVar26 = 0x1f < uVar22;
            uVar22 = uVar21;
          } while (bVar26);
        }
LAB_14958a01f:
        sVar5 = sVar5 + (&DAT_14bd41890)[(uint)uVar21 & 7] + -10;
      }
      *(short *)((longlong)puVar3 + 0x4c) = sVar5;
      for (lVar11 = puVar3[2]; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x28)) {
        FUN_1495a384f(lVar11);
      }
      if (*local_98 == '\0') {
        plVar10 = (longlong *)param_1[2];
        if (plVar10 == (longlong *)0x0) {
          if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
            *(undefined1 *)((longlong)param_1 + 0x23) = 1;
          }
          plVar10 = (longlong *)FUN_14955a44a(param_1);
          if (plVar10 == (longlong *)0x0) goto LAB_149589cef;
        }
        local_f8 = (char *)((ulonglong)local_f8 & 0xffffffff00000000);
        FUN_149584f48(plVar10,0x74,0,0);
        pcVar23 = "VIEW";
        if (puVar3[3] == 0) {
          pcVar23 = "TABLE";
        }
        local_98 = "view";
        if (puVar3[3] == 0) {
          local_98 = "table";
        }
        if (param_5 == 0) {
          plVar13 = param_1 + 0x20;
          if (param_4 == '\0') {
            plVar13 = param_3;
          }
          local_f8 = (char *)param_1[0x1e];
          iVar7 = (int)(char *)*plVar13 - (int)local_f8;
          if (*(char *)*plVar13 != ';') {
            iVar7 = iVar7 + (int)plVar13[1];
          }
          local_c0 = plVar10;
          local_a8 = param_2;
          lVar11 = FUN_14955a402(plVar24,"CREATE %s %.*s",pcVar23,iVar7);
        }
        else {
          uVar15 = *(uint *)(param_1 + 7);
          local_a0 = (ulonglong)uVar15;
          local_b4 = uVar15 + 1;
          local_8c = uVar15 + 3;
          *(int *)(param_1 + 7) = local_8c;
          plVar13 = (longlong *)param_1[0x14];
          if ((longlong *)param_1[0x14] == (longlong *)0x0) {
            plVar13 = param_1;
          }
          *(undefined1 *)((longlong)plVar13 + 0x21) = 1;
          local_f8._0_4_ = iVar6;
          FUN_149584f48(plVar10,0x61,1,*(undefined4 *)((longlong)param_1 + 0x7c));
          if (0 < (longlong)(int)plVar10[0x12]) {
            *(undefined2 *)(plVar10[0x11] + -0x16 + (longlong)(int)plVar10[0x12] * 0x18) = 0x10;
          }
          *(undefined4 *)((longlong)param_1 + 0x34) = 2;
          uVar15 = *(uint *)(plVar10 + 0x12);
          local_f8 = (char *)CONCAT44(local_f8._4_4_,uVar15 + 1);
          FUN_149584f48(plVar10,0xd,local_b4,0);
          if (((int)param_1[6] != 0) || (lVar11 = FUN_1495a391c(param_1,param_5,0x41), lVar11 == 0))
          goto LAB_149589cef;
          uVar2 = *(undefined2 *)(lVar11 + 0x46);
          *(undefined2 *)(puVar3 + 9) = uVar2;
          *(undefined2 *)((longlong)puVar3 + 0x46) = uVar2;
          puVar3[1] = *(undefined8 *)(lVar11 + 8);
          *(undefined2 *)(lVar11 + 0x46) = 0;
          *(undefined8 *)(lVar11 + 8) = 0;
          local_b0 = param_1;
          local_88 = (ulonglong)uVar15;
          if ((plVar24 == (longlong *)0x0) || (plVar24[0x5b] == 0)) {
            piVar1 = (int *)(lVar11 + 0x3c);
            *piVar1 = *piVar1 + -1;
            local_c0 = plVar10;
            local_a8 = param_2;
            if (*piVar1 == 0) goto LAB_14958a44b;
          }
          else {
LAB_14958a44b:
            local_c0 = plVar10;
            local_a8 = param_2;
            FUN_149585e6d(plVar24,lVar11);
          }
          plVar13 = local_b0;
          iVar7 = local_b4;
          local_80 = 0xd;
          local_7c = local_b4;
          local_78 = 0;
          uStack_70 = 0;
          FUN_14958cf93(local_b0,param_5);
          plVar10 = local_c0;
          if ((int)plVar13[6] != 0) goto LAB_149589cef;
          local_a0 = (ulonglong)((int)local_a0 + 2);
          local_f8 = (char *)((ulonglong)local_f8 & 0xffffffff00000000);
          FUN_149584f48(local_c0,0x42,iVar7,0);
          plVar13 = local_c0;
          *(undefined1 *)(plVar10[3] + 0x1f) = 0;
          *(undefined4 *)(plVar10[3] + 0x28) = 0;
          puVar25 = &DAT_14cc1ee40;
          puVar17 = &DAT_14cc1ee40;
          if (*(char *)(*plVar10 + 0x61) == '\0') {
            iVar7 = (int)plVar10[0x12] + -1;
            if (-1 < (int)local_88) {
              iVar7 = (int)local_88;
            }
            puVar17 = (undefined1 *)((longlong)iVar7 * 0x18 + local_c0[0x11]);
          }
          *(int *)(puVar17 + 8) = (int)plVar10[0x12];
          local_f8 = (char *)((ulonglong)local_f8 & 0xffffffff00000000);
          local_b4 = FUN_149584f48(local_c0,0xe,local_7c,0);
          uVar21 = local_a0;
          local_f8._0_4_ = (int)local_a0;
          FUN_149584f48(plVar13,0x5b,local_78 & 0xffffffff,local_78._4_4_);
          FUN_1495a3a37(plVar13,puVar3,0);
          iVar7 = local_8c;
          local_f8._0_4_ = 0;
          FUN_149584f48(plVar13,0x78,1,local_8c);
          local_f8._0_4_ = iVar7;
          FUN_149584f48(plVar13,0x79,1,uVar21 & 0xffffffff);
          iVar7 = local_b4;
          local_f8._0_4_ = 0;
          FUN_149584f48(plVar13,0xb,0);
          if (*(char *)(*plVar13 + 0x61) == '\0') {
            iVar8 = (int)plVar13[0x12] + -1;
            if (-1 < iVar7) {
              iVar8 = iVar7;
            }
            puVar25 = (undefined1 *)((longlong)iVar8 * 0x18 + local_c0[0x11]);
          }
          *(int *)(puVar25 + 8) = (int)plVar13[0x12];
          local_f8 = (char *)((ulonglong)local_f8._4_4_ << 0x20);
          FUN_149584f48(local_c0,0x74,1,0);
          lVar11 = FUN_1495a3b96(plVar24,puVar3);
          param_1 = local_b0;
        }
        local_d0 = (undefined4)param_1[0xf];
        local_e0 = *(undefined4 *)((longlong)param_1 + 0x7c);
        local_f0 = *puVar3;
        lVar19 = (longlong)iVar6 * 0x20;
        local_f8 = local_98;
        local_e8 = local_f0;
        local_d8 = lVar11;
        FUN_1495a3e15(param_1,
                      "UPDATE %Q.%s SET type=\'%s\', name=%Q, tbl_name=%Q, rootpage=#%d, sql=%Q WHERE rowid=#%d"
                      ,*(undefined8 *)(plVar24[4] + lVar19),"sqlite_master");
        if (lVar11 != 0) {
          FUN_14955d65a(plVar24,lVar11);
        }
        local_f8 = (char *)CONCAT44(local_f8._4_4_,
                                    **(int **)(*(longlong *)(*param_1 + 0x20) + 0x18 + lVar19) + 1);
        FUN_149584f48(param_1[2],0x5e,iVar6);
        if (((*(byte *)(puVar3 + 8) & 8) != 0) &&
           (*(longlong *)(*(longlong *)(plVar24[4] + 0x18 + lVar19) + 0x68) == 0)) {
          FUN_1495a3e15(param_1,"CREATE TABLE %Q.sqlite_sequence(name,seq)",
                        *(undefined8 *)(plVar24[4] + lVar19));
        }
        uVar12 = FUN_14955a402(plVar24,"tbl_name=\'%q\' AND type!=\'trigger\'",*puVar3);
        FUN_1495a3f28(local_c0,iVar6,uVar12);
        param_2 = local_a8;
        if (*(char *)((longlong)plVar24 + 0xb5) == '\0') goto LAB_149589cef;
      }
      lVar11 = FUN_14958256b(puVar3[0xe] + 8,*puVar3,puVar3);
      if (lVar11 == 0) {
        param_1[0x28] = 0;
        *(byte *)((longlong)plVar24 + 0x2c) = *(byte *)((longlong)plVar24 + 0x2c) | 1;
        if (puVar3[3] == 0) {
          pbVar18 = (byte *)param_1[0x1e];
          if (*param_2 != 0) {
            param_3 = param_2;
          }
          pbVar16 = (byte *)0xffffffffffffffff;
          if (-1 < (int)(*param_3 - (longlong)pbVar18)) {
            pbVar16 = pbVar18 + (*param_3 - (longlong)pbVar18 & 0xffffffff);
          }
          bVar20 = *pbVar18;
          iVar6 = 0xd;
          if ((bVar20 != 0) && (pbVar18 < pbVar16)) {
            iVar7 = 0;
            do {
              iVar6 = iVar7;
              if (bVar20 < 0xc0) {
                pbVar18 = pbVar18 + 1;
                bVar20 = *pbVar18;
              }
              else {
                do {
                  bVar20 = pbVar18[1];
                  pbVar18 = pbVar18 + 1;
                } while (SBORROW1('\0',bVar20 & 0xc0));
              }
            } while ((bVar20 != 0) && (iVar7 = iVar6 + 1, pbVar18 < pbVar16));
            iVar6 = iVar6 + 0xe;
          }
          *(int *)(puVar3 + 10) = iVar6;
        }
      }
      else if ((*(char *)((longlong)plVar24 + 0x61) == '\0') &&
              (*(char *)((longlong)plVar24 + 0x62) == '\0')) {
        *(undefined1 *)((longlong)plVar24 + 0x61) = 1;
        if (0 < *(int *)((longlong)plVar24 + 0xd4)) {
          *(undefined4 *)(plVar24 + 0x2e) = 1;
        }
        *(int *)(plVar24 + 0x2f) = (int)plVar24[0x2f] + 1;
        *(undefined2 *)((longlong)plVar24 + 0x17c) = 0;
        if (plVar24[0x27] != 0) {
          *(undefined4 *)(plVar24[0x27] + 0x18) = 7;
        }
      }
LAB_149589cef:
      if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if (0 < (short)uVar14) {
      lVar19 = 0;
      lVar11 = 8;
      iVar7 = 0;
      local_c0 = plVar24;
      local_b0 = param_1;
      local_a8 = param_2;
      do {
        if ((*(byte *)(puVar3[1] + 0x14 + lVar11) & 0x60) == 0) {
          iVar7 = iVar7 + 1;
        }
        else {
          lVar4 = *(longlong *)(puVar3[1] + lVar11);
          local_f8 = (char *)0x0;
          iVar8 = FUN_1495a371c(local_b0,puVar3,8);
          if (iVar8 != 0) {
            if (lVar4 != 0) {
              FUN_14958288e(local_c0,lVar4);
            }
            puVar9 = (undefined8 *)FUN_14955d750(local_c0,0x48);
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[6] = 0;
              puVar9[7] = 0;
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              puVar9[8] = 0;
              *(undefined1 *)puVar9 = 0x77;
              *(undefined2 *)((longlong)puVar9 + 0x32) = 0xffff;
              *(undefined4 *)(puVar9 + 5) = 1;
            }
            *(undefined8 **)(puVar3[1] + lVar11) = puVar9;
          }
        }
        lVar19 = lVar19 + 1;
        uVar14 = *(ushort *)((longlong)puVar3 + 0x46);
        lVar11 = lVar11 + 0x20;
      } while (lVar19 < (short)uVar14);
      param_2 = local_a8;
      plVar24 = local_c0;
      param_1 = local_b0;
      if (iVar7 != 0) goto LAB_149589e14;
    }
    pcVar23 = "must have at least one non-generated column";
  }
  else {
    if (*(char *)((longlong)plVar24 + 0xb5) == '\0') goto LAB_149589d89;
    pcVar23 = "";
  }
LAB_149589e8f:
  FUN_14955a364(param_1,pcVar23);
LAB_149589e97:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
}



// FUNCTION 14958a63d FUN_14958a63d body=640 status=ok
// SIG undefined FUN_14958a63d(void)

void FUN_14958a63d(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 uVar5;
  byte *_Str;
  longlong lVar6;
  size_t sVar7;
  short sVar8;
  uint uVar9;
  byte *_Dst;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  
  puVar2 = (undefined8 *)param_1[0x28];
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x84) <= (int)*(short *)((longlong)puVar2 + 0x46)) {
    FUN_14955a364(param_1,"too many columns on %s",*puVar2);
    return;
  }
  if (lVar3 == 0) {
    _Str = (byte *)FUN_145e3bd67(*(int *)(param_2 + 1) + *(int *)(param_3 + 1) + 2);
  }
  else {
    _Str = (byte *)FUN_14955d750(lVar3);
  }
  if (_Str == (byte *)0x0) {
    return;
  }
  if (1 < *(byte *)((longlong)param_1 + 0x114)) {
    FUN_14958fa77(param_1,_Str,param_2);
  }
  memcpy(_Str,(void *)*param_2,(ulonglong)*(uint *)(param_2 + 1));
  _Str[*(uint *)(param_2 + 1)] = 0;
  bVar12 = *_Str;
  if ((char)(&DAT_14bd400b0)[bVar12] < '\0') {
    bVar4 = 0x5d;
    if (bVar12 != 0x5b) {
      bVar4 = bVar12;
    }
    iVar10 = 1;
    uVar11 = 0;
    do {
      bVar12 = _Str[iVar10];
      if (_Str[iVar10] == bVar4) {
        if (_Str[(longlong)iVar10 + 1] != bVar4) goto LAB_14958a7f7;
        iVar10 = iVar10 + 1;
        bVar12 = bVar4;
      }
      _Str[uVar11] = bVar12;
      uVar11 = uVar11 + 1;
      iVar10 = iVar10 + 1;
    } while( true );
  }
LAB_14958a6fe:
  sVar8 = *(short *)((longlong)puVar2 + 0x46);
  uVar9 = (uint)sVar8;
  if (0 < sVar8) {
    uVar11 = 0;
    do {
      lVar6 = *(longlong *)(puVar2[1] + uVar11 * 0x20);
      if (lVar6 != 0) {
        lVar13 = 0;
        do {
          bVar12 = _Str[lVar13];
          bVar4 = *(byte *)(lVar6 + lVar13);
          if (bVar12 == bVar4) {
            if ((ulonglong)bVar12 == 0) {
              FUN_14955a364(param_1,"duplicate column name: %s",_Str);
              goto LAB_14958a814;
            }
          }
          else if ((&DAT_14bd3ff30)[bVar12] != (&DAT_14bd3ff30)[bVar4]) break;
          lVar13 = lVar13 + 1;
        } while( true );
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar9);
  }
  if ((uVar9 & 7) == 0) {
    lVar6 = FUN_14955d6fd(lVar3,puVar2[1],(longlong)(int)uVar9 * 0x20 + 0x100);
    if (lVar6 == 0) {
LAB_14958a814:
      FUN_14955d65a(lVar3,_Str);
      return;
    }
    puVar2[1] = lVar6;
    sVar8 = *(short *)((longlong)puVar2 + 0x46);
  }
  else {
    lVar6 = puVar2[1];
  }
  lVar13 = (longlong)sVar8 * 0x20;
  lVar3 = lVar6 + lVar13;
  puVar1 = (undefined8 *)(lVar6 + 8 + lVar13);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar13) = 0;
  *(byte **)(lVar6 + lVar13) = _Str;
  uVar9 = *(uint *)(param_3 + 1);
  if ((ulonglong)uVar9 == 0) {
    *(undefined1 *)(lVar3 + 0x1a) = 1;
    uVar5 = 0x41;
  }
  else {
    sVar7 = strlen((char *)_Str);
    uVar11 = (ulonglong)((uint)sVar7 & 0x3fffffff);
    _Dst = _Str + uVar11 + 1;
    memcpy(_Dst,(void *)*param_3,(ulonglong)uVar9);
    _Str[(ulonglong)*(uint *)(param_3 + 1) + 1 + uVar11] = 0;
    FUN_1495a976e(_Dst);
    uVar5 = FUN_14959d0ed(_Dst,lVar3);
    *(byte *)(lVar3 + 0x1c) = *(byte *)(lVar3 + 0x1c) | 4;
  }
  *(undefined1 *)(lVar3 + 0x19) = uVar5;
  *(short *)((longlong)puVar2 + 0x46) = *(short *)((longlong)puVar2 + 0x46) + 1;
  *(short *)(puVar2 + 9) = *(short *)(puVar2 + 9) + 1;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
LAB_14958a7f7:
  _Str[uVar11 & 0xffffffff] = 0;
  goto LAB_14958a6fe;
}



// FUNCTION 14958a8bd FUN_14958a8bd body=535 status=ok
// SIG undefined FUN_14958a8bd(void)

void FUN_14958a8bd(longlong *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  code *pcStack_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_1;
  lVar5 = param_1[0x28];
  if (lVar5 != 0) {
    uVar4 = 4;
    if (*(char *)(lVar2 + 0xb5) != '\0') {
      uVar4 = *(char *)(lVar2 + 0xb4) == '\x01' ^ 5;
    }
    lVar5 = (longlong)*(short *)(lVar5 + 0x46) * 0x20 + *(longlong *)(lVar5 + 8);
    uStack_78._0_6_ = CONCAT24(uVar4,(undefined4)uStack_78);
    pcStack_90 = FUN_14959f99d;
    local_88 = (code *)&LAB_14959fa8c;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if (param_2 != (code *)0x0) {
      FUN_14959fa98(&local_98,param_2);
      if (uStack_78._4_2_ == 0) {
        FUN_14955a364(param_1,"default value of column [%s] is not constant",
                      *(undefined8 *)(lVar5 + -0x20));
        goto LAB_14958a8f5;
      }
    }
    if ((*(byte *)(lVar5 + -4) & 0x60) == 0) {
      if (*(longlong *)(lVar5 + -0x18) != 0) {
        FUN_14958288e(lVar2);
      }
      pcStack_90 = (code *)0x0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      local_88 = (code *)0x0;
      uStack_80 = 0;
      local_58 = 0;
      local_98 = (longlong *)0xb2;
      pcStack_90 = (code *)FUN_1495a97c9(lVar2,param_3,param_4);
      local_98 = (longlong *)CONCAT44(0x1000,(undefined4)local_98);
      local_88 = param_2;
      uVar3 = FUN_1495a1c89(lVar2,&local_98,1,0);
      *(undefined8 *)(lVar5 + -0x18) = uVar3;
      if (pcStack_90 != (code *)0x0) {
        FUN_14955d65a(lVar2);
      }
    }
    else {
      FUN_14955a364(param_1,"cannot use DEFAULT on a generated column");
    }
  }
LAB_14958a8f5:
  bVar1 = *(byte *)((longlong)param_1 + 0x114);
  if (1 < bVar1) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    pcStack_90 = (code *)&LAB_1495a984b;
    local_88 = FUN_1495a986f;
    *(undefined1 *)((longlong)param_1 + 0x114) = 3;
    local_98 = param_1;
    if (param_2 != (code *)0x0) {
      FUN_14959fa98(&local_98,param_2);
    }
    *(byte *)((longlong)param_1 + 0x114) = bVar1;
  }
  if (param_2 != (code *)0x0) {
    FUN_14958288e(lVar2,param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14958aad5 FUN_14958aad5 body=230 status=ok
// SIG undefined FUN_14958aad5(void)

undefined8 * FUN_14958aad5(longlong *param_1,undefined1 param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14955d750(*param_1,0x48);
  if (puVar2 == (undefined8 *)0x0) {
    if (param_3 != 0) {
      FUN_14958288e(*param_1,param_3);
    }
    if (param_4 != 0) {
      FUN_14958288e(*param_1,param_4);
    }
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    *(undefined1 *)puVar2 = param_2;
    *(undefined2 *)((longlong)puVar2 + 0x32) = 0xffff;
    uVar1 = 0;
    if (param_4 != 0) {
      puVar2[3] = param_4;
      uVar1 = *(uint *)(param_4 + 4) & 0x200104;
      *(uint *)((longlong)puVar2 + 4) = uVar1;
    }
    if (param_3 != 0) {
      puVar2[2] = param_3;
      *(uint *)((longlong)puVar2 + 4) = *(uint *)(param_3 + 4) & 0x200104 | uVar1;
    }
    FUN_1495ca52d(puVar2);
    if (*(int *)(*param_1 + 0x88) < *(int *)(puVar2 + 5)) {
      FUN_14955a364(param_1,"Expression tree is too large (maximum depth %d)");
    }
  }
  return puVar2;
}



// FUNCTION 14958abbb FUN_14958abbb body=217 status=ok
// SIG undefined FUN_14958abbb(void)

undefined1 * FUN_14958abbb(undefined8 *param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined1 *_Dst;
  
  puVar1 = (undefined1 *)FUN_14955d750(*param_1,(ulonglong)*(uint *)(param_3 + 1) + 0x49);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_2;
    *(undefined2 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 4) = 0x800000;
    *(undefined8 *)(puVar1 + 0x2c) = 0xffff000000000000;
    _Dst = puVar1 + 0x48;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0;
    *(undefined8 *)(puVar1 + 0x40) = 0;
    *(undefined1 **)(puVar1 + 8) = _Dst;
    memcpy(_Dst,(void *)*param_3,(ulonglong)*(uint *)(param_3 + 1));
    puVar1[(ulonglong)*(uint *)(param_3 + 1) + 0x48] = 0;
    if ((char)(&DAT_14bd400b0)[(byte)puVar1[0x48]] < '\0') {
      *(uint *)(puVar1 + 4) = (uint)(puVar1[0x48] == 0x22) << 6 | 0x4800000;
      FUN_1495a976e(_Dst);
    }
    *(undefined4 *)(puVar1 + 0x28) = 1;
    if (1 < *(byte *)((longlong)param_1 + 0x114)) {
      FUN_14958fa77(param_1,puVar1,param_3);
    }
  }
  return puVar1;
}



// FUNCTION 14958ac94 FUN_14958ac94 body=146 status=ok
// SIG undefined FUN_14958ac94(void)

undefined8 FUN_14958ac94(undefined1 *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((*(uint *)(param_1 + 4) >> 0x1a & 1) != 0) {
    return 0;
  }
  lVar3 = 0;
  do {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + lVar3);
    if (bVar1 == (&DAT_149dfbe6e)[lVar3]) {
      if ((ulonglong)bVar1 == 0) goto LAB_14958acd8;
    }
    else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)(&DAT_149dfbe6e)[lVar3]]) {
      lVar3 = 0;
      break;
    }
    lVar3 = lVar3 + 1;
  } while( true );
LAB_14958acf6:
  bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + lVar3);
  if (bVar1 == "false"[lVar3]) {
    if ((ulonglong)bVar1 == 0) goto LAB_14958ad1f;
  }
  else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[(byte)"false"[lVar3]]) {
    return 0;
  }
  lVar3 = lVar3 + 1;
  goto LAB_14958acf6;
LAB_14958ad1f:
  uVar2 = 0x20000000;
  goto LAB_14958acdd;
LAB_14958acd8:
  uVar2 = 0x10000000;
LAB_14958acdd:
  *param_1 = 0xa7;
  *(uint *)(param_1 + 4) = uVar2 | *(uint *)(param_1 + 4);
  return 1;
}



// FUNCTION 14958ad26 FUN_14958ad26 body=89 status=ok
// SIG undefined FUN_14958ad26(void)

void FUN_14958ad26(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x140);
  if ((lVar1 != 0) && (0 < *(short *)(lVar1 + 0x46))) {
    lVar3 = *(longlong *)(lVar1 + 8);
    lVar2 = (ulonglong)((int)*(short *)(lVar1 + 0x46) - 1) * 0x20;
    *(undefined1 *)(lVar3 + 0x18 + lVar2) = param_2;
    *(byte *)(lVar1 + 0x41) = *(byte *)(lVar1 + 0x41) | 8;
    if ((*(byte *)(lVar3 + 0x1c + lVar2) & 8) != 0) {
      for (lVar3 = *(longlong *)(lVar1 + 0x10); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x28)) {
        if (*(short *)(lVar1 + 0x46) + -1 == (int)**(short **)(lVar3 + 8)) {
          *(byte *)(lVar3 + 100) = *(byte *)(lVar3 + 100) | 8;
        }
      }
    }
  }
  return;
}



// FUNCTION 14958ad7f FUN_14958ad7f body=843 status=ok
// SIG undefined FUN_14958ad7f(void)

void FUN_14958ad7f(undefined8 *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined8 *puVar5;
  char *pcVar6;
  size_t sVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  bool bVar16;
  
  puVar5 = (undefined8 *)param_1[0x28];
  if (puVar5 == (undefined8 *)0x0) goto LAB_14958ada1;
  if ((*(uint *)(puVar5 + 8) & 4) != 0) {
    FUN_14955a364(param_1,"table \"%s\" has more than one primary key",*puVar5);
    goto LAB_14958ada1;
  }
  *(uint *)(puVar5 + 8) = *(uint *)(puVar5 + 8) | 4;
  if (param_2 == (int *)0x0) {
    uVar15 = (longlong)*(short *)((longlong)puVar5 + 0x46) - 1;
    lVar11 = puVar5[1];
    lVar10 = uVar15 * 0x20;
    puVar14 = (undefined8 *)(lVar11 + lVar10);
    uVar3 = *(ushort *)(lVar11 + 0x1c + lVar10);
    *(ushort *)(lVar11 + 0x1c + lVar10) = uVar3 | 1;
    bVar16 = true;
    if ((uVar3 & 0x60) != 0) {
      FUN_14955a364(param_1,"generated columns cannot be part of the PRIMARY KEY");
    }
    goto LAB_14958af95;
  }
  iVar4 = *param_2;
  if (0 < (longlong)iVar4) {
    uVar15 = 0xffffffff;
    lVar11 = 0;
    puVar13 = (undefined8 *)0x0;
LAB_14958ae96:
    for (pcVar6 = *(char **)(param_2 + lVar11 * 8 + 2); pcVar6 != (char *)0x0;
        pcVar6 = *(char **)(pcVar6 + 0x10)) {
      if ((pcVar6[5] & 0x10U) == 0) goto LAB_14958aeb4;
    }
    pcVar6 = (char *)0x0;
LAB_14958aeb4:
    cVar8 = *pcVar6;
    puVar14 = puVar13;
    if (cVar8 == 'o') {
      if (**(char **)(pcVar6 + 0x10) == 's') {
        **(char **)(pcVar6 + 0x10) = ';';
        cVar8 = *pcVar6;
        goto LAB_14958af5d;
      }
    }
    else {
      if (cVar8 == 's') {
        *pcVar6 = ';';
      }
      else {
LAB_14958af5d:
        if (cVar8 != ';') goto LAB_14958af41;
      }
      uVar9 = (uint)*(short *)((longlong)puVar5 + 0x46);
      if (0 < (int)uVar9) {
        uVar15 = 0;
LAB_14958aee4:
        puVar14 = (undefined8 *)(puVar5[1] + uVar15 * 0x20);
        lVar10 = 0;
        do {
          bVar2 = *(byte *)(*(longlong *)(pcVar6 + 8) + lVar10);
          bVar1 = *(byte *)(*(longlong *)(puVar5[1] + uVar15 * 0x20) + lVar10);
          if (bVar2 == bVar1) {
            if ((ulonglong)bVar2 == 0) {
              uVar3 = *(ushort *)((longlong)puVar14 + 0x1c);
              *(ushort *)((longlong)puVar14 + 0x1c) = uVar3 | 1;
              if ((uVar3 & 0x60) != 0) {
                FUN_14955a364(param_1,"generated columns cannot be part of the PRIMARY KEY");
              }
              goto LAB_14958af41;
            }
          }
          else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[bVar1]) goto LAB_14958af1b;
          lVar10 = lVar10 + 1;
        } while( true );
      }
      uVar15 = 0;
    }
    goto LAB_14958af41;
  }
  goto LAB_14958affe;
LAB_14958af1b:
  uVar15 = uVar15 + 1;
  if (uVar15 == (longlong)(int)uVar9) goto code_r0x00014958af26;
  goto LAB_14958aee4;
code_r0x00014958af26:
  uVar15 = (ulonglong)uVar9;
  puVar14 = puVar13;
LAB_14958af41:
  lVar11 = lVar11 + 1;
  puVar13 = puVar14;
  if (lVar11 == iVar4) goto LAB_14958af80;
  goto LAB_14958ae96;
LAB_14958af80:
  bVar16 = iVar4 == 1;
LAB_14958af95:
  if ((bVar16) && (puVar14 != (undefined8 *)0x0)) {
    if ((*(byte *)((longlong)puVar14 + 0x1c) & 4) == 0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = (char *)*puVar14;
      sVar7 = strlen(pcVar6);
      pcVar6 = pcVar6 + sVar7 + 1;
    }
    lVar11 = 0;
    do {
      bVar2 = pcVar6[lVar11];
      if (bVar2 == "INTEGER"[lVar11]) {
        if ((ulonglong)bVar2 == 0) goto LAB_14958aff7;
      }
      else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[(byte)"INTEGER"[lVar11]]) break;
      lVar11 = lVar11 + 1;
    } while( true );
  }
  goto LAB_14958affe;
LAB_14958aff7:
  if (param_5 != 1) {
    if ((param_2 != (int *)0x0) && (1 < *(byte *)((longlong)param_1 + 0x114))) {
      for (lVar11 = *(longlong *)(param_2 + 2); lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x10))
      {
        if ((*(byte *)(lVar11 + 5) & 0x10) == 0) goto LAB_14958b076;
      }
      lVar11 = 0;
LAB_14958b076:
      plVar12 = (longlong *)param_1[0x33];
      if (plVar12 != (longlong *)0x0) {
        do {
          if (*plVar12 == lVar11) {
            *plVar12 = (longlong)puVar5 + 0x44;
            break;
          }
          plVar12 = (longlong *)plVar12[3];
        } while (plVar12 != (longlong *)0x0);
      }
    }
    *(uint *)(puVar5 + 8) = *(uint *)(puVar5 + 8) | param_4 << 3;
    *(short *)((longlong)puVar5 + 0x44) = (short)uVar15;
    *(char *)((longlong)puVar5 + 0x4e) = (char)param_3;
    if (param_2 != (int *)0x0) {
      *(char *)((longlong)param_1 + 0x112) = (char)param_2[6];
    }
    FUN_1495a9b42(param_1,param_2);
    goto LAB_14958ada1;
  }
LAB_14958affe:
  if (param_4 == 0) {
    FUN_14958b0ca(param_1,0,0,0,param_2,param_3,0,0,param_5,0,2);
    return;
  }
  FUN_14955a364(param_1,"AUTOINCREMENT is only allowed on an INTEGER PRIMARY KEY");
LAB_14958ada1:
  if (param_2 == (int *)0x0) {
    return;
  }
  FUN_149582d29(*param_1,param_2);
  return;
}



// FUNCTION 14958b0ca FUN_14958b0ca body=4443 status=ok
// SIG undefined FUN_14958b0ca(void)

void FUN_14958b0ca(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong *param_5,int param_6,longlong param_7,ulonglong param_8,int param_9,
                  int param_10,byte param_11)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  char *pcVar16;
  size_t sVar17;
  undefined8 uVar18;
  longlong *plVar19;
  uint uVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  longlong lVar23;
  char *pcVar24;
  char *pcVar25;
  char cVar26;
  ulonglong uVar27;
  char cVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong *puVar32;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  int local_e8;
  longlong local_e0;
  ulonglong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  char *local_98;
  uint local_90;
  char *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  char *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar6 = *param_1;
  pcVar16 = (char *)0x0;
  local_80 = (longlong *)0x0;
  local_88 = (char *)0x0;
  if (*(char *)(lVar6 + 0x61) != '\0') goto LAB_14958b12a;
  if ((0 < (int)param_1[6]) ||
     ((((param_11 != 2 && (*(char *)((longlong)param_1 + 0x114) == '\x01')) ||
       (iVar8 = FUN_14958537a(param_1), iVar8 != 0)) ||
      (iVar8 = FUN_1495a9b42(param_1,param_5), iVar8 != 0)))) {
LAB_14958b127:
    pcVar16 = (char *)0x0;
    goto LAB_14958b12a;
  }
  if (param_4 != 0) {
    uVar9 = FUN_1495a2df6(param_1,param_2,param_3,&local_80);
    if (-1 < (int)uVar9) {
      uVar30 = (ulonglong)uVar9;
      if (((*(char *)(lVar6 + 0xb5) == '\0') &&
          (lVar13 = FUN_1495a9ba3(param_1,param_4), lVar13 != 0 && *(int *)(param_3 + 8) == 0)) &&
         (*(longlong *)(lVar13 + 0x70) == *(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x38))) {
        uVar30 = 1;
      }
      plVar19 = local_80;
      uVar9 = (uint)uVar30;
      local_60 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + uVar30 * 0x20);
      local_70 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + 0x18 + uVar30 * 0x20);
      local_58 = "index";
      local_50 = local_80;
      local_68 = uVar9 == 1;
      local_78 = param_1;
      FUN_1495a9c16(&local_78,param_4);
      plVar14 = (longlong *)FUN_1495a8206(param_1,0,param_4 + 8);
      if (plVar14 != (longlong *)0x0) {
        if ((uVar9 != 1) || (*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x38) == plVar14[0xe])) {
          local_d0 = plVar19;
          if ((*(byte *)(plVar14 + 8) & 0x80) != 0) {
            for (lVar13 = plVar14[2]; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x28)) {
              if ((*(uint *)(lVar13 + 100) & 3) == 2) goto LAB_14958b348;
            }
          }
          goto LAB_14958b346;
        }
        lVar23 = *plVar14;
        pcVar16 = "cannot create a TEMP index on non-TEMP table \"%s\"";
LAB_14958b49f:
        FUN_14955a364(param_1,pcVar16,lVar23);
        goto LAB_14958b3fe;
      }
    }
    pcVar16 = (char *)0x0;
    goto LAB_14958b12a;
  }
  plVar14 = (longlong *)param_1[0x28];
  if (plVar14 == (longlong *)0x0) goto LAB_14958b127;
  if (plVar14[0xe] == 0) {
    uVar9 = 0xfff0bdc0;
    local_d0 = (longlong *)0x0;
  }
  else {
    uVar9 = 0xffffffff;
    local_d0 = (longlong *)0x0;
    plVar19 = (longlong *)(*(longlong *)(lVar6 + 0x20) + 0x18);
    do {
      uVar9 = uVar9 + 1;
      lVar13 = *plVar19;
      plVar19 = plVar19 + 4;
    } while (lVar13 != plVar14[0xe]);
  }
LAB_14958b346:
  lVar13 = 0;
LAB_14958b348:
  local_d8 = (ulonglong *)(longlong)(int)uVar9;
  lVar31 = (longlong)local_d8 * 0x20;
  puVar32 = (ulonglong *)(*(longlong *)(lVar6 + 0x20) + lVar31);
  lVar23 = *plVar14;
  if (lVar23 != 0) {
    lVar15 = 0;
    do {
      if ((ulonglong)*(byte *)(lVar23 + lVar15) == 0) {
        cVar28 = (&DAT_14bd3ff30)[(byte)"sqlite_"[lVar15]];
        cVar26 = '\0';
LAB_14958b479:
        if (cVar26 != cVar28) goto LAB_14958b363;
        break;
      }
      cVar26 = (&DAT_14bd3ff30)[*(byte *)(lVar23 + lVar15)];
      cVar28 = (&DAT_14bd3ff30)[(byte)"sqlite_"[lVar15]];
      if (cVar26 != cVar28) goto LAB_14958b479;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 7);
    if ((param_4 != 0) && (*(char *)(lVar6 + 0xb5) == '\0')) {
      pcVar16 = "table %s may not be indexed";
      goto LAB_14958b49f;
    }
  }
LAB_14958b363:
  if (plVar14[3] == 0) {
    if (*(int *)((longlong)plVar14 + 0x54) != 0) {
      pcVar16 = "virtual tables may not be indexed";
      goto LAB_14958b3f6;
    }
    local_b0 = puVar32;
    local_a0 = lVar31;
    if (local_d0 != (longlong *)0x0) {
      pcVar16 = (char *)FUN_14958faeb(lVar6);
      if (pcVar16 == (char *)0x0) goto LAB_14958b3fe;
      iVar8 = FUN_1495a2e5f(param_1,pcVar16,"index",*plVar14);
      param_4 = param_4;
      if (iVar8 == 0) {
        if (1 < *(byte *)((longlong)param_1 + 0x114)) goto LAB_14958b5f7;
        if ((*(char *)(lVar6 + 0xb5) == '\0') &&
           (lVar23 = FUN_14955d004(lVar6,pcVar16,0), lVar23 != 0)) {
          pcVar25 = "there is already a table named %s";
        }
        else {
          lVar23 = FUN_149581e2b(lVar6,pcVar16,*local_b0);
          if (lVar23 == 0) goto LAB_14958b5e8;
          if (param_10 != 0) {
            plVar19 = (longlong *)param_1[0x14];
            if ((longlong *)param_1[0x14] == (longlong *)0x0) {
              plVar19 = param_1;
            }
            param_4 = param_4;
            if (((*(uint *)((longlong)plVar19 + 0x74) >> (uVar9 & 0x1f) & 1) == 0) &&
               (*(uint *)((longlong)plVar19 + 0x74) =
                     *(uint *)((longlong)plVar19 + 0x74) | 1 << ((byte)local_d8 & 0x1f),
               param_4 = param_4, uVar9 == 1)) {
              FUN_14955dea7(plVar19);
              param_4 = param_4;
            }
            goto LAB_14958b409;
          }
          pcVar25 = "index %s already exists";
        }
        FUN_14955a364(param_1,pcVar25,pcVar16);
        param_4 = param_4;
      }
      goto LAB_14958b409;
    }
    iVar8 = 1;
    for (lVar31 = plVar14[2]; lVar31 != 0; lVar31 = *(longlong *)(lVar31 + 0x28)) {
      iVar8 = iVar8 + 1;
    }
    pcVar16 = (char *)FUN_14955a402(lVar6,"sqlite_autoindex_%s_%d",lVar23,iVar8);
    if (pcVar16 == (char *)0x0) goto LAB_14958b3fe;
    if (*(char *)((longlong)param_1 + 0x114) == '\0') {
LAB_14958b568:
      pcVar25 = (char *)*local_b0;
      pcVar24 = "sqlite_master";
      if (uVar9 == 1) {
        pcVar24 = "sqlite_temp_master";
      }
      local_f8 = pcVar25;
      local_c8 = param_4;
      iVar8 = FUN_1495a2d6b(param_1,0x12,pcVar24,0);
      param_4 = local_c8;
      if ((iVar8 != 0) ||
         (local_f8 = pcVar25,
         iVar8 = FUN_1495a2d6b(param_1,(uVar9 == 1) * '\x02' + '\x01',pcVar16,*plVar14),
         param_4 = local_c8, iVar8 != 0)) goto LAB_14958b409;
    }
    else {
      pcVar16[7] = pcVar16[7] + '\x01';
LAB_14958b5e8:
      if (*(byte *)((longlong)param_1 + 0x114) < 2) goto LAB_14958b568;
    }
LAB_14958b5f7:
    local_c8 = param_4;
    if (param_5 == (longlong *)0x0) {
      lVar23 = plVar14[1];
      lVar31 = (longlong)*(short *)((longlong)plVar14 + 0x46) * 0x20;
      puVar1 = (ushort *)(lVar23 + -4 + lVar31);
      *puVar1 = *puVar1 | 8;
      local_98 = *(char **)(lVar23 + -0x20 + lVar31);
      local_90 = 0;
      if (local_98 != (char *)0x0) {
        sVar17 = strlen(local_98);
        local_90 = (uint)sVar17 & 0x3fffffff;
      }
      uVar18 = FUN_14958f7cb(lVar6,0x3b,&local_98,0);
      plVar19 = (longlong *)FUN_14958f62a(param_1,0,uVar18);
      if (plVar19 == (longlong *)0x0) {
        param_4 = local_c8;
        param_5 = (longlong *)0x0;
      }
      else {
        iVar8 = 0;
        if (param_9 != -1) {
          iVar8 = param_9;
        }
        *(char *)(plVar19 + (longlong)(int)*plVar19 * 4 + -1) = (char)iVar8;
        local_d0 = plVar19;
LAB_14958b6ce:
        local_a8 = (ulonglong)(int)*local_d0;
        puVar32 = (ulonglong *)0x0;
        if (0 < (longlong)local_a8) {
          plVar19 = (longlong *)(local_a8 << 5);
          plVar22 = (longlong *)0x0;
          puVar32 = (ulonglong *)0x0;
          local_c0 = plVar19;
          do {
            if (**(char **)((longlong)(local_d0 + 1) + (longlong)plVar22) == 'o') {
              pcVar25 = *(char **)(*(char **)((longlong)(local_d0 + 1) + (longlong)plVar22) + 8);
              if (pcVar25 == (char *)0x0) {
                uVar10 = 0;
              }
              else {
                local_d8 = puVar32;
                sVar17 = strlen(pcVar25);
                uVar10 = (uint)sVar17 & 0x3fffffff;
                puVar32 = local_d8;
                plVar19 = local_c0;
              }
              puVar32 = (ulonglong *)(ulonglong)((int)puVar32 + uVar10 + 1);
            }
            plVar22 = plVar22 + 4;
          } while (plVar19 != plVar22);
        }
        sVar17 = strlen(pcVar16);
        uVar10 = (uint)sVar17 & 0x3fffffff;
        uVar20 = 1;
        if (lVar13 != 0) {
          uVar20 = (uint)*(ushort *)(lVar13 + 0x5e);
        }
        puVar32 = (ulonglong *)
                  FUN_1495a9d71(lVar6,(int)local_a8 + uVar20,uVar10 + (int)puVar32 + 1,&local_88);
        pcVar25 = local_88;
        param_5 = local_d0;
        if (*(char *)(lVar6 + 0x61) == '\0') {
          *puVar32 = (ulonglong)local_88;
          uVar30 = (ulonglong)(uVar10 + 1);
          local_88 = local_88 + uVar30;
          local_d8 = puVar32;
          memcpy(pcVar25,pcVar16,uVar30);
          local_d8[3] = (ulonglong)plVar14;
          *(char *)((longlong)local_d8 + 0x62) = (char)param_6;
          *(uint *)((longlong)local_d8 + 100) =
               (uint)(param_11 & 3) + (uint)(param_6 != 0) * 8 |
               *(uint *)((longlong)local_d8 + 100) & 0xfffffff4;
          local_d8[6] = *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x18 + local_a0);
          *(short *)((longlong)local_d8 + 0x5e) = (short)*local_d0;
          if (param_8 != 0) {
            local_f8 = (char *)0x0;
            FUN_1495a371c(param_1,plVar14,2);
            local_d8[9] = param_8;
          }
          local_b0 = (ulonglong *)CONCAT71(local_b0._1_7_,*(undefined1 *)(local_b0[3] + 0x70));
          local_b8 = local_d0;
          if (1 < *(byte *)((longlong)param_1 + 0x114)) {
            local_d8[10] = (ulonglong)local_d0;
            local_b8 = (longlong *)0x0;
          }
          local_c0 = (longlong *)0x0;
          if (*(short *)((longlong)local_d8 + 0x5e) != 0) {
            local_d0 = local_d0 + 1;
            local_c0 = (longlong *)0x0;
            do {
              pcVar25 = (char *)*local_d0;
              pcVar24 = pcVar25;
              if ((*pcVar25 == 's') ||
                 ((*pcVar25 == 'o' &&
                  (pcVar24 = *(char **)(pcVar25 + 0x10), **(char **)(pcVar25 + 0x10) == 's')))) {
                *pcVar24 = ';';
                pcVar25 = (char *)*local_d0;
              }
              local_f8 = (char *)0x0;
              FUN_1495a371c(param_1,plVar14,0x20,pcVar25);
              if ((int)param_1[6] != 0) {
LAB_14958be8b:
                param_8 = 0;
                param_5 = local_b8;
                puVar32 = local_d8;
                goto LAB_14958c20d;
              }
              for (pcVar25 = (char *)*local_d0; pcVar25 != (char *)0x0;
                  pcVar25 = *(char **)(pcVar25 + 0x10)) {
                if ((pcVar25[5] & 0x10U) == 0) goto LAB_14958b95a;
              }
              pcVar25 = (char *)0x0;
LAB_14958b95a:
              if (*pcVar25 != -0x5c) {
                if (plVar14 != (longlong *)param_1[0x28]) {
                  if (local_d8[10] == 0) {
                    local_d8[10] = (ulonglong)local_b8;
                    local_b8 = (longlong *)0x0;
                  }
                  *(undefined2 *)(local_d8[1] + (longlong)local_c0 * 2) = 0xfffe;
                  *(byte *)((longlong)local_d8 + 100) = *(byte *)((longlong)local_d8 + 100) & 0xf7;
                  pcVar25 = (char *)*local_d0;
                  if (*pcVar25 != 'o') goto LAB_14958ba08;
                  goto LAB_14958b9fb;
                }
                FUN_14955a364(param_1,"expressions prohibited in PRIMARY KEY and UNIQUE constraints"
                             );
                goto LAB_14958be8b;
              }
              uVar10 = (uint)*(short *)(pcVar25 + 0x30);
              uVar30 = (ulonglong)uVar10;
              if ((int)uVar10 < 0) {
                uVar30 = (ulonglong)(uint)(int)*(short *)((longlong)plVar14 + 0x44);
              }
              else {
                lVar23 = plVar14[1];
                if (*(char *)(lVar23 + 0x18 + (ulonglong)uVar10 * 0x20) == '\0') {
                  *(byte *)((longlong)local_d8 + 100) = *(byte *)((longlong)local_d8 + 100) & 0xf7;
                  lVar23 = plVar14[1];
                }
                if ((*(byte *)(lVar23 + 0x1c + (ulonglong)uVar10 * 0x20) & 0x20) != 0) {
                  *(byte *)((longlong)local_d8 + 0x65) = *(byte *)((longlong)local_d8 + 0x65) | 4;
                }
              }
              *(short *)(local_d8[1] + (longlong)local_c0 * 2) = (short)uVar30;
              pcVar25 = (char *)*local_d0;
              if (*pcVar25 == 'o') {
LAB_14958b9fb:
                pcVar25 = *(char **)(pcVar25 + 8);
                if (pcVar25 == (char *)0x0) {
                  local_a8 = 0;
                }
                else {
                  sVar17 = strlen(pcVar25);
                  local_a8 = (ulonglong)((uint)sVar17 & 0x3fffffff);
                }
                pcVar24 = local_88;
                memcpy(local_88,pcVar25,local_a8 + 1);
                local_88 = pcVar24 + local_a8 + 1;
              }
              else if ((int)uVar30 < 0) {
LAB_14958ba08:
                pcVar24 = (char *)0x0;
              }
              else {
                pcVar24 = *(char **)(plVar14[1] + 0x10 + uVar30 * 0x20);
              }
              if (pcVar24 == (char *)0x0) {
                pcVar24 = "BINARY";
              }
              if ((*(char *)(lVar6 + 0xb5) == '\0') &&
                 (lVar23 = FUN_14959b4a2(param_1,pcVar24), lVar23 == 0)) goto LAB_14958be8b;
              uVar7 = 0;
              *(char **)(local_d8[8] + (longlong)local_c0 * 8) = pcVar24;
              if (3 < (byte)local_b0) {
                uVar7 = (undefined1)(int)local_d0[2];
              }
              *(undefined1 *)(local_d8[7] + (longlong)local_c0) = uVar7;
              local_c0 = (longlong *)((longlong)local_c0 + 1);
              local_d0 = local_d0 + 4;
            } while (local_c0 < (longlong *)(ulonglong)*(ushort *)((longlong)local_d8 + 0x5e));
          }
          puVar32 = local_d8;
          local_d0 = local_b8;
          if (lVar13 == 0) {
            *(undefined2 *)(local_d8[1] + ((ulonglong)local_c0 & 0xffffffff) * 2) = 0xffff;
            *(char **)(local_d8[8] + ((ulonglong)local_c0 & 0xffffffff) * 8) = "BINARY";
          }
          else if (*(short *)(lVar13 + 0x5e) != 0) {
            uVar30 = 0;
            do {
              iVar8 = FUN_1495a3fbb(puVar32,*(undefined2 *)((longlong)puVar32 + 0x5e),lVar13);
              if (iVar8 == 0) {
                lVar23 = (longlong)(int)local_c0;
                *(undefined2 *)(puVar32[1] + lVar23 * 2) =
                     *(undefined2 *)(*(longlong *)(lVar13 + 8) + uVar30 * 2);
                *(undefined8 *)(puVar32[8] + lVar23 * 8) =
                     *(undefined8 *)(*(longlong *)(lVar13 + 0x40) + uVar30 * 8);
                *(undefined1 *)(puVar32[7] + lVar23) =
                     *(undefined1 *)(*(longlong *)(lVar13 + 0x38) + uVar30);
                local_c0 = (longlong *)(ulonglong)((int)local_c0 + 1);
              }
              else {
                *(short *)(puVar32 + 0xc) = (short)puVar32[0xc] + -1;
              }
              uVar30 = uVar30 + 1;
            } while (uVar30 < *(ushort *)(lVar13 + 0x5e));
          }
          FUN_149582231();
          if (param_1[0x28] == 0) {
            FUN_1495a384f();
          }
          uVar5 = (ushort)puVar32[0xc];
          if (uVar5 == 0) {
            uVar30 = 0;
          }
          else {
            uVar27 = (ulonglong)(uint)uVar5 + 1;
            uVar30 = 0;
            do {
              uVar4 = *(ushort *)((local_d8[1] - 4) + uVar27 * 2);
              uVar29 = (ulonglong)(short)uVar4;
              if (((-1 < (longlong)uVar29) && (uVar4 < 0x3f)) &&
                 ((*(ushort *)(*(longlong *)(local_d8[3] + 8) + 0x1c + uVar29 * 0x20) & 0x20) == 0))
              {
                uVar30 = uVar30 | 1L << (uVar29 & 0x3f);
              }
              uVar27 = uVar27 - 1;
            } while (1 < uVar27);
          }
          local_d8[0xd] = ~uVar30;
          if ((local_c8 != 0) && ((int)*(short *)((longlong)plVar14 + 0x46) <= (int)(uint)uVar5)) {
            uVar10 = *(uint *)((longlong)local_d8 + 100);
            *(uint *)((longlong)local_d8 + 100) = uVar10 | 0x20;
            if (0 < *(short *)((longlong)plVar14 + 0x46)) {
              iVar8 = 0;
              do {
                if (iVar8 != *(short *)((longlong)plVar14 + 0x44)) {
                  if ((ulonglong)uVar5 != 0) {
                    uVar30 = 0;
                    while (*(short *)(local_d8[1] + uVar30 * 2) != (short)iVar8) {
                      uVar30 = uVar30 + 1;
                      if (uVar5 == uVar30) goto LAB_14958bc58;
                    }
                    if (-1 < (short)uVar30) goto LAB_14958bc26;
                  }
LAB_14958bc58:
                  *(uint *)((longlong)local_d8 + 100) = uVar10 & 0xffffffdf;
                  break;
                }
LAB_14958bc26:
                iVar8 = iVar8 + 1;
              } while (iVar8 != *(short *)((longlong)plVar14 + 0x46));
            }
          }
          if ((plVar14 == (longlong *)param_1[0x28]) && (lVar13 = plVar14[2], lVar13 != 0)) {
            uVar5 = *(ushort *)((longlong)local_d8 + 0x5e);
            local_c0 = (longlong *)(ulonglong)uVar5;
            do {
              if (*(ushort *)(lVar13 + 0x5e) == uVar5) {
                if (local_c0 != (longlong *)0x0) {
                  plVar19 = (longlong *)0x0;
LAB_14958bd86:
                  if (*(short *)(*(longlong *)(lVar13 + 8) + (longlong)plVar19 * 2) ==
                      *(short *)(local_d8[1] + (longlong)plVar19 * 2)) {
                    lVar23 = 0;
                    do {
                      bVar2 = *(byte *)(*(longlong *)
                                         (*(longlong *)(lVar13 + 0x40) + (longlong)plVar19 * 8) +
                                       lVar23);
                      bVar3 = *(byte *)(*(longlong *)(local_d8[8] + (longlong)plVar19 * 8) + lVar23)
                      ;
                      if (bVar2 == bVar3) {
                        if ((ulonglong)bVar2 == 0) goto LAB_14958bdd0;
                      }
                      else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[bVar3]) break;
                      lVar23 = lVar23 + 1;
                    } while( true );
                  }
                  goto LAB_14958bdf7;
                }
                plVar19 = (longlong *)0x0;
LAB_14958bdf7:
                if ((uint)plVar19 == (uint)uVar5) {
LAB_14958c0ca:
                  cVar26 = *(char *)(lVar13 + 0x62);
                  if (cVar26 != *(char *)((longlong)local_d8 + 0x62)) {
                    if ((cVar26 != '\v') && (*(char *)((longlong)local_d8 + 0x62) != '\v')) {
                      FUN_14955a364(param_1,"conflicting ON CONFLICT clauses specified",0);
                      cVar26 = *(char *)(lVar13 + 0x62);
                    }
                    if (cVar26 == '\v') {
                      *(undefined1 *)(lVar13 + 0x62) = *(undefined1 *)((longlong)local_d8 + 0x62);
                    }
                  }
                  if (param_11 == 2) {
                    *(uint *)(lVar13 + 100) = *(uint *)(lVar13 + 100) & 0xfffffffc | 2;
                  }
                  if (*(byte *)((longlong)param_1 + 0x114) < 2) goto LAB_14958c15d;
                  local_d8[5] = param_1[0x29];
                  param_1[0x29] = (longlong)local_d8;
                  goto LAB_14958bcf2;
                }
              }
              lVar13 = *(longlong *)(lVar13 + 0x28);
            } while (lVar13 != 0);
          }
          if (1 < *(byte *)((longlong)param_1 + 0x114)) {
LAB_14958bc8a:
            if ((local_c8 == 0) || (*(char *)(lVar6 + 0xb5) != '\0')) {
LAB_14958bce1:
              local_d8[5] = plVar14[2];
              plVar14[2] = (longlong)local_d8;
            }
            else {
              if (*(byte *)((longlong)param_1 + 0x114) < 2) goto LAB_14958c15d;
              param_1[0x29] = (longlong)local_d8;
            }
LAB_14958bcf2:
            param_8 = 0;
            param_4 = local_c8;
            param_5 = local_d0;
            goto LAB_14958b409;
          }
          if (*(char *)(lVar6 + 0xb5) == '\0') {
            if ((local_c8 != 0) || ((*(uint *)(plVar14 + 8) & 0x80) == 0)) {
              iVar8 = (int)param_1[7] + 1;
              *(int *)(param_1 + 7) = iVar8;
              local_c0 = (longlong *)param_1[2];
              if (local_c0 == (longlong *)0x0) {
                if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
                  *(undefined1 *)((longlong)param_1 + 0x23) = 1;
                }
                local_c0 = (longlong *)FUN_14955a44a(param_1);
                if (local_c0 == (longlong *)0x0) goto LAB_14958c15d;
              }
              FUN_1495a3043(param_1,1,uVar9);
              plVar19 = local_c0;
              local_f8 = (char *)((ulonglong)local_f8 & 0xffffffff00000000);
              lVar13 = 0;
              uVar11 = FUN_149584f48(local_c0,0xad,0,0);
              *(undefined4 *)(local_d8 + 0xb) = uVar11;
              local_f8 = (char *)CONCAT44(local_f8._4_4_,2);
              FUN_149584f48(plVar19,0x8b,uVar9,iVar8);
              if (param_7 != 0) {
                local_f8 = (char *)*local_80;
                iVar12 = ((int)param_1[0x20] - (int)local_f8) + (int)param_1[0x21];
                pcVar25 = " UNIQUE";
                if (param_6 == 0) {
                  pcVar25 = "";
                }
                lVar13 = FUN_14955a402(lVar6,"CREATE%s INDEX %.*s",pcVar25,
                                       iVar12 - (uint)(*(char *)((longlong)local_f8 + -1 +
                                                                (longlong)iVar12) == ';'));
              }
              local_f0 = *plVar14;
              local_f8 = (char *)*local_d8;
              local_e8 = iVar8;
              local_e0 = lVar13;
              FUN_1495a3e15(param_1,"INSERT INTO %Q.%s VALUES(\'index\',%Q,%Q,#%d,%Q);",
                            *(undefined8 *)(*(longlong *)(lVar6 + 0x20) + local_a0),"sqlite_master")
              ;
              if (lVar13 != 0) {
                FUN_14955d65a(lVar6,lVar13);
              }
              puVar32 = local_d8;
              if (local_c8 != 0) {
                FUN_1495a9e2f(param_1,local_d8,iVar8);
                local_f8._0_4_ = **(int **)(*(longlong *)(*param_1 + 0x20) + 0x18 + local_a0) + 1;
                FUN_149584f48(param_1[2],0x5e,uVar9,1);
                uVar18 = FUN_14955a402(lVar6,"name=\'%q\' AND type=\'index\'",*puVar32);
                plVar19 = local_c0;
                FUN_1495a3f28(local_c0,uVar9,uVar18);
                local_f8 = (char *)((ulonglong)local_f8._4_4_ << 0x20);
                FUN_149584f48(plVar19,0x9e,0,1);
              }
              if (*(char *)(*local_c0 + 0x61) == '\0') {
                iVar8 = (int)local_c0[0x12] + -1;
                if (-1 < (int)local_d8[0xb]) {
                  iVar8 = (int)local_d8[0xb];
                }
                puVar21 = (undefined1 *)((longlong)iVar8 * 0x18 + local_c0[0x11]);
              }
              else {
                puVar21 = &DAT_14cc1ee40;
              }
              *(int *)(puVar21 + 8) = (int)local_c0[0x12];
              goto LAB_14958bc8a;
            }
            goto LAB_14958bce1;
          }
          if (local_c8 != 0) {
            iVar8 = *(int *)(lVar6 + 0xb0);
            *(int *)(local_d8 + 0xb) = iVar8;
            for (puVar32 = *(ulonglong **)(local_d8[3] + 0x10); puVar32 != (ulonglong *)0x0;
                puVar32 = (ulonglong *)puVar32[5]) {
              if ((puVar32 != local_d8) && ((int)puVar32[0xb] == iVar8)) {
                FUN_14955a364(param_1,"invalid rootpage");
                local_f8 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
                FUN_14955599e(0xb,"%s at line %d of [%.10s]","database corruption",0x1b947);
                *(undefined4 *)(param_1 + 3) = 0xb;
                param_8 = 0;
                param_5 = local_d0;
                puVar32 = local_d8;
                goto LAB_14958c20d;
              }
            }
          }
          lVar13 = FUN_14958256b(local_d8[6] + 0x20,*local_d8);
          if (lVar13 == 0) {
            *(byte *)(lVar6 + 0x2c) = *(byte *)(lVar6 + 0x2c) | 1;
            goto LAB_14958bc8a;
          }
          if ((*(char *)(lVar6 + 0x61) == '\0') && (*(char *)(lVar6 + 0x62) == '\0')) {
            *(undefined1 *)(lVar6 + 0x61) = 1;
            if (0 < *(int *)(lVar6 + 0xd4)) {
              *(undefined4 *)(lVar6 + 0x170) = 1;
            }
            *(int *)(lVar6 + 0x178) = *(int *)(lVar6 + 0x178) + 1;
            *(undefined2 *)(lVar6 + 0x17c) = 0;
            if (*(longlong *)(lVar6 + 0x138) != 0) {
              *(undefined4 *)(*(longlong *)(lVar6 + 0x138) + 0x18) = 7;
            }
          }
LAB_14958c15d:
          param_8 = 0;
          param_5 = local_d0;
          puVar32 = local_d8;
        }
LAB_14958c20d:
        param_4 = local_c8;
        if (puVar32 != (ulonglong *)0x0) {
          FUN_149582813(lVar6,puVar32);
        }
      }
    }
    else {
      local_d0 = param_5;
      if (*(int *)(*param_1 + 0x84) < (int)*param_5) {
        FUN_14955a364(param_1,"too many columns in %s","index");
      }
      param_4 = local_c8;
      if ((int)param_1[6] == 0) goto LAB_14958b6ce;
    }
  }
  else {
    pcVar16 = "views may not be indexed";
LAB_14958b3f6:
    FUN_14955a364(param_1,pcVar16);
LAB_14958b3fe:
    pcVar16 = (char *)0x0;
    param_4 = param_4;
  }
LAB_14958b409:
  lVar13 = plVar14[2];
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x62) == '\x05') {
      plVar14 = plVar14 + 2;
    }
    else {
      do {
        lVar23 = lVar13;
        lVar13 = *(longlong *)(lVar23 + 0x28);
        if (lVar13 == 0) goto LAB_14958b12a;
      } while (*(char *)(lVar13 + 0x62) != '\x05');
      plVar14 = (longlong *)(lVar23 + 0x28);
    }
    while ((lVar23 = *(longlong *)(lVar13 + 0x28), lVar23 != 0 &&
           (*(char *)(lVar23 + 0x62) != '\x05'))) {
      *plVar14 = lVar23;
      plVar14 = (longlong *)(lVar23 + 0x28);
      *(undefined8 *)(lVar13 + 0x28) = *(undefined8 *)(lVar23 + 0x28);
      *(longlong *)(lVar23 + 0x28) = lVar13;
    }
  }
LAB_14958b12a:
  if (param_8 != 0) {
    FUN_14958288e(lVar6,param_8);
  }
  if (param_5 != (longlong *)0x0) {
    FUN_149582d29(lVar6,param_5);
  }
  FUN_149582b1a(lVar6,param_4);
  if (pcVar16 != (char *)0x0) {
    FUN_14955d65a(lVar6,pcVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14958bdd0:
  plVar19 = (longlong *)((longlong)plVar19 + 1);
  if (plVar19 == local_c0) goto LAB_14958c0ca;
  goto LAB_14958bd86;
}



// FUNCTION 14958c226 FUN_14958c226 body=140 status=ok
// SIG undefined FUN_14958c226(void)

void FUN_14958c226(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[0x28];
  if (((lVar2 == 0) || (*(char *)((longlong)param_1 + 0x114) == '\x01')) ||
     ((*(byte *)(*(longlong *)
                  (*(longlong *)
                    (*(longlong *)(lVar1 + 0x20) + 8 + (ulonglong)*(byte *)(lVar1 + 0xb4) * 0x20) +
                  8) + 0x26) & 1) != 0)) {
    if (param_2 != 0) {
      FUN_14958288e(lVar1,param_2);
      return;
    }
  }
  else {
    uVar3 = FUN_14958f62a(param_1,*(undefined8 *)(lVar2 + 0x30));
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    if ((int)param_1[0xd] != 0) {
      FUN_14958f711(param_1,uVar3,param_1 + 0xc,1);
      return;
    }
  }
  return;
}



// FUNCTION 14958c2b2 FUN_14958c2b2 body=1280 status=ok
// SIG undefined FUN_14958c2b2(void)

void FUN_14958c2b2(longlong *param_1,uint *param_2,undefined8 *param_3,uint *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong *_Dst;
  size_t sVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  void *_Src;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 *_Dst_00;
  undefined1 *puVar15;
  uint local_80;
  
  lVar3 = *param_1;
  lVar4 = param_1[0x28];
  if ((lVar4 == 0) || (*(char *)((longlong)param_1 + 0x114) == '\x01')) {
LAB_14958c2e3:
    if (param_2 != (uint *)0x0) {
LAB_14958c5ce:
      FUN_149582d29(lVar3,param_2);
    }
  }
  else {
    if (param_2 != (uint *)0x0) {
      local_80 = *param_2;
      if (param_4 == (uint *)0x0) {
        iVar14 = local_80 * 0x10 + *(int *)(param_3 + 1) + 0x41;
LAB_14958c364:
        bVar5 = 0;
        goto LAB_14958c366;
      }
      if (*param_4 == local_80) {
        iVar14 = local_80 * 0x10 + *(int *)(param_3 + 1) + 0x41;
        bVar5 = 1;
        if (0 < (int)local_80) goto LAB_14958c57e;
        goto LAB_14958c366;
      }
      FUN_14955a364(param_1,
                    "number of columns in foreign key does not match the number of columns in the referenced table"
                   );
      goto LAB_14958c5ce;
    }
    if (0 < (short)*(ushort *)(lVar4 + 0x46)) {
      if (param_4 == (uint *)0x0) {
        iVar14 = *(int *)(param_3 + 1) + 0x51;
        local_80 = 1;
        goto LAB_14958c364;
      }
      if (*param_4 != 1) {
        FUN_14955a364(param_1,"foreign key on %s should reference only one column of table %T",
                      *(undefined8 *)
                       (*(longlong *)(lVar4 + 8) + (ulonglong)(*(ushort *)(lVar4 + 0x46) - 1) * 0x20
                       ),param_3);
        goto LAB_14958c606;
      }
      iVar14 = *(int *)(param_3 + 1) + 0x51;
      local_80 = 1;
LAB_14958c57e:
      uVar12 = (ulonglong)local_80;
      puVar11 = param_4 + 4;
      do {
        if (*(char **)puVar11 == (char *)0x0) {
          uVar6 = 0;
        }
        else {
          sVar7 = strlen(*(char **)puVar11);
          uVar6 = (uint)sVar7 & 0x3fffffff;
        }
        iVar14 = iVar14 + uVar6 + 1;
        puVar11 = puVar11 + 8;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      bVar5 = 1;
LAB_14958c366:
      if (lVar3 == 0) {
        _Dst = (longlong *)FUN_145e3bd67((longlong)iVar14);
      }
      else {
        _Dst = (longlong *)FUN_14955d750(lVar3);
      }
      if (_Dst == (longlong *)0x0) goto LAB_14958c2e3;
      memset(_Dst,0,(longlong)iVar14);
      *_Dst = lVar4;
      _Dst[1] = *(longlong *)(lVar4 + 0x20);
      plVar8 = _Dst + (longlong)(int)local_80 * 2 + 8;
      _Dst[2] = (longlong)plVar8;
      if (1 < *(byte *)((longlong)param_1 + 0x114)) {
        FUN_14958fa77(param_1,plVar8,param_3);
      }
      plVar1 = _Dst + 8;
      memcpy(plVar8,(void *)*param_3,(ulonglong)*(uint *)(param_3 + 1));
      *(undefined1 *)((longlong)plVar8 + (ulonglong)*(uint *)(param_3 + 1)) = 0;
      FUN_1495a976e(plVar8);
      iVar14 = *(int *)(param_3 + 1);
      *(uint *)(_Dst + 5) = local_80;
      if (param_2 == (uint *)0x0) {
        *(int *)plVar1 = *(short *)(lVar4 + 0x46) + -1;
LAB_14958c432:
        if ((bool)(bVar5 & 0 < (int)local_80)) {
          _Dst_00 = (undefined1 *)((longlong)plVar8 + (ulonglong)(iVar14 + 1));
          uVar12 = 0;
          do {
            uVar6 = 0;
            if (*(char **)(param_4 + uVar12 * 8 + 4) != (char *)0x0) {
              sVar7 = strlen(*(char **)(param_4 + uVar12 * 8 + 4));
              uVar6 = (uint)sVar7 & 0x3fffffff;
            }
            _Dst[uVar12 * 2 + 9] = (longlong)_Dst_00;
            _Src = *(void **)(param_4 + uVar12 * 8 + 4);
            if (1 < *(byte *)((longlong)param_1 + 0x114)) {
              for (plVar8 = (longlong *)param_1[0x33]; plVar8 != (longlong *)0x0;
                  plVar8 = (longlong *)plVar8[3]) {
                if ((void *)*plVar8 == _Src) {
                  *plVar8 = (longlong)_Dst_00;
                  _Src = *(void **)(param_4 + uVar12 * 8 + 4);
                  break;
                }
              }
            }
            memcpy(_Dst_00,_Src,(ulonglong)uVar6);
            puVar15 = _Dst_00 + uVar6;
            _Dst_00 = puVar15 + 1;
            *puVar15 = 0;
            uVar12 = uVar12 + 1;
          } while (uVar12 != local_80);
        }
      }
      else if (0 < (int)local_80) {
        uVar12 = 0;
        do {
          uVar6 = (uint)*(short *)(lVar4 + 0x46);
          if (0 < *(short *)(lVar4 + 0x46)) {
            uVar13 = 0;
LAB_14958c66a:
            lVar9 = 0;
            do {
              bVar2 = *(byte *)(*(longlong *)(*(longlong *)(lVar4 + 8) + uVar13 * 0x20) + lVar9);
              if (bVar2 == *(byte *)(*(longlong *)(param_2 + uVar12 * 8 + 4) + lVar9)) {
                if ((ulonglong)bVar2 == 0) {
                  *(int *)(plVar1 + uVar12 * 2) = (int)uVar13;
                  uVar6 = (uint)*(short *)(lVar4 + 0x46);
                  goto LAB_14958c6bb;
                }
              }
              else if ((&DAT_14bd3ff30)[bVar2] !=
                       (&DAT_14bd3ff30)[*(byte *)(*(longlong *)(param_2 + uVar12 * 8 + 4) + lVar9)])
              goto LAB_14958c69c;
              lVar9 = lVar9 + 1;
            } while( true );
          }
          uVar13 = 0;
LAB_14958c6bb:
          if ((int)uVar6 <= (int)uVar13) {
LAB_14958c71e:
            FUN_14955a364(param_1,"unknown column \"%s\" in foreign key definition",
                          *(undefined8 *)(param_2 + (uVar12 & 0xffffffff) * 8 + 4));
            goto LAB_14958c747;
          }
          if ((1 < *(byte *)((longlong)param_1 + 0x114)) &&
             (plVar10 = (longlong *)param_1[0x33], plVar10 != (longlong *)0x0)) {
            do {
              if (*plVar10 == *(longlong *)(param_2 + uVar12 * 8 + 4)) {
                *plVar10 = (longlong)(plVar1 + uVar12 * 2);
                break;
              }
              plVar10 = (longlong *)plVar10[3];
            } while (plVar10 != (longlong *)0x0);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != local_80);
        goto LAB_14958c432;
      }
      *(undefined1 *)((longlong)_Dst + 0x2c) = 0;
      *(char *)((longlong)_Dst + 0x2d) = (char)param_5;
      *(char *)((longlong)_Dst + 0x2e) = (char)((uint)param_5 >> 8);
      plVar8 = (longlong *)FUN_14958256b(*(longlong *)(lVar4 + 0x70) + 0x50,_Dst[2],_Dst);
      if (plVar8 == _Dst) {
        if ((*(char *)(lVar3 + 0x61) == '\0') && (*(char *)(lVar3 + 0x62) == '\0')) {
          *(undefined1 *)(lVar3 + 0x61) = 1;
          if (0 < *(int *)(lVar3 + 0xd4)) {
            *(undefined4 *)(lVar3 + 0x170) = 1;
          }
          *(int *)(lVar3 + 0x178) = *(int *)(lVar3 + 0x178) + 1;
          *(undefined2 *)(lVar3 + 0x17c) = 0;
          if (*(longlong *)(lVar3 + 0x138) != 0) {
            *(undefined4 *)(*(longlong *)(lVar3 + 0x138) + 0x18) = 7;
          }
        }
LAB_14958c747:
        FUN_14955d65a(lVar3,_Dst);
      }
      else {
        if (plVar8 != (longlong *)0x0) {
          _Dst[3] = (longlong)plVar8;
          plVar8[4] = (longlong)_Dst;
        }
        *(longlong **)(lVar4 + 0x20) = _Dst;
      }
      goto LAB_14958c2e3;
    }
  }
  if (param_4 == (uint *)0x0) {
    return;
  }
LAB_14958c606:
  FUN_149582d29(lVar3,param_4);
  return;
LAB_14958c69c:
  uVar13 = uVar13 + 1;
  if (uVar13 == uVar6) goto LAB_14958c71e;
  goto LAB_14958c66a;
}



// FUNCTION 14958c7b2 FUN_14958c7b2 body=186 status=ok
// SIG undefined FUN_14958c7b2(void)

void FUN_14958c7b2(undefined8 *param_1)

{
  short sVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = param_1[0x28];
  if (lVar2 != 0) {
    sVar1 = *(short *)(lVar2 + 0x46);
    uVar3 = *param_1;
    lVar4 = FUN_14958faeb(uVar3);
    if (lVar4 != 0) {
      lVar5 = FUN_14959b4a2(param_1,lVar4);
      if (lVar5 == 0) {
        FUN_14955d65a(uVar3,lVar4);
        return;
      }
      lVar7 = (longlong)sVar1 + -1;
      lVar5 = *(longlong *)(lVar2 + 8);
      lVar6 = lVar7 * 0x20;
      if (*(longlong *)(lVar5 + 0x10 + lVar6) != 0) {
        FUN_14955d65a(uVar3);
        lVar5 = *(longlong *)(lVar2 + 8);
      }
      *(longlong *)(lVar5 + 0x10 + lVar6) = lVar4;
      for (lVar4 = *(longlong *)(lVar2 + 0x10); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
        if ((int)lVar7 == (int)**(short **)(lVar4 + 8)) {
          **(undefined8 **)(lVar4 + 0x40) = *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10 + lVar6)
          ;
        }
      }
    }
  }
  return;
}



// FUNCTION 14958c86c FUN_14958c86c body=335 status=ok
// SIG undefined FUN_14958c86c(void)

void FUN_14958c86c(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[0x28];
  if (lVar1 == 0) goto LAB_14958c97f;
  if (*(char *)((longlong)param_1 + 0x114) == '\x01') {
    FUN_14955a364(param_1,"virtual tables cannot use computed columns");
    goto LAB_14958c97f;
  }
  lVar4 = (longlong)*(short *)(lVar1 + 0x46) * 0x20 + *(longlong *)(lVar1 + 8);
  if (*(longlong *)(lVar4 + -0x18) == 0) {
    if (param_3 == (longlong *)0x0) {
LAB_14958c8fe:
      *(short *)(lVar1 + 0x48) = *(short *)(lVar1 + 0x48) + -1;
      uVar2 = 0x20;
LAB_14958c907:
      *(ushort *)(lVar4 + -4) = *(ushort *)(lVar4 + -4) | (ushort)uVar2;
      *(uint *)(lVar1 + 0x40) = *(uint *)(lVar1 + 0x40) | uVar2;
      if ((*(ushort *)(lVar4 + -4) & 0x60) != 0 && (*(ushort *)(lVar4 + -4) & 1) != 0) {
        FUN_14955a364(param_1,"generated columns cannot be part of the PRIMARY KEY");
      }
      *(longlong *)(lVar4 + -0x18) = param_2;
      return;
    }
    if ((int)param_3[1] == 6) {
      if (*param_3 != 0) {
        lVar3 = 0;
        do {
          if ((&DAT_14bd3ff30)[(byte)"stored"[lVar3]] !=
              (&DAT_14bd3ff30)[*(byte *)(*param_3 + lVar3)]) goto LAB_14958c96c;
          lVar3 = lVar3 + 1;
        } while (lVar3 != 6);
        uVar2 = 0x40;
        goto LAB_14958c907;
      }
    }
    else if (((int)param_3[1] == 7) && (*param_3 != 0)) {
      lVar3 = 0;
      do {
        if ((&DAT_14bd3ff30)[(byte)"virtual"[lVar3]] !=
            (&DAT_14bd3ff30)[*(byte *)(*param_3 + lVar3)]) goto LAB_14958c96c;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 7);
      goto LAB_14958c8fe;
    }
  }
LAB_14958c96c:
  FUN_14955a364(param_1,"error in generated column \"%s\"",*(undefined8 *)(lVar4 + -0x20));
LAB_14958c97f:
  if (param_2 == 0) {
    return;
  }
  FUN_14958288e(*param_1,param_2);
  return;
}



// FUNCTION 14958c9bb FUN_14958c9bb body=863 status=ok
// SIG undefined FUN_14958c9bb(void)

void FUN_14958c9bb(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  char cVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  char cVar13;
  
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0x61) != '\0') || (iVar3 = FUN_14958537a(), iVar3 != 0))
  goto LAB_14958ca26;
  if (param_4 == 0) {
    plVar5 = (longlong *)FUN_1495a8206(param_1,param_3,param_2 + 8);
    if (plVar5 == (longlong *)0x0) goto LAB_14958ca26;
  }
  else {
    *(char *)(lVar1 + 0x65) = *(char *)(lVar1 + 0x65) + '\x01';
    plVar5 = (longlong *)FUN_1495a8206(param_1,param_3,param_2 + 8);
    *(char *)(lVar1 + 0x65) = *(char *)(lVar1 + 0x65) + -1;
    if (plVar5 == (longlong *)0x0) {
      FUN_1495aabeb(param_1,*(undefined8 *)(param_2 + 0x10));
      goto LAB_14958ca26;
    }
  }
  iVar3 = -1000000;
  if (plVar5[0xe] != 0) {
    iVar3 = -1;
    plVar6 = (longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18);
    do {
      iVar3 = iVar3 + 1;
      lVar7 = *plVar6;
      plVar6 = plVar6 + 4;
    } while (lVar7 != plVar5[0xe]);
  }
  if ((*(int *)((longlong)plVar5 + 0x54) != 0) &&
     (iVar4 = FUN_1495a8238(param_1,plVar5), iVar4 != 0)) goto LAB_14958ca26;
  pcVar9 = "sqlite_master";
  if (iVar3 == 1) {
    pcVar9 = "sqlite_temp_master";
  }
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar3 * 0x20);
  iVar4 = FUN_1495a2d6b(param_1,9,pcVar9,0,uVar2);
  if (iVar4 != 0) goto LAB_14958ca26;
  if (param_3 == 0) {
    if (*(int *)((longlong)plVar5 + 0x54) == 0) {
      cVar10 = (iVar3 == 1) * '\x02' + '\v';
      goto LAB_14958caf7;
    }
    for (plVar6 = (longlong *)plVar5[0xc]; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[5]
        ) {
      if (*plVar6 == lVar1) goto LAB_14958cb8c;
    }
    plVar6 = (longlong *)0x0;
LAB_14958cb8c:
    uVar11 = *(undefined8 *)(plVar6[1] + 8);
    cVar10 = '\x1e';
  }
  else {
    cVar10 = (iVar3 != 1) * '\x02' + '\x0f';
LAB_14958caf7:
    uVar11 = 0;
  }
  iVar4 = FUN_1495a2d6b(param_1,cVar10,*plVar5,uVar11,uVar2);
  if ((iVar4 != 0) || (iVar4 = FUN_1495a2d6b(param_1,9,*plVar5,0,uVar2), iVar4 != 0))
  goto LAB_14958ca26;
  lVar7 = *plVar5;
  if (lVar7 == 0) {
LAB_14958cb3a:
    if (((((*(byte *)((longlong)plVar5 + 0x41) & 0x10) == 0) ||
         ((*(byte *)(lVar1 + 0x33) & 0x10) == 0)) || (*(longlong *)(lVar1 + 0x210) != 0)) ||
       (*(int *)(lVar1 + 0xd4) != 0)) goto LAB_14958cc26;
LAB_14958cb6a:
    pcVar9 = "table %s may not be dropped";
  }
  else {
    lVar8 = 0;
    do {
      if ((ulonglong)*(byte *)(lVar7 + lVar8) == 0) {
        cVar13 = (&DAT_14bd3ff30)[(byte)"sqlite_"[lVar8]];
        cVar10 = '\0';
LAB_14958cbdc:
        if (cVar10 != cVar13) goto LAB_14958cb3a;
        break;
      }
      cVar10 = (&DAT_14bd3ff30)[*(byte *)(lVar7 + lVar8)];
      cVar13 = (&DAT_14bd3ff30)[(byte)"sqlite_"[lVar8]];
      if (cVar10 != cVar13) goto LAB_14958cbdc;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 7);
    lVar8 = 0;
    do {
      uVar12 = (ulonglong)*(byte *)(lVar7 + 7 + lVar8);
      if (uVar12 == 0) {
        cVar13 = (&DAT_14bd3ff30)[(byte)(&DAT_14b3fdf44)[lVar8]];
        cVar10 = '\0';
LAB_14958cc1d:
        if (cVar10 != cVar13) {
          lVar8 = 0;
          goto LAB_14958ccda;
        }
        break;
      }
      cVar10 = (&DAT_14bd3ff30)[uVar12];
      cVar13 = (&DAT_14bd3ff30)[(byte)(&DAT_14b3fdf44)[lVar8]];
      if (cVar10 != cVar13) goto LAB_14958cc1d;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 4);
LAB_14958cc26:
    if (param_3 == 0) {
      if (plVar5[3] == 0) {
LAB_14958cc55:
        if (param_1[2] == 0) {
          if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
            *(undefined1 *)((longlong)param_1 + 0x23) = 1;
          }
          lVar7 = FUN_14955a44a(param_1);
          if (lVar7 == 0) goto LAB_14958ca26;
        }
        FUN_1495a3043(param_1,1,iVar3);
        if (param_3 == 0) {
          FUN_1495aaca8(param_1,iVar3,&DAT_14bd431dc,*plVar5);
          FUN_1495aad6e(param_1,param_2,plVar5);
        }
        FUN_1495aaee8(param_1,plVar5,iVar3,param_3);
        goto LAB_14958ca26;
      }
      pcVar9 = "use DROP VIEW to delete view %s";
    }
    else {
      if (plVar5[3] != 0) goto LAB_14958cc55;
      pcVar9 = "use DROP TABLE to delete table %s";
    }
  }
  FUN_14955a364(param_1,pcVar9);
LAB_14958ca26:
  FUN_149582b1a(lVar1,param_2);
  return;
  while( true ) {
    cVar10 = (&DAT_14bd3ff30)[uVar12];
    cVar13 = (&DAT_14bd3ff30)[(byte)"parameters"[lVar8]];
    if (cVar10 != cVar13) goto LAB_14958cd0c;
    lVar8 = lVar8 + 1;
    if (lVar8 == 10) break;
LAB_14958ccda:
    uVar12 = (ulonglong)*(byte *)(lVar7 + 7 + lVar8);
    if (uVar12 == 0) {
      cVar13 = (&DAT_14bd3ff30)[(byte)"parameters"[lVar8]];
      cVar10 = '\0';
LAB_14958cd0c:
      if (cVar10 != cVar13) goto LAB_14958cb6a;
      break;
    }
  }
  goto LAB_14958cc26;
}



// FUNCTION 14958cd1a FUN_14958cd1a body=632 status=ok
// SIG undefined FUN_14958cd1a(void)

void FUN_14958cd1a(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,undefined4 param_7,undefined4 param_8)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = 0;
  lVar2 = *param_1;
  if ((short)param_1[0x22] < 1) {
    local_98 = param_8;
    local_a0 = 0;
    local_a8 = CONCAT44(local_a8._4_4_,1);
    FUN_149589688(param_1,param_3,param_4,param_7);
    lVar3 = param_1[0x28];
    if ((lVar3 != 0) && ((int)param_1[6] == 0)) {
      FUN_1495a2df6(param_1,param_3,param_4,&local_90);
      iVar4 = -1000000;
      if (*(longlong *)(lVar3 + 0x70) != 0) {
        iVar4 = -1;
        plVar7 = (longlong *)(*(longlong *)(lVar2 + 0x20) + 0x18);
        do {
          iVar4 = iVar4 + 1;
          lVar5 = *plVar7;
          plVar7 = plVar7 + 4;
        } while (lVar5 != *(longlong *)(lVar3 + 0x70));
      }
      local_70 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + (longlong)iVar4 * 0x20);
      local_80 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + 0x18 + (longlong)iVar4 * 0x20);
      local_68 = &DAT_14b47b691;
      local_60 = local_90;
      local_78 = iVar4 == 1;
      local_88 = param_1;
      iVar4 = FUN_1495aa36b(&local_88,param_6);
      if (iVar4 == 0) {
        *(byte *)(param_6 + 6) = *(byte *)(param_6 + 6) | 0x20;
        if (*(byte *)((longlong)param_1 + 0x114) < 2) {
          lVar5 = FUN_1495a1fd1(lVar2,param_6,1);
        }
        else {
          lVar5 = param_6;
          param_6 = 0;
        }
        *(longlong *)(lVar3 + 0x18) = lVar5;
        uVar6 = FUN_1495a22be(lVar2,param_5,1);
        *(undefined8 *)(lVar3 + 0x30) = uVar6;
        if (*(char *)(lVar2 + 0x61) == '\0') {
          uStack_4c = *(undefined4 *)((longlong)param_1 + 0x10c);
          iVar4 = 0;
          if (*(char *)param_1[0x20] != ';') {
            iVar4 = (int)param_1[0x21];
          }
          local_58 = (longlong)(((int)param_1[0x20] + iVar4) - (int)*param_2) + *param_2;
          do {
            pbVar1 = (byte *)(local_58 + -1);
            local_58 = local_58 + -1;
          } while (((&DAT_14bd400b0)[*pbVar1] & 1) != 0);
          uStack_50 = 1;
          local_a8 = 0;
          FUN_149589ca3(param_1,0,&local_58,0);
        }
      }
    }
  }
  else {
    FUN_14955a364(param_1,"parameters are not allowed in views");
  }
  if (param_6 != 0) {
    FUN_149582a1c(lVar2,param_6,1);
  }
  if (1 < *(byte *)((longlong)param_1 + 0x114)) {
    FUN_1495a9a48(param_1,param_5);
  }
  if (param_5 != 0) {
    FUN_149582d29(lVar2,param_5);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14958cf93 FUN_14958cf93 body=8934 status=ok
// SIG undefined FUN_14958cf93(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14958cf93(longlong *param_1,longlong param_2,byte *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  int *piVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  longlong lVar21;
  int iVar22;
  char *pcVar23;
  uint *puVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 in_XMM3 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auStack_258 [32];
  undefined8 local_238;
  byte *local_230;
  int local_228;
  int local_220;
  uint *local_218;
  int *local_210;
  uint local_208;
  int local_204;
  int *local_200;
  longlong local_1f8;
  uint local_1f0;
  int local_1ec;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  undefined4 local_1cc;
  int local_1c8;
  int local_1c4;
  ulonglong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  int *local_1a0;
  ulonglong local_198;
  int local_190;
  int local_18c;
  undefined8 local_188;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  longlong local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  uint *local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  byte local_cc;
  char local_cb;
  int local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  code *local_b8;
  undefined1 local_b0 [16];
  ulonglong local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_150 = 0;
  lVar1 = *param_1;
  plVar11 = (longlong *)param_1[2];
  if (plVar11 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(lVar1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar11 = (longlong *)FUN_14955a44a(param_1);
  }
  uVar7 = 1;
  if (((param_2 == 0) || (*(char *)(lVar1 + 0x61) != '\0')) || ((int)param_1[6] != 0))
  goto LAB_14958d015;
  local_238 = (byte *)0x0;
  iVar6 = FUN_1495a2d6b(param_1,0x15,0,0);
  if (iVar6 != 0) goto LAB_14958d015;
  local_118 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  if (*param_3 < 9) {
    if (*(longlong *)(param_2 + 0x48) != 0) {
      FUN_149582d29(lVar1);
    }
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe;
  }
  FUN_1495a68fc(param_1,param_2,0);
  uVar7 = 1;
  if (((int)param_1[6] == 0) && (*(char *)(lVar1 + 0x61) == '\0')) {
    if (*param_3 == 9) {
      FUN_1495ab4b5(param_1,param_2);
    }
    uVar7 = FUN_1495ab729(param_1,param_2);
    if (uVar7 != 0) goto LAB_14958d11d;
    piVar16 = *(int **)(param_2 + 0x28);
    local_e8 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    local_d8 = 0;
    local_100 = *(uint **)(param_2 + 0x48);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      local_208 = *(uint *)(param_2 + 4) >> 3 & 1;
      iVar6 = 0;
      do {
        iVar8 = *piVar16;
        local_210 = piVar16;
        if (iVar8 <= iVar6) {
          if (iVar8 < 2) {
LAB_14958d379:
            if (iVar8 < 1) goto LAB_14958d7a7;
          }
          else if (-1 < *(short *)(lVar1 + 0x5c)) {
            FUN_1495ae29e(param_1,param_2);
            iVar8 = *piVar16;
            goto LAB_14958d379;
          }
          plVar20 = (longlong *)(local_210 + 0x18);
          lVar21 = 0;
          piVar16 = local_210;
          goto LAB_14958d390;
        }
        lVar12 = (longlong)iVar6;
        puVar2 = *(undefined8 **)(piVar16 + lVar12 * 0x1c + 10);
        lVar21 = *(longlong *)(piVar16 + lVar12 * 0x1c + 0xc);
        if ((*(byte *)(piVar16 + lVar12 * 0x1c + 0x11) & 8) != 0) {
          local_218 = (uint *)(piVar16 + lVar12 * 0x1c + 2);
          iVar8 = FUN_1495a0531(*(undefined8 *)(param_2 + 0x30),piVar16[lVar12 * 0x1c + 0x13]);
          if ((iVar8 != 0) && ((*(byte *)(lVar1 + 0x5d) & 0x20) == 0)) {
            *(byte *)(local_218 + 0xf) = (byte)local_218[0xf] & 0xd7;
            FUN_1495abcf2(*(undefined8 *)(param_2 + 0x30),local_218[0x11]);
          }
        }
        piVar16 = local_210;
        iVar8 = iVar6;
        if (lVar21 != 0) {
          iVar22 = (int)*(short *)((longlong)puVar2 + 0x46);
          if (**(int **)(lVar21 + 0x20) != iVar22) {
            local_238 = (byte *)CONCAT44(local_238._4_4_,**(int **)(lVar21 + 0x20));
            FUN_14955a364(param_1,"expected %d columns for \'%s\' but got %d",iVar22,*puVar2);
            goto LAB_14958dcd7;
          }
          if (((*(byte *)(lVar21 + 4) & 8) == 0) &&
             ((((iVar6 != 0 || (*(longlong *)(lVar21 + 0x48) == 0)) ||
               ((*(byte *)(param_2 + 6) & 4) == 0)) ||
              ((iVar8 = 0, *local_210 != 1 && ((*(byte *)(local_210 + 0x2d) & 10) == 0)))))) {
            iVar8 = FUN_1495abd79(param_1,param_2);
            if (((iVar8 != 0) && (iVar6 = -1, (int)param_1[6] != 0)) ||
               (*(char *)(lVar1 + 0x61) != '\0')) goto LAB_14958dcd7;
            piVar16 = *(int **)(param_2 + 0x28);
            iVar8 = iVar6;
            if (8 < *param_3) {
              local_100 = *(uint **)(param_2 + 0x48);
            }
          }
        }
        iVar6 = iVar8 + 1;
      } while (*(longlong *)(param_2 + 0x50) == 0);
    }
    uVar7 = FUN_1495ac654(param_1,param_2,param_3);
    if (*(longlong *)(param_2 + 0x58) != 0) goto LAB_14958d015;
  }
  else {
LAB_14958d11d:
    if (local_150 != 0) {
      FUN_149582d29(lVar1);
    }
    if (local_128._0_8_ != 0) {
      FUN_14955d65a(lVar1);
    }
    if (local_118._0_8_ != 0) {
      FUN_14955d65a(lVar1);
    }
  }
  iVar6 = (int)param_1[0x24];
  if (iVar6 == 0) {
    uVar10 = 0;
  }
  else {
    plVar11 = (longlong *)param_1[2];
    if (iVar6 < 0) {
      iVar6 = (int)plVar11[0x12] + -1;
    }
    if (*(char *)(*plVar11 + 0x61) == '\0') {
      puVar18 = (undefined1 *)((longlong)iVar6 * 0x18 + plVar11[0x11]);
    }
    else {
      puVar18 = &DAT_14cc1ee40;
    }
    uVar10 = *(undefined4 *)(puVar18 + 8);
  }
  *(undefined4 *)(param_1 + 0x24) = uVar10;
LAB_14958d015:
  if ((local_90 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
LAB_14958d390:
  do {
    if ((*plVar20 == 0) && (plVar20[-9] != 0)) {
      local_238 = (byte *)plVar20[-10];
      FUN_1495a2d6b(param_1,0x14,plVar20[-9],&DAT_149e02088);
      piVar16 = local_210;
    }
    lVar12 = plVar20[-6];
    if (lVar12 != 0) {
      local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffff00000000);
      FUN_1495b4ba4(param_2,&local_c0);
      *(int *)((longlong)param_1 + 0x11c) = *(int *)((longlong)param_1 + 0x11c) + (int)local_c0;
      if ((*(byte *)(lVar1 + 0x5d) & 0x10) == 0) {
        local_238 = (byte *)(CONCAT44(local_238._4_4_,*(uint *)((longlong)plVar20 + -0x1c) >> 5) &
                            0xffffffff00000001);
        FUN_1495ae380(param_1,lVar12,*(undefined8 *)(param_2 + 0x30),
                      *(int *)((longlong)plVar20 + -0x14));
      }
      local_1d8 = param_1[0x2b];
      param_1[0x2b] = plVar20[-9];
      if ((lVar21 == 0) && ((*local_210 == 1 || ((*(byte *)(local_210 + 0x2d) & 10) != 0)))) {
        local_200 = (int *)(ulonglong)*(uint *)(plVar11 + 0x12);
        local_238._0_4_ = *(uint *)(plVar11 + 0x12) + 1;
        local_218 = (uint *)CONCAT44(local_218._4_4_,(uint)local_238);
        iVar6 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar6;
        *(int *)((longlong)plVar20 + -0x24) = iVar6;
        FUN_149584f48(plVar11,0xd,iVar6,0);
        *(int *)(plVar20 + -5) = (int)local_218;
        local_188 = (longlong *)CONCAT71(local_188._1_7_,0xd);
        local_188 = (longlong *)CONCAT44(*(int *)((longlong)plVar20 + -0x24),(undefined4)local_188);
        local_180 = (undefined1  [16])0x0;
        FUN_1495a08a0(param_1,1,"CO-ROUTINE %u");
        FUN_14958cf93(param_1,lVar12,&local_188);
        *(undefined2 *)(plVar20[-7] + 0x4a) = *(undefined2 *)(lVar12 + 2);
        *(byte *)(plVar20 + -3) = *(byte *)(plVar20 + -3) | 0x10;
        *(undefined4 *)(plVar20 + -4) = local_180._0_4_;
        local_238 = (byte *)((ulonglong)local_238._4_4_ << 0x20);
        FUN_149584f48(plVar11,0x42,*(int *)((longlong)plVar20 + -0x24));
        *(undefined1 *)(plVar11[3] + 0x1f) = 0;
        *(undefined4 *)(plVar11[3] + 0x28) = 0;
        puVar18 = &DAT_14cc1ee40;
        if (*(char *)(*plVar11 + 0x61) == '\0') {
          iVar6 = (int)plVar11[0x12] + -1;
          if (-1 < (int)local_200) {
            iVar6 = (int)local_200;
          }
          puVar18 = (undefined1 *)((longlong)iVar6 * 0x18 + plVar11[0x11]);
        }
        *(int *)(puVar18 + 8) = (int)plVar11[0x12];
      }
      else {
        iVar6 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar6;
        *(int *)((longlong)plVar20 + -0x24) = iVar6;
        local_238 = (byte *)((ulonglong)local_238._4_4_ << 0x20);
        local_200 = (int *)((ulonglong)local_200 & 0xffffffff00000000);
        local_218 = (uint *)FUN_149584f48(plVar11,0x45,0);
        *(int *)(plVar20 + -5) = (int)local_218 + 1;
        if ((*(byte *)(plVar20 + -3) & 8) == 0) {
          local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
          uVar10 = FUN_149584f48(plVar11,0x11,0,0);
          local_200 = (int *)CONCAT44(local_200._4_4_,uVar10);
        }
        lVar13 = FUN_1495ae52c(local_210,plVar20 + -0xb);
        if (lVar13 == 0) {
          local_188 = (longlong *)CONCAT71(local_188._1_7_,0xc);
          local_188 = (longlong *)
                      CONCAT44(*(int *)((longlong)plVar20 + -0x14),(undefined4)local_188);
          local_180 = (undefined1  [16])0x0;
          FUN_1495a08a0(param_1,1,"MATERIALIZE %u");
          FUN_14958cf93(param_1,lVar12,&local_188);
          uVar5 = *(undefined2 *)(lVar12 + 2);
        }
        else {
          local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
          local_1f8 = lVar13;
          FUN_149584f48(plVar11,0x62,*(int *)((longlong)plVar20 + -0x14),
                        *(undefined4 *)(lVar13 + 0x44));
          uVar5 = *(undefined2 *)(*(longlong *)(local_1f8 + 0x28) + 2);
          *(undefined2 *)(lVar12 + 2) = uVar5;
        }
        *(undefined2 *)(plVar20[-7] + 0x4a) = uVar5;
        if ((int)local_200 != 0) {
          puVar18 = &DAT_14cc1ee40;
          if (*(char *)(*plVar11 + 0x61) == '\0') {
            iVar6 = (int)plVar11[0x12] + -1;
            if (-1 < (int)local_200) {
              iVar6 = (int)local_200;
            }
            puVar18 = (undefined1 *)((longlong)iVar6 * 0x18 + plVar11[0x11]);
          }
          *(int *)(puVar18 + 8) = (int)plVar11[0x12];
        }
        local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
        uVar10 = FUN_149584f48(plVar11,0x41,*(int *)((longlong)plVar20 + -0x24),0);
        if ((int)local_218 < 0) {
          local_218 = (uint *)(ulonglong)((int)plVar11[0x12] - 1);
        }
        puVar18 = &DAT_14cc1ee40;
        if (*(char *)(*plVar11 + 0x61) == '\0') {
          puVar18 = (undefined1 *)((longlong)(int)local_218 * 0x18 + plVar11[0x11]);
        }
        *(undefined4 *)(puVar18 + 4) = uVar10;
      }
      *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
      *(undefined4 *)(param_1 + 5) = 0;
      if (*(char *)(lVar1 + 0x61) != '\0') goto LAB_14958dcd7;
      local_c0 = (longlong *)((ulonglong)local_c0 & 0xffffffff00000000);
      FUN_1495b4ba4(param_2,&local_c0);
      *(int *)((longlong)param_1 + 0x11c) = *(int *)((longlong)param_1 + 0x11c) - (int)local_c0;
      param_1[0x2b] = local_1d8;
      piVar16 = local_210;
    }
    lVar21 = lVar21 + 1;
    plVar20 = plVar20 + 0xe;
  } while (lVar21 < *piVar16);
LAB_14958d7a7:
  puVar24 = local_100;
  local_200 = *(int **)(param_2 + 0x20);
  local_1f8 = *(longlong *)(param_2 + 0x30);
  local_218 = *(uint **)(param_2 + 0x38);
  local_1d8 = *(longlong *)(param_2 + 0x40);
  local_cc = (byte)*(uint *)(param_2 + 4) & 1;
  if ((((*(uint *)(param_2 + 4) & 9) == 1) &&
      (iVar6 = FUN_1495a03ca(local_100,local_200,0xffffffff), iVar6 == 0)) &&
     (*(longlong *)(param_2 + 0x70) == 0)) {
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe;
    local_218 = (uint *)FUN_1495a22be(lVar1,local_200,0);
    *(uint **)(param_2 + 0x38) = local_218;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 8;
  }
  piVar16 = local_200;
  uVar7 = 0xffffffff;
  if (puVar24 != (uint *)0x0) {
    uVar14 = FUN_1495ae612(param_1,puVar24,0,*local_200);
    iVar6 = *(int *)((longlong)param_1 + 0x34);
    *(int *)((longlong)param_1 + 0x34) = iVar6 + 1;
    local_f8._4_4_ = iVar6;
    local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
    uVar7 = FUN_149584f48(plVar11,100,iVar6,*puVar24 + 1 + *piVar16);
    FUN_14955a5b6(plVar11,uVar7,uVar14,&DAT_fffffff7);
  }
  local_e8._0_4_ = uVar7;
  if (*param_3 == 0xc) {
    local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
    FUN_149584f48(plVar11,100,*(undefined4 *)(param_3 + 4),*local_200);
  }
  local_1a8 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) - 1;
  if ((*(byte *)(param_2 + 5) & 0x40) == 0) {
    *(undefined2 *)(param_2 + 2) = 0x140;
  }
  FUN_1495ae69f(param_1,param_2);
  if ((*(int *)(param_2 + 8) == 0) && (-1 < (int)uVar7)) {
    if (*(char *)(*plVar11 + 0x61) == '\0') {
      puVar18 = (undefined1 *)((ulonglong)uVar7 * 0x18 + plVar11[0x11]);
    }
    else {
      puVar18 = &DAT_14cc1ee40;
    }
    *puVar18 = 0x6f;
    local_e8[0xc] = local_e8[0xc] | 1;
  }
  if ((*(byte *)(param_2 + 4) & 1) == 0) {
    local_cb = '\0';
  }
  else {
    iVar6 = *(int *)((longlong)param_1 + 0x34);
    *(int *)((longlong)param_1 + 0x34) = iVar6 + 1;
    local_c8 = iVar6;
    uVar14 = FUN_1495ae612(param_1,*(undefined8 *)(param_2 + 0x20),0,0);
    local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
    uVar10 = FUN_149584f48(plVar11,100,iVar6,0);
    FUN_14955a5b6(plVar11,uVar10,uVar14,&DAT_fffffff7);
    local_cb = '\x03';
    local_c4 = uVar10;
    if (0 < (longlong)(int)plVar11[0x12]) {
      *(undefined2 *)(plVar11[0x11] + -0x16 + (longlong)(int)plVar11[0x12] * 0x18) = 8;
    }
  }
  bVar4 = local_cc;
  auVar3 = _DAT_149931e80;
  if (local_218 == (uint *)0x0 && local_208 == 0) {
    bVar25 = local_cc != 0;
    uVar10 = *(undefined4 *)(param_2 + 4);
    local_218 = *(uint **)(param_2 + 0x70);
    if (local_218 != (uint *)0x0) {
      FUN_1495ae976(param_1,param_2);
    }
    puVar24 = local_100;
    local_228 = (int)*(short *)(param_2 + 2);
    local_238 = *(byte **)(param_2 + 0x20);
    local_230 = (byte *)CONCAT62(local_230._2_6_,(ushort)uVar10 & 0x4000 | (ushort)bVar25 << 8);
    lVar21 = FUN_1495aecc3(param_1,local_210,local_1f8,local_100);
    if (lVar21 == 0) {
LAB_14958dcd7:
      uVar7 = 0;
      goto LAB_14958d11d;
    }
    if (*(short *)(lVar21 + 0x48) < *(short *)(param_2 + 2)) {
      *(short *)(param_2 + 2) = *(short *)(lVar21 + 0x48);
    }
    if ((bVar4 != 0) && (*(char *)(lVar21 + 0x43) != '\0')) {
      local_cb = *(char *)(lVar21 + 0x43);
    }
    if (puVar24 == (uint *)0x0) {
LAB_14958da1f:
      lVar12 = (longlong)(int)local_e8._0_4_;
      if ((-1 < lVar12) && (*(char *)(*plVar11 + 0x61) == '\0')) {
        lVar13 = plVar11[0x11];
        FUN_149569985(*plVar11,(int)*(char *)(lVar13 + 1 + lVar12 * 0x18),
                      *(undefined8 *)(lVar13 + 0x10 + lVar12 * 0x18));
        *(undefined8 *)(lVar13 + 0x10 + lVar12 * 0x18) = 0;
        *(undefined2 *)(lVar13 + lVar12 * 0x18) = 0xad;
      }
    }
    else {
      local_f8._0_4_ = (int)*(char *)(lVar21 + 0x41);
      if ((*(byte *)(lVar21 + 0x44) & 4) == 0) {
        puVar19 = (undefined4 *)(lVar21 + 0x30);
      }
      else {
        puVar19 = (undefined4 *)
                  ((ulonglong)((uint)*(byte *)(lVar21 + 0x40) * 0x60) + lVar21 + 0x348);
      }
      local_e8._8_4_ = *puVar19;
      if (*puVar24 == (int)*(char *)(lVar21 + 0x41)) {
        local_100 = (uint *)0x0;
        goto LAB_14958da1f;
      }
    }
    if (local_218 == (uint *)0x0) {
      local_228 = *(int *)(lVar21 + 0x30);
      local_220 = *(int *)(lVar21 + 0x34);
      local_238 = &local_cc;
      local_230 = param_3;
      FUN_1495b1362(param_1,param_2,0xffffffff,&local_100);
      FUN_1495b2193(lVar21);
    }
    else {
      iVar6 = *(int *)((longlong)param_1 + 0x44);
      local_210 = (int *)CONCAT44(local_210._4_4_,iVar6 + -2);
      iVar22 = iVar6 + -3;
      *(int *)((longlong)param_1 + 0x44) = iVar22;
      iVar8 = (int)param_1[7] + 1;
      *(int *)(param_1 + 7) = iVar8;
      local_238._0_4_ = iVar6 + -1;
      FUN_1495b01fe(param_1,param_2,lVar21);
      local_238 = (byte *)((ulonglong)local_238._4_4_ << 0x20);
      FUN_149584f48(plVar11,0xb,0,iVar22);
      lVar21 = plVar11[3];
      if (*(int *)(lVar21 + 0x44) + *(int *)(lVar21 + 0x48) < 0) {
        FUN_1495a1bff(lVar21,plVar11);
      }
      else {
        *(int *)(*(longlong *)(lVar21 + 0x50) + (longlong)-iVar6 * 4) = (int)plVar11[0x12];
      }
      local_e8._8_4_ = 0;
      local_228 = (int)local_210;
      local_238 = &local_cc;
      local_230 = param_3;
      local_220 = iVar22;
      FUN_1495b1362(param_1,param_2,0xffffffff);
      lVar21 = plVar11[3];
      if (*(int *)(lVar21 + 0x44) + *(int *)(lVar21 + 0x48) < 0) {
        FUN_1495a1bff(lVar21,plVar11);
      }
      else {
        *(int *)(*(longlong *)(lVar21 + 0x50) + (longlong)(1 - iVar6) * 4) = (int)plVar11[0x12];
      }
      local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
      FUN_149584f48(plVar11,0x41,iVar8,0);
      lVar21 = plVar11[3];
      uVar7 = 2 - iVar6;
      uVar17 = (ulonglong)uVar7;
      if (*(int *)(lVar21 + 0x44) + *(int *)(lVar21 + 0x48) < 0) goto LAB_14958eab4;
      uVar10 = (undefined4)plVar11[0x12];
      lVar21 = *(longlong *)(lVar21 + 0x50);
LAB_14958e8c8:
      *(undefined4 *)(lVar21 + (longlong)(int)uVar7 * 4) = uVar10;
    }
  }
  else {
    if (local_218 == (uint *)0x0) {
      *(undefined2 *)(param_2 + 2) = 0;
      local_208 = 0;
    }
    else {
      iVar6 = **(int **)(param_2 + 0x20);
      if (0 < (longlong)iVar6) {
        lVar21 = (longlong)iVar6 + -1;
        auVar26._8_4_ = (int)lVar21;
        auVar26._0_8_ = lVar21;
        auVar26._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        puVar15 = (undefined2 *)((longlong)*(int **)(param_2 + 0x20) + 0x102);
        uVar17 = 0;
        in_XMM1 = pmovsxbq(in_XMM1,0x706);
        in_XMM2 = pmovsxbq(in_XMM2,0x504);
        in_XMM3 = pmovsxbq(in_XMM3,0x302);
        in_XMM4 = pmovsxbq(in_XMM4,0x100);
        auVar26 = auVar26 ^ _DAT_149931e80;
        lVar21 = auVar26._0_8_;
        auVar27._8_4_ = 0xffffffff;
        auVar27._0_8_ = 0xffffffffffffffff;
        auVar27._12_4_ = 0xffffffff;
        do {
          auVar29._8_4_ = (int)uVar17;
          auVar29._0_8_ = uVar17;
          auVar29._12_4_ = (int)(uVar17 >> 0x20);
          auVar33 = (auVar29 | in_XMM4) ^ auVar3;
          auVar34._0_8_ = -(ulonglong)(lVar21 < auVar33._0_8_);
          lVar12 = auVar26._8_8_;
          auVar34._8_8_ = -(ulonglong)(lVar12 < auVar33._8_8_);
          auVar33 = pshuflw(unaff_XMM9,auVar34,0xe8);
          auVar33 = packssdw(auVar33 ^ auVar27,auVar33 ^ auVar27);
          if ((auVar33._0_4_ & 1) != 0) {
            puVar15[-0x70] = 0;
          }
          auVar34 = packssdw(auVar34,auVar34);
          auVar34 = packssdw(auVar34 ^ auVar27,auVar34 ^ auVar27);
          if ((auVar34[2] & 1) != 0) {
            puVar15[-0x60] = 0;
          }
          auVar34 = (auVar29 | in_XMM3) ^ auVar3;
          auVar35._0_8_ = -(ulonglong)(lVar21 < auVar34._0_8_);
          auVar35._8_8_ = -(ulonglong)(lVar12 < auVar34._8_8_);
          auVar33 = packssdw(auVar33,auVar35);
          auVar33 = packssdw(auVar33 ^ auVar27,auVar33 ^ auVar27);
          if ((auVar33[4] & 1) != 0) {
            puVar15[-0x50] = 0;
          }
          auVar34 = pshufhw(auVar35,auVar35,0x84);
          auVar34 = packssdw(auVar34 ^ auVar27,auVar34 ^ auVar27);
          if ((auVar34[6] & 1) != 0) {
            puVar15[-0x40] = 0;
          }
          auVar34 = (auVar29 | in_XMM2) ^ auVar3;
          auVar37._0_8_ = -(ulonglong)(lVar21 < auVar34._0_8_);
          auVar37._8_8_ = -(ulonglong)(lVar12 < auVar34._8_8_);
          auVar33 = pshuflw(auVar33,auVar37,0xe8);
          unaff_XMM9 = packssdw(auVar33 ^ auVar27,auVar33 ^ auVar27);
          if ((unaff_XMM9[8] & 1) != 0) {
            puVar15[-0x30] = 0;
          }
          auVar33 = packssdw(auVar37,auVar37);
          auVar33 = packssdw(auVar33 ^ auVar27,auVar33 ^ auVar27);
          if ((auVar33[10] & 1) != 0) {
            puVar15[-0x20] = 0;
          }
          auVar29 = (auVar29 | in_XMM1) ^ auVar3;
          auVar30._0_8_ = -(ulonglong)(lVar21 < auVar29._0_8_);
          auVar30._8_8_ = -(ulonglong)(lVar12 < auVar29._8_8_);
          auVar29 = packssdw(auVar33,auVar30);
          auVar29 = packssdw(auVar29 ^ auVar27,auVar29 ^ auVar27);
          if ((auVar29[0xc] & 1) != 0) {
            puVar15[-0x10] = 0;
          }
          auVar29 = pshufhw(auVar30,auVar30,0x84);
          auVar29 = packssdw(auVar29 ^ auVar27,auVar29 ^ auVar27);
          if ((auVar29[0xe] & 1) != 0) {
            *puVar15 = 0;
          }
          uVar17 = uVar17 + 8;
          puVar15 = puVar15 + 0x80;
        } while ((iVar6 + 7U & 0xfffffff8) != uVar17);
      }
      auVar3 = _DAT_149931e80;
      uVar7 = *local_218;
      if (0 < (longlong)(int)uVar7) {
        lVar21 = (longlong)(int)uVar7 + -1;
        auVar33._8_4_ = (int)lVar21;
        auVar33._0_8_ = lVar21;
        auVar33._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        puVar15 = (undefined2 *)((longlong)local_218 + 0x102);
        uVar17 = 0;
        auVar26 = pmovsxbq(in_XMM1,0x706);
        auVar27 = pmovsxbq(in_XMM2,0x504);
        auVar29 = pmovsxbq(in_XMM3,0x302);
        auVar34 = pmovsxbq(in_XMM4,0x100);
        auVar33 = auVar33 ^ _DAT_149931e80;
        lVar21 = auVar33._0_8_;
        auVar28._8_4_ = 0xffffffff;
        auVar28._0_8_ = 0xffffffffffffffff;
        auVar28._12_4_ = 0xffffffff;
        do {
          auVar31._8_4_ = (int)uVar17;
          auVar31._0_8_ = uVar17;
          auVar31._12_4_ = (int)(uVar17 >> 0x20);
          auVar35 = (auVar31 | auVar34) ^ auVar3;
          auVar36._0_8_ = -(ulonglong)(lVar21 < auVar35._0_8_);
          lVar12 = auVar33._8_8_;
          auVar36._8_8_ = -(ulonglong)(lVar12 < auVar35._8_8_);
          auVar35 = pshuflw(unaff_XMM9,auVar36,0xe8);
          auVar35 = packssdw(auVar35 ^ auVar28,auVar35 ^ auVar28);
          if ((auVar35._0_4_ & 1) != 0) {
            puVar15[-0x70] = 0;
          }
          auVar37 = packssdw(auVar36,auVar36);
          auVar37 = packssdw(auVar37 ^ auVar28,auVar37 ^ auVar28);
          if ((auVar37[2] & 1) != 0) {
            puVar15[-0x60] = 0;
          }
          auVar37 = (auVar31 | auVar29) ^ auVar3;
          auVar38._0_8_ = -(ulonglong)(lVar21 < auVar37._0_8_);
          auVar38._8_8_ = -(ulonglong)(lVar12 < auVar37._8_8_);
          auVar35 = packssdw(auVar35,auVar38);
          auVar35 = packssdw(auVar35 ^ auVar28,auVar35 ^ auVar28);
          if ((auVar35[4] & 1) != 0) {
            puVar15[-0x50] = 0;
          }
          auVar37 = pshufhw(auVar38,auVar38,0x84);
          auVar37 = packssdw(auVar37 ^ auVar28,auVar37 ^ auVar28);
          if ((auVar37[6] & 1) != 0) {
            puVar15[-0x40] = 0;
          }
          auVar37 = (auVar31 | auVar27) ^ auVar3;
          auVar39._0_8_ = -(ulonglong)(lVar21 < auVar37._0_8_);
          auVar39._8_8_ = -(ulonglong)(lVar12 < auVar37._8_8_);
          auVar35 = pshuflw(auVar35,auVar39,0xe8);
          unaff_XMM9 = packssdw(auVar35 ^ auVar28,auVar35 ^ auVar28);
          if ((unaff_XMM9[8] & 1) != 0) {
            puVar15[-0x30] = 0;
          }
          auVar35 = packssdw(auVar39,auVar39);
          auVar35 = packssdw(auVar35 ^ auVar28,auVar35 ^ auVar28);
          if ((auVar35[10] & 1) != 0) {
            puVar15[-0x20] = 0;
          }
          auVar37 = (auVar31 | auVar26) ^ auVar3;
          auVar32._0_8_ = -(ulonglong)(lVar21 < auVar37._0_8_);
          auVar32._8_8_ = -(ulonglong)(lVar12 < auVar37._8_8_);
          auVar35 = packssdw(auVar35,auVar32);
          auVar35 = packssdw(auVar35 ^ auVar28,auVar35 ^ auVar28);
          if ((auVar35[0xc] & 1) != 0) {
            puVar15[-0x10] = 0;
          }
          auVar35 = pshufhw(auVar32,auVar32,0x84);
          auVar35 = packssdw(auVar35 ^ auVar28,auVar35 ^ auVar28);
          if ((auVar35[0xe] & 1) != 0) {
            *puVar15 = 0;
          }
          uVar17 = uVar17 + 8;
          puVar15 = puVar15 + 0x80;
        } while ((uVar7 + 7 & 0xfffffff8) != uVar17);
      }
      if (0x42 < *(short *)(param_2 + 2)) {
        *(undefined2 *)(param_2 + 2) = 0x42;
      }
      local_208 = 0;
      if (local_100 != (uint *)0x0) {
        uVar7 = *local_218;
        if (uVar7 == *local_100) {
          if (0 < (int)uVar7) {
            lVar21 = 0;
            do {
              *(byte *)((longlong)local_218 + lVar21 + 0x18) =
                   *(byte *)((longlong)local_100 + lVar21 + 0x18) & 1;
              lVar21 = lVar21 + 0x20;
            } while ((ulonglong)uVar7 << 5 != lVar21);
          }
          iVar6 = FUN_1495a03ca(local_218,local_100,0xffffffff);
          local_208 = (uint)(iVar6 == 0);
        }
      }
    }
    local_1b0 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
    local_1ec = *(uint *)((longlong)param_1 + 0x44) - 1;
    *(int *)((longlong)param_1 + 0x44) = local_1ec;
    local_160 = (undefined1  [16])0x0;
    local_170 = (undefined1  [16])0x0;
    local_180._8_8_ = local_148;
    local_180._0_8_ = local_210;
    local_148._12_4_ = 0;
    local_138._0_4_ = (int)param_1[7] + 1;
    if (local_218 != (uint *)0x0) {
      local_148._12_4_ = *local_218;
    }
    local_138._8_8_ = local_218;
    local_188 = param_1;
    FUN_1495b2ab2(&local_188,local_200);
    FUN_1495b2ab2(&local_188,local_100);
    if (local_1d8 != 0) {
      if (local_218 != (uint *)0x0) {
        local_b0 = (undefined1  [16])0x0;
        local_a0 = 0;
        local_b8 = FUN_1495c2a96;
        if (*(longlong *)(param_2 + 0x40) != 0) {
          local_c0 = param_1;
          local_98 = (undefined8 *)param_2;
          FUN_14959fa98(&local_c0);
        }
        local_1f8 = *(longlong *)(param_2 + 0x30);
      }
      local_b8 = FUN_1495c2c8e;
      local_b0._8_8_ = &LAB_1495c2fa2;
      local_b0._0_8_ = &LAB_1495c2f9c;
      local_a0 = local_a0 & 0xffffffff00000000;
      local_98 = &local_188;
      local_c0 = (longlong *)0x0;
      FUN_14959fa98(&local_c0,local_1d8);
    }
    local_128._12_4_ = local_128._8_4_;
    if (*(longlong *)(param_2 + 0x38) == 0) {
      local_204 = 0;
      if ((*(longlong *)(param_2 + 0x40) == 0) && (local_118._8_4_ == 1)) {
        local_204 = FUN_1495b2b6f(lVar1,*(undefined8 *)local_118._0_8_,&local_150);
      }
    }
    else {
      local_204 = 0;
    }
    uVar7 = local_118._8_4_;
    if (0 < (int)local_118._8_4_) {
      lVar12 = 0;
      lVar21 = 0;
      uVar9 = local_160._0_4_;
      do {
        lVar13 = *(longlong *)(local_118._0_8_ + lVar12);
        local_160._0_4_ = uVar9 | 0x20000;
        FUN_1495b2ab2(&local_188,*(undefined8 *)(lVar13 + 0x20));
        if ((*(byte *)(lVar13 + 7) & 1) != 0) {
          local_b8 = FUN_1495c2c8e;
          local_b0._8_8_ = &LAB_1495c2fa2;
          local_b0._0_8_ = &LAB_1495c2f9c;
          local_a0 = local_a0 & 0xffffffff00000000;
          local_98 = &local_188;
          local_c0 = (longlong *)0x0;
          if (*(longlong *)(*(longlong *)(lVar13 + 0x40) + 0x48) != 0) {
            FUN_14959fa98(&local_c0);
          }
        }
        uVar9 = local_160._0_4_ & 0xfffdffff;
        local_160._0_4_ = uVar9;
        lVar21 = lVar21 + 1;
        lVar12 = lVar12 + 0x18;
        uVar7 = local_118._8_4_;
      } while (lVar21 < (int)local_118._8_4_);
    }
    puVar24 = local_218;
    lVar21 = param_1[7];
    local_138._4_4_ = (int)lVar21;
    if (*(char *)(lVar1 + 0x61) != '\0') goto LAB_14958dcd7;
    if (local_218 == (uint *)0x0) {
      local_218 = (uint *)FUN_1495b3144(param_2,local_148);
      if (local_218 == (uint *)0x0) {
        iVar6 = 0;
        if (local_128._12_4_ != 0) {
          iVar6 = 0;
          uVar17 = 0;
          if ((int)uVar7 < 1) {
LAB_14958e9fc:
            if ((uint)uVar17 != uVar7) goto LAB_14958e261;
          }
          else {
            plVar20 = (longlong *)(local_118._0_8_ + 8);
            uVar17 = 0;
            do {
              if (((*(byte *)(plVar20[-1] + 7) & 1) == 0) && ((*(byte *)(*plVar20 + 4) & 0x20) != 0)
                 ) goto LAB_14958e9fc;
              uVar17 = uVar17 + 1;
              plVar20 = plVar20 + 3;
            } while (uVar7 != uVar17);
          }
          iVar6 = (int)lVar21 + 1;
          *(int *)(param_1 + 7) = iVar6;
          local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
          FUN_149584f48(plVar11,0x45,0,iVar6);
        }
LAB_14958e261:
        FUN_1495b3065(param_1,local_148);
        local_230 = (byte *)CONCAT62(local_230._2_6_,(ushort)(byte)local_204);
        local_228 = 0;
        local_238 = (byte *)0x0;
        lVar21 = FUN_1495aecc3(param_1,local_210,local_1f8,local_150);
        if (lVar21 == 0) goto LAB_14958dcd7;
        FUN_1495b2c26(param_1,iVar6,local_148);
        if (iVar6 != 0) {
          local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
          FUN_149584f48(plVar11,0x45,1,iVar6);
        }
        if ('\0' < *(char *)(lVar21 + 0x41)) {
          local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
          FUN_149584f48(plVar11,0xb,0,*(undefined4 *)(lVar21 + 0x34));
        }
        FUN_1495b2193(lVar21);
        FUN_1495b2fd0(param_1,local_148);
      }
      else {
        uVar7 = 0xfff0bdc0;
        if (*(longlong *)(local_218 + 0x1c) != 0) {
          uVar7 = 0xffffffff;
          plVar20 = (longlong *)(*(longlong *)(*param_1 + 0x20) + 0x18);
          do {
            uVar7 = uVar7 + 1;
            lVar21 = *plVar20;
            plVar20 = plVar20 + 4;
          } while (lVar21 != *(longlong *)(local_218 + 0x1c));
        }
        local_210 = (int *)(ulonglong)*(uint *)((longlong)param_1 + 0x34);
        *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) + 1;
        plVar20 = (longlong *)param_1[0x14];
        if ((longlong *)param_1[0x14] == (longlong *)0x0) {
          plVar20 = param_1;
        }
        local_208 = local_218[0xe];
        if (((*(uint *)((longlong)plVar20 + 0x74) >> (uVar7 & 0x1f) & 1) == 0) &&
           (*(uint *)((longlong)plVar20 + 0x74) =
                 *(uint *)((longlong)plVar20 + 0x74) | 1 << ((byte)uVar7 & 0x1f), uVar7 == 1)) {
          FUN_14955dea7(plVar20);
        }
        puVar24 = local_218;
        local_238 = *(byte **)local_218;
        lVar12 = 0;
        FUN_14959b139(param_1,uVar7,local_218[0xe],0);
        lVar21 = *(longlong *)(puVar24 + 4);
        if ((puVar24[0x10] & 0x80) == 0) {
joined_r0x00014958e5cc:
          for (; lVar21 != 0; lVar21 = *(longlong *)(lVar21 + 0x28)) {
            if (((((*(byte *)(lVar21 + 100) & 4) == 0) &&
                 (*(short *)(lVar21 + 0x5c) < (short)local_218[0x13])) &&
                (*(longlong *)(lVar21 + 0x48) == 0)) &&
               ((lVar12 == 0 || (*(short *)(lVar21 + 0x5c) < *(short *)(lVar12 + 0x5c))))) {
              lVar12 = lVar21;
            }
          }
          if (lVar12 == 0) goto LAB_14958e5db;
          local_208 = *(uint *)(lVar12 + 0x58);
          lVar21 = FUN_14959b304(param_1,lVar12);
        }
        else {
          lVar12 = lVar21;
          if (lVar21 != 0) {
            do {
              if ((*(uint *)(lVar12 + 100) & 3) == 2) goto joined_r0x00014958e5cc;
              plVar20 = (longlong *)(lVar12 + 0x28);
              lVar12 = *plVar20;
            } while (*plVar20 != 0);
            lVar12 = 0;
            goto joined_r0x00014958e5cc;
          }
LAB_14958e5db:
          lVar12 = 0;
          lVar21 = 0;
        }
        local_238 = (byte *)CONCAT44(local_238._4_4_,uVar7);
        iVar6 = FUN_149584f48(plVar11,0x60,local_210,local_208);
        if (*(char *)(*plVar11 + 0x61) == '\0') {
          lVar13 = plVar11[0x11];
          *(undefined1 *)(lVar13 + 1 + (longlong)iVar6 * 0x18) = 0xfd;
          *(undefined4 *)(lVar13 + 0x10 + (longlong)iVar6 * 0x18) = 1;
        }
        if (lVar21 != 0) {
          FUN_14955a5b6(plVar11,0xffffffff,lVar21,&DAT_fffffff7);
        }
        piVar16 = local_210;
        local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
        FUN_149584f48(plVar11,0x5c,(ulonglong)local_210 & 0xffffffff,
                      *(undefined4 *)(local_118._0_8_ + 0x10));
        local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
        FUN_149584f48(plVar11,0x74,(ulonglong)piVar16 & 0xffffffff,0);
        FUN_1495b319e(param_1,local_218,lVar12);
      }
      iVar6 = local_1ec;
      local_100 = (uint *)0x0;
      FUN_14959ec19(param_1,local_1d8,local_1ec,0x10);
      local_220 = iVar6;
      local_228 = iVar6;
      local_238 = (byte *)0x0;
      local_230 = param_3;
      FUN_1495b1362(param_1,param_2,0xffffffff,0);
    }
    else {
      iVar6 = *(int *)((longlong)param_1 + 0x34);
      *(int *)((longlong)param_1 + 0x34) = iVar6 + 1;
      local_148._4_4_ = iVar6;
      piVar16 = (int *)FUN_1495ae612(param_1,local_218,0,local_128._8_4_);
      local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
      local_190 = FUN_149584f48(plVar11,0x6f,local_148._4_4_,local_148._12_4_);
      local_1a0 = piVar16;
      FUN_14955a5b6(plVar11,local_190,piVar16,&DAT_fffffff7);
      uVar7 = *(uint *)(param_1 + 7);
      local_1e0 = (ulonglong)uVar7;
      local_198 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
      local_1c8 = uVar7 + 2;
      iVar8 = uVar7 + 4;
      *(int *)(param_1 + 7) = iVar8;
      iVar22 = *(uint *)((longlong)param_1 + 0x44) - 2;
      *(int *)((longlong)param_1 + 0x44) = iVar22;
      local_204 = uVar7 + 5;
      local_1c0 = (ulonglong)*puVar24;
      iVar6 = uVar7 + *puVar24 + 4;
      *(int *)(param_1 + 7) = iVar6;
      *(uint *)(param_1 + 7) = iVar6 + *puVar24;
      local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
      local_218 = puVar24;
      FUN_149584f48(plVar11,0x45,0);
      local_238._0_4_ = *puVar24 + iVar8;
      FUN_149584f48(plVar11,0x48,0,local_204);
      local_238 = (byte *)((ulonglong)local_238._4_4_ << 0x20);
      local_1c4 = iVar8;
      local_18c = iVar22;
      FUN_149584f48(plVar11,0xc,iVar8,iVar22);
      iVar6 = 0;
      local_228 = 0;
      local_230 = (byte *)(CONCAT62(local_230._2_6_,(short)(local_208 << 9)) | 0x40);
      local_238 = (byte *)0x0;
      local_1b8 = FUN_1495aecc3(param_1,local_210,local_1f8,local_218);
      if (local_1b8 == 0) goto LAB_14958dcd7;
      local_1f0 = *local_218;
      local_210 = (int *)0x0;
      local_1f8 = CONCAT44(local_1f8._4_4_,(int)*(char *)(local_1b8 + 0x41));
      if (local_1f0 != (int)*(char *)(local_1b8 + 0x41)) {
        if (local_cc == 0) {
          pcVar23 = "GROUP BY";
        }
        else {
          pcVar23 = "GROUP BY";
          if ((*(byte *)(param_2 + 4) & 1) == 0) {
            pcVar23 = "DISTINCT";
          }
        }
        FUN_1495a08a0(param_1,0,"USE TEMP B-TREE FOR %s",pcVar23);
        uVar7 = *local_218;
        local_210 = (int *)(ulonglong)uVar7;
        if (0 < (longlong)(int)local_128._8_4_) {
          lVar21 = 0;
          uVar17 = (ulonglong)local_210;
          do {
            uVar9 = (uint)((int)uVar17 <= *(int *)(local_128._0_8_ + 0x10 + lVar21));
            uVar7 = uVar7 + uVar9;
            uVar17 = (ulonglong)((int)uVar17 + uVar9);
            lVar21 = lVar21 + 0x20;
          } while ((longlong)(int)local_128._8_4_ * 0x20 != lVar21);
        }
        local_1e8 = (longlong *)FUN_14959d77c(param_1,uVar7);
        local_238 = (byte *)((ulonglong)local_238 & 0xffffffffffffff00);
        FUN_14959d7c6(param_1,local_218,local_1e8,0);
        if (0 < (int)local_128._8_4_) {
          lVar12 = 0x10;
          lVar21 = 0;
          iVar6 = local_128._8_4_;
          do {
            if ((int)local_210 <= *(int *)(local_128._0_8_ + lVar12)) {
              local_238 = (byte *)CONCAT44(local_238._4_4_,(int)local_1e8 + (int)local_210);
              FUN_14959f097(plVar11,*(undefined8 *)(local_128._0_8_ + -0x10 + lVar12),
                            *(undefined4 *)(local_128._0_8_ + -8 + lVar12),
                            *(undefined4 *)(local_128._0_8_ + -4 + lVar12));
              local_210 = (int *)(ulonglong)((int)local_210 + 1);
              iVar6 = local_128._8_4_;
            }
            lVar21 = lVar21 + 1;
            lVar12 = lVar12 + 0x20;
          } while (lVar21 < iVar6);
        }
        if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
          iVar6 = (int)param_1[7] + 1;
          *(int *)(param_1 + 7) = iVar6;
        }
        else {
          bVar4 = *(char *)((longlong)param_1 + 0x1f) - 1;
          *(byte *)((longlong)param_1 + 0x1f) = bVar4;
          iVar6 = *(int *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0xcc);
        }
        local_238._0_4_ = iVar6;
        FUN_149584f48(plVar11,0x5b,local_1e8,uVar7);
        local_238._0_4_ = 0;
        FUN_149584f48(plVar11,0x82,local_148._4_4_,iVar6);
        if (iVar6 != 0) {
          bVar4 = *(byte *)((longlong)param_1 + 0x1f);
          if ((ulonglong)bVar4 < 8) {
            *(byte *)((longlong)param_1 + 0x1f) = bVar4 + 1;
            *(int *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0xcc) = iVar6;
          }
        }
        if (uVar7 == 1) {
          if ((int)local_1e8 != 0) {
            bVar4 = *(byte *)((longlong)param_1 + 0x1f);
            if ((ulonglong)bVar4 < 8) {
              *(byte *)((longlong)param_1 + 0x1f) = bVar4 + 1;
              piVar16 = (int *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0xcc);
              goto LAB_14958ec8b;
            }
          }
        }
        else if ((int)param_1[5] < (int)uVar7) {
          *(uint *)(param_1 + 5) = uVar7;
          piVar16 = (int *)((longlong)param_1 + 0x2c);
LAB_14958ec8b:
          *piVar16 = (int)local_1e8;
        }
        FUN_1495b2193(local_1b8);
        uVar9 = *(uint *)((longlong)param_1 + 0x34);
        local_210 = (int *)(ulonglong)uVar9;
        *(uint *)((longlong)param_1 + 0x34) = uVar9 + 1;
        local_148._8_4_ = uVar9;
        if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
          iVar6 = (int)param_1[7] + 1;
          *(int *)(param_1 + 7) = iVar6;
        }
        else {
          bVar4 = *(char *)((longlong)param_1 + 0x1f) - 1;
          *(byte *)((longlong)param_1 + 0x1f) = bVar4;
          iVar6 = *(int *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0xcc);
        }
        local_238._0_4_ = uVar7;
        FUN_149584f48(plVar11,0x72,local_210,iVar6);
        local_238 = (byte *)((ulonglong)local_238._4_4_ << 0x20);
        FUN_149584f48(plVar11,0x23,local_148._4_4_,local_1ec);
        local_148[1] = 1;
      }
      if ((local_208 == 0) || ((*(byte *)(lVar1 + 0x5c) & 4) != 0)) {
LAB_14958edb0:
        local_1e8 = plVar11 + 0x12;
        local_1cc = (undefined4)plVar11[0x12];
        if (local_1f0 != (uint)local_1f8) {
          local_238 = (byte *)CONCAT44(local_238._4_4_,(int)local_210);
          FUN_149584f48(plVar11,0x7d,local_148._4_4_,iVar6);
        }
      }
      else {
        if ((local_1f0 != (uint)local_1f8) || ((*(byte *)(local_1b8 + 0x44) & 8) != 0)) {
          local_100 = (uint *)0x0;
          if (*(char *)(*plVar11 + 0x61) == '\0') {
            lVar12 = (longlong)(int)local_e8._0_4_;
            lVar21 = plVar11[0x11];
            FUN_149569985(*plVar11,(int)*(char *)(lVar21 + 1 + lVar12 * 0x18),
                          *(undefined8 *)(lVar21 + 0x10 + lVar12 * 0x18));
            *(undefined8 *)(lVar21 + 0x10 + lVar12 * 0x18) = 0;
            *(undefined2 *)(lVar21 + lVar12 * 0x18) = 0xad;
          }
          goto LAB_14958edb0;
        }
        local_1e8 = plVar11 + 0x12;
        local_1cc = (undefined4)plVar11[0x12];
      }
      iVar6 = (int)local_1e0 + (int)local_1c0 + 5;
      local_1c0 = CONCAT44(local_1c0._4_4_,iVar6);
      uVar7 = *local_218;
      if (0 < (int)uVar7) {
        puVar24 = local_218 + 2;
        uVar17 = 0;
        do {
          if (local_1f0 == (uint)local_1f8) {
            local_148[0] = 1;
            FUN_14959afe0(param_1,*(undefined8 *)puVar24,(int)uVar17 + iVar6);
          }
          else {
            local_238 = (byte *)CONCAT44(local_238._4_4_,(int)uVar17 + iVar6);
            FUN_149584f48(plVar11,0x59,local_210,uVar17 & 0xffffffff);
          }
          uVar17 = uVar17 + 1;
          uVar7 = *local_218;
          puVar24 = puVar24 + 8;
        } while ((longlong)uVar17 < (longlong)(int)uVar7);
      }
      uVar17 = local_1c0;
      iVar6 = local_204;
      local_210 = (int *)CONCAT44(local_210._4_4_,(int)local_1e0 + 3);
      local_208 = (int)local_198 - 1;
      if (local_1a0 != (int *)0x0) {
        *local_1a0 = *local_1a0 + 1;
        uVar7 = *local_218;
      }
      local_1e0 = (ulonglong)((int)local_1e0 + 1);
      local_238._0_4_ = uVar7;
      uVar10 = FUN_149584f48(plVar11,0x56,local_204,local_1c0 & 0xffffffff);
      FUN_14955a5b6(plVar11,uVar10,local_1a0,&DAT_fffffff7);
      iVar8 = (int)plVar11[0x12];
      local_238._0_4_ = iVar8 + 1;
      FUN_149584f48(plVar11,0x10,(uint)local_238,0);
      local_238._0_4_ = *local_218;
      FUN_149584f48(param_1[2],0x4c,uVar17 & 0xffffffff,iVar6);
      local_238._0_4_ = 0;
      FUN_149584f48(plVar11,0xc,(ulonglong)local_210 & 0xffffffff,local_208);
      local_238._0_4_ = 0;
      FUN_149584f48(plVar11,0x30,local_1c8,local_1ec);
      local_238._0_4_ = 0;
      FUN_149584f48(plVar11,0xc,local_1c4,local_18c);
      uVar17 = local_1e0;
      if (*(char *)(*plVar11 + 0x61) == '\0') {
        iVar6 = (int)plVar11[0x12] + -1;
        if (-1 < iVar8) {
          iVar6 = iVar8;
        }
        puVar18 = (undefined1 *)((longlong)iVar6 * 0x18 + plVar11[0x11]);
      }
      else {
        puVar18 = &DAT_14cc1ee40;
      }
      *(int *)(puVar18 + 8) = (int)plVar11[0x12];
      FUN_1495b2c26(param_1,local_1e0 & 0xffffffff,local_148);
      local_238._0_4_ = 0;
      FUN_149584f48(plVar11,0x45,1,uVar17 & 0xffffffff);
      if (local_1f0 == (uint)local_1f8) {
        FUN_1495b2193(local_1b8);
        if (*(char *)(*plVar11 + 0x61) == '\0') {
          lVar21 = plVar11[0x11];
          lVar12 = (longlong)local_190;
          FUN_149569985(*plVar11,(int)*(char *)(lVar21 + 1 + lVar12 * 0x18),
                        *(undefined8 *)(lVar21 + 0x10 + lVar12 * 0x18));
          *(undefined8 *)(lVar21 + 0x10 + lVar12 * 0x18) = 0;
          *(undefined2 *)(lVar21 + lVar12 * 0x18) = 0xad;
        }
      }
      else {
        local_238._0_4_ = 0;
        FUN_149584f48(plVar11,3,local_148._4_4_,local_1cc);
      }
      piVar16 = local_210;
      local_238._0_4_ = 0;
      FUN_149584f48(plVar11,0xc,(ulonglong)local_210 & 0xffffffff,local_208);
      local_238._0_4_ = 0;
      FUN_149584f48(plVar11,0xb,0,local_1ec);
      local_218 = (uint *)CONCAT44(local_218._4_4_,(int)plVar11[0x12]);
      local_238._0_4_ = 0;
      FUN_149584f48(plVar11,0x45,1,local_1c8);
      local_238 = (byte *)((ulonglong)local_238._4_4_ << 0x20);
      FUN_149584f48(plVar11,0x41,(ulonglong)piVar16 & 0xffffffff,0);
      lVar21 = plVar11[3];
      if (*(int *)(lVar21 + 0x44) + *(int *)(lVar21 + 0x48) < 0) {
        FUN_1495a1bff(lVar21,plVar11);
        iVar6 = (int)plVar11[0x12];
      }
      else {
        iVar6 = (int)*local_1e8;
        *(int *)(*(longlong *)(lVar21 + 0x50) + (longlong)-(int)local_198 * 4) = iVar6;
      }
      local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
      FUN_149584f48(plVar11,0x30,local_1e0,iVar6 + 2);
      piVar16 = local_210;
      local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
      FUN_149584f48(plVar11,0x41,(ulonglong)local_210 & 0xffffffff,0);
      FUN_1495b2fd0(param_1,local_148);
      FUN_14959ec19(param_1,local_1d8,iVar6 + 1,0x10);
      local_220 = (int)local_218;
      local_238 = &local_cc;
      local_230 = param_3;
      local_228 = iVar6 + 1;
      FUN_1495b1362(param_1,param_2,0xffffffff,&local_100);
      local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
      FUN_149584f48(plVar11,0x41,(ulonglong)piVar16 & 0xffffffff,0);
      lVar21 = plVar11[3];
      if (*(int *)(lVar21 + 0x44) + *(int *)(lVar21 + 0x48) < 0) {
        FUN_1495a1bff(lVar21,plVar11);
      }
      else {
        *(int *)(*(longlong *)(lVar21 + 0x50) + (longlong)(1 - (int)local_198) * 4) =
             (int)*local_1e8;
      }
      FUN_1495b3065(param_1,local_148);
      local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
      FUN_149584f48(plVar11,0x45,0,local_1e0);
      local_238 = (byte *)((ulonglong)local_238 & 0xffffffff00000000);
      FUN_149584f48(plVar11,0x41,local_1c4,0);
    }
    lVar21 = plVar11[3];
    uVar7 = -(int)local_1b0;
    uVar17 = (ulonglong)uVar7;
    local_1b0 = uVar17;
    if (-1 < *(int *)(lVar21 + 0x44) + *(int *)(lVar21 + 0x48)) {
      uVar10 = (undefined4)plVar11[0x12];
      lVar21 = *(longlong *)(lVar21 + 0x50);
      goto LAB_14958e8c8;
    }
LAB_14958eab4:
    FUN_1495a1bff(lVar21,plVar11,uVar17);
  }
  if (local_cb == '\x03') {
    FUN_1495a08a0(param_1,0,"USE TEMP B-TREE FOR %s","DISTINCT");
  }
  if (local_100 != (uint *)0x0) {
    pcVar23 = "ORDER BY";
    if (0 < (int)local_f8._0_4_) {
      pcVar23 = "RIGHT PART OF ORDER BY";
    }
    FUN_1495a08a0(param_1,0,"USE TEMP B-TREE FOR %s",pcVar23);
    local_238 = param_3;
    FUN_1495b31ff(param_1,param_2,&local_100,*local_200);
  }
  lVar21 = plVar11[3];
  iVar6 = (int)local_1a8;
  local_1a8 = (ulonglong)(uint)-iVar6;
  if (*(int *)(lVar21 + 0x44) + *(int *)(lVar21 + 0x48) < 0) {
    FUN_1495a1bff(lVar21,plVar11,local_1a8);
  }
  else {
    *(int *)(*(longlong *)(lVar21 + 0x50) + (longlong)-iVar6 * 4) = (int)plVar11[0x12];
  }
  uVar7 = (uint)(0 < (int)param_1[6]);
  goto LAB_14958d11d;
}



// FUNCTION 14958f27a FUN_14958f27a body=100 status=ok
// SIG undefined FUN_14958f27a(void)

void FUN_14958f27a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_2 + 0x50) != 0) {
    iVar2 = -1;
    lVar1 = param_2;
    lVar4 = 0;
    do {
      lVar3 = lVar1;
      *(longlong *)(lVar3 + 0x58) = lVar4;
      *(byte *)(lVar3 + 5) = *(byte *)(lVar3 + 5) | 1;
      iVar2 = iVar2 + 1;
      lVar1 = *(longlong *)(lVar3 + 0x50);
      lVar4 = lVar3;
    } while (*(longlong *)(lVar3 + 0x50) != 0);
    if (((*(byte *)(param_2 + 5) & 4) == 0) &&
       (*(int *)(*param_1 + 0x8c) <= iVar2 && 0 < *(int *)(*param_1 + 0x8c))) {
      FUN_14955a364(param_1,"too many terms in compound SELECT");
    }
  }
  return;
}



// FUNCTION 14958f2de FUN_14958f2de body=328 status=ok
// SIG undefined FUN_14958f2de(void)

int * FUN_14958f2de(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                   longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  uVar3 = *param_1;
  if ((param_2 == 0) && (param_7 != 0 || param_8 != 0)) {
    pcVar4 = "USING";
    if (param_7 != 0) {
      pcVar4 = "ON";
    }
    FUN_14955a364(param_1,"a JOIN clause is required before %s",pcVar4);
  }
  else {
    piVar2 = (int *)FUN_14958f97b(param_1,param_2,param_3,param_4);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      if ((1 < *(byte *)((longlong)param_1 + 0x114)) &&
         (*(longlong *)(piVar2 + (longlong)iVar1 * 0x1c + -0x16) != 0)) {
        if ((param_4 == (longlong *)0x0) || (*param_4 == 0)) {
          param_4 = param_3;
        }
        FUN_14958fa77(param_1,*(longlong *)(piVar2 + (longlong)iVar1 * 0x1c + -0x16),param_4);
      }
      if (*(int *)(param_5 + 8) != 0) {
        uVar3 = FUN_14958faeb(uVar3,param_5);
        *(undefined8 *)(piVar2 + (longlong)iVar1 * 0x1c + -0x14) = uVar3;
      }
      *(longlong *)(piVar2 + (longlong)iVar1 * 0x1c + -0x10) = param_6;
      *(longlong *)(piVar2 + (longlong)iVar1 * 0x1c + -8) = param_7;
      *(longlong *)(piVar2 + (longlong)iVar1 * 0x1c + -6) = param_8;
      return piVar2;
    }
  }
  if (param_7 != 0) {
    FUN_14958288e(uVar3,param_7);
  }
  FUN_149582cb1(uVar3,param_8);
  if (param_6 != 0) {
    FUN_149582a1c(uVar3,param_6,1);
  }
  return (int *)0x0;
}



// FUNCTION 14958f426 FUN_14958f426 body=515 status=ok
// SIG undefined FUN_14958f426(void)

undefined1 *
FUN_14958f426(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar1 = (undefined1 *)FUN_14955d750(*param_1,0x80);
  puVar5 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    puVar5 = local_c8;
  }
  if (param_2 == 0) {
    local_d8 = 0;
    local_d0 = 0;
    uVar3 = FUN_14958f7cb(*param_1,0xb1,&local_d8,0);
    param_2 = FUN_14958f62a(param_1,0,uVar3);
  }
  puVar2 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    puVar2 = local_c8;
  }
  *(longlong *)(puVar2 + 0x20) = param_2;
  *puVar5 = 0x88;
  *(undefined4 *)(puVar2 + 4) = param_8;
  *(undefined8 *)(puVar2 + 8) = 0;
  iVar4 = *(int *)((longlong)param_1 + 0x84) + 1;
  *(int *)((longlong)param_1 + 0x84) = iVar4;
  *(int *)(puVar2 + 0x10) = iVar4;
  *(undefined8 *)(puVar2 + 0x14) = 0xffffffffffffffff;
  *(undefined2 *)(puVar2 + 2) = 0;
  if (param_3 == (undefined8 *)0x0) {
    if (*param_1 == 0) {
      param_3 = (undefined8 *)FUN_145e3bd67(0x78);
    }
    else {
      param_3 = (undefined8 *)FUN_14955d750(*param_1,0x78);
    }
    if (param_3 == (undefined8 *)0x0) {
      param_3 = (undefined8 *)0x0;
    }
    else {
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[0xe] = 0;
    }
  }
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = local_c8;
  }
  *(undefined8 **)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = 0;
  *(undefined8 *)(puVar1 + 0x58) = 0;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = 0;
  *(undefined8 *)(puVar1 + 0x70) = 0;
  *(undefined8 *)(puVar1 + 0x78) = 0;
  if (*(char *)(*param_1 + 0x61) != '\0') {
    FUN_149582a1c(*param_1,puVar5,puVar5 != local_c8);
    puVar5 = (undefined1 *)0x0;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14958f62a FUN_14958f62a body=231 status=ok
// SIG undefined FUN_14958f62a(void)

uint * FUN_14958f62a(longlong *param_1,uint *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  if (param_2 == (uint *)0x0) {
    puVar3 = (uint *)FUN_14955d750(lVar2,0x28);
    if (puVar3 == (uint *)0x0) {
LAB_14958f6e9:
      if (param_3 != 0) {
        FUN_14958288e(lVar2,param_3);
      }
      if (param_2 != (uint *)0x0) {
        FUN_149582d29(lVar2,param_2);
      }
      return (uint *)0x0;
    }
    *puVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = *param_2;
    puVar3 = param_2;
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar5 = (longlong)(int)uVar4 << 6 | 8;
      if (param_2 < *(uint **)(lVar2 + 0x1c8)) {
        if (param_2 < *(uint **)(lVar2 + 0x1b8)) {
          if ((*(uint **)(lVar2 + 0x1c0) <= param_2) && (uVar5 <= *(ushort *)(lVar2 + 0x17e)))
          goto LAB_14958f689;
        }
        else if (uVar5 < 0x81) goto LAB_14958f689;
      }
      puVar3 = (uint *)FUN_14955d7f6(lVar2,param_2);
      if (puVar3 == (uint *)0x0) goto LAB_14958f6e9;
      uVar4 = *puVar3;
    }
  }
LAB_14958f689:
  *puVar3 = uVar4 + 1;
  lVar2 = (longlong)(int)uVar4;
  puVar1 = puVar3 + lVar2 * 8 + 4;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  (puVar3 + lVar2 * 8 + 8)[0] = 0;
  (puVar3 + lVar2 * 8 + 8)[1] = 0;
  *(longlong *)(puVar3 + lVar2 * 8 + 2) = param_3;
  return puVar3;
}



// FUNCTION 14958f711 FUN_14958f711 body=186 status=ok
// SIG undefined FUN_14958f711(void)

void FUN_14958f711(undefined8 *param_1,int *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  ulonglong _Size;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar1 = *param_2;
  _Src = (void *)*param_3;
  if (_Src != (void *)0x0) {
    _Size = (ulonglong)*(uint *)(param_3 + 1);
    _Dst = (void *)FUN_14955d750(*param_1,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
      goto LAB_14958f747;
    }
  }
  _Dst = (void *)0x0;
LAB_14958f747:
  *(void **)(param_2 + ((longlong)iVar1 + -1) * 8 + 4) = _Dst;
  if (param_4 != 0) {
    FUN_1495a976e(_Dst);
  }
  if (*(byte *)((longlong)param_1 + 0x114) < 2) {
    return;
  }
  FUN_14958fa77(param_1,*(undefined8 *)(param_2 + ((longlong)iVar1 + -1) * 8 + 4),param_3);
  return;
}



// FUNCTION 14958f7cb FUN_14958f7cb body=351 status=ok
// SIG undefined FUN_14958f7cb(void)

undefined8 * FUN_14958f7cb(undefined8 param_1,int param_2,longlong *param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  byte *_Dst;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  iVar4 = 0;
  if (param_3 != (longlong *)0x0) {
    if ((param_2 == 0x98) && (*param_3 != 0)) {
      iVar1 = FUN_149581ec6(*param_3,&local_34);
      if (iVar1 != 0) goto LAB_14958f803;
    }
    iVar4 = (int)param_3[1] + 1;
  }
LAB_14958f803:
  puVar2 = (undefined8 *)FUN_14955d750(param_1,(longlong)iVar4 + 0x48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    *(char *)puVar2 = (char)param_2;
    *(undefined2 *)((longlong)puVar2 + 0x32) = 0xffff;
    if (param_3 != (longlong *)0x0) {
      if (iVar4 == 0) {
        *(uint *)((longlong)puVar2 + 4) = (uint)(local_34 == 0) * 0x10000000 + 0x10800400;
        *(int *)(puVar2 + 1) = local_34;
      }
      else {
        _Dst = (byte *)(puVar2 + 9);
        puVar2[1] = _Dst;
        if ((ulonglong)*(uint *)(param_3 + 1) == 0) {
          uVar3 = 0;
        }
        else {
          memcpy(_Dst,(void *)*param_3,(ulonglong)*(uint *)(param_3 + 1));
          uVar3 = (ulonglong)*(uint *)(param_3 + 1);
        }
        _Dst[uVar3] = 0;
        if ((param_4 != 0) && ((char)(&DAT_14bd400b0)[*_Dst] < '\0')) {
          *(uint *)((longlong)puVar2 + 4) = (uint)(*_Dst == 0x22) << 6 | 0x4000000;
          FUN_1495a976e(_Dst);
        }
      }
    }
    *(undefined4 *)(puVar2 + 5) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14958f92b FUN_14958f92b body=80 status=ok
// SIG undefined FUN_14958f92b(void)

void FUN_14958f92b(undefined8 *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if ((param_2 != (int *)0x0) && ((int)param_3[1] != 0)) {
    iVar1 = *param_2;
    if (((int)param_3[1] != 1) || (uVar2 = 1, *param_3 != 0)) {
      uVar3 = FUN_14958faeb(*param_1,param_3);
      *(undefined8 *)(param_2 + (longlong)iVar1 * 0x1c + -2) = uVar3;
      uVar2 = 2;
    }
    param_2[(longlong)iVar1 * 0x1c + -10] = param_2[(longlong)iVar1 * 0x1c + -10] | uVar2;
  }
  return;
}



// FUNCTION 14958f97b FUN_14958f97b body=252 status=ok
// SIG undefined FUN_14958f97b(void)

int * FUN_14958f97b(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_1;
  if (param_2 == (undefined4 *)0x0) {
    piVar1 = (int *)FUN_14955d750(uVar3,0x78);
    if (piVar1 != (int *)0x0) {
      *(undefined1 **)piVar1 = &DAT_100000001;
      piVar1[0x12] = 0;
      piVar1[0x13] = 0;
      piVar1[0x14] = 0;
      piVar1[0x15] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[10] = 0;
      piVar1[0xb] = 0;
      piVar1[0xc] = 0;
      piVar1[0xd] = 0;
      piVar1[0xe] = 0;
      piVar1[0xf] = 0;
      piVar1[0x10] = 0;
      piVar1[0x11] = 0;
      piVar1[0x16] = 0;
      piVar1[0x17] = 0;
      piVar1[0x18] = 0;
      piVar1[0x19] = 0;
      piVar1[0x1a] = 0;
      piVar1[0x1b] = 0;
      piVar1[0x1c] = 0;
      piVar1[0x1d] = 0;
      piVar1[0x13] = -1;
      lVar2 = 0;
LAB_14958f9e7:
      if ((param_4 != (longlong *)0x0) && (*param_4 != 0)) {
        uVar4 = FUN_14958faeb(uVar3,param_4);
        *(undefined8 *)(piVar1 + lVar2 * 0x1c + 6) = uVar4;
        uVar3 = FUN_14958faeb(uVar3,param_3);
        *(undefined8 *)(piVar1 + lVar2 * 0x1c + 4) = uVar3;
        return piVar1;
      }
      uVar3 = FUN_14958faeb(uVar3,param_3);
      *(undefined8 *)(piVar1 + lVar2 * 0x1c + 6) = uVar3;
      (piVar1 + lVar2 * 0x1c + 4)[0] = 0;
      (piVar1 + lVar2 * 0x1c + 4)[1] = 0;
      return piVar1;
    }
  }
  else {
    piVar1 = (int *)FUN_1495b3c24(param_1,param_2,1,*param_2);
    if (piVar1 != (int *)0x0) {
      lVar2 = (longlong)*piVar1 + -1;
      goto LAB_14958f9e7;
    }
    FUN_149582b1a(uVar3,param_2);
  }
  return (int *)0x0;
}



// FUNCTION 14958fa77 FUN_14958fa77 body=116 status=ok
// SIG undefined FUN_14958fa77(void)

undefined8 FUN_14958fa77(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)((longlong)param_1 + 0x114) != '\x03') {
    if (*param_1 == 0) {
      puVar2 = (undefined8 *)FUN_145e3bd67(0x20);
    }
    else {
      puVar2 = (undefined8 *)FUN_14955d750(*param_1,0x20);
    }
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = param_2;
      uVar1 = param_3[1];
      puVar2[1] = *param_3;
      puVar2[2] = uVar1;
      puVar2[3] = param_1[0x33];
      param_1[0x33] = (longlong)puVar2;
    }
  }
  return param_2;
}



// FUNCTION 14958faeb FUN_14958faeb body=85 status=ok
// SIG undefined FUN_14958faeb(void)

void * FUN_14958faeb(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  ulonglong _Size;
  
  if (param_2 == (undefined8 *)0x0) {
    return (void *)0x0;
  }
  _Src = (void *)*param_2;
  if (_Src != (void *)0x0) {
    _Size = (ulonglong)*(uint *)(param_2 + 1);
    _Dst = (void *)FUN_14955d750(param_1,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
      goto LAB_14958fb1f;
    }
  }
  _Dst = (void *)0x0;
LAB_14958fb1f:
  FUN_1495a976e(_Dst);
  return _Dst;
}



// FUNCTION 14958fb40 FUN_14958fb40 body=459 status=ok
// SIG undefined FUN_14958fb40(void)

byte FUN_14958fb40(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  char *pcVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  longlong local_a0;
  uint local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68[0] = param_2;
  local_68[1] = param_3;
  local_68[2] = param_4;
  lVar7 = 0;
  bVar4 = 0;
LAB_14958fb9a:
  plVar2 = (longlong *)local_68[lVar7];
  if (plVar2 != (longlong *)0x0) {
    uVar1 = *(uint *)(plVar2 + 1);
    local_8c = uVar1 + 1;
    lVar13 = 0;
    do {
      lVar3 = lVar13 * 3;
      if (uVar1 == (byte)(&DAT_14bd47cc1)[lVar3]) {
        pcVar12 = "naturaleftouterightfullinnercross" + (byte)(&DAT_14bd47cc0)[lVar3];
        if (*plVar2 == 0) {
          iVar9 = -(uint)(pcVar12 != (char *)0x0);
        }
        else {
          if (pcVar12 == (char *)0x0) goto LAB_14958fc2a;
          if ((int)uVar1 < 1) goto LAB_14958fc47;
          lVar10 = 0;
          uVar8 = local_8c;
          while( true ) {
            uVar6 = (ulonglong)*(byte *)(*plVar2 + lVar10);
            if (uVar6 == 0) break;
            uVar11 = (uint)(byte)(&DAT_14bd3ff30)[uVar6];
            bVar5 = (&DAT_14bd3ff30)[(byte)pcVar12[lVar10]];
            if ((&DAT_14bd3ff30)[uVar6] != bVar5) goto LAB_14958fc3b;
            uVar8 = uVar8 - 1;
            lVar10 = lVar10 + 1;
            if (uVar8 < 2) goto LAB_14958fc47;
          }
          bVar5 = (&DAT_14bd3ff30)[(byte)pcVar12[lVar10]];
          uVar11 = 0;
LAB_14958fc3b:
          iVar9 = uVar11 - bVar5;
        }
        if (iVar9 == 0) goto LAB_14958fc47;
      }
LAB_14958fc2a:
      lVar13 = lVar13 + 1;
      if (lVar13 == 7) {
        bVar4 = bVar4 | 0x40;
        break;
      }
    } while( true );
  }
  goto LAB_14958fc61;
LAB_14958fc47:
  bVar4 = bVar4 | (&DAT_14bd47cc2)[lVar3];
  lVar7 = lVar7 + 1;
  if (lVar7 == 3) goto LAB_14958fc61;
  goto LAB_14958fb9a;
LAB_14958fc61:
  local_88 = param_1;
  local_80 = param_4;
  local_78 = param_2;
  local_70 = param_3;
  if (((~bVar4 & 0x21) == 0) || ((bVar4 & 0x40) != 0)) {
    local_a8 = &DAT_149dfc0cb;
    if (param_4 == 0) {
      local_a8 = &DAT_149dfc0cc;
    }
    local_a0 = param_4;
    FUN_14955a364(param_1,"unknown or unsupported join type: %T %T%s%T",param_2,param_3);
  }
  else {
    if ((bVar4 & 0x18) == 8 || (bVar4 & 0x20) == 0) goto LAB_14958fc85;
    FUN_14955a364(param_1,"RIGHT and FULL OUTER JOINs are not currently supported");
  }
  bVar4 = 1;
LAB_14958fc85:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 14958fd0c FUN_14958fd0c body=3674 status=ok
// SIG undefined FUN_14958fd0c(void)

void FUN_14958fd0c(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  ulonglong *puVar12;
  uint uVar13;
  undefined8 unaff_RBP;
  undefined7 uVar15;
  longlong *plVar14;
  uint uVar16;
  ulonglong uVar17;
  byte bVar18;
  uint uVar19;
  void *_Dst;
  ulonglong uVar20;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  void *local_160;
  int *local_158;
  int *local_150;
  undefined1 local_148;
  undefined1 local_140;
  undefined4 local_138;
  longlong *local_128;
  ulonglong local_120;
  ulonglong local_118;
  uint local_110;
  int local_10c;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  uint local_e4;
  longlong local_e0;
  int local_d4;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  _Dst = (void *)0x0;
  local_4c = 0;
  local_50 = 0;
  lVar1 = *param_1;
  if ((int)param_1[6] != 0) goto LAB_14958fd6c;
  if ((*(char *)(lVar1 + 0x61) == '\0') &&
     (puVar5 = (ulonglong *)FUN_1495a9ba3(param_1,param_2), puVar5 != (ulonglong *)0x0)) {
    local_168 = 0;
    lVar6 = FUN_1495c2fa6(param_1,puVar5,0x7e,0);
    uVar7 = puVar5[3];
    uVar15 = (undefined7)((ulonglong)unaff_RBP >> 8);
    uVar4 = (undefined4)CONCAT71(uVar15,1);
    if (lVar6 == 0) {
      if ((*(byte *)(*param_1 + 0x31) & 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        lVar8 = FUN_14958201d(puVar5[0xe] + 0x50,*puVar5,0);
        if (*(longlong *)(lVar8 + 0x10) == 0) {
          uVar4 = (undefined4)CONCAT71(uVar15,puVar5[4] != 0);
        }
      }
    }
    iVar2 = FUN_1495a8238(param_1,puVar5);
    if ((iVar2 == 0) && (iVar2 = FUN_1495c3150(param_1,puVar5,lVar6 != 0), iVar2 == 0)) {
      local_118 = CONCAT44(local_118._4_4_,uVar4);
      iVar2 = -1000000;
      if (puVar5[0xe] != 0) {
        iVar2 = -1;
        puVar12 = (ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x18);
        do {
          iVar2 = iVar2 + 1;
          uVar17 = *puVar12;
          puVar12 = puVar12 + 4;
        } while (uVar17 != puVar5[0xe]);
      }
      local_168 = *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar2 * 0x20);
      uVar13 = 0;
      local_f0 = uVar7;
      local_90 = lVar6;
      iVar3 = FUN_1495a2d6b(param_1,9,*puVar5,0);
      _Dst = (void *)0x0;
      if (iVar3 == 1) goto LAB_14958fd6c;
      local_100 = CONCAT44(local_100._4_4_,iVar3);
      uVar16 = *(uint *)((longlong)param_1 + 0x34);
      local_10c = uVar16 + 1;
      *(int *)((longlong)param_1 + 0x34) = local_10c;
      *(uint *)(param_2 + 0x4c) = uVar16;
      uVar7 = puVar5[2];
      if (uVar7 != 0) {
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        uVar13 = 0;
        do {
          *(uint *)((longlong)param_1 + 0x34) = iVar3 + 1 + uVar13;
          uVar13 = uVar13 + 1;
          uVar7 = *(ulonglong *)(uVar7 + 0x28);
        } while (uVar7 != 0);
      }
      if (local_f0 == 0) {
        local_a8 = (longlong *)0x0;
        local_b0 = 0;
      }
      else {
        local_b0 = param_1[0x2b];
        param_1[0x2b] = *puVar5;
        local_a8 = param_1;
      }
      local_128 = (longlong *)param_1[2];
      if (local_128 == (longlong *)0x0) {
        if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
          *(undefined1 *)((longlong)param_1 + 0x23) = 1;
        }
        local_128 = (longlong *)FUN_14955a44a(param_1);
        if (local_128 != (longlong *)0x0) goto LAB_14958ffb5;
LAB_149590748:
        _Dst = (void *)0x0;
      }
      else {
LAB_14958ffb5:
        bVar18 = (byte)local_118;
        if (*(char *)((longlong)param_1 + 0x1e) == '\0') {
          *(byte *)(local_128 + 0x19) = *(byte *)(local_128 + 0x19) | 0x20;
        }
        uVar19 = (uint)(byte)local_118;
        local_f8 = (ulonglong)uVar16;
        FUN_1495a3043(param_1,local_118 & 0xff,iVar2);
        if (local_f0 != 0) {
          local_120 = CONCAT44(local_120._4_4_,uVar19);
          iVar3 = (int)local_f8;
          FUN_1495c3202(param_1,puVar5,param_3,local_f8 & 0xffffffff);
          bVar18 = (byte)local_120;
          local_50 = iVar3;
          local_4c = iVar3;
        }
        local_68 = 0;
        uStack_60 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_58 = 0;
        local_88 = param_1;
        local_80 = param_2;
        iVar3 = FUN_1495a4109(&local_88,param_3);
        uVar7 = 0;
        if (iVar3 != 0) goto LAB_149590748;
        local_120 = uVar7;
        if ((((*(byte *)(lVar1 + 0x34) & 1) != 0) && (*(char *)((longlong)param_1 + 0x1e) == '\0'))
           && (param_1[0x15] == 0)) {
          uVar16 = (int)param_1[7] + 1;
          local_120 = (ulonglong)uVar16;
          *(uint *)(param_1 + 7) = uVar16;
          local_168 = local_168 & 0xffffffff00000000;
          FUN_149584f48(local_128,0x45,0);
        }
        if (((param_3 == 0) && ((int)local_100 == 0)) &&
           (((byte)local_118 == '\0' && (*(int *)((longlong)puVar5 + 0x54) == 0)))) {
          local_168 = *puVar5;
          FUN_14959b139(param_1,iVar2,(int)puVar5[7],1);
          plVar10 = local_128;
          if ((puVar5[8] & 0x80) == 0) {
            uVar7 = *puVar5;
            local_168 = CONCAT44(local_168._4_4_,-(uint)((uint)local_120 == 0) | (uint)local_120);
            uVar4 = FUN_149584f48(local_128,0x89,(int)puVar5[7],iVar2);
            FUN_14955a5b6(plVar10,uVar4,uVar7,0xffffffff);
          }
          _Dst = (void *)0x0;
          for (uVar7 = puVar5[2]; uVar7 != 0; uVar7 = *(ulonglong *)(uVar7 + 0x28)) {
            local_168 = local_168 & 0xffffffff00000000;
            FUN_149584f48(plVar10,0x89,*(undefined4 *)(uVar7 + 0x58),iVar2);
          }
LAB_1495909cf:
          if (((*(char *)((longlong)param_1 + 0x1e) == '\0') && (param_1[0x15] == 0)) &&
             (param_1[0x13] != 0)) {
            FUN_1495c68c5(param_1);
          }
          if ((int)local_120 != 0) {
            local_168 = local_168 & 0xffffffff00000000;
            FUN_149584f48(plVar10,0x50,local_120,1);
            FUN_1495852e4(plVar10,1);
            if (*(char *)(*plVar10 + 0x61) == '\0') {
              local_168 = 0;
              FUN_14955916b(plVar10[0x13],"rows deleted",0xffffffff,1);
            }
          }
        }
        else {
          uVar7 = uStack_60 & 0x40;
          if ((puVar5[8] & 0x80) == 0) {
            uVar16 = (int)param_1[7] + 1;
            local_c8 = (ulonglong)uVar16;
            *(uint *)(param_1 + 7) = uVar16;
            local_168 = (ulonglong)local_168._4_4_ << 0x20;
            uVar17 = 0;
            uVar9 = FUN_149584f48(local_128,0x48,0);
            local_110 = (uint)CONCAT62((int6)((ulonglong)uVar9 >> 0x10),1);
            local_108 = local_108 & 0xffffffff00000000;
            local_d0 = 0;
            local_d4 = 0;
          }
          else {
            uVar17 = puVar5[2];
            local_c8 = 0;
            for (; uVar17 != 0; uVar17 = *(ulonglong *)(uVar17 + 0x28)) {
              if ((*(uint *)(uVar17 + 100) & 3) == 2) goto LAB_14959021a;
            }
            uVar17 = 0;
LAB_14959021a:
            local_d0 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
            local_108 = CONCAT44(local_108._4_4_,(int)param_1[7] + 1);
            local_110 = (uint)*(ushort *)(uVar17 + 0x5e);
            *(int *)(param_1 + 7) = (int)param_1[7] + (int)(short)*(ushort *)(uVar17 + 0x5e);
            *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) + 1;
            local_168 = (ulonglong)local_168._4_4_ << 0x20;
            local_d4 = FUN_149584f48(local_128,100);
            FUN_14959b2a7(param_1,uVar17);
          }
          local_158 = (int *)CONCAT44(local_158._4_4_,local_10c);
          local_160 = (void *)CONCAT62(local_160._2_6_,
                                       (ushort)(uVar7 == 0 & (bVar18 ^ 1)) * 8 + 0x414);
          local_168 = 0;
          _Dst = (void *)0x0;
          lVar6 = FUN_1495aecc3(param_1,param_2,param_3,0);
          if (lVar6 != 0) {
            local_98 = *(ulonglong *)(lVar6 + 0x28);
            local_10c = CONCAT31(local_10c._1_3_,*(char *)(lVar6 + 0x42));
            if (*(char *)(lVar6 + 0x42) != '\x01') {
              plVar10 = (longlong *)param_1[0x14];
              if ((longlong *)param_1[0x14] == (longlong *)0x0) {
                plVar10 = param_1;
              }
              *(undefined1 *)(plVar10 + 4) = 1;
            }
            local_b8 = local_98 >> 0x20;
            local_e0 = lVar6;
            if ((int)local_120 != 0) {
              local_168 = local_168 & 0xffffffff00000000;
              FUN_149584f48(local_128,0x52,local_120,1);
            }
            uVar7 = local_f8;
            plVar10 = local_128;
            if (uVar17 == 0) {
              iVar2 = (int)param_1[7] + 1;
              *(int *)(param_1 + 7) = iVar2;
              local_168 = local_168 & 0xffffffff00000000;
              FUN_149584f48(local_128,0x7f,local_f8,iVar2);
              plVar10 = local_128;
              local_118 = CONCAT44(local_118._4_4_,iVar2);
              if ((char)local_10c != '\0') goto LAB_149590727;
              local_168 = local_168 & 0xffffffff00000000;
              uVar9 = FUN_149584f48(local_128,0x93,local_c8,iVar2);
              local_110 = (uint)CONCAT62((int6)((ulonglong)uVar9 >> 0x10),1);
              uVar4 = (undefined4)local_f8;
LAB_1495904e5:
              FUN_1495b2193(local_e0);
              if (local_f0 == 0) {
                local_150 = &local_50;
                local_158 = &local_4c;
                local_168 = CONCAT44(local_168._4_4_,uVar4);
                local_160 = (void *)0x0;
                FUN_1495c3387(param_1,puVar5,0x61,8);
              }
              uVar7 = local_d0;
              if (uVar17 == 0) {
                local_168 = CONCAT44(local_168._4_4_,(undefined4)local_118);
                uVar9 = 0;
                local_108 = FUN_149584f48(plVar10,0x2a,local_c8,0);
LAB_14959056d:
                _Dst = (void *)0x0;
                uVar4 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                local_100 = 0;
              }
              else {
                local_168 = (ulonglong)local_168._4_4_ << 0x20;
                local_100 = 0;
                local_108 = FUN_149584f48(plVar10,0x25,local_d0 & 0xffffffff,0);
                if (*(int *)((longlong)puVar5 + 0x54) == 0) {
                  local_168 = (ulonglong)local_168._4_4_ << 0x20;
                  uVar9 = 0;
                  FUN_149584f48(plVar10,0x7e,uVar7 & 0xffffffff,local_118 & 0xffffffff);
                  goto LAB_14959056d;
                }
                local_168 = CONCAT44(local_168._4_4_,(undefined4)local_118);
                uVar9 = 0;
                FUN_149584f48(plVar10,0x59,uVar7 & 0xffffffff,0);
                uVar4 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                _Dst = (void *)0x0;
              }
            }
            else {
              local_e4 = (uint)(short)local_110;
              local_c0 = param_3;
              local_a0 = param_2;
              if (0 < (short)local_110) {
                local_118 = (ulonglong)local_e4;
                local_100 = local_108 & 0xffffffff;
                uVar20 = 0;
                do {
                  local_168 = CONCAT44(local_168._4_4_,(int)local_100 + (int)uVar20);
                  FUN_14959f097(plVar10,puVar5,uVar7 & 0xffffffff,
                                (int)*(short *)(*(longlong *)(uVar17 + 8) + uVar20 * 2));
                  uVar20 = uVar20 + 1;
                } while (local_118 != uVar20);
              }
              param_2 = local_a0;
              if ((char)local_10c == '\0') {
                iVar2 = (int)param_1[7] + 1;
                *(int *)(param_1 + 7) = iVar2;
                local_118 = FUN_1495aaa6f(*param_1,uVar17);
                uVar13 = local_e4;
                plVar10 = local_128;
                local_168._0_4_ = iVar2;
                uVar4 = FUN_149584f48(local_128,0x5b,local_108 & 0xffffffff,local_e4);
                FUN_14955a5b6(plVar10,uVar4,local_118,uVar13);
                local_168 = CONCAT44(local_168._4_4_,(undefined4)local_108);
                local_118 = CONCAT44(local_118._4_4_,iVar2);
                iVar2 = FUN_149584f48(plVar10,0x83,local_d0,iVar2);
                uVar4 = (undefined4)local_f8;
                if (*(char *)(*plVar10 + 0x61) == '\0') {
                  lVar6 = plVar10[0x11];
                  *(undefined1 *)(lVar6 + 1 + (longlong)iVar2 * 0x18) = 0xfd;
                  *(uint *)(lVar6 + 0x10 + (longlong)iVar2 * 0x18) = local_e4;
                }
                local_110 = 0;
                param_3 = local_c0;
                goto LAB_1495904e5;
              }
              local_118 = CONCAT44(local_118._4_4_,(undefined4)local_108);
              param_3 = local_c0;
LAB_149590727:
              uVar7 = (ulonglong)(uVar13 + 2);
              _Dst = (void *)FUN_14955d750(lVar1,uVar7);
              if (_Dst == (void *)0x0) {
                FUN_1495b2193(local_e0);
                goto LAB_149590748;
              }
              memset(_Dst,(int)CONCAT71((int7)(uVar7 >> 8),1),(ulonglong)uVar13 + 1);
              *(undefined1 *)((longlong)_Dst + (ulonglong)uVar13 + 1) = 0;
              if (-1 < (int)local_98) {
                *(undefined1 *)((longlong)_Dst + (longlong)((int)local_98 - (int)local_f8)) = 0;
              }
              if (-1 < (longlong)local_98) {
                *(undefined1 *)((longlong)_Dst + (longlong)((int)local_b8 - (int)local_f8)) = 0;
              }
              if ((local_d4 != 0) && (*(char *)(*local_128 + 0x61) == '\0')) {
                local_100 = local_128[0x11];
                lVar6 = (longlong)local_d4;
                FUN_149569985(*local_128,(int)*(char *)(local_100 + 1 + lVar6 * 0x18),
                              *(undefined8 *)(local_100 + 0x10 + lVar6 * 0x18));
                *(undefined8 *)(local_100 + 0x10 + lVar6 * 0x18) = 0;
                *(undefined2 *)(local_100 + lVar6 * 0x18) = 0xad;
              }
              plVar10 = local_128;
              uVar13 = *(int *)((longlong)param_1 + 0x44) - 1;
              local_100 = (ulonglong)uVar13;
              *(uint *)((longlong)param_1 + 0x44) = uVar13;
              if (local_f0 == 0) {
                if ((char)local_10c == '\x02') {
                  local_168 = (ulonglong)local_168._4_4_ << 0x20;
                  uVar4 = FUN_149584f48(local_128,0x11,0,0);
                  local_f0 = CONCAT44(local_f0._4_4_,uVar4);
                  local_150 = &local_50;
                  local_158 = &local_4c;
                  local_168 = CONCAT44(local_168._4_4_,(int)local_f8);
                  local_160 = _Dst;
                  FUN_1495c3387(param_1,puVar5,0x61,8);
                  if (*(char *)(*plVar10 + 0x61) == '\0') {
                    iVar2 = (int)plVar10[0x12] + -1;
                    if (-1 < (int)local_f0) {
                      iVar2 = (int)local_f0;
                    }
                    puVar11 = (undefined1 *)((longlong)iVar2 * 0x18 + local_128[0x11]);
                  }
                  else {
                    puVar11 = &DAT_14cc1ee40;
                  }
                  *(int *)(puVar11 + 8) = (int)plVar10[0x12];
                  plVar10 = local_128;
                }
                else {
                  local_150 = &local_50;
                  local_158 = &local_4c;
                  local_168 = CONCAT44(local_168._4_4_,(int)local_f8);
                  local_160 = _Dst;
                  FUN_1495c3387(param_1,puVar5,0x61,8);
                }
              }
              if ((*(int *)((longlong)puVar5 + 0x54) == 0) &&
                 (*(char *)((longlong)_Dst + (longlong)(local_4c - (int)local_f8)) != '\0')) {
                local_168 = CONCAT44(local_168._4_4_,(undefined4)local_118);
                iVar2 = FUN_149584f48(plVar10,0x1d,local_4c,local_100);
                if (*(char *)(*plVar10 + 0x61) == '\0') {
                  lVar6 = plVar10[0x11];
                  *(undefined1 *)(lVar6 + 1 + (longlong)iVar2 * 0x18) = 0xfd;
                  *(int *)(lVar6 + 0x10 + (longlong)iVar2 * 0x18) = (int)(short)local_110;
                }
              }
              uVar4 = 0;
              local_108 = 0;
            }
            local_f0 = CONCAT44(local_f0._4_4_,uVar4);
            if (*(int *)((longlong)puVar5 + 0x54) == 0) {
              local_138 = (undefined4)local_b8;
              local_140 = (char)local_10c;
              local_150 = (int *)CONCAT71(local_150._1_7_,
                                          *(char *)((longlong)param_1 + 0x1e) == '\0');
              local_158 = (int *)CONCAT62(local_158._2_6_,(short)local_110);
              local_160 = (void *)CONCAT44(local_160._4_4_,(undefined4)local_118);
              local_168 = CONCAT44(local_168._4_4_,local_50);
              local_148 = 0xb;
              FUN_1495c3660(param_1,puVar5,local_90,local_4c);
            }
            else {
              for (plVar14 = (longlong *)puVar5[0xc]; plVar14 != (longlong *)0x0;
                  plVar14 = (longlong *)plVar14[5]) {
                if (*plVar14 == lVar1) goto LAB_14959065e;
              }
              plVar14 = (longlong *)0x0;
LAB_14959065e:
              FUN_1495c35a6(param_1,puVar5);
              plVar10 = (longlong *)param_1[0x14];
              if ((longlong *)param_1[0x14] == (longlong *)0x0) {
                plVar10 = param_1;
              }
              *(undefined1 *)((longlong)plVar10 + 0x21) = 1;
              if ((char)local_10c == '\x01') {
                local_168 = local_168 & 0xffffffff00000000;
                FUN_149584f48(local_128,0x74,local_f8,0);
                if (param_1[0x14] == 0) {
                  *(undefined1 *)(param_1 + 4) = 0;
                }
              }
              plVar10 = local_128;
              local_168 = CONCAT44(local_168._4_4_,(undefined4)local_118);
              uVar4 = FUN_149584f48(local_128,10,0,1);
              FUN_14955a5b6(plVar10,uVar4,plVar14,0xfffffff4);
              if (0 < (longlong)(int)plVar10[0x12]) {
                *(undefined2 *)(plVar10[0x11] + -0x16 + (longlong)(int)plVar10[0x12] * 0x18) = 2;
              }
            }
            if ((char)local_f0 == '\0') {
              lVar6 = plVar10[3];
              if (*(int *)(lVar6 + 0x44) + *(int *)(lVar6 + 0x48) < 0) {
                FUN_1495a1bff(lVar6,plVar10);
              }
              else {
                *(int *)(*(longlong *)(lVar6 + 0x50) + (longlong)(int)~(uint)local_100 * 4) =
                     (int)plVar10[0x12];
              }
              FUN_1495b2193(local_e0);
            }
            else {
              iVar2 = (int)local_108;
              if (uVar17 == 0) {
                uVar9 = 0xb;
                uVar17 = local_108 & 0xffffffff;
                uVar7 = 0;
              }
              else {
                uVar17 = (ulonglong)(iVar2 + 1);
                uVar9 = 5;
                uVar7 = local_d0;
              }
              local_168 = local_168 & 0xffffffff00000000;
              FUN_149584f48(plVar10,uVar9,uVar7,uVar17);
              if (*(char *)(*plVar10 + 0x61) == '\0') {
                iVar3 = (int)plVar10[0x12] + -1;
                if (-1 < iVar2) {
                  iVar3 = iVar2;
                }
                puVar11 = (undefined1 *)((longlong)iVar3 * 0x18 + plVar10[0x11]);
              }
              else {
                puVar11 = &DAT_14cc1ee40;
              }
              *(int *)(puVar11 + 8) = (int)plVar10[0x12];
            }
            goto LAB_1495909cf;
          }
        }
      }
      if (local_a8 != (longlong *)0x0) {
        local_a8[0x2b] = local_b0;
      }
      goto LAB_14958fd6c;
    }
  }
  _Dst = (void *)0x0;
LAB_14958fd6c:
  FUN_149582b1a(lVar1,param_2);
  if (param_3 != 0) {
    FUN_14958288e(lVar1,param_3);
  }
  if (_Dst != (void *)0x0) {
    FUN_14955d65a(lVar1,_Dst);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149590b67 FUN_149590b67 body=8172 status=ok
// SIG undefined FUN_149590b67(void)

void FUN_149590b67(longlong *param_1,longlong param_2,int *param_3,longlong param_4,int param_5,
                  longlong param_6)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort uVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  char *pcVar25;
  void *pvVar26;
  char cVar27;
  longlong lVar28;
  int iVar29;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  longlong *local_250;
  longlong local_248;
  ulonglong uStack_240;
  undefined4 local_238;
  undefined4 local_230;
  int *local_228;
  longlong *local_220;
  undefined8 local_218;
  uint local_20c;
  longlong *local_208;
  uint local_200;
  int local_1fc;
  longlong *local_1f8;
  longlong local_1f0;
  uint local_1e8;
  int local_1e4;
  longlong *local_1e0;
  ulonglong local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  uint local_1c4;
  int *local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  int local_1a4;
  ulonglong local_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong *local_188;
  ulonglong local_180;
  void *local_178;
  int local_16c;
  undefined4 local_168;
  uint local_164;
  ulonglong local_160;
  ulonglong local_158;
  longlong *local_150;
  longlong local_148;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 local_130;
  uint *local_128;
  ulonglong local_120;
  longlong local_118;
  uint local_10c;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  int local_d8;
  uint local_d4;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_d8 = 0;
  lVar20 = *param_1;
  local_208 = param_1;
  if ((((int)param_1[6] != 0) || (*(char *)(lVar20 + 0x61) != '\0')) ||
     (local_1b8 = param_2, plVar10 = (longlong *)FUN_1495a9ba3(param_1), plVar11 = local_208,
     param_2 = local_1b8, plVar10 == (longlong *)0x0)) goto LAB_149590bd8;
  iVar29 = -1000000;
  if (plVar10[0xe] != 0) {
    iVar29 = -1;
    plVar16 = (longlong *)(*(longlong *)(*local_208 + 0x20) + 0x18);
    do {
      iVar29 = iVar29 + 1;
      lVar12 = *plVar16;
      plVar16 = plVar16 + 4;
    } while (lVar12 != plVar10[0xe]);
  }
  local_258 = &local_d4;
  local_198 = FUN_1495c2fa6(local_208,plVar10,0x7f,param_3);
  local_118 = plVar10[3];
  iVar5 = FUN_1495a8238(plVar11,plVar10);
  param_2 = local_1b8;
  if ((iVar5 != 0) ||
     (iVar5 = FUN_1495c3150(local_208,plVar10,local_d4), param_2 = local_1b8, iVar5 != 0))
  goto LAB_149590bd8;
  uVar18 = *(uint *)((longlong)local_208 + 0x34);
  local_1a0 = (ulonglong)uVar18;
  local_1a4 = uVar18 + 1;
  *(int *)((longlong)local_208 + 0x34) = local_1a4;
  uVar9 = 0;
  lVar12 = plVar10[2];
  local_20c = uVar18;
  if ((*(byte *)(plVar10 + 8) & 0x80) == 0) {
LAB_149590d06:
    local_1f0 = 0;
LAB_149590d09:
    if (lVar12 != 0) {
      iVar5 = uVar18 + 2;
      uVar9 = 0;
      uVar23 = local_1a0;
      do {
        if (local_1f0 == lVar12) {
          uVar23 = (ulonglong)(iVar5 - 1);
        }
        local_20c = (uint)uVar23;
        *(int *)((longlong)local_208 + 0x34) = iVar5;
        uVar9 = uVar9 + 1;
        lVar12 = *(longlong *)(lVar12 + 0x28);
        iVar5 = iVar5 + 1;
      } while (lVar12 != 0);
    }
  }
  else {
    local_1f0 = lVar12;
    if (lVar12 != 0) {
      do {
        if ((*(uint *)(local_1f0 + 100) & 3) == 2) goto LAB_149590d09;
        plVar11 = (longlong *)(local_1f0 + 0x28);
        local_1f0 = *plVar11;
      } while (*plVar11 != 0);
      goto LAB_149590d06;
    }
    local_1f0 = 0;
  }
  if (param_6 != 0) {
    local_20c = *(uint *)(param_6 + 0x34);
    local_1a4 = *(int *)(param_6 + 0x38);
    *(uint *)((longlong)local_208 + 0x34) = uVar18;
  }
  local_e0 = param_6;
  *(uint *)(local_1b8 + 0x4c) = local_20c;
  uVar23 = (ulonglong)uVar9;
  plVar11 = (longlong *)
            FUN_14955d750(lVar20,uVar23 + (longlong)
                                          (int)(uVar9 + 1 +
                                               (int)*(short *)((longlong)plVar10 + 0x46)) * 4 + 2);
  param_2 = local_1b8;
  if (plVar11 == (longlong *)0x0) goto LAB_149590bd8;
  local_1b0 = (longlong *)((longlong)plVar11 + (longlong)*(short *)((longlong)plVar10 + 0x46) * 4);
  pvVar26 = (void *)((longlong)local_1b0 + uVar23 * 4);
  local_150 = (longlong *)((longlong)local_1b0 + uVar23 * 4 + 4);
  uVar23 = (ulonglong)(uVar9 + 1);
  local_108 = param_4;
  memset(local_150,(int)CONCAT71((int7)((ulonglong)local_1b8 >> 8),1),uVar23);
  *(undefined1 *)(uVar23 + 4 + (longlong)pvVar26) = 0;
  if (0 < *(short *)((longlong)plVar10 + 0x46)) {
    lVar12 = 0;
    do {
      *(undefined4 *)((longlong)plVar11 + lVar12 * 4) = 0xffffffff;
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(short *)((longlong)plVar10 + 0x46));
  }
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d0 = local_208;
  local_c8 = local_1b8;
  local_c0 = param_6;
  local_a8 = 0x200;
  local_1f8 = (longlong *)local_208[2];
  local_190 = uVar23;
  local_178 = pvVar26;
  if (local_1f8 == (longlong *)0x0) {
    if ((local_208[0x14] == 0) && ((*(byte *)(*local_208 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)local_208 + 0x23) = 1;
    }
    local_1f8 = (longlong *)FUN_14955a44a();
    if (local_1f8 != (longlong *)0x0) goto LAB_149590f01;
  }
  else {
LAB_149590f01:
    local_1c0 = param_3;
    local_148 = lVar20;
    if (*param_3 < 1) {
      local_130 = 0;
      local_120 = 0;
      local_128 = (uint *)0x0;
    }
    else {
      local_188 = (longlong *)(param_3 + 2);
      uVar23 = 0;
      local_1d8 = (longlong)iVar29 << 5;
      local_128 = (uint *)0x0;
      local_120 = 0;
      local_130 = 0;
      do {
        param_3 = local_1c0;
        local_180 = uVar23;
        iVar5 = FUN_1495a4109(&local_d0,local_188[uVar23 * 4]);
        lVar12 = local_148;
        if (iVar5 != 0) goto LAB_149590e7e;
        plVar16 = local_188 + uVar23 * 4;
        uVar18 = (uint)*(short *)((longlong)plVar10 + 0x46);
        uVar23 = 0;
        if (0 < (int)uVar18) {
          lVar14 = plVar10[1];
          uVar23 = 0;
LAB_149590fb9:
          lVar24 = uVar23 * 0x20;
          lVar28 = 0;
          do {
            bVar1 = *(byte *)(*(longlong *)(lVar14 + lVar24) + lVar28);
            lVar20 = local_148;
            local_1e0 = plVar16;
            if (bVar1 == *(byte *)(plVar16[1] + lVar28)) {
              if ((ulonglong)bVar1 == 0) {
                if (uVar23 == (longlong)*(short *)((longlong)plVar10 + 0x44)) {
                  local_128 = (uint *)*plVar16;
                  local_120 = CONCAT71((int7)((ulonglong)local_128 >> 8),1);
                }
                else {
                  if (local_1f0 == 0) {
                    uVar15 = *(ushort *)(lVar14 + lVar24 + 0x1c);
                  }
                  else {
                    uVar15 = *(ushort *)(lVar14 + 0x1c + lVar24);
                    if ((uVar15 & 1) != 0) {
                      local_130 = CONCAT71((uint7)(byte)(uVar15 >> 8),1);
                      goto LAB_1495910e2;
                    }
                  }
                  if ((uVar15 & 0x60) != 0) {
                    FUN_14955a364(local_208,"cannot UPDATE generated column \"%s\"");
                    lVar20 = lVar12;
                    param_3 = local_1c0;
                    goto LAB_149590e7e;
                  }
                }
LAB_1495910e2:
                *(int *)((longlong)plVar11 + uVar23 * 4) = (int)local_180;
                uVar18 = (uint)*(short *)((longlong)plVar10 + 0x46);
                break;
              }
            }
            else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(plVar16[1] + lVar28)])
            goto LAB_149590ff4;
            lVar28 = lVar28 + 1;
          } while( true );
        }
        iVar5 = (int)uVar23;
        if (iVar5 < (int)uVar18) {
          pcVar25 = *(char **)(plVar10[1] + (uVar23 & 0xffffffff) * 0x20);
        }
        else {
LAB_14959101f:
          lVar12 = plVar16[1];
          if ((local_1f0 != 0) || (iVar5 = FUN_14955d141(lVar12), iVar5 == 0)) {
            plVar10 = local_208;
            FUN_14955a364(local_208,"no such column: %s",lVar12);
            *(undefined1 *)((longlong)plVar10 + 0x1d) = 1;
            param_3 = local_1c0;
            goto LAB_149590e7e;
          }
          local_128 = (uint *)*plVar16;
          local_120 = CONCAT71((int7)((ulonglong)local_128 >> 8),1);
          iVar5 = -1;
          pcVar25 = "ROWID";
        }
        local_258 = *(uint **)(*(longlong *)(lVar20 + 0x20) + local_1d8);
        iVar6 = FUN_1495a2d6b(local_208,0x17,*plVar10,pcVar25);
        if (iVar6 == 2) {
          *(undefined4 *)((longlong)plVar11 + (longlong)iVar5 * 4) = 0xffffffff;
        }
        else {
          param_3 = local_1c0;
          if (iVar6 == 1) goto LAB_149590e7e;
        }
        uVar23 = local_180 + 1;
      } while ((longlong)uVar23 < (longlong)*local_1c0);
    }
    uVar23 = local_120 & 0xff;
    local_1c4 = (int)local_120 + (int)local_130;
    local_180 = CONCAT44(local_180._4_4_,(int)uVar23);
    lVar20 = local_1b8;
    if ((*(byte *)(plVar10 + 8) & 0x60) != 0) {
      uVar13 = (ulonglong)*(ushort *)((longlong)plVar10 + 0x46);
      do {
        if ((short)uVar13 < 1) break;
        lVar14 = 0;
        lVar12 = 7;
        bVar2 = false;
        do {
          if ((*(int *)((longlong)plVar11 + lVar14 * 4) < 0) &&
             ((*(byte *)(plVar10[1] + lVar12 * 4) & 0x60) != 0)) {
            local_98 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = 0;
            puStack_90 = &LAB_1495c8fd6;
            if (*(longlong *)(plVar10[1] + -0x14 + lVar12 * 4) == 0) {
              local_78._4_2_ = 0;
              local_70 = plVar11;
            }
            else {
              local_70 = plVar11;
              FUN_14959fa98(&local_98);
              uVar23 = local_180 & 0xffffffff;
              lVar20 = local_1b8;
            }
            uVar15 = local_78._4_2_ & 0xfffd;
            if ((int)uVar23 != 0) {
              uVar15 = local_78._4_2_;
            }
            if (uVar15 != 0) {
              *(undefined4 *)((longlong)plVar11 + lVar14 * 4) = 99999;
              bVar2 = true;
            }
          }
          lVar14 = lVar14 + 1;
          uVar13 = (ulonglong)*(short *)((longlong)plVar10 + 0x46);
          lVar12 = lVar12 + 8;
        } while (lVar14 < (longlong)uVar13);
      } while (bVar2);
    }
    uVar18 = local_1c4;
    plVar16 = local_208;
    uVar23 = 0;
    *(ulonglong *)(lVar20 + 0x60) = -(ulonglong)(*(int *)((longlong)plVar10 + 0x54) != 0);
    local_10c = local_1c4 & 0xff;
    uVar7 = FUN_1495c302c(local_208,plVar10,plVar11);
    local_1d8 = CONCAT44(local_1d8._4_4_,(uint)(param_5 == 5));
    lVar20 = plVar10[2];
    local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,uVar7);
    plVar21 = local_1b0;
    if (lVar20 != 0) {
      cVar27 = 1 < uVar7 || (char)uVar18 != '\0';
      uVar23 = 0;
      local_188 = (longlong *)CONCAT71(local_188._1_7_,cVar27);
      lVar12 = local_1f0;
      pvVar26 = local_178;
      do {
        if (lVar20 == lVar12 || cVar27 != '\0') {
LAB_1495914d5:
          lVar14 = plVar16[7];
          iVar5 = (int)lVar14 + 1;
          *(int *)(plVar16 + 7) = iVar5;
          *(uint *)(plVar16 + 7) = (int)lVar14 + (uint)*(ushort *)(lVar20 + 0x60) + 1;
LAB_1495914e9:
          if (iVar5 == 0) goto LAB_1495914ed;
        }
        else {
          iVar5 = FUN_1495c69d2(lVar20,plVar11,local_180 & 0xffffffff);
          lVar12 = local_1f0;
          pvVar26 = local_178;
          cVar27 = (char)local_188;
          if (iVar5 != 0) goto LAB_1495914d5;
          uVar13 = (ulonglong)*(ushort *)(lVar20 + 0x5e);
          if (*(ushort *)(lVar20 + 0x5e) != 0) {
            lVar14 = 4;
            uVar22 = 0;
            do {
              lVar24 = (longlong)*(short *)(*(longlong *)(lVar20 + 8) + uVar22 * 2);
              if (lVar24 < 0) {
                local_98 = 0;
                local_88 = 0;
                uStack_80 = 0;
                local_78 = 0;
                puStack_90 = &LAB_1495c8fd6;
                local_70 = plVar11;
                if (*(longlong *)(*(longlong *)(lVar20 + 0x50) + lVar14 * 2) != 0) {
                  FUN_14959fa98(&local_98);
                  lVar12 = local_1f0;
                  pvVar26 = local_178;
                  cVar27 = (char)local_188;
                  if ((local_78 & 0xfffd00000000) != 0) goto LAB_1495915f1;
                }
                uVar13 = (ulonglong)*(ushort *)(lVar20 + 0x5e);
              }
              else if (-1 < *(int *)((longlong)plVar11 + lVar24 * 4)) {
LAB_1495915f1:
                lVar14 = local_208[7];
                iVar5 = (int)lVar14 + 1;
                *(int *)(local_208 + 7) = iVar5;
                *(uint *)(local_208 + 7) = (int)lVar14 + (uint)*(ushort *)(lVar20 + 0x60) + 1;
                plVar21 = local_1b0;
                plVar16 = local_208;
                if (param_5 == 0xb) {
                  uVar8 = (uint)local_1d8;
                  if (*(char *)(lVar20 + 0x62) == '\x05') {
                    uVar8 = 1;
                  }
                  local_1d8 = CONCAT44(local_1d8._4_4_,uVar8);
                }
                goto LAB_1495914e9;
              }
              uVar22 = uVar22 + 1;
              lVar14 = lVar14 + 0x10;
              plVar21 = local_1b0;
              plVar16 = local_208;
            } while (uVar22 < uVar13);
          }
LAB_1495914ed:
          *(undefined1 *)((longlong)pvVar26 + uVar23 + 5) = 0;
          iVar5 = 0;
        }
        *(int *)((longlong)plVar21 + uVar23 * 4) = iVar5;
        uVar23 = uVar23 + 1;
        lVar20 = *(longlong *)(lVar20 + 0x28);
      } while (lVar20 != 0);
    }
    local_d8 = (uint)local_1d8;
    iVar5 = (int)plVar16[7] + 1;
    *(int *)(plVar16 + 7) = iVar5;
    local_158 = uVar23 & 0xffffffff;
    *(int *)((longlong)plVar21 + local_158 * 4) = iVar5;
    if ((uint)local_1d8 != 0) {
      memset(local_150,(int)CONCAT71((uint7)(uint3)(local_1d8 >> 8),1),local_190);
    }
    lVar12 = local_108;
    lVar20 = local_148;
    param_3 = local_1c0;
    iVar5 = (uint)local_1e0;
    if (*(char *)((longlong)plVar16 + 0x1e) == '\0') {
      *(byte *)(local_1f8 + 0x19) = *(byte *)(local_1f8 + 0x19) | 0x20;
    }
    FUN_1495a3043(local_208,(uint)local_1e0 != 0 || local_198 != 0,iVar29);
    pvVar26 = local_178;
    plVar16 = local_208;
    iVar29 = 0;
    local_1cc = 0;
    uVar13 = local_190 >> 0x20;
    local_190 = local_190 & 0xffffffff00000000;
    uVar23 = (ulonglong)local_178 >> 0x20;
    local_178 = (void *)(uVar23 << 0x20);
    local_168 = 0;
    if (*(int *)((longlong)plVar10 + 0x54) == 0) {
      lVar14 = local_208[7];
      iVar29 = (int)lVar14 + 1;
      local_168 = *(undefined4 *)((longlong)local_1b0 + local_158 * 4);
      *(int *)(local_208 + 7) = iVar29;
      if (((local_198 != 0) || ((char)local_130 != '\0')) ||
         (local_178 = (void *)(uVar23 << 0x20), iVar6 = iVar29, iVar5 != 0)) {
        iVar6 = *(short *)((longlong)plVar10 + 0x46) + iVar29;
        *(int *)(local_208 + 7) = iVar6;
        local_178 = (void *)CONCAT44(SUB84(pvVar26,4),(int)lVar14 + 2);
      }
      if (((local_198 != 0) || ((char)local_1c4 != '\0')) || (local_1cc = iVar29, iVar5 != 0)) {
        iVar6 = iVar6 + 1;
        *(int *)(local_208 + 7) = iVar6;
        local_1cc = iVar6;
      }
      local_190 = CONCAT44((int)uVar13,iVar6 + 1);
      *(int *)(local_208 + 7) = *(short *)((longlong)plVar10 + 0x46) + iVar6;
    }
    if (local_118 == 0) {
      local_f0 = 0;
      local_188 = (longlong *)0x0;
    }
    else {
      local_f0 = local_208[0x2b];
      local_208[0x2b] = *plVar10;
      FUN_1495c3202(local_208,plVar10,lVar12,local_20c);
      local_188 = plVar16;
      iVar5 = (uint)local_1e0;
    }
    iVar6 = FUN_1495a4109(&local_d0,lVar12);
    if (iVar6 == 0) {
      if (*(int *)((longlong)plVar10 + 0x54) == 0) {
        local_e8 = (ulonglong)*(uint *)((longlong)local_208 + 0x44);
        local_1d0 = *(uint *)((longlong)local_208 + 0x44) - 1;
        *(int *)((longlong)local_208 + 0x44) = local_1d0;
        local_16c = 0;
        local_1fc = iVar29;
        if ((((*(byte *)(lVar20 + 0x34) & 1) != 0) && (local_208[0x15] == 0)) &&
           ((param_6 == 0 && (*(char *)((longlong)local_208 + 0x1e) == '\0')))) {
          local_16c = (int)local_208[7] + 1;
          *(int *)(local_208 + 7) = local_16c;
          local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
          FUN_149584f48(local_1f8,0x45,0);
        }
        iVar29 = local_1fc;
        plVar16 = local_208;
        if ((*(byte *)(plVar10 + 8) & 0x80) == 0) {
          local_258 = (uint *)CONCAT44(local_258._4_4_,local_1fc);
          local_1e4 = 0;
          FUN_149584f48(local_1f8,0x48,0,local_168);
          local_1e8 = 0;
          local_1c8 = 0;
          local_f8 = 0;
          local_138 = 0;
          if (param_6 == 0) goto LAB_149591980;
LAB_149591ad9:
          local_160 = FUN_14959ec19(local_208,lVar12,local_1d0,0x10);
          local_200 = 1;
          local_f8 = 0;
          local_138 = 0;
          lVar12 = 0;
          local_164 = 0;
          local_140 = local_160;
        }
        else {
          iVar5 = (int)local_208[7];
          local_1c8 = iVar5 + 1;
          local_1e8 = (uint)*(ushort *)(local_1f0 + 0x5e);
          iVar6 = (int)(short)*(ushort *)(local_1f0 + 0x5e);
          local_1e4 = iVar5 + iVar6 + 1;
          *(int *)(local_208 + 7) = local_1e4;
          if (param_6 != 0) {
            lVar12 = local_108;
            iVar5 = (uint)local_1e0;
            goto LAB_149591ad9;
          }
          local_258._0_4_ = iVar5 + iVar6;
          uVar18 = *(uint *)((longlong)local_208 + 0x34);
          *(uint *)((longlong)local_208 + 0x34) = uVar18 + 1;
          FUN_149584f48(local_1f8,0x48,0);
          local_258 = (uint *)((ulonglong)local_258._4_4_ << 0x20);
          local_138 = (ulonglong)uVar18;
          local_f8 = FUN_149584f48(local_1f8,100,(ulonglong)uVar18,iVar6);
          FUN_14959b2a7(plVar16,local_1f0);
          local_1d8 = CONCAT44(local_1d8._4_4_,local_d8);
          lVar12 = local_108;
          iVar5 = (uint)local_1e0;
          iVar29 = local_1fc;
LAB_149591980:
          local_248 = CONCAT44(local_248._4_4_,local_1a4);
          local_250 = (longlong *)
                      CONCAT62(local_250._2_6_,
                               (ushort)(((uint)local_1d8 == 0 &&
                                        ((char)local_1c4 == '\0' && (local_198 == 0 && iVar5 == 0)))
                                       && *(char *)((longlong)local_208 + 0x1e) == '\0') * 8 +
                               0x1004);
          local_258 = (uint *)0x0;
          lVar12 = FUN_1495aecc3(local_208,local_1b8,lVar12,0);
          if (lVar12 == 0) goto LAB_1495917fc;
          local_140 = *(ulonglong *)(lVar12 + 0x28);
          local_160 = local_140 >> 0x20;
          bVar1 = *(byte *)(lVar12 + 0x42);
          local_164 = *(uint *)(lVar12 + 0x44) & 1;
          local_200 = 1;
          if (bVar1 != 1) {
            plVar16 = (longlong *)local_208[0x14];
            if ((longlong *)local_208[0x14] == (longlong *)0x0) {
              plVar16 = local_208;
            }
            *(undefined1 *)(plVar16 + 4) = 1;
            if (bVar1 == 2) {
              local_200 = 2;
              if ((-1 < (longlong)local_140) &&
                 (uVar18 = (uint)(local_140 >> 0x20), local_20c != uVar18)) {
                local_200 = (uint)(*(char *)((longlong)local_150 +
                                            (longlong)(int)(uVar18 - (int)local_1a0)) == '\0') * 2;
              }
            }
            else {
              local_200 = (uint)bVar1;
            }
          }
        }
        iVar6 = local_1c8;
        plVar16 = local_1f8;
        uVar18 = local_20c;
        local_100 = lVar12;
        if ((*(byte *)(plVar10 + 8) & 0x80) == 0) {
          local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
          FUN_149584f48(local_1f8,0x7f,local_20c,iVar29);
          plVar16 = local_208;
          local_1e8 = 0;
          if (local_200 == 0) {
            iVar6 = (int)local_208[7] + 1;
            *(int *)(local_208 + 7) = iVar6;
            *(int *)((longlong)local_1b0 + local_158 * 4) = iVar6;
            local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
            FUN_149584f48(local_1f8,0x93,local_168,iVar29);
          }
        }
        else {
          uVar7 = (uint)(short)local_1e8;
          bVar2 = 0 < (short)local_1e8;
          local_1e8 = uVar7;
          if (bVar2) {
            local_1d8 = (ulonglong)uVar7;
            uVar23 = 0;
            do {
              local_258 = (uint *)CONCAT44(local_258._4_4_,iVar6 + (int)uVar23);
              FUN_14959f097(plVar16,plVar10,uVar18,
                            (int)*(short *)(*(longlong *)(local_1f0 + 8) + uVar23 * 2));
              uVar23 = uVar23 + 1;
            } while (local_1d8 != uVar23);
          }
          param_3 = local_1c0;
          iVar29 = local_1fc;
          plVar16 = local_208;
          if (local_200 == 0) {
            local_1d8 = FUN_1495aaa6f(lVar20);
            iVar29 = local_1c8;
            uVar18 = local_1e8;
            plVar21 = local_1f8;
            local_258._0_4_ = local_1e4;
            uVar8 = FUN_149584f48(local_1f8,0x5b,local_1c8,local_1e8);
            FUN_14955a5b6(plVar21,uVar8,local_1d8,uVar18);
            local_258 = (uint *)CONCAT44(local_258._4_4_,iVar29);
            iVar29 = FUN_149584f48(plVar21,0x83,local_138,local_1e4);
            if (*(char *)(*plVar21 + 0x61) == '\0') {
              lVar12 = plVar21[0x11];
              *(undefined1 *)(lVar12 + 1 + (longlong)iVar29 * 0x18) = 0xfd;
              *(uint *)(lVar12 + 0x10 + (longlong)iVar29 * 0x18) = local_1e8;
            }
            local_1e8 = 0;
            param_3 = local_1c0;
            iVar5 = (uint)local_1e0;
            iVar29 = local_1fc;
          }
          else {
            if (((int)local_f8 != 0) && (*(char *)(*local_1f8 + 0x61) == '\0')) {
              lVar12 = local_1f8[0x11];
              lVar14 = (longlong)(int)local_f8;
              FUN_149569985(*local_1f8,(int)*(char *)(lVar12 + 1 + lVar14 * 0x18),
                            *(undefined8 *)(lVar12 + 0x10 + lVar14 * 0x18));
              *(undefined8 *)(lVar12 + 0x10 + lVar14 * 0x18) = 0;
              *(undefined2 *)(lVar12 + lVar14 * 0x18) = 0xad;
            }
            plVar16 = local_208;
            iVar5 = (uint)local_1e0;
            local_1e4 = local_1c8;
          }
        }
        local_158 = local_158 & 0xffffffff00000000;
        iVar6 = local_1d0;
        if (param_6 == 0) {
          if (local_200 == 2) {
            if (local_118 == 0) {
LAB_149592506:
              iVar5 = (int)local_1a0;
              if (-1 < (int)local_140) {
                *(undefined1 *)((longlong)local_150 + (longlong)((int)local_140 - iVar5)) = 0;
              }
              if (-1 < (int)(uint)local_160) {
                *(undefined1 *)((longlong)local_150 + (longlong)(int)((uint)local_160 - iVar5)) = 0;
              }
              if ((local_200 != 2) || ((int)(uVar9 + ((int)~(uint)local_160 >> 0x1f)) < 1))
              goto LAB_149592708;
              local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
              iVar6 = FUN_149584f48(local_1f8,0x11,0,0);
              local_248 = 0;
              uStack_240 = 0;
              local_250 = local_150;
              local_258 = (uint *)CONCAT44(local_258._4_4_,iVar5);
              FUN_1495c3387(plVar16,plVar10,0x61,0);
              if (iVar6 != 0) {
                if (*(char *)(*local_1f8 + 0x61) == '\0') {
                  iVar29 = (int)local_1f8[0x12] + -1;
                  if (-1 < iVar6) {
                    iVar29 = iVar6;
                  }
                  puVar17 = (undefined1 *)((longlong)iVar29 * 0x18 + local_1f8[0x11]);
                }
                else {
                  puVar17 = &DAT_14cc1ee40;
                }
                *(int *)(puVar17 + 8) = (int)local_1f8[0x12];
                lVar20 = local_148;
                plVar16 = local_208;
                param_3 = local_1c0;
                iVar29 = local_1fc;
              }
              goto LAB_149592aa2;
            }
LAB_149591c0b:
            iVar6 = *(int *)((longlong)plVar16 + 0x44) + -1;
            *(int *)((longlong)plVar16 + 0x44) = iVar6;
          }
          else {
            FUN_1495b2193(local_100);
            if (local_118 == 0) {
              iVar5 = (int)local_1a0;
              if (local_200 != 0) goto LAB_149592506;
LAB_149592708:
              local_248 = 0;
              uStack_240 = 0;
              local_250 = local_150;
              local_258 = (uint *)CONCAT44(local_258._4_4_,iVar5);
              FUN_1495c3387(plVar16,plVar10,0x61,0);
            }
            uVar23 = local_138;
            plVar21 = local_1f8;
            if (local_200 == 0) {
              if (local_1f0 == 0) {
                local_258._0_4_ = iVar29;
                iVar6 = FUN_149584f48(local_1f8,0x2a,local_168,local_1d0);
                local_258 = (uint *)CONCAT44(local_258._4_4_,iVar29);
                FUN_149584f48(plVar21,0x20,local_20c,iVar6);
                iVar5 = (uint)local_1e0;
              }
              else {
                iVar6 = *(int *)((longlong)plVar16 + 0x44) + -1;
                *(int *)((longlong)plVar16 + 0x44) = iVar6;
                local_258 = (uint *)((ulonglong)local_258._4_4_ << 0x20);
                FUN_149584f48(local_1f8,0x25,local_138 & 0xffffffff,local_1d0);
                iVar29 = local_1e4;
                local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
                uVar8 = FUN_149584f48(plVar21,0x7e,uVar23 & 0xffffffff,local_1e4);
                local_158 = CONCAT44(local_158._4_4_,uVar8);
                local_258 = (uint *)CONCAT44(local_258._4_4_,iVar29);
                iVar29 = FUN_149584f48(plVar21,0x1d,local_20c,iVar6);
                if (*(char *)(*plVar21 + 0x61) == '\0') {
                  lVar12 = local_1f8[0x11];
                  *(undefined1 *)(lVar12 + 1 + (longlong)iVar29 * 0x18) = 0xfd;
                  *(undefined4 *)(lVar12 + 0x10 + (longlong)iVar29 * 0x18) = 0;
                }
                plVar16 = local_208;
                iVar5 = (uint)local_1e0;
                iVar29 = local_1fc;
              }
              goto LAB_149591db5;
            }
LAB_149592aa2:
            plVar21 = local_1f8;
            if (((local_118 == 0) && ((uint)local_140 != local_20c)) &&
               ((uint)local_160 != local_20c)) {
              local_258 = (uint *)CONCAT44(local_258._4_4_,local_1e4);
              iVar5 = FUN_149584f48(local_1f8,0x1d,local_20c,local_1d0);
              if (*(char *)(*plVar21 + 0x61) == '\0') {
                lVar12 = local_1f8[0x11];
                *(undefined1 *)(lVar12 + 1 + (longlong)iVar5 * 0x18) = 0xfd;
                *(uint *)(lVar12 + 0x10 + (longlong)iVar5 * 0x18) = local_1e8;
              }
            }
            iVar5 = (uint)local_1e0;
            iVar6 = local_1d0;
            if (local_200 != 1) goto LAB_149591c0b;
          }
          iVar3 = local_1e4;
          if (local_1f0 == 0) {
            iVar3 = iVar29;
          }
          local_258 = (uint *)((ulonglong)local_258._4_4_ << 0x20);
          FUN_149584f48(local_1f8,0x32,iVar3,local_1d0);
        }
LAB_149591db5:
        iVar3 = local_1cc;
        local_1d8 = CONCAT44(local_1d8._4_4_,iVar6);
        if ((uint)local_180 != 0) {
          FUN_14959afe0(plVar16,local_128,local_1cc);
          local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
          FUN_149584f48(local_1f8,0xf,iVar3,0);
        }
        if (((local_198 != 0) || ((char)local_130 != '\0')) || (iVar5 != 0)) {
          uVar18 = 0;
          if (iVar5 != 0) {
            uVar18 = FUN_1495c3d3b(plVar16,plVar10);
          }
          local_248 = CONCAT44(local_248._4_4_,param_5);
          local_258 = (uint *)CONCAT44(local_258._4_4_,3);
          local_250 = plVar10;
          uVar9 = FUN_1495c3c69(plVar16,local_198,param_3,0);
          if (0 < *(short *)((longlong)plVar10 + 0x46)) {
            lVar12 = 0x1c;
            uVar23 = 0;
            do {
              uVar15 = *(ushort *)(plVar10[1] + lVar12);
              sVar4 = FUN_14959cc88(plVar10,uVar23 & 0xffffffff);
              if ((uVar9 | uVar18) == 0xffffffff) {
LAB_1495923b9:
                local_258 = (uint *)CONCAT44(local_258._4_4_,sVar4 + (int)local_178);
                FUN_14959f097(local_1f8,plVar10,local_20c,uVar23 & 0xffffffff);
              }
              else {
                if (uVar23 < 0x20) {
                  if ((((uVar9 | uVar18) >> ((uint)uVar23 & 0x1f) & 1) == 0) && ((uVar15 & 1) == 0))
                  goto LAB_149592401;
                  goto LAB_1495923b9;
                }
                if ((uVar15 & 1) != 0) goto LAB_1495923b9;
LAB_149592401:
                local_258 = (uint *)((ulonglong)local_258._4_4_ << 0x20);
                FUN_149584f48(local_1f8,0x48,0);
              }
              uVar23 = uVar23 + 1;
              lVar12 = lVar12 + 0x20;
            } while ((longlong)uVar23 < (longlong)*(short *)((longlong)plVar10 + 0x46));
          }
          param_3 = local_1c0;
          plVar16 = local_208;
          if ((local_1f0 == 0) && ((char)local_120 == '\0')) {
            local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
            FUN_149584f48(local_1f8,0x4d,iVar29,local_1cc);
          }
        }
        local_248 = CONCAT44(local_248._4_4_,param_5);
        local_258 = (uint *)CONCAT44(local_258._4_4_,1);
        local_250 = plVar10;
        uVar8 = FUN_1495c3c69(plVar16,local_198,param_3,1);
        local_180 = CONCAT44(local_180._4_4_,uVar8);
        if (0 < *(short *)((longlong)plVar10 + 0x46)) {
          lVar12 = 7;
          uVar23 = 0;
          iVar29 = (int)local_190;
          do {
            if (uVar23 == (uint)(int)*(short *)((longlong)plVar10 + 0x44)) {
LAB_149591ef2:
              local_258 = (uint *)((ulonglong)local_258._4_4_ << 0x20);
              FUN_149584f48(local_1f8,0x48,0,iVar29);
            }
            else {
              uVar15 = *(ushort *)(plVar10[1] + lVar12 * 4);
              if ((uVar15 & 0x60) == 0) {
                lVar14 = (longlong)*(int *)((longlong)plVar11 + uVar23 * 4);
                if (lVar14 < 0) {
                  if (((uVar23 < 0x20) && ((local_d4 & 1) != 0)) &&
                     (((uint)local_180 >> ((uint)uVar23 & 0x1f) & 1) == 0)) goto LAB_149591ef2;
                  local_258 = (uint *)CONCAT44(local_258._4_4_,iVar29);
                  FUN_14959f097(local_1f8,plVar10,local_20c,uVar23 & 0xffffffff);
                  local_164 = 0;
                }
                else {
                  FUN_14959afe0(plVar16,*(undefined8 *)(param_3 + lVar14 * 8 + 2));
                }
              }
              else {
                iVar29 = iVar29 + ((int)((uint)uVar15 << 0x1a) >> 0x1f);
              }
            }
            uVar23 = uVar23 + 1;
            iVar29 = iVar29 + 1;
            lVar12 = lVar12 + 8;
          } while ((longlong)uVar23 < (longlong)*(short *)((longlong)plVar10 + 0x46));
        }
        plVar21 = local_1f8;
        if ((*(byte *)(plVar10 + 8) & 0x60) != 0) {
          FUN_1495c6f6c(plVar16,local_190 & 0xffffffff,plVar10);
        }
        param_3 = local_1c0;
        uVar23 = local_1d8;
        uVar8 = (uint)local_1d8;
        uVar18 = (uint)local_1e0;
        if ((local_d4 & 1) != 0) {
          FUN_1495a3a37(plVar21,plVar10,local_190 & 0xffffffff);
          iVar29 = local_1fc;
          local_238 = uVar8;
          uStack_240 = CONCAT44(uStack_240._4_4_,param_5);
          local_248 = CONCAT44(local_248._4_4_,local_1fc);
          local_258._0_4_ = 1;
          local_250 = plVar10;
          FUN_1495c3e6e(plVar16,local_198,0x7f,param_3);
          if (local_1f0 == 0) {
            local_258 = (uint *)CONCAT44(local_258._4_4_,iVar29);
            FUN_149584f48(plVar21,0x20,local_20c,uVar23 & 0xffffffff);
          }
          else {
            local_258 = (uint *)CONCAT44(local_258._4_4_,local_1e4);
            iVar29 = FUN_149584f48(plVar21,0x1d,local_20c,uVar23 & 0xffffffff);
            if (*(char *)(*plVar21 + 0x61) == '\0') {
              lVar20 = plVar21[0x11];
              *(undefined1 *)(lVar20 + 1 + (longlong)iVar29 * 0x18) = 0xfd;
              *(uint *)(lVar20 + 0x10 + (longlong)iVar29 * 0x18) = local_1e8;
            }
          }
          sVar4 = *(short *)((longlong)plVar10 + 0x46);
          if (0 < sVar4) {
            lVar20 = 7;
            uVar23 = 0;
            iVar29 = (int)local_190;
            do {
              uVar15 = *(ushort *)(plVar10[1] + lVar20 * 4);
              if ((uVar15 & 0x60) == 0) {
                if ((*(int *)((longlong)plVar11 + uVar23 * 4) < 0) &&
                   (uVar23 != (uint)(int)*(short *)((longlong)plVar10 + 0x44))) {
                  local_258 = (uint *)CONCAT44(local_258._4_4_,iVar29);
                  FUN_14959f097(plVar21,plVar10,local_20c,uVar23 & 0xffffffff);
                  sVar4 = *(short *)((longlong)plVar10 + 0x46);
                }
              }
              else {
                iVar29 = iVar29 + ((int)((uint)uVar15 << 0x1a) >> 0x1f);
              }
              uVar23 = uVar23 + 1;
              iVar29 = iVar29 + 1;
              lVar20 = lVar20 + 8;
            } while ((longlong)uVar23 < (longlong)sVar4);
          }
          lVar20 = local_148;
          uVar18 = (uint)local_1e0;
          uVar8 = (uint)local_1d8;
          if ((*(byte *)(plVar10 + 8) & 0x60) != 0) {
            FUN_1495c6f6c(plVar16,local_190 & 0xffffffff,plVar10);
          }
        }
        if (local_118 == 0) {
          local_228 = &local_d8;
          local_238 = CONCAT31(local_238._1_3_,(char)param_5);
          uStack_240 = CONCAT71(uStack_240._1_7_,(char)local_1c4);
          local_248 = CONCAT44(local_248._4_4_,local_1fc);
          local_250 = (longlong *)CONCAT44(local_250._4_4_,local_1cc);
          local_258._0_4_ = local_1a4;
          local_218 = 0;
          local_230 = uVar8;
          local_220 = plVar11;
          FUN_1495c7191(plVar16,plVar10,local_1b0,local_20c);
          if ((local_d8 != 0) || ((char)local_1c4 != '\0')) {
            if (local_1f0 == 0) {
              local_258 = (uint *)CONCAT44(local_258._4_4_,local_1fc);
              FUN_149584f48(plVar21,0x20,local_20c,uVar8);
            }
            else {
              local_258 = (uint *)CONCAT44(local_258._4_4_,local_1e4);
              iVar29 = FUN_149584f48(plVar21,0x1d,local_20c,uVar8);
              if (*(char *)(*plVar21 + 0x61) == '\0') {
                lVar12 = plVar21[0x11];
                *(undefined1 *)(lVar12 + 1 + (longlong)iVar29 * 0x18) = 0xfd;
                *(uint *)(lVar12 + 0x10 + (longlong)iVar29 * 0x18) = local_1e8;
              }
            }
          }
          plVar16 = local_208;
          if (uVar18 != 0) {
            local_250 = (longlong *)CONCAT44(local_250._4_4_,local_10c);
            local_258 = (uint *)plVar11;
            FUN_1495c3f0e(local_208,plVar10,local_1fc,0);
          }
          local_258 = (uint *)local_1b0;
          local_250 = (longlong *)CONCAT44(local_250._4_4_,0xffffffff);
          FUN_1495c4664(plVar16,plVar10,local_20c,local_1a4);
          if (local_164 != 0) {
            local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
            FUN_149584f48(plVar21,0x87,local_20c,0);
          }
          if ((1 < uVar18) || ((char)local_1c4 != '\0')) {
            local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
            FUN_149584f48(plVar21,0x7a,local_20c,0);
          }
          uVar9 = local_10c;
          iVar29 = local_1cc;
          if (uVar18 == 0) {
            local_238 = 0;
            uStack_240 = uStack_240 & 0xffffffff00000000;
            local_250 = local_1b0;
            local_258 = (uint *)CONCAT44(local_258._4_4_,local_1cc);
            local_248 = CONCAT44(local_248._4_4_,(uint)(local_200 == 2) * 2 + 4);
            FUN_1495c8d72(plVar16,plVar10,local_20c,local_1a4);
          }
          else {
            local_250 = (longlong *)CONCAT44(local_250._4_4_,local_10c);
            local_258 = (uint *)plVar11;
            FUN_1495c3f0e(local_208,plVar10,0,local_1cc);
            plVar16 = local_208;
            local_238 = 0;
            uStack_240 = uStack_240 & 0xffffffff00000000;
            local_248 = CONCAT44(local_248._4_4_,(local_200 == 2) + 4 + (uint)(local_200 == 2));
            local_250 = local_1b0;
            local_258 = (uint *)CONCAT44(local_258._4_4_,iVar29);
            uVar8 = (uint)local_1d8;
            FUN_1495c8d72(local_208,plVar10,local_20c,local_1a4);
            local_250 = (longlong *)CONCAT44(local_250._4_4_,uVar9);
            local_258 = (uint *)plVar11;
            FUN_1495c47bb(plVar16,plVar10,param_3,local_1fc);
          }
        }
        iVar29 = local_16c;
        if (local_16c != 0) {
          local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
          FUN_149584f48(plVar21,0x52,local_16c,1);
        }
        uStack_240 = CONCAT44(uStack_240._4_4_,param_5);
        local_248 = CONCAT44(local_248._4_4_,local_1fc);
        local_258 = (uint *)CONCAT44(local_258._4_4_,2);
        local_250 = plVar10;
        local_238 = uVar8;
        FUN_1495c3e6e(plVar16,local_198,0x7f,param_3);
        uVar23 = local_e8;
        if (local_200 != 1) {
          if (local_200 == 2) {
            lVar12 = plVar21[3];
            if (*(int *)(lVar12 + 0x44) + *(int *)(lVar12 + 0x48) < 0) {
              FUN_1495a1bff(lVar12,plVar21);
            }
            else {
              *(int *)(*(longlong *)(lVar12 + 0x50) + (longlong)(int)~(uint)local_1d8 * 4) =
                   (int)plVar21[0x12];
            }
            FUN_1495b2193(local_100);
          }
          else {
            if (local_1f0 == 0) {
              uVar19 = 0xb;
              uVar13 = 0;
              uVar18 = (uint)local_1d8;
            }
            else {
              lVar12 = plVar21[3];
              if (*(int *)(lVar12 + 0x44) + *(int *)(lVar12 + 0x48) < 0) {
                FUN_1495a1bff(lVar12,plVar21);
              }
              else {
                *(int *)(*(longlong *)(lVar12 + 0x50) + (longlong)(int)~(uint)local_1d8 * 4) =
                     (int)plVar21[0x12];
              }
              uVar19 = 5;
              uVar13 = local_138;
              uVar18 = (uint)local_158;
            }
            local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
            FUN_149584f48(plVar21,uVar19,uVar13,uVar18);
          }
        }
        lVar12 = plVar21[3];
        if (*(int *)(lVar12 + 0x44) + *(int *)(lVar12 + 0x48) < 0) {
          FUN_1495a1bff(lVar12,plVar21,-(int)uVar23);
        }
        else {
          *(int *)(*(longlong *)(lVar12 + 0x50) + (longlong)-(int)uVar23 * 4) = (int)plVar21[0x12];
        }
        if (((*(char *)((longlong)plVar16 + 0x1e) == '\0') && (local_e0 == 0 && plVar16[0x15] == 0))
           && (plVar16[0x13] != 0)) {
          FUN_1495c68c5(plVar16);
        }
        if (iVar29 != 0) {
          local_258 = (uint *)((ulonglong)local_258 & 0xffffffff00000000);
          FUN_149584f48(plVar21,0x50,local_16c,1);
          FUN_1495852e4(plVar21,1);
          if (*(char *)(*plVar21 + 0x61) == '\0') {
            local_258 = (uint *)0x0;
            FUN_14955916b(plVar21[0x13],"rows updated",0xffffffff,1);
          }
        }
      }
      else {
        uStack_240 = CONCAT44(uStack_240._4_4_,param_5);
        local_248 = lVar12;
        local_258 = local_128;
        local_250 = plVar11;
        FUN_1495c6a5b(local_208,local_1b8,plVar10,param_3);
      }
    }
LAB_1495917fc:
    if (local_188 != (longlong *)0x0) {
      local_188[0x2b] = local_f0;
    }
  }
LAB_149590e7e:
  FUN_14955d65a(lVar20,plVar11);
  param_2 = local_1b8;
  param_4 = local_108;
LAB_149590bd8:
  FUN_149582b1a(lVar20,param_2);
  if (param_3 != (int *)0x0) {
    FUN_149582d29(lVar20,param_3);
  }
  if (param_4 != 0) {
    FUN_14958288e(lVar20,param_4);
  }
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_149590ff4:
  uVar23 = uVar23 + 1;
  if (uVar23 == uVar18) goto LAB_14959101f;
  goto LAB_149590fb9;
}



// FUNCTION 149592b54 FUN_149592b54 body=355 status=ok
// SIG undefined FUN_149592b54(void)

int * FUN_149592b54(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_2 == (int *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)*param_2;
  }
  lVar1 = *param_1;
  if (param_4 == (char *)0x0 || param_3 == (longlong *)0x0) goto LAB_149592b90;
  cVar2 = *param_4;
  if (cVar2 != -0x78) {
    if (cVar2 == -0x53) {
      cVar2 = param_4[2];
    }
    pcVar4 = param_4;
    if (cVar2 == -0x52) {
LAB_149592bed:
      iVar6 = **(int **)(pcVar4 + 0x20);
    }
    else {
      iVar6 = 1;
      if (cVar2 == -0x78) {
        pcVar4 = *(char **)(param_4 + 0x20);
        goto LAB_149592bed;
      }
    }
    if ((int)param_3[1] != iVar6) {
      FUN_14955a364(param_1,"%d columns assigned %d values");
      goto LAB_149592b90;
    }
  }
  if (0 < (int)param_3[1]) {
    lVar5 = 0;
    uVar7 = 0;
    do {
      lVar3 = FUN_1495bb3a1(param_1,param_4,uVar7 & 0xffffffff);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 0x2c) = (int)param_3[1];
        param_2 = (int *)FUN_14958f62a(param_1,param_2,lVar3);
        if (param_2 == (int *)0x0) {
          param_2 = (int *)0x0;
        }
        else {
          *(undefined8 *)(param_2 + (longlong)*param_2 * 8 + -4) = *(undefined8 *)(*param_3 + lVar5)
          ;
          *(undefined8 *)(*param_3 + lVar5) = 0;
        }
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)uVar7 < (longlong)(int)param_3[1]);
  }
  if (((*(char *)(lVar1 + 0x61) == '\0') && (*param_4 == -0x78)) && (param_2 != (int *)0x0)) {
    lVar8 = *(longlong *)(param_2 + lVar8 * 8 + 2);
    *(char **)(lVar8 + 0x18) = param_4;
    *(int *)(lVar8 + 0x2c) = (int)param_3[1];
    param_4 = (char *)0x0;
  }
LAB_149592b90:
  FUN_149594cd8(param_1,param_4);
  FUN_149582cb1(lVar1,param_3);
  return param_2;
}



// FUNCTION 149592cb7 FUN_149592cb7 body=6592 status=ok
// SIG undefined FUN_149592cb7(void)

void FUN_149592cb7(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,int param_5
                  ,longlong *param_6)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  short sVar16;
  longlong *plVar17;
  int *piVar18;
  undefined8 *puVar19;
  uint *puVar20;
  uint uVar21;
  longlong lVar22;
  char cVar23;
  ulonglong uVar24;
  int *piVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int *piVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 *local_198;
  undefined4 *local_190;
  uint local_188;
  undefined4 local_180;
  longlong **local_178;
  undefined8 local_170;
  longlong *local_168;
  int local_15c;
  longlong *local_158;
  int *local_150;
  longlong local_148;
  uint local_13c;
  ulonglong local_138;
  undefined8 *local_130;
  uint local_124;
  ulonglong local_120;
  int *local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  int local_ec;
  int local_e8;
  uint local_e4;
  longlong *local_e0;
  int local_d4;
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_74;
  undefined1 local_70;
  int local_6c;
  uint local_68;
  int local_64;
  undefined8 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_4c = 0;
  local_50 = 0;
  piVar25 = (int *)*param_1;
  if (((int)param_1[6] != 0) || (*(char *)((longlong)piVar25 + 0x61) != '\0')) {
    FUN_149582b1a(piVar25,param_2);
    puVar7 = (undefined8 *)0x0;
    goto LAB_149592d69;
  }
  local_6c = 0;
  if (param_3 == 0) {
    piVar28 = (int *)0x0;
LAB_149592d26:
    param_3 = 0;
  }
  else {
    if (((*(byte *)(param_3 + 5) & 2) != 0) && (*(longlong *)(param_3 + 0x50) == 0)) {
      piVar28 = *(int **)(param_3 + 0x20);
      *(undefined8 *)(param_3 + 0x20) = 0;
      FUN_149582a1c(piVar25,param_3,1);
      goto LAB_149592d26;
    }
    piVar28 = (int *)0x0;
  }
  puVar7 = (undefined8 *)FUN_1495a9ba3(param_1,param_2);
  if (puVar7 == (undefined8 *)0x0) {
LAB_149592d3d:
    puVar7 = (undefined8 *)0x0;
    goto LAB_149592d3f;
  }
  iVar29 = -1000000;
  if (puVar7[0xe] != 0) {
    iVar29 = -1;
    plVar17 = (longlong *)(*(longlong *)(piVar25 + 8) + 0x18);
    do {
      iVar29 = iVar29 + 1;
      lVar8 = *plVar17;
      plVar17 = plVar17 + 4;
    } while (lVar8 != puVar7[0xe]);
  }
  local_1a8 = *(uint **)(*(longlong *)(piVar25 + 8) + (longlong)iVar29 * 0x20);
  local_150 = piVar28;
  local_148 = param_2;
  iVar4 = FUN_1495a2d6b(param_1,0x12,*puVar7);
  param_2 = local_148;
  if (iVar4 == 0) {
    local_124 = *(uint *)(puVar7 + 8);
    local_1a8 = &local_74;
    local_c8 = FUN_1495c2fa6(param_1,puVar7,0x7d);
    local_c0 = puVar7[3];
    iVar4 = FUN_1495a8238(param_1,puVar7);
    param_2 = local_148;
    if ((iVar4 != 0) ||
       (iVar4 = FUN_1495c3150(param_1,puVar7,local_74), param_2 = local_148, iVar4 != 0))
    goto LAB_149592f1a;
    local_158 = (longlong *)param_1[2];
    if (local_158 == (longlong *)0x0) {
      if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23) = 1;
      }
      local_158 = (longlong *)FUN_14955a44a(param_1);
      param_2 = local_148;
      if (local_158 == (longlong *)0x0) goto LAB_149592f1a;
    }
    if (*(char *)((longlong)param_1 + 0x1e) == '\0') {
      *(byte *)(local_158 + 0x19) = *(byte *)(local_158 + 0x19) | 0x20;
    }
    FUN_1495a3043(param_1,param_3 != 0 || local_c8 != 0,iVar29);
    if (param_4 == (longlong *)0x0) {
      local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,iVar29);
      iVar4 = FUN_1495c93ab(param_1,puVar7);
      if (iVar4 == 0) goto LAB_149592f95;
      puVar7 = (undefined8 *)0x0;
      param_2 = local_148;
      uVar24 = 0;
      piVar28 = local_150;
LAB_1495934e6:
      if (((*(char *)((longlong)param_1 + 0x1e) == '\0') && (param_1[0x15] == 0)) &&
         (param_1[0x13] != 0)) {
        FUN_1495c68c5(param_1);
      }
      plVar17 = local_158;
      if ((int)uVar24 != 0) {
        local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
        FUN_149584f48(local_158,0x50,uVar24,1);
        FUN_1495852e4(plVar17,1);
        if (*(char *)(*plVar17 + 0x61) == '\0') {
          local_1a8 = (uint *)0x0;
          FUN_14955916b(plVar17[0x13],"rows inserted",0xffffffff,1);
        }
      }
    }
    else {
LAB_149592f95:
      local_100 = param_3;
      local_e8 = FUN_1495c9fd0(param_1,iVar29);
      iVar4 = (int)param_1[7];
      local_e4 = iVar4 + 1;
      iVar12 = *(short *)((longlong)puVar7 + 0x46) + iVar4;
      *(int *)(param_1 + 7) = iVar12 + 1;
      uVar5 = local_e4;
      if (*(int *)((longlong)puVar7 + 0x54) != 0) {
        uVar5 = iVar4 + 2;
        *(int *)(param_1 + 7) = iVar12 + 2;
      }
      local_d0 = (ulonglong)uVar5;
      uVar26 = CONCAT71((int7)((ulonglong)piVar25 >> 8),(*(ushort *)(puVar7 + 8) & 0x440) == 0);
      uVar24 = 0xffffffff;
      local_130 = puVar7;
      local_118 = piVar25;
      local_e0 = param_1;
      if ((param_4 != (longlong *)0x0) && (0 < (int)param_4[1])) {
        lVar8 = 8;
        lVar13 = 0;
        do {
          *(undefined4 *)(*param_4 + lVar8) = 0xffffffff;
          lVar13 = lVar13 + 1;
          lVar8 = lVar8 + 0x10;
        } while (lVar13 < (int)param_4[1]);
        if (0 < (int)param_4[1]) {
          sVar16 = *(short *)((longlong)puVar7 + 0x46);
          uVar24 = 0xffffffff;
          uVar27 = 0;
          local_b8 = param_4;
          do {
            uVar5 = (uint)sVar16;
            if (0 < sVar16) {
              local_13c = CONCAT22(local_13c._2_2_,sVar16);
              local_120 = CONCAT44(local_120._4_4_,(uint)uVar26);
              plVar17 = puVar7 + 1;
              lVar8 = *param_4;
              puVar20 = *(uint **)(lVar8 + uVar27 * 0x10);
              uVar9 = 0;
LAB_14959309e:
              lVar22 = uVar9 * 0x20;
              lVar13 = 0;
              do {
                bVar1 = *(byte *)((longlong)puVar20 + lVar13);
                bVar2 = *(byte *)(*(longlong *)(*plVar17 + lVar22) + lVar13);
                param_1 = local_e0;
                puVar7 = local_130;
                param_4 = local_b8;
                if (bVar1 == bVar2) {
                  if ((ulonglong)bVar1 == 0) {
                    *(int *)(lVar8 + 8 + uVar27 * 0x10) = (int)uVar9;
                    if ((*(byte *)(local_130[1] + 0x1c + lVar22) & 0x60) != 0) {
                      FUN_14955a364(local_e0,"cannot INSERT into generated column \"%s\"",
                                    *(undefined8 *)(local_130[1] + lVar22));
                      param_2 = local_148;
                      param_4 = local_b8;
                      piVar25 = local_118;
                      param_3 = local_100;
                      goto LAB_149592f1a;
                    }
                    if (uVar9 == (longlong)*(short *)((longlong)local_130 + 0x44)) {
                      uVar24 = uVar27 & 0xffffffff;
                    }
                    uVar5 = (uint)uVar26 & 0xff;
                    if (uVar27 != (uVar9 & 0xffffffff)) {
                      uVar5 = 0;
                    }
                    uVar26 = (ulonglong)uVar5;
                    sVar16 = *(short *)((longlong)local_130 + 0x46);
                    uVar5 = (uint)sVar16;
                    goto LAB_149593154;
                  }
                }
                else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) goto LAB_1495930cf;
                lVar13 = lVar13 + 1;
              } while( true );
            }
            uVar9 = 0;
LAB_149593154:
            if ((int)uVar5 <= (int)uVar9) {
              local_13c = CONCAT22(local_13c._2_2_,sVar16);
              puVar20 = *(uint **)(*param_4 + uVar27 * 0x10);
LAB_149593184:
              iVar4 = FUN_14955d141();
              param_2 = local_148;
              if ((iVar4 == 0) || ((local_124 & 0x80) != 0)) {
                local_1a8 = puVar20;
                FUN_14955a364(param_1,"table %S has no column named %s",local_148,0);
                *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
                piVar25 = local_118;
                param_3 = local_100;
                goto LAB_149592f1a;
              }
              uVar26 = 0;
              uVar24 = uVar27 & 0xffffffff;
              sVar16 = (short)local_13c;
            }
            uVar27 = uVar27 + 1;
          } while ((longlong)uVar27 < (longlong)(int)param_4[1]);
        }
      }
      lVar8 = local_100;
      piVar25 = local_118;
      uVar5 = (int)local_d0 + 1;
      local_13c = uVar5;
      if (local_100 == 0) {
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_120 = 0;
        uVar26 = local_138 >> 0x20;
        local_138 = local_138 & 0xffffffff00000000;
        local_b0 = param_1;
        if ((local_150 != (int *)0x0) &&
           (local_138 = CONCAT44((int)uVar26,*local_150), 0 < *local_150)) {
          piVar28 = local_150 + 2;
          lVar8 = 0;
          local_108 = uVar24;
          do {
            iVar29 = FUN_1495a4109(&local_b0,*(undefined8 *)piVar28);
            if (iVar29 != 0) {
              param_2 = local_148;
              param_3 = 0;
              goto LAB_149592f1a;
            }
            lVar8 = lVar8 + 1;
            piVar28 = piVar28 + 8;
            uVar24 = local_108;
          } while (lVar8 < *local_150);
        }
        local_f8 = 0xffffffff;
        local_15c = -0xff;
        param_3 = local_100;
      }
      else {
        iVar4 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar4;
        local_138 = (ulonglong)*(uint *)(local_158 + 0x12);
        local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,*(uint *)(local_158 + 0x12) + 1);
        local_108 = uVar24;
        FUN_149584f48(local_158,0xd,iVar4);
        local_70 = 0xd;
        local_68 = uVar5;
        if ((char)uVar26 == '\0') {
          local_68 = 0;
        }
        local_60 = 0;
        local_64 = (int)*(short *)((longlong)local_130 + 0x46);
        local_15c = iVar4;
        local_6c = iVar4;
        iVar4 = FUN_14958cf93(param_1,lVar8);
        piVar25 = local_118;
        plVar17 = local_158;
        param_2 = local_148;
        param_3 = local_100;
        if (((iVar4 != 0) || (*(char *)((longlong)local_118 + 0x61) != '\0')) ||
           ((int)param_1[6] != 0)) goto LAB_149592f1a;
        local_120 = (ulonglong)local_68;
        local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
        FUN_149584f48(local_158,0x42,local_15c);
        param_3 = local_100;
        *(undefined1 *)(plVar17[3] + 0x1f) = 0;
        *(undefined4 *)(plVar17[3] + 0x28) = 0;
        if (*(char *)(*plVar17 + 0x61) == '\0') {
          iVar4 = (int)plVar17[0x12] + -1;
          if (-1 < (int)local_138) {
            iVar4 = (int)local_138;
          }
          puVar14 = (undefined1 *)((longlong)iVar4 * 0x18 + plVar17[0x11]);
        }
        else {
          puVar14 = &DAT_14cc1ee40;
        }
        *(int *)(puVar14 + 8) = (int)plVar17[0x12];
        local_138 = CONCAT44(local_138._4_4_,**(undefined4 **)(local_100 + 0x20));
        if ((local_c8 == 0) && (uVar10 = FUN_1495ca099(param_1,iVar29), (int)uVar10 == 0)) {
          local_f8 = 0;
          local_15c = (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          uVar24 = local_108;
          goto LAB_1495933da;
        }
        uVar24 = local_138;
        plVar17 = local_158;
        uVar26 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
        *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) + 1;
        cVar23 = *(char *)((longlong)param_1 + 0x1f);
        if (cVar23 == '\0') {
          iVar29 = (int)param_1[7] + 1;
          local_15c = iVar29;
LAB_149593d03:
          iVar29 = iVar29 + 1;
          *(int *)(param_1 + 7) = iVar29;
        }
        else {
          bVar1 = cVar23 - 1;
          *(byte *)((longlong)param_1 + 0x1f) = bVar1;
          local_15c = *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc);
          if (bVar1 == 0) {
            iVar29 = (int)param_1[7];
            goto LAB_149593d03;
          }
          *(byte *)((longlong)param_1 + 0x1f) = cVar23 - 2U;
          iVar29 = *(int *)((longlong)param_1 + (ulonglong)(byte)(cVar23 - 2U) * 4 + 0xcc);
        }
        local_110 = CONCAT44(local_110._4_4_,iVar29);
        local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
        local_f8 = uVar26;
        FUN_149584f48(local_158,100,uVar26,local_138 & 0xffffffff);
        local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
        local_ec = FUN_149584f48(plVar17,0xe,local_6c,0);
        iVar29 = local_15c;
        local_1a8._0_4_ = local_15c;
        FUN_149584f48(plVar17,0x5b,local_120,uVar24 & 0xffffffff);
        local_1a8._0_4_ = 0;
        uVar6 = (int)local_110;
        FUN_149584f48(plVar17,0x78,uVar26,local_110 & 0xffffffff);
        iVar4 = local_ec;
        local_1a8._0_4_ = uVar6;
        FUN_149584f48(plVar17,0x79,uVar26,iVar29);
        local_1a8 = (uint *)((ulonglong)local_1a8._4_4_ << 0x20);
        FUN_149584f48(plVar17,0xb);
        if (*(char *)(*plVar17 + 0x61) == '\0') {
          iVar29 = (int)plVar17[0x12] + -1;
          if (-1 < iVar4) {
            iVar29 = iVar4;
          }
          puVar14 = (undefined1 *)((longlong)iVar29 * 0x18 + plVar17[0x11]);
        }
        else {
          puVar14 = &DAT_14cc1ee40;
        }
        *(int *)(puVar14 + 8) = (int)plVar17[0x12];
        if (local_15c != 0) {
          bVar1 = *(byte *)((longlong)param_1 + 0x1f);
          if ((ulonglong)bVar1 < 8) {
            *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
            *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc) = local_15c;
          }
        }
        if ((int)local_110 != 0) {
          bVar1 = *(byte *)((longlong)param_1 + 0x1f);
          if ((ulonglong)bVar1 < 8) {
            *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
            *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc) = (int)local_110;
          }
        }
        local_15c = 0;
        uVar24 = local_108;
      }
LAB_1495933da:
      param_2 = local_148;
      piVar28 = local_150;
      if ((param_4 == (longlong *)0x0) && (0 < (int)(uint)local_138)) {
        sVar16 = *(short *)((longlong)local_130 + 0x44);
        uVar24 = (ulonglong)(uint)(int)sVar16;
        if ((-1 < sVar16) && ((sVar16 != 0 && ((*(uint *)(local_130 + 8) & 0x60) != 0)))) {
          uVar26 = uVar24 + 1;
          pbVar15 = (byte *)(local_130[1] + uVar24 * 0x20 + -4);
          do {
            uVar24 = (ulonglong)((int)uVar24 + -1 + (uint)((*pbVar15 & 0x60) == 0));
            uVar26 = uVar26 - 1;
            pbVar15 = pbVar15 + -0x20;
          } while (1 < uVar26);
        }
      }
      sVar16 = *(short *)((longlong)local_130 + 0x46);
      iVar29 = 0;
      if (0 < sVar16) {
        lVar8 = 0;
        iVar29 = 0;
        do {
          iVar29 = (iVar29 + 1) - (uint)((*(byte *)(local_130[1] + 0x1c + lVar8) & 0x62) == 0);
          lVar8 = lVar8 + 0x20;
        } while ((ulonglong)(uint)(int)sVar16 << 5 != lVar8);
      }
      if ((param_4 == (longlong *)0x0) && ((uint)local_138 != 0)) {
        iVar29 = sVar16 - iVar29;
        if ((uint)local_138 != iVar29) {
          local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,(uint)local_138);
          local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,iVar29);
          puVar7 = (undefined8 *)0x0;
          FUN_14955a364(param_1,"table %S has %d columns but %d values were supplied",local_148,0);
          goto LAB_149592d3f;
        }
      }
      else if ((param_4 != (longlong *)0x0) && ((uint)local_138 != (int)param_4[1])) {
        FUN_14955a364(param_1,"%d values for %d columns",local_138 & 0xffffffff);
        goto LAB_149592d3d;
      }
      local_110 = 0;
      local_108 = uVar24;
      if ((((*(byte *)(piVar25 + 0xd) & 1) != 0) && (*(char *)((longlong)param_1 + 0x1e) == '\0'))
         && (param_1[0x15] == 0)) {
        uVar5 = (int)param_1[7] + 1;
        local_110 = (ulonglong)uVar5;
        *(uint *)(param_1 + 7) = uVar5;
        local_1a8 = (uint *)((ulonglong)local_1a8._4_4_ << 0x20);
        FUN_149584f48(local_158,0x45);
      }
      puVar19 = local_130;
      if (local_c0 == 0) {
        local_190 = &local_50;
        local_198 = &local_4c;
        local_1a0 = (undefined8 *)0x0;
        local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,0xffffffff);
        uVar24 = 0;
        uVar5 = FUN_1495c3387(param_1,local_130);
        puVar7 = (undefined8 *)FUN_14955d750(piVar25,(longlong)(int)uVar5 * 4 + 8);
        param_2 = local_148;
        param_3 = local_100;
        if (puVar7 == (undefined8 *)0x0) goto LAB_149592f1a;
        iVar29 = (int)param_1[7];
        if (0 < (int)uVar5) {
          plVar17 = puVar19 + 2;
          uVar24 = 0;
          do {
            lVar8 = *plVar17;
            *(int *)(param_1 + 7) = iVar29 + 1;
            *(int *)((longlong)puVar7 + uVar24 * 4) = iVar29 + 1;
            iVar29 = (uint)*(ushort *)(lVar8 + 0x60) + (int)param_1[7];
            *(int *)(param_1 + 7) = iVar29;
            plVar17 = (longlong *)(lVar8 + 0x28);
            uVar24 = uVar24 + 1;
          } while (uVar5 != uVar24);
          uVar24 = (ulonglong)uVar5;
        }
        *(int *)(param_1 + 7) = iVar29 + 1;
        *(int *)((longlong)puVar7 + uVar24 * 4) = iVar29 + 1;
      }
      else {
        puVar7 = (undefined8 *)0x0;
      }
      piVar28 = local_150;
      if (param_6 == (longlong *)0x0) {
LAB_14959368c:
        plVar17 = local_158;
        if ((char)local_15c == '\0') {
          local_1a8 = (uint *)((ulonglong)local_1a8._4_4_ << 0x20);
          local_d4 = FUN_149584f48(local_158,0x25);
          iVar29 = (int)plVar17[0x12];
        }
        else {
          iVar29 = 0;
          local_d4 = 0;
          if (param_3 != 0) {
            local_1a8 = (uint *)((ulonglong)local_1a8._4_4_ << 0x20);
            iVar29 = FUN_149584f48(local_158,0xe);
            local_d4 = iVar29;
            if (-1 < (int)local_108) {
              local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
              FUN_149584f48(plVar17,0x4d);
            }
          }
        }
        puVar19 = local_130;
        iVar4 = local_15c;
        local_ec = iVar29;
        if (0 < *(short *)((longlong)local_130 + 0x46)) {
          local_118 = local_150 + 2;
          uVar24 = 0;
          iVar29 = 0;
          uVar5 = local_13c;
          do {
            if (uVar24 == (uint)(int)*(short *)((longlong)puVar19 + 0x44)) {
LAB_14959395a:
              local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
              uVar10 = 0x49;
              uVar26 = (ulonglong)uVar5;
LAB_149593975:
              FUN_149584f48(local_158,uVar10,uVar26);
              iVar4 = local_15c;
            }
            else {
              lVar8 = puVar19[1];
              lVar13 = uVar24 * 0x20;
              uVar3 = *(ushort *)(lVar8 + 0x1c + lVar13);
              if ((uVar3 & 0x62) == 0) {
                if (param_4 == (longlong *)0x0) {
                  if ((uint)local_138 == 0) {
                    FUN_1495a287d(local_e0,*(undefined8 *)(lVar8 + 8 + lVar13),uVar5);
                    iVar4 = local_15c;
                  }
                  else {
                    uVar26 = (ulonglong)(uint)((int)uVar24 - iVar29);
LAB_149593903:
                    if ((char)iVar4 == '\0') {
                      local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,uVar5);
                      uVar10 = 0x59;
                      uVar26 = local_f8;
                      goto LAB_149593975;
                    }
                    if (param_3 == 0) {
                      FUN_14959afe0(local_e0,*(undefined8 *)(local_118 + (longlong)(int)uVar26 * 8),
                                    uVar5);
                      iVar4 = local_15c;
                    }
                    else if ((uint)local_120 != local_13c) {
                      local_1a8 = (uint *)((ulonglong)local_1a8._4_4_ << 0x20);
                      FUN_149584f48(local_158,0x4e,(int)uVar26 + (uint)local_120);
                      iVar4 = local_15c;
                    }
                  }
                }
                else {
LAB_1495938b7:
                  if (0 < (longlong)(int)param_4[1]) {
                    puVar20 = (uint *)(*param_4 + 8);
                    uVar26 = 0;
                    do {
                      if (uVar24 == *puVar20) goto LAB_149593903;
                      uVar26 = uVar26 + 1;
                      puVar20 = puVar20 + 4;
                    } while ((longlong)(int)param_4[1] != uVar26);
                  }
                  FUN_1495a287d(local_e0,*(undefined8 *)(lVar8 + 8 + lVar13),uVar5);
                  iVar4 = local_15c;
                }
              }
              else {
                iVar29 = iVar29 + 1;
                if ((uVar3 & 0x20) == 0) {
                  if ((uVar3 & 0x40) == 0) {
                    if (param_4 != (longlong *)0x0) goto LAB_1495938b7;
                    FUN_1495a287d(local_e0,*(undefined8 *)(lVar8 + lVar13 + 8),uVar5);
                    iVar4 = local_15c;
                  }
                  else if ((local_74 & 1) != 0) goto LAB_14959395a;
                }
                else {
                  uVar5 = uVar5 - 1;
                }
              }
            }
            uVar24 = uVar24 + 1;
            uVar5 = uVar5 + 1;
          } while ((longlong)uVar24 < (longlong)*(short *)((longlong)puVar19 + 0x46));
        }
        param_1 = local_e0;
        piVar28 = local_150;
        uVar5 = *(uint *)((longlong)local_e0 + 0x44);
        local_120 = (ulonglong)uVar5;
        local_138 = CONCAT44(local_138._4_4_,uVar5 - 1);
        *(uint *)((longlong)local_e0 + 0x44) = uVar5 - 1;
        if ((local_74 & 1) != 0) {
          uVar5 = FUN_14959d77c(local_e0,*(short *)((longlong)puVar19 + 0x46) + 1);
          plVar17 = local_158;
          piVar18 = (int *)(ulonglong)uVar5;
          local_118 = piVar18;
          if ((int)local_108 < 0) {
            uVar24 = (ulonglong)local_1a8._4_4_;
            uVar10 = 0x45;
            uVar26 = 0xffffffff;
            uVar21 = uVar5;
          }
          else {
            if ((char)local_15c == '\0') {
              local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,uVar5);
              FUN_149584f48(local_158,0x59,local_f8);
            }
            else {
              FUN_14959afe0(param_1,*(undefined8 *)(piVar28 + (local_108 & 0xffffffff) * 8 + 2),
                            piVar18);
              plVar17 = local_158;
            }
            local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
            iVar29 = FUN_149584f48(plVar17,0x33,piVar18,0);
            local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
            FUN_149584f48(plVar17,0x45,0xffffffff,piVar18);
            if (*(char *)(*plVar17 + 0x61) == '\0') {
              iVar4 = (int)plVar17[0x12] + -1;
              if (-1 < iVar29) {
                iVar4 = iVar29;
              }
              puVar14 = (undefined1 *)((longlong)iVar4 * 0x18 + plVar17[0x11]);
            }
            else {
              puVar14 = &DAT_14cc1ee40;
            }
            *(int *)(puVar14 + 8) = (int)plVar17[0x12];
            uVar24 = (ulonglong)local_1a8 >> 0x20;
            uVar10 = 0xf;
            uVar5 = (uint)local_118;
            uVar26 = (ulonglong)local_118 & 0xffffffff;
            uVar21 = 0;
            local_158 = plVar17;
          }
          local_1a8 = (uint *)(uVar24 << 0x20);
          FUN_149584f48(local_158,uVar10,uVar26,uVar21);
          puVar19 = local_130;
          iVar29 = uVar5 + 1;
          local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,*(short *)(local_130 + 9) + -1);
          FUN_149584f48(local_158,0x4d,local_13c,iVar29);
          if ((*(byte *)(puVar19 + 8) & 0x60) != 0) {
            FUN_1495c6f6c(param_1,iVar29,puVar19);
          }
          if (local_c0 == 0) {
            FUN_1495a3a37(local_158,puVar19,iVar29);
          }
          iVar29 = (int)local_118;
          local_188 = (uint)local_138;
          local_190 = (undefined4 *)CONCAT44(local_190._4_4_,param_5);
          local_198 = (undefined4 *)
                      CONCAT44(local_198._4_4_,~(int)*(short *)((longlong)puVar19 + 0x46) + iVar29);
          local_1a0 = puVar19;
          local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,1);
          FUN_1495c3e6e(param_1,local_c8,0x7d,0);
          sVar16 = *(short *)((longlong)puVar19 + 0x46);
          uVar5 = (uint)local_120;
          iVar4 = local_15c;
          if (sVar16 == 0) {
            if (iVar29 != 0) {
              bVar1 = *(byte *)((longlong)param_1 + 0x1f);
              if ((ulonglong)bVar1 < 8) {
                *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
                puVar11 = (undefined4 *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc);
                goto LAB_149594181;
              }
            }
          }
          else if ((int)param_1[5] <= (int)sVar16) {
            *(int *)(param_1 + 5) = sVar16 + 1;
            puVar11 = (undefined4 *)((longlong)param_1 + 0x2c);
LAB_149594181:
            *puVar11 = (int)local_118;
          }
        }
        piVar28 = local_150;
        if (local_c0 == 0) {
          if (*(int *)((longlong)puVar19 + 0x54) != 0) {
            local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
            FUN_149584f48(local_158,0x48,0,local_e4);
            iVar4 = local_15c;
          }
          uVar24 = local_d0;
          if ((int)local_108 < 0) {
            if ((local_124 & 0x80) == 0 && *(int *)((longlong)puVar19 + 0x54) == 0) {
LAB_149593ec7:
              local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,local_e8);
              FUN_149584f48(local_158,0x78,local_4c,local_d0 & 0xffffffff);
              local_124 = 1;
            }
            else {
              local_1a8 = (uint *)((ulonglong)local_1a8._4_4_ << 0x20);
              local_124 = 0;
              FUN_149584f48(local_158,0x48,0,local_d0 & 0xffffffff);
            }
          }
          else {
            if ((char)iVar4 == '\0') {
              local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,(int)local_d0);
              FUN_149584f48(local_158,0x59,local_f8);
            }
            else if (param_3 == 0) {
              if ((**(char **)(piVar28 + (local_108 & 0xffffffff) * 8 + 2) == 'w') &&
                 (*(int *)((longlong)puVar19 + 0x54) == 0)) goto LAB_149593ec7;
              FUN_14959afe0(param_1,*(char **)(piVar28 + (local_108 & 0xffffffff) * 8 + 2),
                            local_d0 & 0xffffffff);
            }
            plVar17 = local_158;
            if (*(int *)((longlong)puVar19 + 0x54) == 0) {
              local_1a8 = (uint *)((ulonglong)local_1a8._4_4_ << 0x20);
              iVar29 = FUN_149584f48(local_158,0x33,uVar24 & 0xffffffff,0);
              local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,local_e8);
              FUN_149584f48(plVar17,0x78,local_4c,uVar24 & 0xffffffff);
              if (*(char *)(*plVar17 + 0x61) == '\0') {
                iVar4 = (int)plVar17[0x12] + -1;
                if (-1 < iVar29) {
                  iVar4 = iVar29;
                }
                puVar14 = (undefined1 *)((longlong)iVar4 * 0x18 + local_158[0x11]);
              }
              else {
                puVar14 = &DAT_14cc1ee40;
              }
              *(int *)(puVar14 + 8) = (int)plVar17[0x12];
              plVar17 = local_158;
              piVar28 = local_150;
            }
            else {
              local_1a8 = (uint *)((ulonglong)local_1a8._4_4_ << 0x20);
              FUN_149584f48(local_158,0x32,uVar24 & 0xffffffff,(int)local_158[0x12] + 2);
            }
            local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
            local_124 = 0;
            FUN_149584f48(plVar17,0xf,uVar24 & 0xffffffff,0);
            puVar19 = local_130;
          }
          if (0 < local_e8) {
            local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
            FUN_149584f48(param_1[2],0x97,local_e8,uVar24 & 0xffffffff);
          }
          if ((*(byte *)(puVar19 + 8) & 0x60) != 0) {
            FUN_1495c6f6c(param_1,local_13c,puVar19);
          }
          uVar5 = local_e4;
          if (*(int *)((longlong)puVar19 + 0x54) == 0) {
            local_168 = param_6;
            local_170 = 0;
            local_178 = &local_b0;
            local_180 = (uint)local_138;
            local_190 = (undefined4 *)CONCAT71(local_190._1_7_,-1 < (int)local_108);
            local_188 = CONCAT31(local_188._1_3_,(char)param_5);
            local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
            local_1a0._0_4_ = local_e4;
            local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,local_50);
            FUN_1495c7191(param_1,puVar19,puVar7,local_4c);
            local_1a0 = (undefined8 *)((ulonglong)local_1a0._4_4_ << 0x20);
            local_1a8 = (uint *)0x0;
            FUN_1495c3f0e(param_1,puVar19,0,uVar5);
            local_188 = 1;
            if ((int)local_b0 != 0) {
              local_188 = (uint)(local_158[0x23] == 0);
            }
            local_190 = (undefined4 *)CONCAT44(local_190._4_4_,local_124);
            local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,local_e4);
            local_198 = (undefined4 *)((ulonglong)local_198 & 0xffffffff00000000);
            local_1a0 = puVar7;
            FUN_1495c8d72(param_1,local_130,local_4c,local_50);
            param_3 = local_100;
          }
          else {
            for (puVar30 = (undefined8 *)puVar19[0xc]; puVar30 != (undefined8 *)0x0;
                puVar30 = (undefined8 *)puVar30[5]) {
              if ((int *)*puVar30 == piVar25) goto LAB_14959438d;
            }
            puVar30 = (undefined8 *)0x0;
LAB_14959438d:
            FUN_1495c35a6(param_1,puVar19);
            plVar17 = local_158;
            local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,local_e4);
            uVar6 = FUN_149584f48(local_158,10,1,*(short *)((longlong)puVar19 + 0x46) + 2);
            FUN_14955a5b6(plVar17,uVar6,puVar30,0xfffffff4);
            lVar8 = (longlong)(int)plVar17[0x12];
            if (0 < lVar8) {
              iVar29 = 2;
              if (param_5 != 0xb) {
                iVar29 = param_5;
              }
              *(short *)(local_158[0x11] + -0x16 + lVar8 * 0x18) = (short)iVar29;
            }
            plVar17 = (longlong *)param_1[0x14];
            if ((longlong *)param_1[0x14] == (longlong *)0x0) {
              plVar17 = param_1;
            }
            *(undefined1 *)((longlong)plVar17 + 0x21) = 1;
            piVar28 = local_150;
          }
          uVar5 = (uint)local_120;
          iVar4 = local_15c;
        }
        if ((int)local_110 != 0) {
          local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
          FUN_149584f48(local_158,0x52,local_110,1);
          uVar5 = (uint)local_120;
          iVar4 = local_15c;
        }
        param_2 = local_148;
        if (local_c8 != 0) {
          local_188 = (uint)local_138;
          local_190 = (undefined4 *)CONCAT44(local_190._4_4_,param_5);
          local_198 = (undefined4 *)
                      CONCAT44(local_198._4_4_,
                               (int)local_d0 + ~(int)*(short *)((longlong)local_130 + 0x46));
          local_1a0 = local_130;
          local_1a8 = (uint *)CONCAT44(local_1a8._4_4_,2);
          FUN_1495c3e6e(param_1,local_c8,0x7d,0);
          uVar5 = (uint)local_120;
          iVar4 = local_15c;
        }
        cVar23 = (char)iVar4;
        lVar8 = local_158[3];
        if (*(int *)(lVar8 + 0x44) + *(int *)(lVar8 + 0x48) < 0) {
          FUN_1495a1bff();
          cVar23 = (char)local_15c;
        }
        else {
          *(int *)(*(longlong *)(lVar8 + 0x50) + (longlong)(int)-uVar5 * 4) = (int)local_158[0x12];
        }
        if (cVar23 == '\0') {
          local_1a8 = (uint *)((ulonglong)local_1a8._4_4_ << 0x20);
          FUN_149584f48(local_158,5,local_f8,local_ec);
          if (*(char *)(*local_158 + 0x61) == '\0') {
            iVar29 = (int)local_158[0x12] + -1;
            if (-1 < local_d4) {
              iVar29 = local_d4;
            }
            puVar14 = (undefined1 *)((longlong)iVar29 * 0x18 + local_158[0x11]);
          }
          else {
            puVar14 = &DAT_14cc1ee40;
          }
          *(int *)(puVar14 + 8) = (int)local_158[0x12];
          local_1a8 = (uint *)((ulonglong)local_1a8 & 0xffffffff00000000);
          FUN_149584f48(local_158,0x74,local_f8,0);
          uVar24 = local_110;
        }
        else {
          uVar24 = local_110;
          if (param_3 != 0) {
            local_1a8 = (uint *)((ulonglong)local_1a8._4_4_ << 0x20);
            FUN_149584f48(local_158,0xb,0,local_ec);
            if (*(char *)(*local_158 + 0x61) == '\0') {
              iVar29 = (int)local_158[0x12] + -1;
              if (-1 < local_d4) {
                iVar29 = local_d4;
              }
              puVar14 = (undefined1 *)((longlong)iVar29 * 0x18 + local_158[0x11]);
            }
            else {
              puVar14 = &DAT_14cc1ee40;
            }
            *(int *)(puVar14 + 8) = (int)local_158[0x12];
            uVar24 = local_110;
          }
        }
        goto LAB_1495934e6;
      }
      if (*(int *)((longlong)local_130 + 0x54) == 0) {
        if (local_130[3] == 0) {
          iVar29 = FUN_1495a9b42(param_1,*param_6);
          if (iVar29 == 0) {
            *(undefined4 *)(param_2 + 0x4c) = local_4c;
            param_6[5] = param_2;
            *(uint *)(param_6 + 6) = local_13c;
            *(undefined4 *)((longlong)param_6 + 0x34) = local_4c;
            *(undefined4 *)(param_6 + 7) = local_50;
            if (*param_6 != 0) {
              FUN_1495ca18c(param_1,param_2);
            }
            goto LAB_14959368c;
          }
        }
        else {
          FUN_14955a364(param_1,"cannot UPSERT a view");
        }
      }
      else {
        FUN_14955a364(param_1,"UPSERT not implemented for virtual table \"%s\"",*local_130);
      }
    }
  }
  else {
LAB_149592f1a:
    puVar7 = (undefined8 *)0x0;
    piVar28 = local_150;
  }
LAB_149592d3f:
  FUN_149582b1a(piVar25,param_2);
  if (piVar28 != (int *)0x0) {
    FUN_149582d29(piVar25,piVar28);
  }
LAB_149592d69:
  FUN_1495861f8(piVar25,param_6);
  if (param_3 != 0) {
    FUN_149582a1c(piVar25,param_3,1);
  }
  FUN_149582cb1(piVar25,param_4);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_14955d65a(piVar25,puVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1495930cf:
  uVar9 = uVar9 + 1;
  if (uVar9 == uVar5) goto LAB_149593184;
  goto LAB_14959309e;
}



// FUNCTION 149594678 FUN_149594678 body=183 status=ok
// SIG undefined FUN_149594678(void)

longlong *
FUN_149594678(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (longlong *)FUN_145e3bd67(0x40);
  }
  else {
    plVar1 = (longlong *)FUN_14955d750(param_1,0x40);
  }
  if (plVar1 == (longlong *)0x0) {
    if (param_2 != 0) {
      FUN_149582d29(param_1,param_2);
    }
    if (param_3 != 0) {
      FUN_14958288e(param_1,param_3);
    }
    if (param_4 != 0) {
      FUN_149582d29(param_1,param_4);
    }
    if (param_5 != 0) {
      FUN_14958288e(param_1,param_5);
    }
  }
  else {
    *plVar1 = param_2;
    plVar1[1] = param_3;
    plVar1[2] = param_4;
    plVar1[3] = param_5;
    plVar1[4] = 0;
  }
  return plVar1;
}



// FUNCTION 14959472f FUN_14959472f body=252 status=ok
// SIG undefined FUN_14959472f(void)

longlong * FUN_14959472f(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  if (param_2 == (longlong *)0x0) {
    if (lVar2 == 0) {
      param_2 = (longlong *)FUN_145e3bd67(0x10);
    }
    else {
      param_2 = (longlong *)FUN_14955d750(lVar2,0x10);
    }
    if (param_2 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    *param_2 = 0;
    param_2[1] = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = *param_2;
  }
  iVar1 = (int)param_2[1];
  uVar5 = (ulonglong)iVar1;
  lVar3 = lVar6;
  if ((uVar5 & uVar5 - 1) == 0) {
    lVar3 = 0x10;
    if (iVar1 != 0) {
      lVar3 = uVar5 << 5;
    }
    lVar3 = FUN_14955d6fd(lVar2,lVar6,lVar3);
    if (lVar3 == 0) {
      *param_2 = lVar6;
      goto LAB_1495947b4;
    }
  }
  lVar6 = uVar5 * 0x10;
  *(undefined8 *)(lVar3 + lVar6) = 0;
  ((undefined8 *)(lVar3 + lVar6))[1] = 0;
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  *param_2 = lVar3;
  if (-1 < iVar1) {
    uVar4 = FUN_14958faeb(lVar2,param_3);
    *(undefined8 *)(*param_2 + lVar6) = uVar4;
    if (*(byte *)((longlong)param_1 + 0x114) < 2) {
      return param_2;
    }
    if (*(longlong *)(*param_2 + lVar6) != 0) {
      FUN_14958fa77(param_1,*(longlong *)(*param_2 + lVar6),param_3);
      return param_2;
    }
    return param_2;
  }
LAB_1495947b4:
  FUN_149582cb1(lVar2,param_2);
  return (longlong *)0x0;
}



// FUNCTION 14959482b FUN_14959482b body=687 status=ok
// SIG undefined FUN_14959482b(void)

void FUN_14959482b(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char *_Src;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  ulonglong uVar8;
  int *piVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) goto LAB_14959494f;
  lVar1 = *param_1;
  _Src = *(char **)(param_2 + 8);
  if ((longlong)_Src[1] == 0) {
    uVar2 = (int)param_1[0x22] + 1;
    local_50 = (ulonglong)uVar2;
    *(short *)(param_1 + 0x22) = (short)uVar2;
  }
  else {
    if (*_Src == '?') {
      if (param_3 == 2) {
        local_50 = (longlong)_Src[1] - 0x30;
        bVar10 = false;
      }
      else {
        iVar6 = FUN_14956c622(_Src + 1,&local_50,param_3 + -1,
                              CONCAT71((int7)((ulonglong)_Src >> 8),1));
        bVar10 = iVar6 != 0;
      }
      if (((bVar10) || ((longlong)local_50 < 1)) ||
         ((longlong)*(int *)(lVar1 + 0xa0) < (longlong)local_50)) {
        FUN_14955a364(param_1,"variable number must be between ?1 and ?%d");
        goto LAB_14959494f;
      }
      sVar7 = (short)local_50;
      uVar8 = local_50;
      if ((short)param_1[0x22] < sVar7) {
        *(short *)(param_1 + 0x22) = sVar7;
        piVar9 = (int *)param_1[0x25];
      }
      else {
        piVar9 = (int *)param_1[0x25];
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          iVar6 = 2;
          do {
            piVar3 = piVar9 + iVar6;
            if (*piVar3 == (int)sVar7) {
              if (piVar3 != (int *)&DAT_fffffffffffffff8) goto LAB_14959493a;
              break;
            }
            iVar6 = iVar6 + piVar3[1];
          } while (iVar6 < piVar9[1]);
        }
      }
    }
    else {
      piVar9 = (int *)param_1[0x25];
      uVar2 = FUN_1495847ef(piVar9,_Src,param_3);
      local_50 = (ulonglong)uVar2;
      if ((short)uVar2 != 0) goto LAB_14959493a;
      uVar2 = (int)param_1[0x22] + 1;
      *(short *)(param_1 + 0x22) = (short)uVar2;
      uVar8 = (ulonglong)uVar2;
    }
    iVar6 = param_3 + 3;
    if (-1 < param_3) {
      iVar6 = param_3;
    }
    iVar6 = (iVar6 >> 2) + 3;
    if (piVar9 == (int *)0x0) {
      local_58 = 10;
LAB_149594a83:
      local_58 = iVar6 + local_58;
      piVar3 = (int *)FUN_14955d6fd(lVar1,piVar9,local_58 * 4);
      if (piVar3 != (int *)0x0) {
        if (piVar9 == (int *)0x0) {
          piVar3[1] = 2;
          iVar4 = 2;
        }
        else {
          iVar4 = piVar3[1];
        }
        *piVar3 = (int)local_58;
        iVar5 = iVar4 + iVar6;
        piVar9 = piVar3;
        goto LAB_1495948ff;
      }
    }
    else {
      iVar4 = piVar9[1];
      iVar5 = iVar4 + iVar6;
      if (*piVar9 < iVar5) {
        local_58 = (longlong)*piVar9 * 2;
        goto LAB_149594a83;
      }
LAB_1495948ff:
      piVar3 = piVar9 + iVar4;
      *piVar3 = (int)(short)uVar8;
      piVar3[1] = iVar6;
      piVar9[1] = iVar5;
      memcpy(piVar3 + 2,_Src,(longlong)param_3);
      *(undefined1 *)((longlong)piVar9 + (longlong)param_3 + 8U + (longlong)iVar4 * 4) = 0;
    }
    param_1[0x25] = (longlong)piVar9;
    local_50 = uVar8;
  }
LAB_14959493a:
  *(short *)(param_2 + 0x30) = (short)local_50;
  if (*(int *)(lVar1 + 0xa0) < (int)(short)local_50) {
    FUN_14955a364(param_1,"too many SQL variables");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
LAB_14959494f:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149594ae0 FUN_149594ae0 body=48 status=ok
// SIG undefined FUN_149594ae0(void)

void FUN_149594ae0(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    if (param_3 != 0) {
      *(longlong *)(param_2 + 0x10) = param_3;
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | *(uint *)(param_3 + 4) & 0x200104;
    }
    FUN_1495ca52d(param_2);
    return;
  }
  if (param_3 == 0) {
    return;
  }
  FUN_14958288e(param_1,param_3);
  return;
}



// FUNCTION 149594b10 FUN_149594b10 body=156 status=ok
// SIG undefined FUN_149594b10(void)

longlong FUN_149594b10(longlong *param_1,int *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = FUN_14958f7cb(lVar1,0xa9,param_3,1);
  if (lVar2 == 0) {
    if (param_2 != (int *)0x0) {
      FUN_149582d29(lVar1,param_2);
    }
  }
  else {
    if ((param_2 != (int *)0x0) && (*(int *)(*param_1 + 0x94) < *param_2)) {
      FUN_14955a364(param_1,"too many arguments on function %T",param_3);
    }
    *(int **)(lVar2 + 0x20) = param_2;
    *(byte *)(lVar2 + 4) = *(byte *)(lVar2 + 4) | 4;
    FUN_149594d72(param_1,lVar2);
    if (param_4 == 1) {
      *(byte *)(lVar2 + 4) = *(byte *)(lVar2 + 4) | 2;
    }
  }
  return lVar2;
}



// FUNCTION 149594bac FUN_149594bac body=68 status=ok
// SIG undefined FUN_149594bac(void)

void FUN_149594bac(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    *(longlong *)(param_2 + 0x40) = param_3;
    *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) | 1;
    *(longlong *)(param_3 + 0x70) = param_2;
    if (((*(byte *)(param_2 + 4) & 2) != 0) && (*(char *)(param_3 + 0x20) != -0x5d)) {
      FUN_14955a364(param_1,"DISTINCT is not supported for window functions");
    }
    return;
  }
  FUN_149582958(*param_1,param_3);
  return;
}



// FUNCTION 149594bf0 FUN_149594bf0 body=203 status=ok
// SIG undefined FUN_149594bf0(void)

longlong FUN_149594bf0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = param_3;
  if ((param_2 != 0) && (lVar2 = param_2, param_3 != 0)) {
    uVar1 = *param_1;
    if ((((*(uint *)(param_2 + 4) & 0x20000001) != 0x20000000) &&
        ((*(uint *)(param_3 + 4) & 0x20000001) != 0x20000000)) ||
       (1 < *(byte *)((longlong)param_1 + 0x114))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    FUN_14958288e(uVar1,param_2);
    FUN_14958288e(uVar1,param_3);
    local_38 = &DAT_149dfd150;
    local_30 = 1;
    lVar2 = FUN_14958f7cb(uVar1,0x98,&local_38,0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 149594cd8 FUN_149594cd8 body=153 status=ok
// SIG undefined FUN_149594cd8(void)

void FUN_149594cd8(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x114);
    if (1 < bVar1) {
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      local_48 = &LAB_1495a984b;
      local_40 = FUN_1495a986f;
      *(undefined1 *)((longlong)param_1 + 0x114) = 3;
      local_50 = param_1;
      FUN_14959fa98(&local_50,param_2);
      *(byte *)((longlong)param_1 + 0x114) = bVar1;
    }
    FUN_14958288e(*param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149594d72 FUN_149594d72 body=66 status=ok
// SIG undefined FUN_149594d72(void)

void FUN_149594d72(longlong *param_1,longlong param_2)

{
  if ((int)param_1[6] == 0) {
    FUN_1495ca52d(param_2);
    if (*(int *)(*param_1 + 0x88) < *(int *)(param_2 + 0x28)) {
      FUN_14955a364(param_1,"Expression tree is too large (maximum depth %d)");
    }
  }
  return;
}



// FUNCTION 149594db4 FUN_149594db4 body=44 status=ok
// SIG undefined FUN_149594db4(void)

void FUN_149594db4(undefined8 *param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    *(longlong *)(param_2 + 0x20) = param_3;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x200800;
    FUN_149594d72();
    return;
  }
  if (param_3 == 0) {
    return;
  }
  FUN_149582a1c(*param_1,param_3,1);
  return;
}



// FUNCTION 149594de0 FUN_149594de0 body=111 status=ok
// SIG undefined FUN_149594de0(void)

undefined8
FUN_149594de0(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14958f62a(param_1,param_2,0);
  if ((param_5 != -1 || param_4 != 0) && (*(char *)(*param_1 + 0xb5) == '\0')) {
    FUN_14955a364(param_1,"syntax error after column name \"%.*s\"",*(undefined4 *)(param_3 + 1),
                  *param_3);
  }
  FUN_14958f711(param_1,uVar1,param_3,1);
  return uVar1;
}



// FUNCTION 149594e4f FUN_149594e4f body=572 status=ok
// SIG undefined FUN_149594e4f(void)

void FUN_149594e4f(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0x61) == '\0') && (iVar3 = FUN_14958537a(), iVar3 == 0)) {
    puVar5 = (undefined8 *)
             FUN_149581e2b(lVar1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
    if (puVar5 == (undefined8 *)0x0) {
      if (param_3 == 0) {
        FUN_14955a364(param_1,"no such index: %S",param_2,0);
      }
      else {
        FUN_1495aabeb(param_1,*(undefined8 *)(param_2 + 0x10));
      }
      *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
    }
    else if ((*(byte *)((longlong)puVar5 + 100) & 3) == 0) {
      lVar7 = *(longlong *)(lVar1 + 0x20);
      if (puVar5[6] == 0) {
        puVar6 = (undefined8 *)(lVar7 + -32000000);
        pcVar8 = "sqlite_master";
        uVar9 = 0xfff0bdc0;
        uVar10 = 0xfffffffffff0bdc0;
      }
      else {
        uVar10 = 0xffffffff;
        do {
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
        } while (*(longlong *)(lVar7 + 0x18 + uVar10 * 0x20) != puVar5[6]);
        puVar6 = (undefined8 *)(lVar7 + uVar10 * 0x20);
        pcVar8 = "sqlite_master";
        if (uVar9 == 1) {
          pcVar8 = "sqlite_temp_master";
        }
      }
      puVar2 = (undefined8 *)puVar5[3];
      uVar11 = *puVar6;
      iVar3 = FUN_1495a2d6b(param_1,9,pcVar8,0,uVar11);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_1495a2d6b(param_1,(uVar9 != 0) * '\x02' + '\n',*puVar5,*puVar2,uVar11),
         iVar3 == 0)) {
        lVar7 = param_1[2];
        if (lVar7 == 0) {
          if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
            *(undefined1 *)((longlong)param_1 + 0x23) = 1;
          }
          lVar7 = FUN_14955a44a(param_1);
          if (lVar7 == 0) goto LAB_149594eef;
        }
        FUN_1495a3043(param_1,1,uVar9);
        uVar11 = *puVar5;
        FUN_1495a3e15(param_1,"DELETE FROM %Q.%s WHERE name=%Q AND type=\'index\'",
                      *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + uVar10 * 0x20),"sqlite_master",
                      uVar11);
        uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
        FUN_1495aaca8(param_1,uVar9,&DAT_14b8b30b0,*puVar5);
        uVar10 = CONCAT44(uVar4,**(int **)(*(longlong *)(*param_1 + 0x20) + 0x18 + uVar10 * 0x20) +
                                1);
        FUN_149584f48(param_1[2],0x5e,uVar9,1,uVar10);
        FUN_1495ab3c1(param_1,*(undefined4 *)(puVar5 + 0xb),uVar9);
        uVar11 = *puVar5;
        uVar4 = FUN_149584f48(lVar7,0x90,uVar9,0,uVar10 & 0xffffffff00000000);
        FUN_14955a5b6(lVar7,uVar4,uVar11,0);
      }
    }
    else {
      FUN_14955a364(param_1,
                    "index associated with UNIQUE or PRIMARY KEY constraint cannot be dropped",0);
    }
  }
LAB_149594eef:
  FUN_149582b1a(lVar1,param_2);
  return;
}



// FUNCTION 14959508b FUN_14959508b body=424 status=ok
// SIG undefined FUN_14959508b(void)

void FUN_14959508b(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar4 = (longlong *)FUN_14955a44a(param_1);
    if (plVar4 == (longlong *)0x0) goto LAB_1495950c4;
  }
  if ((int)param_1[6] == 0) {
    iVar5 = 0;
    uVar3 = 0;
    if ((param_2 == 0) ||
       (uVar3 = FUN_1495a2df6(param_1,param_2,param_2,local_f8), uVar3 != 1 && -1 < (int)uVar3)) {
      if (param_3 != 0) {
        local_d0 = 0;
        iVar5 = 0;
        local_c0 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_e8 = &local_b8;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_c8 = 0x10000;
        local_f0 = param_1;
        iVar1 = FUN_1495a4109(&local_f0,param_3);
        if (iVar1 == 0) {
          iVar5 = (int)param_1[7] + 1;
          *(int *)(param_1 + 7) = iVar5;
          FUN_14959afe0(param_1,param_3,iVar5);
        }
      }
      local_108 = 0;
      FUN_149584f48(plVar4,8,uVar3,iVar5);
      uVar2 = 1 << ((byte)uVar3 & 0x1f);
      *(uint *)((longlong)plVar4 + 0xcc) = *(uint *)((longlong)plVar4 + 0xcc) | uVar2;
      if ((uVar3 != 1) &&
         (*(char *)(*(longlong *)(*(longlong *)(*plVar4 + 0x20) + 8 + (ulonglong)uVar3 * 0x20) +
                   0x11) != '\0')) {
        *(uint *)(plVar4 + 0x1a) = *(uint *)(plVar4 + 0x1a) | uVar2;
      }
    }
  }
LAB_1495950c4:
  if (param_3 != 0) {
    FUN_14958288e(*param_1,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149595234 FUN_149595234 body=13258 status=ok
// SIG undefined FUN_149595234(void)

void FUN_149595234(longlong *param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
                  int param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong *plVar14;
  byte *pbVar15;
  ulonglong uVar16;
  undefined **ppuVar17;
  char *pcVar18;
  size_t sVar19;
  int *piVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  ulonglong *puVar26;
  undefined1 *puVar27;
  int iVar28;
  undefined *puVar29;
  undefined8 uVar30;
  char *pcVar31;
  char cVar32;
  undefined8 *puVar33;
  undefined4 *puVar34;
  int *piVar35;
  ulonglong *puVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined8 uVar39;
  longlong lVar40;
  longlong lVar41;
  short sVar42;
  int iVar43;
  longlong lVar44;
  longlong lVar45;
  bool bVar46;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  char *local_140;
  ulonglong *local_138;
  int *local_130;
  char *local_128;
  char *local_120;
  undefined *local_118;
  byte *local_110;
  ulonglong local_108;
  byte *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  uint local_e4;
  char *local_e0;
  int local_d4;
  int *local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  char *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  int local_84;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  byte *local_60;
  byte *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar1 = (longlong *)*param_1;
  plVar14 = (longlong *)param_1[2];
  if (plVar14 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)((longlong)plVar1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar14 = (longlong *)FUN_14955a44a(param_1);
    if (plVar14 == (longlong *)0x0) goto LAB_1495952c0;
  }
  *(byte *)(plVar14 + 0x19) = *(byte *)(plVar14 + 0x19) | 0x40;
  *(undefined4 *)(param_1 + 7) = 2;
  uVar9 = FUN_1495a2df6(param_1,param_2,param_3,&local_70);
  if ((int)uVar9 < 0) goto LAB_1495952c0;
  local_f8 = (undefined8 *)(ulonglong)uVar9;
  lVar41 = (longlong)local_f8 * 0x20;
  puVar33 = (undefined8 *)(plVar1[4] + lVar41);
  if (((uVar9 == 1) && (iVar10 = FUN_14955dea7(param_1), iVar10 != 0)) ||
     (pbVar15 = (byte *)FUN_14958faeb(plVar1,local_70), pbVar15 == (byte *)0x0)) goto LAB_1495952c0;
  local_100 = pbVar15;
  if (param_5 == 0) {
    local_110 = (byte *)FUN_14958faeb(plVar1,param_4);
  }
  else {
    local_110 = (byte *)FUN_14955a402(plVar1,&DAT_14bd480db,param_4);
  }
  if ((int)param_3[1] == 0) {
    pcVar31 = (char *)0x0;
  }
  else {
    pcVar31 = (char *)*puVar33;
  }
  local_148 = (ulonglong *)pcVar31;
  iVar10 = FUN_1495a2d6b(param_1,0x13,local_100,local_110);
  if (iVar10 != 0) goto LAB_149595579;
  local_68 = 0;
  local_60 = local_100;
  local_58 = local_110;
  local_50 = 0;
  *(undefined4 *)(plVar1 + 0x4d) = 0;
  iVar10 = FUN_14955d1e1(plVar1,pcVar31,0xe);
  if (iVar10 != 0xc) {
    if (iVar10 == 0) {
      FUN_1495852e4(plVar14,1);
      if (*(char *)(*plVar14 + 0x61) == '\0') {
        local_148 = (ulonglong *)0xffffffffffffffff;
        FUN_14955916b(plVar14[0x13],local_68,0xffffffff,1);
      }
      FUN_1495ca61c(plVar14,local_68);
      FUN_145e3b961(local_68);
    }
    else {
      if (local_68 != 0) {
        FUN_14955a364(param_1,&DAT_149dfbe46);
        FUN_145e3b961(local_68);
      }
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      *(int *)(param_1 + 3) = iVar10;
    }
    goto LAB_149595579;
  }
  uVar16 = FUN_1495853ff(local_100);
  if (uVar16 == 0) goto LAB_149595579;
  bVar4 = *(byte *)(uVar16 + 9);
  if ((bVar4 & 1) != 0) {
    local_108 = uVar16;
    iVar10 = FUN_14958537a(param_1);
    if (iVar10 != 0) goto LAB_149595579;
    bVar4 = *(byte *)(local_108 + 9);
    uVar16 = local_108;
  }
  if (((bVar4 & 2) == 0) && (((bVar4 & 4) == 0 || (local_110 == (byte *)0x0)))) {
    local_108 = uVar16;
    FUN_1495ca67e(plVar14);
    uVar16 = local_108;
  }
  bVar4 = (byte)uVar9;
  pbVar15 = local_100;
  switch(*(undefined1 *)(uVar16 + 8)) {
  case 0:
    uVar13 = *(undefined4 *)(uVar16 + 0x10);
    uVar12 = 1 << (bVar4 & 0x1f);
    *(uint *)((longlong)plVar14 + 0xcc) = *(uint *)((longlong)plVar14 + 0xcc) | uVar12;
    if ((uVar9 != 1) &&
       (*(char *)(*(longlong *)(*(longlong *)(*plVar14 + 0x20) + 8 + lVar41) + 0x11) != '\0')) {
      *(uint *)(plVar14 + 0x1a) = *(uint *)(plVar14 + 0x1a) | uVar12;
    }
    if ((local_110 == (byte *)0x0) || ((*(byte *)(uVar16 + 9) & 8) != 0)) {
      lVar41 = FUN_14955a4e8(plVar14,3,&DAT_14bd4837b);
      *(uint *)(lVar41 + 4) = uVar9;
      *(uint *)(lVar41 + 0x1c) = uVar9;
      *(undefined4 *)(lVar41 + 0x24) = uVar13;
      goto LAB_149597c78;
    }
    lVar41 = FUN_14955a4e8(plVar14,2,&DAT_14bd48373);
    *(uint *)(lVar41 + 4) = uVar9;
    *(uint *)(lVar41 + 0x1c) = uVar9;
    *(undefined4 *)(lVar41 + 0x20) = uVar13;
    local_78 = local_78 & 0xffffffff00000000;
    FUN_149581ec6(local_110,&local_78);
    *(uint *)(lVar41 + 0x24) = (uint)local_78;
LAB_14959848e:
    FUN_14955d65a(plVar1,local_100);
    pbVar15 = local_110;
    goto LAB_149595594;
  case 1:
    uVar30 = puVar33[1];
    if (local_110 != (byte *)0x0) {
      iVar10 = FUN_1495ca88d(local_110);
      *(char *)((longlong)plVar1 + 100) = (char)iVar10;
      iVar43 = FUN_14958411e(uVar30,iVar10);
      if ((iVar43 == 0) && (iVar10 - 1U < 2)) {
        lVar45 = plVar14[0x12];
        lVar44 = FUN_14955a4e8(plVar14,5,&DAT_14bd48110);
        *(uint *)(lVar44 + 4) = uVar9;
        *(uint *)(lVar44 + 0x1c) = uVar9;
        *(int *)(lVar44 + 0x38) = (int)lVar45 + 4;
        *(uint *)(lVar44 + 100) = uVar9;
        *(uint *)(lVar44 + 0x6c) = iVar10 - 1U;
        uVar12 = 1 << (bVar4 & 0x1f);
        *(uint *)((longlong)plVar14 + 0xcc) = *(uint *)((longlong)plVar14 + 0xcc) | uVar12;
        if ((uVar9 != 1) &&
           (*(char *)(*(longlong *)(*(longlong *)(*plVar14 + 0x20) + 8 + lVar41) + 0x11) != '\0')) {
          *(uint *)(plVar14 + 0x1a) = *(uint *)(plVar14 + 0x1a) | uVar12;
        }
      }
      goto LAB_14959848e;
    }
    uVar9 = FUN_14958418e(uVar30);
    uVar16 = (ulonglong)uVar9;
    goto LAB_149596c04;
  case 2:
    if (local_110 != (byte *)0x0) {
      uVar37 = *(ulonglong *)(uVar16 + 0x10) & 0xffffffffffffbfff;
      if (*(char *)((longlong)plVar1 + 0x5f) != '\0') {
        uVar37 = *(ulonglong *)(uVar16 + 0x10);
      }
      cVar6 = FUN_1495cab54(local_110,1,0);
      if (cVar6 == '\0') {
        plVar1[6] = plVar1[6] & ~uVar37;
        if (uVar37 == 0x80000) {
          plVar1[0x5a] = 0;
        }
      }
      else {
        plVar1[6] = plVar1[6] | uVar37;
      }
      local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
      FUN_149584f48(plVar14,0x9e,0,0);
LAB_149598486:
      FUN_1495ca984(plVar1);
      goto LAB_14959848e;
    }
    FUN_1495ca67e(plVar14);
    uVar16 = (ulonglong)((plVar1[6] & *(ulonglong *)(uVar16 + 0x10)) != 0);
    goto LAB_149596c04;
  default:
    if (local_110 != (byte *)0x0) {
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      FUN_149581ec6(local_110,&local_78);
      FUN_14955c65f(plVar1,local_78 & 0xffffffff);
    }
    uVar16 = (ulonglong)(int)plVar1[0x57];
    goto LAB_149596577;
  case 4:
    if (local_110 != (byte *)0x0) {
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      FUN_149581ec6(local_110,&local_78);
      *(uint *)(puVar33[3] + 0x74) = (uint)local_78;
LAB_1495980c3:
      FUN_1495817d7(puVar33[1],*(undefined4 *)(puVar33[3] + 0x74));
      goto LAB_14959848e;
    }
    uVar16 = (ulonglong)*(int *)(puVar33[3] + 0x74);
    goto LAB_149596c04;
  case 5:
    if (local_110 != (byte *)0x0) {
      local_78 = CONCAT44(local_78._4_4_,1);
      iVar43 = FUN_149581ec6(local_110,&local_78);
      iVar10 = (uint)local_78;
      if (iVar43 != 0) {
        FUN_149583e54(puVar33[1],local_78 & 0xffffffff);
      }
      cVar6 = FUN_1495cab54(local_110,1,iVar10 != 0);
      plVar1[6] = (ulonglong)(cVar6 != '\0') << 5 | plVar1[6] & 0xffffffffffffffdfU;
      goto LAB_149598486;
    }
    if ((*(byte *)(plVar1 + 6) & 0x20) == 0) {
LAB_149596379:
      uVar16 = 0;
    }
    else {
      iVar10 = FUN_149583e54(puVar33[1],0);
      uVar16 = (ulonglong)iVar10;
    }
    goto LAB_149596c04;
  case 6:
    if (local_110 != (byte *)0x0) {
      cVar6 = FUN_1495cab54(local_110,1,0);
      FUN_1495caea7(plVar1,cVar6 != '\0');
      goto LAB_14959848e;
    }
    goto LAB_149595594;
  case 7:
    *(undefined4 *)(param_1 + 7) = 2;
    plVar21 = (longlong *)plVar1[0x49];
    if (plVar21 != (longlong *)0x0) {
      iVar10 = 0;
      do {
        local_148 = *(ulonglong **)plVar21[2];
        FUN_1495caccc(plVar14,1,&DAT_14bd481b2,iVar10);
        plVar21 = (longlong *)*plVar21;
        iVar10 = iVar10 + 1;
      } while (plVar21 != (longlong *)0x0);
    }
    break;
  case 8:
    *(undefined4 *)(param_1 + 7) = 1;
    lVar41 = 0;
    do {
      lVar45 = *(longlong *)((longlong)&PTR_s_COMPILER_clang_19_1_1_14bd4a000 + lVar41);
      if (lVar45 == 0) break;
      local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
      uVar13 = FUN_149584f48(plVar14,0x73,0,1);
      FUN_14955a5b6(plVar14,uVar13,lVar45,0);
      local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
      FUN_149584f48(plVar14,0x50,1,1);
      lVar41 = lVar41 + 8;
    } while (lVar41 != 0x60);
LAB_149597c78:
    *(byte *)(plVar14 + 0x19) = *(byte *)(plVar14 + 0x19) & 0xbf;
    break;
  case 10:
    *(undefined4 *)(param_1 + 7) = 3;
    iVar10 = (int)plVar1[5];
    if (0 < iVar10) {
      lVar41 = 8;
      uVar16 = 0;
      do {
        lVar45 = *(longlong *)(plVar1[4] + lVar41);
        if (lVar45 != 0) {
          lVar45 = **(longlong **)(lVar45 + 8);
          local_140 = "";
          if (*(char *)(lVar45 + 0x13) == '\0') {
            local_140 = *(char **)(lVar45 + 0xd0);
          }
          local_148 = *(ulonglong **)(plVar1[4] + -8 + lVar41);
          FUN_1495caccc(plVar14,1,&DAT_14bd481ae,uVar16 & 0xffffffff);
          iVar10 = (int)plVar1[5];
        }
        uVar16 = uVar16 + 1;
        lVar41 = lVar41 + 0x20;
      } while ((longlong)uVar16 < (longlong)iVar10);
    }
    break;
  case 0xb:
    uVar12 = 1 << (bVar4 & 0x1f);
    *(uint *)((longlong)plVar14 + 0xcc) = *(uint *)((longlong)plVar14 + 0xcc) | uVar12;
    if ((uVar9 != 1) &&
       (*(char *)(*(longlong *)(*(longlong *)(*plVar14 + 0x20) + 8 + lVar41) + 0x11) != '\0')) {
      *(uint *)(plVar14 + 0x1a) = *(uint *)(plVar14 + 0x1a) | uVar12;
    }
    if (local_110 != (byte *)0x0) {
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      FUN_149581ec6(local_110,&local_78);
      iVar10 = 0x7fffffff;
      if (!SBORROW4(0,(uint)local_78)) {
        iVar10 = -(uint)local_78;
      }
      if (-1 < (int)(uint)local_78) {
        iVar10 = (uint)local_78;
      }
      FUN_1495a3043(param_1,0,uVar9);
      local_148 = (ulonglong *)CONCAT44(local_148._4_4_,iVar10);
      FUN_149584f48(plVar14,0x5e,uVar9,3);
      *(int *)(puVar33[3] + 0x74) = iVar10;
      goto LAB_1495980c3;
    }
    *(int *)(param_1 + 7) = (int)param_1[7] + 2;
    lVar41 = FUN_14955a4e8(plVar14,9,&DAT_14bd480e0);
    *(uint *)(lVar41 + 4) = uVar9;
    *(uint *)(lVar41 + 0x1c) = uVar9;
    *(undefined4 *)(lVar41 + 0x94) = 0xfffff830;
    pbVar15 = local_100;
    goto LAB_149595594;
  case 0xc:
    if (local_110 != (byte *)0x0) {
      if ((longlong)(int)plVar1[5] < 1) {
LAB_1495954e5:
        ppuVar17 = &PTR_DAT_14bd48290;
        puVar27 = &DAT_14bd48320;
LAB_1495954ff:
        lVar41 = 0;
        do {
          bVar4 = local_110[lVar41];
          if (bVar4 == puVar27[lVar41]) {
            if ((ulonglong)bVar4 == 0) {
              cVar6 = '\x02';
              if ((char)*(undefined4 *)(ppuVar17 + 1) != '\0') {
                cVar6 = (char)*(undefined4 *)(ppuVar17 + 1);
              }
              *(char *)((longlong)plVar1 + 0x5e) = cVar6;
              *(char *)(*(longlong *)(plVar1[4] + 0x18) + 0x71) = cVar6;
              goto LAB_149595579;
            }
          }
          else if ((&DAT_14bd3ff30)[bVar4] != (&DAT_14bd3ff30)[(byte)puVar27[lVar41]])
          goto LAB_14959552a;
          lVar41 = lVar41 + 1;
        } while( true );
      }
      bVar46 = true;
      lVar41 = 0;
      do {
        if ((*(longlong *)(plVar1[4] + 8 + lVar41) != 0) &&
           ((*(ushort *)(*(longlong *)(plVar1[4] + 0x18 + lVar41) + 0x72) & 5) == 1)) {
          bVar46 = false;
        }
        lVar41 = lVar41 + 0x20;
      } while ((longlong)(int)plVar1[5] * 0x20 != lVar41);
      if (bVar46) goto LAB_1495954e5;
      break;
    }
    iVar10 = FUN_14958537a(param_1);
    pbVar15 = local_100;
    if (iVar10 == 0) {
      puVar29 = (&PTR_DAT_14bd48290)[(ulonglong)*(byte *)(*param_1 + 0x5e) * 2];
      goto LAB_14959566f;
    }
    goto LAB_149595594;
  case 0xd:
    iVar10 = (int)param_1[7];
    local_e4 = iVar10 + 6;
    *(uint *)(param_1 + 7) = local_e4;
    puVar33 = *(undefined8 **)(*(longlong *)(plVar1[4] + 0x18 + lVar41) + 0x10);
    local_b8 = pcVar31;
    if (puVar33 != (undefined8 *)0x0) {
      local_b0 = CONCAT44(local_b0._4_4_,iVar10 + 1);
      local_a8 = CONCAT44(local_a8._4_4_,iVar10 + 5);
      local_d4 = iVar10 + 2;
      local_a0 = (undefined8 *)(ulonglong)(iVar10 + 3);
      local_e0 = (char *)(ulonglong)local_e4;
      pbVar15 = local_110;
      do {
        if (pbVar15 == (byte *)0x0) {
          puVar25 = (undefined8 *)puVar33[2];
          puVar33 = (undefined8 *)*puVar33;
        }
        else {
          puVar25 = (undefined8 *)FUN_14955a08c(param_1,0,pbVar15,local_b8);
          puVar33 = (undefined8 *)0x0;
          pbVar15 = local_110;
        }
        if ((puVar25 != (undefined8 *)0x0) && (puVar25[4] != 0)) {
          uVar9 = 0xfff0bdc0;
          if (puVar25[0xe] != 0) {
            uVar9 = 0xffffffff;
            plVar21 = (longlong *)(plVar1[4] + 0x18);
            do {
              uVar9 = uVar9 + 1;
              lVar41 = *plVar21;
              plVar21 = plVar21 + 4;
            } while (lVar41 != puVar25[0xe]);
          }
          plVar21 = (longlong *)param_1[0x14];
          if ((longlong *)param_1[0x14] == (longlong *)0x0) {
            plVar21 = param_1;
          }
          local_f8 = puVar25;
          local_90 = puVar33;
          if (((*(uint *)((longlong)plVar21 + 0x74) >> (uVar9 & 0x1f) & 1) == 0) &&
             (*(uint *)((longlong)plVar21 + 0x74) =
                   *(uint *)((longlong)plVar21 + 0x74) | 1 << ((byte)uVar9 & 0x1f), uVar9 == 1)) {
            FUN_14955dea7(plVar21);
          }
          puVar33 = local_f8;
          local_148 = (ulonglong *)*local_f8;
          FUN_14959b139(param_1,uVar9,*(undefined4 *)(local_f8 + 7),0);
          puVar25 = local_f8;
          iVar10 = (int)*(short *)((longlong)puVar33 + 0x46) + local_e4;
          if ((int)param_1[7] < iVar10) {
            *(int *)(param_1 + 7) = iVar10;
          }
          local_148._0_4_ = 0x60;
          FUN_14959b02c(param_1,0,uVar9,local_f8);
          uVar30 = *puVar25;
          local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
          uVar13 = FUN_149584f48(plVar14,0x73,0,local_b0 & 0xffffffff);
          FUN_14955a5b6(plVar14,uVar13,uVar30,0);
          iVar10 = 1;
          for (lVar41 = puVar25[4]; lVar41 != 0; lVar41 = *(longlong *)(lVar41 + 8)) {
            puVar33 = (undefined8 *)FUN_14955d004(plVar1,*(undefined8 *)(lVar41 + 0x10));
            if (puVar33 != (undefined8 *)0x0) {
              local_78 = 0;
              local_148 = (ulonglong *)*puVar33;
              FUN_14959b139(param_1,uVar9,*(undefined4 *)(puVar33 + 7),0);
              local_148 = (ulonglong *)0x0;
              iVar43 = FUN_1495c58ff(param_1,puVar33,lVar41,&local_78);
              uVar16 = local_78;
              if (iVar43 != 0) goto LAB_149595579;
              if (local_78 == 0) {
                local_148 = (ulonglong *)CONCAT44(local_148._4_4_,0x60);
                FUN_14959b02c(param_1,iVar10);
              }
              else {
                local_148 = (ulonglong *)CONCAT44(local_148._4_4_,uVar9);
                FUN_149584f48(plVar14,0x60,iVar10);
                FUN_14959b2a7(param_1,uVar16);
              }
            }
            iVar10 = iVar10 + 1;
          }
          if (*(int *)((longlong)param_1 + 0x34) < iVar10) {
            *(int *)((longlong)param_1 + 0x34) = iVar10;
          }
          local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
          local_98 = FUN_149584f48(plVar14,0x25,0,0);
          uVar16 = local_f8[4];
          if (uVar16 != 0) {
            local_f0 = (ulonglong *)&DAT_00000001;
            do {
              puVar33 = (undefined8 *)FUN_14955d004(plVar1,*(undefined8 *)(uVar16 + 0x10),local_b8);
              local_78 = 0;
              local_80 = 0;
              if (puVar33 != (undefined8 *)0x0) {
                local_148 = &local_80;
                FUN_1495c58ff(param_1,puVar33,uVar16,&local_78);
              }
              local_c0 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
              iVar10 = *(uint *)((longlong)param_1 + 0x44) - 1;
              local_d0 = (int *)CONCAT44(local_d0._4_4_,iVar10);
              *(int *)((longlong)param_1 + 0x44) = iVar10;
              uVar37 = (ulonglong)*(uint *)(uVar16 + 0x28);
              local_c8 = puVar33;
              if (0 < (int)*(uint *)(uVar16 + 0x28)) {
                puVar34 = (undefined4 *)(uVar16 + 0x40);
                lVar45 = 0;
                lVar41 = 0;
                local_108 = uVar16;
                do {
                  puVar24 = (undefined4 *)(local_80 + lVar45);
                  if (local_80 == 0) {
                    puVar24 = puVar34;
                  }
                  iVar43 = (int)local_e0 + (int)lVar41;
                  local_148._0_4_ = iVar43;
                  FUN_14959f097(plVar14,local_f8,0,*puVar24);
                  local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
                  FUN_149584f48(plVar14,0x32,iVar43,iVar10);
                  lVar41 = lVar41 + 1;
                  uVar37 = (ulonglong)*(int *)(local_108 + 0x28);
                  puVar34 = puVar34 + 4;
                  lVar45 = lVar45 + 4;
                  uVar16 = local_108;
                } while (lVar41 < (longlong)uVar37);
              }
              if (local_78 == 0) {
                if (local_c8 != (undefined8 *)0x0) {
                  local_148._0_4_ = local_e4;
                  FUN_149584f48(plVar14,0x1f,local_f0,(int)plVar14[0x12] + 2);
                  local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
                  FUN_149584f48(plVar14,0xb,0,(ulonglong)local_d0 & 0xffffffff);
                }
              }
              else {
                uVar30 = FUN_1495aaa6f(plVar1);
                uVar13 = (int)local_a8;
                local_148._0_4_ = (int)local_a8;
                uVar11 = FUN_149584f48(plVar14,0x5b,local_e4,*(undefined4 *)(uVar16 + 0x28));
                FUN_14955a5b6(plVar14,uVar11,uVar30,uVar37 & 0xffffffff);
                local_148 = (ulonglong *)CONCAT44(local_148._4_4_,uVar13);
                iVar10 = FUN_149584f48(plVar14,0x1e,local_f0,(ulonglong)local_d0 & 0xffffffff);
                if (*(char *)(*plVar14 + 0x61) == '\0') {
                  lVar41 = plVar14[0x11];
                  *(undefined1 *)(lVar41 + 1 + (longlong)iVar10 * 0x18) = 0xfd;
                  *(undefined4 *)(lVar41 + 0x10 + (longlong)iVar10 * 0x18) = 0;
                }
              }
              uVar30 = 0x48;
              if (-1 < *(char *)(local_f8 + 8)) {
                uVar30 = 0x7f;
              }
              local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
              FUN_149584f48(plVar14,uVar30,0,local_d4);
              local_148._0_4_ = (int)local_f0 + -1;
              FUN_1495caccc(plVar14,local_a0,&DAT_14bd481c3,*(undefined8 *)(uVar16 + 0x10));
              local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
              FUN_149584f48(plVar14,0x50,local_b0 & 0xffffffff,4);
              lVar41 = plVar14[3];
              if (*(int *)(lVar41 + 0x44) + *(int *)(lVar41 + 0x48) < 0) {
                FUN_1495a1bff(lVar41,plVar14);
              }
              else {
                *(int *)(*(longlong *)(lVar41 + 0x50) + (longlong)-(int)local_c0 * 4) =
                     (int)plVar14[0x12];
              }
              if (local_80 != 0) {
                FUN_14955d65a(plVar1);
              }
              local_f0 = (ulonglong *)(ulonglong)((int)local_f0 + 1);
              uVar16 = *(ulonglong *)(uVar16 + 8);
            } while (uVar16 != 0);
          }
          local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
          FUN_149584f48(plVar14,5,0);
          puVar27 = &DAT_14cc1ee40;
          if (*(char *)(*plVar14 + 0x61) == '\0') {
            iVar10 = (int)plVar14[0x12] + -1;
            if (-1 < (int)local_98) {
              iVar10 = (int)local_98;
            }
            puVar27 = (undefined1 *)((longlong)iVar10 * 0x18 + plVar14[0x11]);
          }
          *(int *)(puVar27 + 8) = (int)plVar14[0x12];
          puVar33 = local_90;
          pbVar15 = local_110;
        }
      } while (puVar33 != (undefined8 *)0x0);
    }
    break;
  case 0xe:
    if (local_110 != (byte *)0x0) {
      lVar41 = FUN_14955d004(plVar1,local_110,pcVar31);
      if ((lVar41 == 0) || (lVar45 = *(longlong *)(lVar41 + 0x20), lVar45 == 0)) goto LAB_14959848e;
      uVar9 = 0xfff0bdc0;
      if (*(longlong *)(lVar41 + 0x70) != 0) {
        uVar9 = 0xffffffff;
        plVar21 = (longlong *)(plVar1[4] + 0x18);
        do {
          uVar9 = uVar9 + 1;
          lVar44 = *plVar21;
          plVar21 = plVar21 + 4;
        } while (lVar44 != *(longlong *)(lVar41 + 0x70));
      }
      *(undefined4 *)(param_1 + 7) = 8;
      plVar21 = (longlong *)param_1[0x14];
      if ((longlong *)param_1[0x14] == (longlong *)0x0) {
        plVar21 = param_1;
      }
      if (((*(uint *)((longlong)plVar21 + 0x74) >> (uVar9 & 0x1f) & 1) == 0) &&
         (*(uint *)((longlong)plVar21 + 0x74) =
               *(uint *)((longlong)plVar21 + 0x74) | 1 << ((byte)uVar9 & 0x1f), uVar9 == 1)) {
        FUN_14955dea7(plVar21);
      }
      iVar10 = 0;
      do {
        if (0 < *(int *)(lVar45 + 0x28)) {
          plVar21 = (longlong *)(lVar45 + 0x48);
          lVar44 = 0;
          do {
            bVar4 = *(char *)(lVar45 + 0x2d) - 7;
            local_120 = "NO ACTION";
            if (bVar4 < 4) {
              local_120 = (&PTR_s_RESTRICT_14bd4a108)[bVar4];
            }
            bVar4 = *(char *)(lVar45 + 0x2e) - 7;
            local_128 = "NO ACTION";
            if (bVar4 < 4) {
              local_128 = (&PTR_s_RESTRICT_14bd4a108)[bVar4];
            }
            local_130 = (int *)*plVar21;
            local_138 = *(ulonglong **)
                         (*(longlong *)(lVar41 + 8) + (longlong)(int)plVar21[-1] * 0x20);
            local_140 = *(char **)(lVar45 + 0x10);
            local_118 = &DAT_14bd481b5;
            local_148 = (ulonglong *)CONCAT44(local_148._4_4_,(int)lVar44);
            FUN_1495caccc(plVar14,1,"iissssss",iVar10);
            lVar44 = lVar44 + 1;
            plVar21 = plVar21 + 2;
          } while (lVar44 < *(int *)(lVar45 + 0x28));
        }
        iVar10 = iVar10 + 1;
        lVar45 = *(longlong *)(lVar45 + 8);
      } while (lVar45 != 0);
      break;
    }
    goto LAB_149595594;
  case 0xf:
    uVar9 = *(uint *)((longlong)plVar1 + 0x2c) >> 5 & 1;
    *(undefined4 *)(param_1 + 7) = 6;
    lVar41 = 0;
    do {
      for (lVar45 = (&DAT_14cc1ecc8)[lVar41]; lVar45 != 0; lVar45 = *(longlong *)(lVar45 + 0x40)) {
        FUN_1495cadce(plVar14,lVar45,1,uVar9);
      }
      lVar41 = lVar41 + 1;
    } while (lVar41 != 0x17);
    for (puVar33 = (undefined8 *)plVar1[0x46]; puVar33 != (undefined8 *)0x0;
        puVar33 = (undefined8 *)*puVar33) {
      FUN_1495cadce(plVar14,puVar33[2],0,uVar9);
    }
    break;
  case 0x10:
    if ((local_110 != (byte *)0x0) && (iVar10 = FUN_14955d462(local_110,&local_78), iVar10 == 0)) {
      uVar16 = DAT_14cc1eba8;
      if ((DAT_14cc1eb98 != 0) && ((*DAT_14c765d78)(), uVar16 = DAT_14cc1eba8, DAT_14cc1eb98 != 0))
      {
        (*DAT_14c765d88)();
      }
      if ((0 < (longlong)local_78) && (uVar16 == 0 || (longlong)local_78 < (longlong)uVar16)) {
        FUN_149553956();
      }
    }
    uVar16 = DAT_14cc1eba8;
    if (DAT_14cc1eb98 != 0) {
      (*DAT_14c765d78)();
      uVar16 = DAT_14cc1eba8;
LAB_1495981e6:
      if (DAT_14cc1eb98 != 0) {
        (*DAT_14c765d88)();
      }
    }
    goto LAB_149596577;
  case 0x11:
    if (local_110 == (byte *)0x0) {
LAB_14959645d:
      iVar10 = 0x7fffffff;
    }
    else {
      iVar43 = FUN_149581ec6(local_110,&local_78);
      iVar10 = (uint)local_78;
      if ((int)(uint)local_78 < 1 || iVar43 == 0) goto LAB_14959645d;
    }
    FUN_1495a3043(param_1,0,uVar9);
    local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_149584f48(plVar14,0x45,iVar10,1);
    local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
    iVar10 = FUN_149584f48(plVar14,0x3c,uVar9,0);
    local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_149584f48(plVar14,0x50,1,0);
    local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_149584f48(plVar14,0x52,1,0xffffffff);
    local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_149584f48(plVar14,0x30,1,iVar10);
    if (*(char *)(*plVar14 + 0x61) == '\0') {
      iVar43 = (int)plVar14[0x12] + -1;
      if (-1 < iVar10) {
        iVar43 = iVar10;
      }
      puVar27 = (undefined1 *)((longlong)iVar43 * 0x18 + plVar14[0x11]);
    }
    else {
      puVar27 = &DAT_14cc1ee40;
    }
    *(int *)(puVar27 + 8) = (int)plVar14[0x12];
    break;
  case 0x12:
    if (local_110 != (byte *)0x0) {
      lVar41 = FUN_149581e2b(plVar1,local_110,pcVar31);
      if (lVar41 == 0) {
        lVar41 = FUN_14955a08c(param_1,2,local_110,pcVar31);
        if (((lVar41 == 0) || ((*(byte *)(lVar41 + 0x40) & 0x80) == 0)) ||
           (lVar41 = *(longlong *)(lVar41 + 0x10), lVar41 == 0)) goto LAB_14959848e;
        do {
          if ((*(uint *)(lVar41 + 100) & 3) == 2) goto LAB_149598209;
          lVar41 = *(longlong *)(lVar41 + 0x28);
        } while (lVar41 != 0);
      }
      else {
LAB_149598209:
        uVar9 = 0xfff0bdc0;
        if (*(longlong *)(lVar41 + 0x30) != 0) {
          uVar9 = 0xffffffff;
          plVar21 = (longlong *)(plVar1[4] + 0x18);
          do {
            uVar9 = uVar9 + 1;
            lVar45 = *plVar21;
            plVar21 = plVar21 + 4;
          } while (lVar45 != *(longlong *)(lVar41 + 0x30));
        }
        bVar46 = *(longlong *)(uVar16 + 0x10) != 0;
        uVar37 = (ulonglong)*(ushort *)(lVar41 + 0x5e + (ulonglong)bVar46 * 2);
        *(uint *)(param_1 + 7) = (uint)bVar46 * 3 + 3;
        plVar21 = (longlong *)param_1[0x14];
        if ((longlong *)param_1[0x14] == (longlong *)0x0) {
          plVar21 = param_1;
        }
        local_f8 = *(undefined8 **)(lVar41 + 0x18);
        if (((*(uint *)((longlong)plVar21 + 0x74) >> (uVar9 & 0x1f) & 1) == 0) &&
           (*(uint *)((longlong)plVar21 + 0x74) =
                 *(uint *)((longlong)plVar21 + 0x74) | 1 << ((byte)uVar9 & 0x1f), uVar9 == 1)) {
          FUN_14955dea7();
        }
        if (uVar37 != 0) {
          uVar38 = 0;
          do {
            uVar8 = *(ushort *)(*(longlong *)(lVar41 + 8) + uVar38 * 2);
            if ((short)uVar8 < 0) {
              local_140 = (char *)0x0;
            }
            else {
              local_140 = *(char **)(local_f8[1] + (ulonglong)uVar8 * 0x20);
            }
            local_148 = (ulonglong *)CONCAT44(local_148._4_4_,(int)(short)uVar8);
            FUN_1495caccc(plVar14,1,&DAT_14bd48181,uVar38 & 0xffffffff);
            if (*(longlong *)(uVar16 + 0x10) != 0) {
              local_148 = *(ulonglong **)(*(longlong *)(lVar41 + 0x40) + uVar38 * 8);
              local_140 = (char *)CONCAT44(local_140._4_4_,
                                           (uint)(uVar38 < *(ushort *)(lVar41 + 0x5e)));
              FUN_1495caccc(plVar14,4,&DAT_14bd48186,
                            *(undefined1 *)(*(longlong *)(lVar41 + 0x38) + uVar38));
            }
            local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
            FUN_149584f48(plVar14,0x50,1,(int)param_1[7]);
            uVar38 = uVar38 + 1;
          } while (uVar37 != uVar38);
        }
      }
      break;
    }
    goto LAB_149595594;
  case 0x13:
    if (local_110 != (byte *)0x0) {
      lVar41 = FUN_14955d004(plVar1,local_110,pcVar31);
      if (lVar41 == 0) goto LAB_14959848e;
      uVar9 = 0xfff0bdc0;
      if (*(longlong *)(lVar41 + 0x70) != 0) {
        uVar9 = 0xffffffff;
        plVar21 = (longlong *)(plVar1[4] + 0x18);
        do {
          uVar9 = uVar9 + 1;
          lVar45 = *plVar21;
          plVar21 = plVar21 + 4;
        } while (lVar45 != *(longlong *)(lVar41 + 0x70));
      }
      *(undefined4 *)(param_1 + 7) = 5;
      plVar21 = (longlong *)param_1[0x14];
      if ((longlong *)param_1[0x14] == (longlong *)0x0) {
        plVar21 = param_1;
      }
      if (((*(uint *)((longlong)plVar21 + 0x74) >> (uVar9 & 0x1f) & 1) == 0) &&
         (*(uint *)((longlong)plVar21 + 0x74) =
               *(uint *)((longlong)plVar21 + 0x74) | 1 << ((byte)uVar9 & 0x1f), uVar9 == 1)) {
        FUN_14955dea7(plVar21);
      }
      puVar33 = *(undefined8 **)(lVar41 + 0x10);
      if (puVar33 != (undefined8 *)0x0) {
        iVar10 = 0;
        do {
          local_138 = (ulonglong *)(&PTR_DAT_14bd48190)[*(uint *)((longlong)puVar33 + 100) & 3];
          local_148 = (ulonglong *)*puVar33;
          local_130 = (int *)CONCAT44(local_130._4_4_,(uint)(puVar33[9] != 0));
          local_140 = (char *)CONCAT44(local_140._4_4_,
                                       (uint)(*(char *)((longlong)puVar33 + 0x62) != '\0'));
          FUN_1495caccc(plVar14,1,"isisi",iVar10);
          iVar10 = iVar10 + 1;
          puVar33 = (undefined8 *)puVar33[5];
        } while (puVar33 != (undefined8 *)0x0);
      }
      break;
    }
    goto LAB_149595594;
  case 0x14:
    local_e4 = CONCAT31(local_e4._1_3_,*local_100);
    local_b0 = *param_3;
    *(undefined4 *)(param_1 + 7) = 6;
    local_78 = CONCAT44(local_78._4_4_,100);
    local_a8 = 100;
    if (local_110 != (byte *)0x0) {
      FUN_149581ec6(local_110,&local_78);
      local_a8 = 100;
      if (0 < (int)(uint)local_78) {
        local_a8 = local_78 & 0xffffffff;
      }
      local_78 = CONCAT44(local_78._4_4_,(int)local_a8);
    }
    local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_149584f48(plVar14,0x45,(int)local_a8 + -1);
    if (0 < (int)plVar1[5]) {
      local_e4 = local_e4 & 0xffffffdf;
      puVar25 = (undefined8 *)0x0;
      uVar16 = local_b0;
      puVar33 = local_f8;
      do {
        if ((uVar16 == 0) || (puVar2 = local_a0, puVar25 == puVar33)) {
          plVar21 = (longlong *)param_1[0x14];
          if ((longlong *)param_1[0x14] == (longlong *)0x0) {
            plVar21 = param_1;
          }
          local_c8 = puVar25;
          if (((*(uint *)((longlong)plVar21 + 0x74) >> ((uint)puVar25 & 0x1f) & 1) == 0) &&
             (*(uint *)((longlong)plVar21 + 0x74) =
                   *(uint *)((longlong)plVar21 + 0x74) | 1 << ((byte)puVar25 & 0x1f),
             puVar25 == (undefined8 *)&DAT_00000001)) {
            FUN_14955dea7(plVar21);
          }
          lVar45 = (longlong)local_c8 * 0x20;
          lVar41 = *(longlong *)(plVar1[4] + 0x18 + lVar45);
          plVar21 = *(longlong **)(lVar41 + 0x10);
          iVar43 = 0;
          iVar10 = 0;
          if (plVar21 != (longlong *)0x0) {
            iVar10 = 0;
            iVar43 = 0;
            do {
              iVar43 = iVar43 + (uint)((*(byte *)(plVar21[2] + 0x40) & 0x80) == 0);
              lVar44 = *(longlong *)(plVar21[2] + 0x10);
              iVar28 = 0;
              if (lVar44 != 0) {
                do {
                  iVar28 = iVar28 + 1;
                  lVar44 = *(longlong *)(lVar44 + 0x28);
                } while (lVar44 != 0);
                iVar43 = iVar43 + iVar28;
              }
              if (iVar10 < iVar28) {
                iVar10 = iVar28;
              }
              plVar21 = (longlong *)*plVar21;
            } while (plVar21 != (longlong *)0x0);
          }
          piVar20 = (int *)FUN_14955d750(plVar1,(longlong)iVar43 * 4 + 4);
          if (piVar20 == (int *)0x0) break;
          plVar21 = *(longlong **)(lVar41 + 0x10);
          iVar43 = 0;
          if (plVar21 != (longlong *)0x0) {
            iVar43 = 0;
            do {
              lVar44 = plVar21[2];
              if ((*(byte *)(lVar44 + 0x40) & 0x80) == 0) {
                lVar40 = (longlong)iVar43;
                iVar43 = iVar43 + 1;
                piVar20[lVar40 + 1] = *(int *)(lVar44 + 0x38);
              }
              lVar44 = *(longlong *)(lVar44 + 0x10);
              if (lVar44 != 0) {
                piVar35 = piVar20 + (longlong)iVar43 + 1;
                do {
                  *piVar35 = *(int *)(lVar44 + 0x58);
                  lVar44 = *(longlong *)(lVar44 + 0x28);
                  iVar43 = iVar43 + 1;
                  piVar35 = piVar35 + 1;
                } while (lVar44 != 0);
              }
              plVar21 = (longlong *)*plVar21;
            } while (plVar21 != (longlong *)0x0);
          }
          *piVar20 = iVar43;
          iVar43 = iVar10 + 8;
          if (iVar10 + 8 < (int)param_1[7]) {
            iVar43 = (int)param_1[7];
          }
          *(int *)(param_1 + 7) = iVar43;
          *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
          *(undefined4 *)(param_1 + 5) = 0;
          local_148._0_4_ = 1;
          uVar13 = FUN_149584f48(plVar14,0x92,2);
          FUN_14955a5b6(plVar14,uVar13,piVar20,0xfffffff1);
          if (0 < (longlong)(int)plVar14[0x12]) {
            *(ushort *)(plVar14[0x11] + -0x16 + (longlong)(int)plVar14[0x12] * 0x18) =
                 (ushort)(byte)local_c8;
          }
          local_148._0_4_ = 0;
          iVar10 = FUN_149584f48(plVar14,0x32,2,0);
          uVar30 = FUN_14955a402(plVar1,"*** in database %s ***\n",
                                 *(undefined8 *)(plVar1[4] + lVar45));
          local_148._0_4_ = 0;
          uVar13 = FUN_149584f48(plVar14,0x73,0,3);
          FUN_14955a5b6(plVar14,uVar13,uVar30,0xfffffff9);
          local_148 = (ulonglong *)CONCAT44(local_148._4_4_,3);
          FUN_149584f48(plVar14,0x6e,2);
          FUN_1495caf3c(plVar14);
          puVar27 = &DAT_14cc1ee40;
          if (*(char *)(*plVar14 + 0x61) == '\0') {
            iVar43 = (int)plVar14[0x12] + -1;
            if (-1 < iVar10) {
              iVar43 = iVar10;
            }
            puVar27 = (undefined1 *)((longlong)iVar43 * 0x18 + plVar14[0x11]);
          }
          *(int *)(puVar27 + 8) = (int)plVar14[0x12];
          puVar3 = *(undefined8 **)(lVar41 + 0x10);
          puVar33 = local_f8;
          puVar25 = local_c8;
          uVar16 = local_b0;
          puVar2 = local_a0;
          while (local_a0 = puVar3, local_a0 != (undefined8 *)0x0) {
            puVar3 = (undefined8 *)local_a0[2];
            puVar22 = local_a0;
            if (0 < *(int *)(puVar3 + 7)) {
              if ((*(byte *)(puVar3 + 8) & 0x80) != 0) {
                for (local_f0 = (ulonglong *)puVar3[2]; local_f0 != (ulonglong *)0x0;
                    local_f0 = (ulonglong *)local_f0[5]) {
                  if ((*(uint *)((longlong)local_f0 + 100) & 3) == 2) goto LAB_149597022;
                }
              }
              local_f0 = (ulonglong *)0x0;
LAB_149597022:
              local_130 = &local_84;
              local_138 = &local_80;
              local_140 = (char *)0x0;
              local_148._4_4_ = (uint)((ulonglong)local_148 >> 0x20);
              local_148._0_4_ = 1;
              FUN_1495c3387(param_1,puVar3,0x60,0);
              local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
              FUN_149584f48(plVar14,0x45,0,7);
              lVar41 = puVar3[2];
              if (lVar41 != 0) {
                iVar10 = 8;
                do {
                  local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
                  FUN_149584f48(plVar14,0x45,0,iVar10);
                  lVar41 = *(longlong *)(lVar41 + 0x28);
                  iVar10 = iVar10 + 1;
                } while (lVar41 != 0);
              }
              local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
              FUN_149584f48(plVar14,0x25,local_80 & 0xffffffff,0);
              local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
              local_d4 = FUN_149584f48(plVar14,0x52,7,1);
              if ((char)local_e4 != 'Q') {
                local_148 = (ulonglong *)CONCAT44(local_148._4_4_,3);
                FUN_149584f48(plVar14,0x59,local_80 & 0xffffffff,*(short *)(puVar3 + 9) + -1);
                if (0 < (longlong)(int)plVar14[0x12]) {
                  *(undefined2 *)(plVar14[0x11] + -0x16 + (longlong)(int)plVar14[0x12] * 0x18) =
                       0x80;
                }
              }
              sVar42 = *(short *)((longlong)puVar3 + 0x46);
              if (0 < sVar42) {
                lVar41 = 0;
                uVar16 = 0;
                do {
                  if ((uVar16 != (uint)(int)*(short *)((longlong)puVar3 + 0x44)) &&
                     (*(char *)(puVar3[1] + 0x18 + lVar41) != '\0')) {
                    local_148._0_4_ = 3;
                    FUN_14959f097(plVar14,puVar3,local_80 & 0xffffffff,uVar16 & 0xffffffff);
                    pcVar31 = &DAT_14cc1ee40;
                    if (*(char *)(*plVar14 + 0x61) == '\0') {
                      pcVar31 = (char *)(plVar14[0x11] + (longlong)(int)plVar14[0x12] * 0x18 + -0x18
                                        );
                    }
                    if ((*pcVar31 == 'Y') && (0 < (longlong)(int)plVar14[0x12])) {
                      *(undefined2 *)(plVar14[0x11] + -0x16 + (longlong)(int)plVar14[0x12] * 0x18) =
                           0x80;
                    }
                    local_148._0_4_ = 0;
                    uVar13 = FUN_149584f48(plVar14,0x33,3,0);
                    local_108 = CONCAT44(local_108._4_4_,uVar13);
                    uVar30 = FUN_14955a402(plVar1,"NULL value in %s.%s",*puVar3,
                                           *(undefined8 *)(puVar3[1] + lVar41));
                    local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
                    uVar13 = FUN_149584f48(plVar14,0x73,0,3);
                    FUN_14955a5b6(plVar14,uVar13,uVar30,0xfffffff9);
                    FUN_1495caf3c(plVar14);
                    puVar27 = &DAT_14cc1ee40;
                    if (*(char *)(*plVar14 + 0x61) == '\0') {
                      iVar10 = (int)plVar14[0x12] + -1;
                      if (-1 < (int)(uint)local_108) {
                        iVar10 = (uint)local_108;
                      }
                      puVar27 = (undefined1 *)((longlong)iVar10 * 0x18 + plVar14[0x11]);
                    }
                    *(int *)(puVar27 + 8) = (int)plVar14[0x12];
                    sVar42 = *(short *)((longlong)puVar3 + 0x46);
                  }
                  uVar16 = uVar16 + 1;
                  lVar41 = lVar41 + 0x20;
                } while ((longlong)uVar16 < (longlong)sVar42);
              }
              if ((puVar3[6] != 0) && ((*(byte *)((longlong)plVar1 + 0x31) & 2) == 0)) {
                piVar20 = (int *)FUN_1495a22be(plVar1,puVar3[6],0);
                if (*(char *)((longlong)plVar1 + 0x61) == '\0') {
                  uVar9 = *(uint *)((longlong)param_1 + 0x44);
                  local_108 = (ulonglong)uVar9;
                  local_e0 = (char *)CONCAT44(local_e0._4_4_,uVar9 - 2);
                  *(uint *)((longlong)param_1 + 0x44) = uVar9 - 2;
                  *(int *)(param_1 + 8) = (int)local_80 + 1;
                  lVar41 = (longlong)*piVar20;
                  if (1 < lVar41) {
                    uVar16 = lVar41 + 1;
                    piVar35 = piVar20 + lVar41 * 8 + -6;
                    do {
                      FUN_14959ec19(param_1,*(undefined8 *)piVar35,uVar9 - 1,0);
                      uVar16 = uVar16 - 1;
                      piVar35 = piVar35 + -8;
                    } while (2 < uVar16);
                  }
                  FUN_1495a29b7(param_1,*(undefined8 *)(piVar20 + 2),
                                (ulonglong)local_e0 & 0xffffffff,0x10);
                  lVar41 = plVar14[3];
                  if (*(int *)(lVar41 + 0x44) + *(int *)(lVar41 + 0x48) < 0) {
                    FUN_1495a1bff(lVar41,plVar14);
                  }
                  else {
                    *(int *)(*(longlong *)(lVar41 + 0x50) + (longlong)-(int)local_108 * 4) =
                         (int)plVar14[0x12];
                  }
                  *(undefined4 *)(param_1 + 8) = 0;
                  uVar30 = FUN_14955a402(plVar1,"CHECK constraint failed in %s",*puVar3);
                  local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
                  uVar13 = FUN_149584f48(plVar14,0x73,0,3);
                  FUN_14955a5b6(plVar14,uVar13,uVar30,0xfffffff9);
                  FUN_1495caf3c(plVar14);
                  lVar41 = plVar14[3];
                  if (*(int *)(lVar41 + 0x44) + *(int *)(lVar41 + 0x48) < 0) {
                    FUN_1495a1bff(lVar41,plVar14);
                  }
                  else {
                    *(int *)(*(longlong *)(lVar41 + 0x50) + (longlong)(int)(1 - (uint)local_108) * 4
                            ) = (int)plVar14[0x12];
                  }
                }
                if (piVar20 != (int *)0x0) {
                  FUN_149582d29(plVar1,piVar20);
                }
              }
              if ((char)local_e4 == 'Q') {
                local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
                FUN_149584f48(plVar14,5,local_80 & 0xffffffff);
                puVar27 = &DAT_14cc1ee40;
                if (*(char *)(*plVar14 + 0x61) == '\0') {
                  iVar10 = local_d4;
                  if (local_d4 < 1) {
                    iVar10 = (int)plVar14[0x12];
                  }
                  puVar27 = (undefined1 *)(plVar14[0x11] + (longlong)iVar10 * 0x18 + -0x18);
                }
                *(int *)(puVar27 + 8) = (int)plVar14[0x12];
                puVar22 = local_a0;
                puVar25 = local_c8;
                uVar16 = local_b0;
                puVar33 = local_f8;
                puVar2 = local_a0;
              }
              else {
                puVar36 = (ulonglong *)puVar3[2];
                if (puVar36 != (ulonglong *)0x0) {
                  puVar23 = (ulonglong *)0x0;
                  local_e0 = (char *)CONCAT44(local_e0._4_4_,0xffffffff);
                  iVar10 = 0;
                  puVar26 = local_f0;
                  do {
                    iVar43 = *(int *)((longlong)param_1 + 0x44) + -1;
                    *(int *)((longlong)param_1 + 0x44) = iVar43;
                    if (puVar26 != puVar36) {
                      local_130 = (int *)CONCAT44(local_130._4_4_,(int)local_e0);
                      local_140 = (char *)&local_88;
                      local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
                      local_138 = puVar23;
                      uVar13 = FUN_1495aa59d(param_1,puVar36,local_80 & 0xffffffff,0);
                      local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
                      FUN_149584f48(plVar14,0x52,iVar10 + 8,1);
                      local_e0 = (char *)CONCAT44(local_e0._4_4_,uVar13);
                      local_108._0_4_ = (uint)(ushort)puVar36[0xc];
                      local_148._0_4_ = uVar13;
                      iVar43 = FUN_149584f48(plVar14,0x1e,local_84 + iVar10,iVar43);
                      if (*(char *)(*plVar14 + 0x61) == '\0') {
                        lVar41 = plVar14[0x11];
                        *(undefined1 *)(lVar41 + 1 + (longlong)iVar43 * 0x18) = 0xfd;
                        *(uint *)(lVar41 + 0x10 + (longlong)iVar43 * 0x18) = (uint)local_108;
                      }
                      local_108 = CONCAT44(local_108._4_4_,iVar43);
                      local_148._0_4_ = 0;
                      uVar13 = FUN_149584f48(plVar14,0x73,0,3);
                      FUN_14955a5b6(plVar14,uVar13,&DAT_14bd48211,0);
                      local_148._0_4_ = 3;
                      FUN_149584f48(plVar14,0x6e,7,3);
                      local_148._0_4_ = 0;
                      uVar13 = FUN_149584f48(plVar14,0x73,0,4);
                      FUN_14955a5b6(plVar14,uVar13," missing from index ",0);
                      local_148._0_4_ = 3;
                      FUN_149584f48(plVar14,0x6e,4,3);
                      uVar16 = *puVar36;
                      local_148._0_4_ = 0;
                      uVar13 = FUN_149584f48(plVar14,0x73,0,4);
                      FUN_14955a5b6(plVar14,uVar13,uVar16,0);
                      local_148 = (ulonglong *)CONCAT44(local_148._4_4_,3);
                      FUN_149584f48(plVar14,0x6e,4);
                      iVar43 = FUN_1495caf3c(plVar14);
                      puVar27 = &DAT_14cc1ee40;
                      if (*(char *)(*plVar14 + 0x61) == '\0') {
                        iVar28 = (int)plVar14[0x12] + -1;
                        if (-1 < (int)(uint)local_108) {
                          iVar28 = (uint)local_108;
                        }
                        puVar27 = (undefined1 *)((longlong)iVar28 * 0x18 + plVar14[0x11]);
                      }
                      *(int *)(puVar27 + 8) = (int)plVar14[0x12];
                      if (*(char *)((longlong)puVar36 + 0x62) != '\0') {
                        local_b8 = (char *)CONCAT44(local_b8._4_4_,uVar13);
                        local_d0 = (int *)CONCAT44(local_d0._4_4_,iVar43);
                        local_c0 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
                        iVar43 = *(uint *)((longlong)param_1 + 0x44) - 1;
                        local_108 = CONCAT44(local_108._4_4_,iVar43);
                        *(int *)((longlong)param_1 + 0x44) = iVar43;
                        uVar8 = *(ushort *)((longlong)puVar36 + 0x5e);
                        if (uVar8 != 0) {
                          iVar43 = (int)local_e0;
                          uVar16 = 0;
                          do {
                            lVar41 = (longlong)*(short *)(puVar36[1] + uVar16 * 2);
                            if ((lVar41 < 0) ||
                               (*(char *)(puVar3[1] + 0x18 + lVar41 * 0x20) == '\0')) {
                              local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
                              FUN_149584f48(plVar14,0x32,iVar43 + (int)uVar16,local_108 & 0xffffffff
                                           );
                              uVar8 = *(ushort *)((longlong)puVar36 + 0x5e);
                            }
                            uVar16 = uVar16 + 1;
                          } while (uVar16 < uVar8);
                        }
                        local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
                        iVar43 = FUN_149584f48(plVar14,5,local_84 + iVar10,0);
                        local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
                        FUN_149584f48(plVar14,0xb,0,local_108 & 0xffffffff);
                        puVar27 = &DAT_14cc1ee40;
                        if (*(char *)(*plVar14 + 0x61) == '\0') {
                          iVar28 = (int)plVar14[0x12] + -1;
                          if (-1 < iVar43) {
                            iVar28 = iVar43;
                          }
                          puVar27 = (undefined1 *)((longlong)iVar28 * 0x18 + plVar14[0x11]);
                        }
                        *(int *)(puVar27 + 8) = (int)plVar14[0x12];
                        uVar8 = *(ushort *)((longlong)puVar36 + 0x5e);
                        local_148._0_4_ = (int)local_e0;
                        iVar43 = FUN_149584f48(plVar14,0x27,local_84 + iVar10,local_108 & 0xffffffff
                                              );
                        if (*(char *)(*plVar14 + 0x61) == '\0') {
                          lVar41 = plVar14[0x11];
                          *(undefined1 *)(lVar41 + 1 + (longlong)iVar43 * 0x18) = 0xfd;
                          *(uint *)(lVar41 + 0x10 + (longlong)iVar43 * 0x18) = (uint)uVar8;
                        }
                        local_148._0_4_ = 0;
                        uVar13 = FUN_149584f48(plVar14,0x73,0,3);
                        FUN_14955a5b6(plVar14,uVar13,"non-unique entry in index ",0);
                        local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
                        FUN_149584f48(plVar14,0xb,0);
                        lVar41 = plVar14[3];
                        if (*(int *)(lVar41 + 0x44) + *(int *)(lVar41 + 0x48) < 0) {
                          FUN_1495a1bff(lVar41,plVar14);
                        }
                        else {
                          *(int *)(*(longlong *)(lVar41 + 0x50) + (longlong)-(int)local_c0 * 4) =
                               (int)plVar14[0x12];
                        }
                        iVar43 = (int)local_d0;
                      }
                      puVar27 = &DAT_14cc1ee40;
                      if (*(char *)(*plVar14 + 0x61) == '\0') {
                        iVar28 = (int)plVar14[0x12] + -1;
                        if (-1 < iVar43) {
                          iVar28 = iVar43;
                        }
                        puVar27 = (undefined1 *)((longlong)iVar28 * 0x18 + plVar14[0x11]);
                      }
                      *(int *)(puVar27 + 8) = (int)plVar14[0x12];
                      FUN_1495aa812(param_1,local_88);
                      puVar23 = puVar36;
                      puVar26 = local_f0;
                    }
                    iVar10 = iVar10 + 1;
                    puVar36 = (ulonglong *)puVar36[5];
                  } while (puVar36 != (ulonglong *)0x0);
                }
                local_148._0_4_ = 0;
                FUN_149584f48(plVar14,5,local_80 & 0xffffffff,local_d4);
                puVar27 = &DAT_14cc1ee40;
                if (*(char *)(*plVar14 + 0x61) == '\0') {
                  iVar10 = local_d4;
                  if (local_d4 < 1) {
                    iVar10 = (int)plVar14[0x12];
                  }
                  puVar27 = (undefined1 *)(plVar14[0x11] + (longlong)iVar10 * 0x18 + -0x18);
                }
                *(int *)(puVar27 + 8) = (int)plVar14[0x12];
                local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
                uVar13 = FUN_149584f48(plVar14,0x73,0,2);
                FUN_14955a5b6(plVar14,uVar13,"wrong # of entries in index ",0);
                puVar36 = (ulonglong *)puVar3[2];
                puVar22 = local_a0;
                puVar25 = local_c8;
                uVar16 = local_b0;
                puVar33 = local_f8;
                puVar2 = local_a0;
                if (puVar36 != (ulonglong *)0x0) {
                  iVar10 = 8;
                  puVar23 = local_f0;
                  do {
                    if (puVar23 != puVar36) {
                      local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
                      FUN_149584f48(plVar14,0x5c,iVar10 + local_84 + -8,3);
                      local_148._0_4_ = 3;
                      iVar43 = FUN_149584f48(plVar14,0x35,iVar10,0);
                      if (0 < (longlong)(int)plVar14[0x12]) {
                        *(undefined2 *)(plVar14[0x11] + -0x16 + (longlong)(int)plVar14[0x12] * 0x18)
                             = 0x90;
                      }
                      uVar16 = *puVar36;
                      local_148._0_4_ = 0;
                      uVar13 = FUN_149584f48(plVar14,0x73,0,4);
                      FUN_14955a5b6(plVar14,uVar13,uVar16,0);
                      local_148 = (ulonglong *)CONCAT44(local_148._4_4_,3);
                      FUN_149584f48(plVar14,0x6e,4,2);
                      FUN_1495caf3c(plVar14);
                      puVar27 = &DAT_14cc1ee40;
                      if (*(char *)(*plVar14 + 0x61) == '\0') {
                        iVar28 = (int)plVar14[0x12] + -1;
                        if (-1 < iVar43) {
                          iVar28 = iVar43;
                        }
                        puVar27 = (undefined1 *)((longlong)iVar28 * 0x18 + plVar14[0x11]);
                      }
                      *(int *)(puVar27 + 8) = (int)plVar14[0x12];
                      puVar22 = local_a0;
                      puVar25 = local_c8;
                      uVar16 = local_b0;
                      puVar33 = local_f8;
                      puVar23 = local_f0;
                    }
                    puVar36 = (ulonglong *)puVar36[5];
                    iVar10 = iVar10 + 1;
                    puVar2 = local_a0;
                  } while (puVar36 != (ulonglong *)0x0);
                }
              }
            }
            local_a0 = puVar2;
            puVar2 = local_a0;
            puVar3 = (undefined8 *)*puVar22;
          }
        }
        local_a0 = puVar2;
        puVar25 = (undefined8 *)((longlong)puVar25 + 1);
      } while ((longlong)puVar25 < (longlong)(int)plVar1[5]);
    }
    lVar41 = FUN_14955a4e8(plVar14,7,&DAT_14bd48270);
    if (lVar41 != 0) {
      *(int *)(lVar41 + 8) = 1 - (int)local_a8;
      *(undefined1 *)(lVar41 + 0x31) = 0xff;
      *(undefined **)(lVar41 + 0x40) = &DAT_14bd4828c;
      *(undefined1 *)(lVar41 + 0x79) = 0xff;
      *(char **)(lVar41 + 0x88) = "database disk image is malformed";
    }
    if (*(char *)(*plVar14 + 0x61) == '\0') {
      puVar27 = (undefined1 *)plVar14[0x11];
    }
    else {
      puVar27 = &DAT_14cc1ee40;
    }
    *(int *)(puVar27 + 0xc) = (int)plVar14[0x12] + -2;
    break;
  case 0x15:
    if (local_110 == (byte *)0x0) {
LAB_149595685:
      lVar41 = 0xffffffff;
      if ((int)param_3[1] == 0) {
        *(undefined4 *)(param_3 + 1) = 1;
        uVar9 = 0;
      }
    }
    else {
      sVar19 = strlen((char *)local_110);
      lVar41 = 0;
      if ((sVar19 & 0x3fffffff) != 0) {
        lVar41 = 0;
        do {
          lVar45 = 0;
          iVar10 = ((uint)sVar19 & 0x3fffffff) + 1;
          while( true ) {
            if ((ulonglong)local_110[lVar45] == 0) break;
            cVar6 = (&DAT_14bd3ff30)[local_110[lVar45]];
            cVar32 = (&DAT_14bd3ff30)[(byte)(&PTR_s_delete_14bd41d60)[lVar41][lVar45]];
            if (cVar6 != cVar32) goto LAB_149597dc7;
            iVar10 = iVar10 + -1;
            lVar45 = lVar45 + 1;
            if (iVar10 < 2) goto LAB_149598554;
          }
          cVar32 = (&DAT_14bd3ff30)[(byte)(&PTR_s_delete_14bd41d60)[lVar41][lVar45]];
          cVar6 = '\0';
LAB_149597dc7:
          if (cVar6 == cVar32) {
LAB_149598554:
            if ((lVar41 != 2) || (lVar41 = 2, (*(byte *)((longlong)plVar1 + 0x33) & 0x10) == 0))
            goto LAB_14959569b;
            break;
          }
          lVar41 = lVar41 + 1;
        } while (lVar41 != 6);
        goto LAB_149595685;
      }
    }
LAB_14959569b:
    lVar45 = (longlong)(int)plVar1[5];
    if (0 < lVar45) {
      uVar16 = lVar45 + 1;
      lVar45 = lVar45 * 0x20 + -0x18;
      do {
        if ((*(longlong *)(plVar1[4] + lVar45) != 0) &&
           ((uVar16 - uVar9 == 2 || ((int)param_3[1] == 0)))) {
          uVar12 = 1 << ((byte)(uVar16 - 2) & 0x1f);
          *(uint *)((longlong)plVar14 + 0xcc) = *(uint *)((longlong)plVar14 + 0xcc) | uVar12;
          if ((uVar16 != 3) &&
             (*(char *)(*(longlong *)(*(longlong *)(*plVar14 + 0x20) + lVar45) + 0x11) != '\0')) {
            *(uint *)(plVar14 + 0x1a) = *(uint *)(plVar14 + 0x1a) | uVar12;
          }
          local_148 = (ulonglong *)CONCAT44(local_148._4_4_,(int)lVar41);
          FUN_149584f48(plVar14,7,uVar16 - 2,1);
        }
        uVar16 = uVar16 - 1;
        lVar45 = lVar45 + -0x20;
      } while (1 < uVar16);
    }
    uVar16 = (ulonglong)local_148._4_4_;
    iVar10 = 1;
    goto LAB_1495984f8;
  case 0x16:
    lVar41 = **(longlong **)(puVar33[1] + 8);
    local_78 = 0xfffffffffffffffe;
    if (local_110 != (byte *)0x0) {
      FUN_14955d462(local_110,&local_78);
      uVar16 = 0xffffffffffffffff;
      if (-1 < (longlong)local_78) {
        uVar16 = local_78;
      }
      *(ulonglong *)(lVar41 + 200) = uVar16;
      if (*(longlong *)(lVar41 + 0x120) != 0) {
        *(ulonglong *)(*(longlong *)(lVar41 + 0x120) + 0x20) = uVar16;
      }
    }
    uVar16 = *(ulonglong *)(lVar41 + 200);
    goto LAB_149596577;
  case 0x18:
    iVar10 = FUN_1495ca815(local_110);
    if (iVar10 == -1 && (int)param_3[1] == 0) {
      pcVar31 = (char *)((longlong)plVar1 + 99);
    }
    else {
      uVar5 = (undefined1)iVar10;
      if ((int)param_3[1] == 0) {
        iVar43 = (int)plVar1[5];
        if (2 < iVar43) {
          lVar41 = 2;
          lVar45 = 0x48;
          do {
            if (((-1 < iVar10) &&
                (lVar44 = **(longlong **)(*(longlong *)(plVar1[4] + lVar45) + 8),
                *(char *)(lVar44 + 0x10) == '\0')) &&
               ((*(longlong *)(lVar44 + 0x120) == 0 ||
                (*(char *)(*(longlong *)(lVar44 + 0x120) + 0x3f) != '\x02')))) {
              *(undefined1 *)(lVar44 + 8) = uVar5;
              iVar43 = (int)plVar1[5];
            }
            lVar41 = lVar41 + 1;
            lVar45 = lVar45 + 0x20;
          } while (lVar41 < iVar43);
        }
        *(undefined1 *)((longlong)plVar1 + 99) = uVar5;
      }
      lVar41 = **(longlong **)(puVar33[1] + 8);
      if (((-1 < iVar10) && (*(char *)(lVar41 + 0x10) == '\0')) &&
         ((*(longlong *)(lVar41 + 0x120) == 0 ||
          (*(char *)(*(longlong *)(lVar41 + 0x120) + 0x3f) != '\x02')))) {
        *(undefined1 *)(lVar41 + 8) = uVar5;
      }
      pcVar31 = (char *)(lVar41 + 8);
    }
    pcVar18 = "normal";
    if (*pcVar31 == '\x01') {
      pcVar18 = "exclusive";
    }
    FUN_1495ca61c(plVar14,pcVar18);
    break;
  case 0x19:
    plVar21 = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      plVar21 = param_1;
    }
    if (((*(uint *)((longlong)plVar21 + 0x74) >> (uVar9 & 0x1f) & 1) == 0) &&
       (*(uint *)((longlong)plVar21 + 0x74) =
             *(uint *)((longlong)plVar21 + 0x74) | 1 << (bVar4 & 0x1f), uVar9 == 1)) {
      FUN_14955dea7(plVar21);
    }
    iVar10 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = iVar10;
    if ((*local_100 & 0xdf) == 0x50) {
      local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
      uVar30 = 0xa8;
    }
    else {
      local_78 = local_78 & 0xffffffff00000000;
      if (local_110 == (byte *)0x0) {
        iVar43 = 0;
      }
      else {
        FUN_149581ec6(local_110,&local_78);
        iVar43 = 0x7fffffff;
        if (!SBORROW4(0,(uint)local_78)) {
          iVar43 = -(uint)local_78;
        }
        if (-1 < (int)(uint)local_78) {
          iVar43 = (uint)local_78;
        }
      }
      local_148 = (ulonglong *)CONCAT44(local_148._4_4_,iVar43);
      uVar30 = 0xa9;
    }
    FUN_149584f48(plVar14,uVar30,uVar9,iVar10);
    uVar16 = (ulonglong)local_148 >> 0x20;
LAB_1495984f8:
    local_148 = (ulonglong *)(uVar16 << 0x20);
    uVar30 = 0x50;
    uVar39 = 1;
    goto LAB_1495984fe;
  case 0x1a:
    local_b8 = pcVar31;
    if (local_110 != (byte *)0x0) {
      FUN_14955d462(local_110,&local_78);
      puVar33 = local_f8;
      if ((longlong)local_78 < 0) {
        local_78 = DAT_14c765e20;
      }
      uVar16 = local_78;
      if ((int)param_3[1] == 0) {
        plVar1[8] = local_78;
      }
      lVar41 = (longlong)(int)plVar1[5];
      if (0 < lVar41) {
        uVar37 = lVar41 + 1;
        lVar41 = lVar41 * 0x20 + -0x18;
        do {
          if ((*(longlong *)(plVar1[4] + lVar41) != 0) &&
             ((uVar37 - (longlong)puVar33 == 2 || ((int)param_3[1] == 0)))) {
            FUN_1495ca9d5(*(longlong *)(plVar1[4] + lVar41),uVar16);
          }
          uVar37 = uVar37 - 1;
          lVar41 = lVar41 + -0x20;
        } while (1 < uVar37);
      }
    }
    local_78 = 0xffffffffffffffff;
    iVar10 = FUN_14955d1e1(plVar1,local_b8,0x12);
    if (iVar10 != 0xc) {
      uVar16 = local_78;
      if (iVar10 == 0) goto LAB_149596577;
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
      *(int *)(param_1 + 3) = iVar10;
    }
    break;
  case 0x1b:
    *(undefined4 *)(param_1 + 7) = 1;
    for (puVar33 = (undefined8 *)plVar1[0x40]; puVar33 != (undefined8 *)0x0;
        puVar33 = (undefined8 *)*puVar33) {
      FUN_1495caccc(plVar14,1,&DAT_14a1750e5,*(undefined8 *)(puVar33[2] + 8));
    }
    break;
  case 0x1c:
    uVar12 = 0;
    if (local_110 != (byte *)0x0) {
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      FUN_149581ec6(local_110,&local_78);
      uVar12 = (uint)local_78;
      if ((local_78 & 2) == 0) goto LAB_14959848e;
    }
    local_f0 = (ulonglong *)(ulonglong)*(uint *)((longlong)param_1 + 0x34);
    *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) + 1;
    if (pcVar31 == (char *)0x0) {
      if ((int)uVar9 < (int)plVar1[5]) {
        uVar9 = (int)plVar1[5] - 1;
        goto LAB_14959699f;
      }
    }
    else {
LAB_14959699f:
      local_e0 = (char *)(ulonglong)(uVar12 & 1);
      local_d0 = (int *)CONCAT44(local_d0._4_4_,(uVar12 & 1) + 2);
      puVar33 = local_f8;
      do {
        iVar10 = 1;
        if (puVar33 != (undefined8 *)&DAT_00000001) {
          plVar21 = (longlong *)param_1[0x14];
          if ((longlong *)param_1[0x14] == (longlong *)0x0) {
            plVar21 = param_1;
          }
          if ((*(uint *)((longlong)plVar21 + 0x74) >> ((uint)puVar33 & 0x1f) & 1) == 0) {
            *(uint *)((longlong)plVar21 + 0x74) =
                 *(uint *)((longlong)plVar21 + 0x74) | 1 << ((byte)puVar33 & 0x1f);
          }
          uVar16 = (longlong)puVar33 * 0x20;
          uVar38 = uVar16;
          puVar3 = puVar33;
          uVar37 = local_108;
          puVar2 = local_f8;
          puVar36 = local_f0;
          for (puVar25 = *(undefined8 **)(*(longlong *)(plVar1[4] + 0x18 + uVar16) + 0x10);
              local_f8 = puVar3, local_108 = uVar38, local_f0 = puVar36,
              puVar25 != (undefined8 *)0x0; puVar25 = (undefined8 *)*puVar25) {
            puVar2 = (undefined8 *)puVar25[2];
            if ((*(byte *)((longlong)puVar2 + 0x41) & 1) != 0) {
              for (lVar41 = puVar2[2]; lVar41 != 0; lVar41 = *(longlong *)(lVar41 + 0x28)) {
                if ((*(byte *)(lVar41 + 100) & 0x80) == 0) goto LAB_149596a9d;
              }
              sVar42 = *(short *)((longlong)puVar2 + 0x4a) + 0x2e;
              if (sVar42 != 0) {
                local_148._4_4_ = (uint)((ulonglong)local_148 >> 0x20);
                local_148._0_4_ = 0x60;
                FUN_14959b02c(param_1,(ulonglong)puVar36 & 0xffffffff,
                              (ulonglong)puVar33 & 0xffffffff,puVar2);
                uVar16 = local_108;
                local_148 = (ulonglong *)CONCAT44(local_148._4_4_,(int)sVar42);
                FUN_149584f48(plVar14,0x22,(ulonglong)puVar36 & 0xffffffff,
                              (int)plVar14[0x12] + (int)local_d0);
              }
LAB_149596a9d:
              uVar30 = FUN_14955a402(plVar1,"ANALYZE \"%w\".\"%w\"",
                                     *(undefined8 *)(plVar1[4] + uVar16),*puVar2);
              if ((int)local_e0 == 0) {
                local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
                uVar13 = FUN_149584f48(plVar14,0x8c,0,0);
                FUN_14955a5b6(plVar14,uVar13,uVar30,0xfffffff9);
                puVar33 = local_f8;
              }
              else {
                if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
                  iVar10 = (int)param_1[7] + 1;
                  *(int *)(param_1 + 7) = iVar10;
                }
                else {
                  bVar4 = *(char *)((longlong)param_1 + 0x1f) - 1;
                  *(byte *)((longlong)param_1 + 0x1f) = bVar4;
                  iVar10 = *(int *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0xcc);
                }
                local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
                uVar13 = FUN_149584f48(plVar14,0x73,0,iVar10);
                FUN_14955a5b6(plVar14,uVar13,uVar30,0xfffffff9);
                local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
                FUN_149584f48(plVar14,0x50,iVar10,1);
                puVar33 = local_f8;
                uVar16 = local_108;
              }
            }
            uVar38 = local_108;
            puVar3 = local_f8;
            uVar37 = local_108;
            puVar2 = local_f8;
            puVar36 = local_f0;
          }
          iVar10 = (int)puVar33;
          local_108 = uVar37;
          local_f8 = puVar2;
        }
        puVar33 = (undefined8 *)((longlong)puVar33 + 1);
      } while (iVar10 < (int)uVar9);
    }
    local_148 = (ulonglong *)((ulonglong)local_148 & 0xffffffff00000000);
    uVar30 = 0x9e;
    iVar10 = 0;
    uVar39 = 0;
    goto LAB_1495984fe;
  case 0x1d:
    lVar41 = puVar33[1];
    if (local_110 != (byte *)0x0) {
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      FUN_149581ec6(local_110,&local_78);
      *(uint *)((longlong)plVar1 + 0x6c) = (uint)local_78;
      iVar10 = FUN_14955d2a6(lVar41,local_78 & 0xffffffff,0xffffffff,0);
      if (((iVar10 == 7) && (*(char *)((longlong)plVar1 + 0x61) == '\0')) &&
         (*(char *)((longlong)plVar1 + 0x62) == '\0')) {
        *(undefined1 *)((longlong)plVar1 + 0x61) = 1;
        if (0 < *(int *)((longlong)plVar1 + 0xd4)) {
          *(undefined4 *)(plVar1 + 0x2e) = 1;
        }
        *(int *)(plVar1 + 0x2f) = (int)plVar1[0x2f] + 1;
        *(undefined2 *)((longlong)plVar1 + 0x17c) = 0;
        if (plVar1[0x27] != 0) {
          *(undefined4 *)(plVar1[0x27] + 0x18) = 7;
        }
      }
      goto LAB_14959848e;
    }
    if (lVar41 == 0) goto LAB_149596379;
    uVar16 = (ulonglong)*(int *)(*(longlong *)(lVar41 + 8) + 0x30);
    goto LAB_149596c04;
  case 0x1e:
    lVar41 = 0;
    do {
      FUN_1495caccc(plVar14,1,&DAT_14a1750e5,
                    *(undefined8 *)((longlong)&PTR_s_application_id_14bd42600 + lVar41));
      lVar41 = lVar41 + 0x18;
    } while (lVar41 != 0x600);
    break;
  case 0x1f:
    uVar30 = puVar33[1];
    uVar16 = 0xffffffff;
    if (local_110 != (byte *)0x0) {
      lVar41 = 0;
      do {
        bVar4 = local_110[lVar41];
        if (bVar4 == (&DAT_14bd48104)[lVar41]) {
          if ((ulonglong)bVar4 == 0) goto LAB_14959840a;
        }
        else if ((&DAT_14bd3ff30)[bVar4] != (&DAT_14bd3ff30)[(byte)(&DAT_14bd48104)[lVar41]]) {
          cVar6 = FUN_1495cab54(local_110,1,0);
          uVar16 = (ulonglong)(cVar6 != '\0');
          goto LAB_149598426;
        }
        lVar41 = lVar41 + 1;
      } while( true );
    }
    goto LAB_1495960ac;
  case 0x20:
    FUN_14955c5c1(plVar1);
    break;
  case 0x21:
    if ((local_110 != (byte *)0x0) && (iVar10 = FUN_14955d462(local_110,&local_78), iVar10 == 0)) {
      FUN_1495538ae(local_78);
    }
    uVar16 = DAT_14cc1eba0;
    if (DAT_14cc1eb98 != 0) {
      (*DAT_14c765d78)();
      uVar16 = DAT_14cc1eba0;
      goto LAB_1495981e6;
    }
    goto LAB_149596577;
  case 0x22:
    if (local_110 != (byte *)0x0) {
      if (*(char *)((longlong)plVar1 + 0x5f) == '\0') {
        pcVar31 = "Safety level may not be changed inside a transaction";
LAB_149597e78:
        FUN_14955a364(param_1,pcVar31);
      }
      else if (uVar9 != 1) {
        cVar6 = FUN_1495cab54(local_110,0,1);
        bVar7 = cVar6 + 1U & 7;
        bVar4 = 1;
        if (1 < bVar7) {
          bVar4 = bVar7;
        }
        *(byte *)(puVar33 + 2) = bVar4;
        *(undefined1 *)((longlong)puVar33 + 0x11) = 1;
        goto LAB_149598486;
      }
      goto LAB_14959848e;
    }
    uVar16 = (ulonglong)*(byte *)(puVar33 + 2) - 1;
    goto LAB_149596c04;
  case 0x23:
    local_108 = uVar16;
    if (local_110 != (byte *)0x0) {
      local_c0 = FUN_14955a08c(param_1,2,local_110,pcVar31);
      if (local_c0 == 0) goto LAB_14959848e;
      uVar9 = 0xfff0bdc0;
      if (*(longlong *)(local_c0 + 0x70) != 0) {
        uVar9 = 0xffffffff;
        plVar21 = (longlong *)(plVar1[4] + 0x18);
        do {
          uVar9 = uVar9 + 1;
          lVar41 = *plVar21;
          plVar21 = plVar21 + 4;
        } while (lVar41 != *(longlong *)(local_c0 + 0x70));
      }
      lVar41 = *(longlong *)(local_c0 + 0x10);
      if (lVar41 == 0) {
        local_f8 = (undefined8 *)CONCAT71(local_f8._1_7_,1);
      }
      else {
        do {
          bVar46 = (*(uint *)(lVar41 + 100) & 3) == 2;
          local_f8 = (undefined8 *)CONCAT71(local_f8._1_7_,!bVar46);
          if (bVar46) goto LAB_149596724;
          lVar41 = *(longlong *)(lVar41 + 0x28);
        } while (lVar41 != 0);
      }
      lVar41 = 0;
LAB_149596724:
      *(undefined4 *)(param_1 + 7) = 7;
      plVar21 = (longlong *)param_1[0x14];
      if ((longlong *)param_1[0x14] == (longlong *)0x0) {
        plVar21 = param_1;
      }
      if (((*(uint *)((longlong)plVar21 + 0x74) >> (uVar9 & 0x1f) & 1) == 0) &&
         (*(uint *)((longlong)plVar21 + 0x74) =
               *(uint *)((longlong)plVar21 + 0x74) | 1 << ((byte)uVar9 & 0x1f), uVar9 == 1)) {
        FUN_14955dea7(plVar21);
      }
      uVar16 = local_c0;
      FUN_1495a8238(param_1,local_c0);
      uVar9 = (uint)*(short *)(uVar16 + 0x46);
      if (0 < *(short *)(uVar16 + 0x46)) {
        puVar33 = *(undefined8 **)(local_c0 + 8);
        iVar43 = 0;
        iVar10 = 0;
        uVar16 = local_108;
        uVar12 = uVar9;
        do {
          uVar8 = *(ushort *)((longlong)puVar33 + 0x1c);
          if ((uVar8 & 0x62) == 0) {
            bVar46 = true;
            local_f0 = (ulonglong *)((ulonglong)local_f0._4_4_ << 0x20);
LAB_1495967cc:
            uVar37 = (ulonglong)(uVar8 & 1);
            if (((uVar8 & 1) != 0 && (char)local_f8 == '\0') && (uVar37 = 1, 0 < (int)uVar9)) {
              uVar37 = 1;
              do {
                if (iVar43 == *(short *)(*(longlong *)(lVar41 + 8) + -2 + uVar37 * 2))
                goto LAB_1495967e9;
                uVar37 = uVar37 + 1;
              } while (uVar9 + 1 != uVar37);
              uVar37 = (ulonglong)(uVar9 + 1);
            }
LAB_1495967e9:
            if (bVar46 && puVar33[1] != 0) {
              local_d0 = *(int **)(puVar33[1] + 8);
            }
            else {
              local_d0 = (int *)0x0;
            }
            local_b8 = (char *)CONCAT71(local_b8._1_7_,*(char *)(puVar33 + 3) != '\0');
            pcVar31 = (char *)*puVar33;
            pcVar18 = "";
            local_e0 = pcVar31;
            if ((uVar8 & 4) != 0) {
              sVar19 = strlen(pcVar31);
              pcVar18 = pcVar31 + sVar19 + 1;
            }
            uVar16 = local_108;
            pcVar31 = "issisii";
            if (*(longlong *)(local_108 + 0x10) == 0) {
              pcVar31 = "issisi";
            }
            local_120 = (char *)CONCAT44(local_120._4_4_,(undefined4)local_f0);
            local_128 = (char *)CONCAT44(local_128._4_4_,(int)uVar37);
            local_130 = local_d0;
            local_138 = (ulonglong *)CONCAT44(local_138._4_4_,(uint)(byte)local_b8);
            local_148 = (ulonglong *)local_e0;
            local_140 = pcVar18;
            FUN_1495caccc(plVar14,1,pcVar31,iVar43 - iVar10);
            uVar12 = (uint)*(ushort *)(local_c0 + 0x46);
          }
          else {
            if (*(longlong *)(uVar16 + 0x10) != 0) {
              if ((uVar8 & 0x20) == 0) {
                bVar46 = (uVar8 & 0x40) == 0;
                local_f0 = (ulonglong *)CONCAT44(local_f0._4_4_,((uVar8 & 0x40) >> 5) + 1);
              }
              else {
                local_f0 = (ulonglong *)CONCAT44(local_f0._4_4_,2);
                bVar46 = false;
              }
              goto LAB_1495967cc;
            }
            iVar10 = iVar10 + 1;
          }
          iVar43 = iVar43 + 1;
          puVar33 = puVar33 + 4;
          uVar9 = (uint)(short)uVar12;
        } while (iVar43 < (int)uVar9);
      }
      break;
    }
    goto LAB_149595594;
  case 0x24:
    if (local_110 != (byte *)0x0) {
      FUN_1495caa2e(param_1,local_110);
      goto LAB_14959848e;
    }
    uVar16 = (ulonglong)*(byte *)(plVar1 + 0xc);
LAB_149596c04:
    FUN_1495ca730(plVar14,uVar16);
    pbVar15 = local_100;
    goto LAB_149595594;
  case 0x25:
    puVar29 = DAT_14cc1ecc0;
    if (local_110 != (byte *)0x0) {
      if ((*local_110 != 0) &&
         ((iVar10 = (**(code **)(*plVar1 + 0x38))(*plVar1,local_110,1,&local_78), iVar10 != 0 ||
          ((uint)local_78 == 0)))) {
        pcVar31 = "not a writable directory";
        goto LAB_149597e78;
      }
      if (*(byte *)(plVar1 + 0xc) < 2) {
        FUN_1495caaf6(param_1);
      }
      FUN_145e3b961(DAT_14cc1ecc0);
      if (*local_110 == 0) {
        DAT_14cc1ecc0 = (undefined *)0x0;
      }
      else {
        DAT_14cc1ecc0 = (undefined *)FUN_1495558d3(&DAT_149dfbe46,local_110);
      }
      goto LAB_14959848e;
    }
LAB_14959566f:
    FUN_1495ca61c(plVar14,puVar29);
    pbVar15 = local_100;
    goto LAB_149595594;
  case 0x26:
    if ((local_110 != (byte *)0x0) &&
       (iVar10 = FUN_14955d462(local_110,&local_78), -1 < (longlong)local_78 && iVar10 == 0)) {
      uVar12 = (uint)local_78 & 0x7fffffff;
      uVar9 = 8;
      if (uVar12 < 8) {
        uVar9 = uVar12;
      }
      *(uint *)(plVar1 + 0x15) = uVar9;
    }
    uVar16 = (ulonglong)(int)plVar1[0x15];
    goto LAB_149596577;
  case 0x27:
    if (local_110 != (byte *)0x0) {
      local_78 = (ulonglong)local_78._4_4_ << 0x20;
      FUN_149581ec6(local_110,&local_78);
      FUN_14955cbee(plVar1,local_78 & 0xffffffff);
    }
    if ((code *)plVar1[0x28] == FUN_14955cc7e) {
      uVar16 = (ulonglong)(int)plVar1[0x29];
    }
    else {
      uVar16 = 0;
    }
LAB_149596577:
    FUN_1495ca730(plVar14,uVar16);
    break;
  case 0x28:
    if (*param_3 == 0) {
      uVar9 = 10;
    }
    if (local_110 != (byte *)0x0) {
      lVar41 = 0;
      do {
        bVar4 = local_110[lVar41];
        if (bVar4 == (&DAT_14bd48387)[lVar41]) {
          if ((ulonglong)bVar4 == 0) goto LAB_14959851b;
        }
        else if ((&DAT_14bd3ff30)[bVar4] != (&DAT_14bd3ff30)[(byte)(&DAT_14bd48387)[lVar41]]) {
          lVar41 = 0;
          goto LAB_14959852f;
        }
        lVar41 = lVar41 + 1;
      } while( true );
    }
LAB_149597ba9:
    uVar30 = 0;
    goto LAB_149597bac;
  }
LAB_149595579:
  FUN_14955d65a(plVar1,local_100);
  pbVar15 = local_110;
  if (local_110 != (byte *)0x0) {
LAB_149595594:
    FUN_14955d65a(plVar1,pbVar15);
  }
LAB_1495952c0:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14959852f:
  bVar4 = local_110[lVar41];
  if (bVar4 == "restart"[lVar41]) {
    if ((ulonglong)bVar4 == 0) goto LAB_1495985b7;
  }
  else if ((&DAT_14bd3ff30)[bVar4] != (&DAT_14bd3ff30)[(byte)"restart"[lVar41]]) {
    lVar41 = 0;
    goto LAB_1495985cb;
  }
  lVar41 = lVar41 + 1;
  goto LAB_14959852f;
LAB_1495985cb:
  bVar4 = local_110[lVar41];
  if (bVar4 == "truncate"[lVar41]) {
    if ((ulonglong)bVar4 == 0) goto LAB_1495985f4;
  }
  else if ((&DAT_14bd3ff30)[bVar4] != (&DAT_14bd3ff30)[(byte)"truncate"[lVar41]])
  goto LAB_149597ba9;
  lVar41 = lVar41 + 1;
  goto LAB_1495985cb;
LAB_1495985f4:
  uVar30 = 3;
  goto LAB_149597bac;
LAB_1495985b7:
  uVar30 = 2;
  goto LAB_149597bac;
LAB_14959851b:
  uVar30 = 1;
LAB_149597bac:
  *(undefined4 *)(param_1 + 7) = 3;
  local_148._0_4_ = 1;
  FUN_149584f48(plVar14,6,uVar9,uVar30);
  local_148 = (ulonglong *)((ulonglong)local_148._4_4_ << 0x20);
  uVar30 = 0x50;
  iVar10 = 1;
  uVar39 = 3;
LAB_1495984fe:
  FUN_149584f48(plVar14,uVar30,iVar10,uVar39);
  goto LAB_149595579;
LAB_14959840a:
  uVar16 = 2;
LAB_149598426:
  if (((int)param_3[1] == 0) && (0 < (int)plVar1[5])) {
    lVar41 = 8;
    lVar45 = 0;
    do {
      FUN_1495ca7a5(*(undefined8 *)(plVar1[4] + lVar41),uVar16);
      lVar45 = lVar45 + 1;
      lVar41 = lVar41 + 0x20;
    } while (lVar45 < (int)plVar1[5]);
  }
LAB_1495960ac:
  uVar9 = FUN_1495ca7a5(uVar30,uVar16);
  uVar16 = (ulonglong)uVar9;
  goto LAB_149596577;
LAB_14959552a:
  puVar27 = ppuVar17[2];
  ppuVar17 = ppuVar17 + 2;
  if (puVar27 == (undefined1 *)0x0) goto code_r0x000149595537;
  goto LAB_1495954ff;
code_r0x000149595537:
  FUN_14955a364(param_1,"unsupported encoding: %s");
  goto LAB_149595579;
}



// FUNCTION 1495985ff FUN_1495985ff body=1231 status=ok
// SIG undefined FUN_1495985ff(void)

void FUN_1495985ff(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  size_t sVar4;
  void *_Dst;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong _Size;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined8 local_d0;
  void *local_c8;
  longlong local_b8;
  longlong local_b0;
  char *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  char *local_88;
  uint local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  char *local_58;
  char **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar11 = *param_1;
  puVar5 = (undefined8 *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (puVar5 == (undefined8 *)0x0 || (int)param_1[6] != 0) goto LAB_149598897;
  iVar10 = -1000000;
  if (puVar5[5] != 0) {
    iVar10 = -1;
    plVar8 = (longlong *)(*(longlong *)(lVar11 + 0x20) + 0x18);
    do {
      iVar10 = iVar10 + 1;
      lVar6 = *plVar8;
      plVar8 = plVar8 + 4;
    } while (lVar6 != puVar5[5]);
  }
  local_a8 = (char *)*puVar5;
  puVar5[7] = param_2;
  local_88 = local_a8;
  if (param_2 != 0) {
    do {
      *(undefined8 **)(param_2 + 8) = puVar5;
      param_2 = *(longlong *)(param_2 + 0x48);
    } while (param_2 != 0);
    local_88 = (char *)*puVar5;
  }
  local_80 = 0;
  local_b8 = lVar11;
  local_90 = param_3;
  if (local_88 != (char *)0x0) {
    sVar4 = strlen(local_88);
    local_80 = (uint)sVar4 & 0x3fffffff;
  }
  local_50 = &local_88;
  local_b0 = (longlong)iVar10 * 0x20;
  local_60 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + local_b0);
  local_70 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + 0x18 + local_b0);
  local_58 = "trigger";
  local_68 = iVar10 == 1;
  lVar6 = puVar5[7];
  local_a0 = param_1;
  local_78 = param_1;
  if (lVar6 != 0) {
    param_2 = 0;
    do {
      iVar2 = FUN_1495aa36b(&local_78,*(undefined8 *)(lVar6 + 0x10));
      lVar11 = local_b8;
      if ((iVar2 != 0) ||
         (iVar2 = FUN_1495aa4cc(&local_78,*(undefined8 *)(lVar6 + 0x20)), lVar11 = local_b8,
         iVar2 != 0)) goto LAB_149598897;
      piVar1 = *(int **)(lVar6 + 0x28);
      if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
        piVar9 = piVar1 + 2;
        iVar2 = 0;
        do {
          iVar3 = FUN_1495aa4cc(&local_78,*(undefined8 *)piVar9);
          lVar11 = local_b8;
          if (iVar3 != 0) goto LAB_149598897;
          iVar2 = iVar2 + 1;
          piVar9 = piVar9 + 8;
        } while (iVar2 < *piVar1);
      }
      puVar12 = *(undefined8 **)(lVar6 + 0x38);
      if (puVar12 != (undefined8 *)0x0) {
        piVar1 = (int *)*puVar12;
        local_98 = puVar12;
        if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
          piVar9 = piVar1 + 2;
          iVar2 = 0;
          do {
            iVar3 = FUN_1495aa4cc(&local_78,*(undefined8 *)piVar9);
            lVar11 = local_b8;
            if (iVar3 != 0) goto LAB_149598897;
            iVar2 = iVar2 + 1;
            piVar9 = piVar9 + 8;
          } while (iVar2 < *piVar1);
        }
        puVar12 = local_98;
        iVar2 = FUN_1495aa4cc(&local_78,local_98[1]);
        lVar11 = local_b8;
        if (iVar2 != 0) goto LAB_149598897;
        piVar1 = (int *)puVar12[2];
        if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
          piVar9 = piVar1 + 2;
          iVar2 = 0;
          do {
            iVar3 = FUN_1495aa4cc(&local_78,*(undefined8 *)piVar9);
            lVar11 = local_b8;
            if (iVar3 != 0) goto LAB_149598897;
            iVar2 = iVar2 + 1;
            piVar9 = piVar9 + 8;
          } while (iVar2 < *piVar1);
        }
        iVar2 = FUN_1495aa4cc(&local_78,local_98[3]);
        lVar11 = local_b8;
        if (iVar2 != 0) goto LAB_149598897;
      }
      lVar6 = *(longlong *)(lVar6 + 0x48);
    } while (lVar6 != 0);
  }
  iVar2 = FUN_1495aa4cc(&local_78,puVar5[3]);
  plVar8 = local_a0;
  lVar11 = local_b8;
  if (iVar2 == 0) {
    if (*(byte *)((longlong)local_a0 + 0x114) < 2) {
      puVar12 = puVar5;
      if (*(char *)(local_b8 + 0xb5) == '\0') {
        lVar6 = local_a0[2];
        if (lVar6 == 0) {
          if ((local_a0[0x14] == 0) && ((*(byte *)(*local_a0 + 0x5c) & 8) == 0)) {
            *(undefined1 *)((longlong)local_a0 + 0x23) = 1;
          }
          lVar6 = FUN_14955a44a(local_a0);
          if (lVar6 == 0) goto LAB_149598774;
        }
        _Dst = (void *)0x0;
        FUN_1495a3043(plVar8,0,iVar10);
        _Src = (void *)*local_90;
        if (_Src != (void *)0x0) {
          _Size = (ulonglong)*(uint *)(local_90 + 1);
          _Dst = (void *)FUN_14955d750(lVar11,_Size + 1);
          if (_Dst == (void *)0x0) {
            _Dst = (void *)0x0;
            plVar8 = local_a0;
            lVar11 = local_b8;
          }
          else {
            memcpy(_Dst,_Src,_Size);
            *(undefined1 *)((longlong)_Dst + _Size) = 0;
            plVar8 = local_a0;
            lVar11 = local_b8;
          }
        }
        local_d0 = puVar5[1];
        local_d8 = local_a8;
        local_c8 = _Dst;
        FUN_1495a3e15(plVar8,"INSERT INTO %Q.%s VALUES(\'trigger\',%Q,%Q,0,\'CREATE TRIGGER %q\')",
                      *(undefined8 *)(*(longlong *)(lVar11 + 0x20) + local_b0),"sqlite_master");
        if (_Dst != (void *)0x0) {
          FUN_14955d65a(lVar11,_Dst);
        }
        local_d8 = (char *)CONCAT44(local_d8._4_4_,
                                    **(int **)(*(longlong *)(*plVar8 + 0x20) + 0x18 + local_b0) + 1)
        ;
        FUN_149584f48(plVar8[2],0x5e,iVar10,1);
        uVar7 = FUN_14955a402(lVar11,"type=\'trigger\' AND name=\'%q\'",local_a8);
        FUN_1495a3f28(lVar6,iVar10,uVar7);
      }
    }
    else {
      local_a0[0x2a] = (longlong)puVar5;
      puVar12 = (undefined8 *)0x0;
    }
    puVar5 = puVar12;
    if (*(char *)(lVar11 + 0xb5) != '\0') {
      puVar5 = (undefined8 *)
               FUN_14958256b(*(longlong *)(*(longlong *)(lVar11 + 0x20) + 0x18 + local_b0) + 0x38,
                             local_a8,puVar12);
      if (puVar5 != (undefined8 *)0x0) {
        if ((*(char *)(lVar11 + 0x61) == '\0') && (*(char *)(lVar11 + 0x62) == '\0')) {
          *(undefined1 *)(lVar11 + 0x61) = 1;
          if (0 < *(int *)(lVar11 + 0xd4)) {
            *(undefined4 *)(lVar11 + 0x170) = 1;
          }
          *(int *)(lVar11 + 0x178) = *(int *)(lVar11 + 0x178) + 1;
          *(undefined2 *)(lVar11 + 0x17c) = 0;
          if (*(longlong *)(lVar11 + 0x138) != 0) {
            *(undefined4 *)(*(longlong *)(lVar11 + 0x138) + 0x18) = 7;
          }
        }
        param_2 = 0;
        goto LAB_149598897;
      }
      if (puVar12[5] == puVar12[6]) {
        param_2 = 0;
        lVar6 = FUN_14958201d(puVar12[6] + 8,puVar12[1],0);
        lVar6 = *(longlong *)(lVar6 + 0x10);
        puVar12[8] = *(undefined8 *)(lVar6 + 0x68);
        *(undefined8 **)(lVar6 + 0x68) = puVar12;
        puVar5 = (undefined8 *)0x0;
        goto LAB_149598897;
      }
      puVar5 = (undefined8 *)0x0;
    }
  }
LAB_149598774:
  param_2 = 0;
LAB_149598897:
  FUN_1495536cd(lVar11,puVar5);
  FUN_149586165(lVar11,param_2);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149598acf FUN_149598acf body=1516 status=ok
// SIG undefined FUN_149598acf(void)

void FUN_149598acf(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined4 param_5,longlong param_6,char *param_7,longlong param_8,int param_9,
                  int param_10)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  char *pcVar10;
  char cVar11;
  char *pcVar12;
  char *pcVar13;
  char cVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_a8;
  undefined4 local_a0;
  int local_9c;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_a8 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  if (param_9 != 0) {
    if (*(int *)(param_3 + 8) == 0) {
      local_a0 = param_5;
      uVar15 = 1;
      local_9c = param_4;
      local_50 = param_2;
      if (param_7 == (char *)0x0) goto LAB_149598ca8;
      goto LAB_149598b92;
    }
    pcVar12 = "temporary trigger may not have qualified name";
LAB_149598c98:
    FUN_14955a364(param_1,pcVar12);
    param_6 = local_a8;
    goto LAB_149598ca8;
  }
  local_a0 = param_5;
  local_9c = param_4;
  uVar3 = FUN_1495a2df6(param_1,param_2,param_3,&local_50);
  uVar15 = (ulonglong)uVar3;
  param_6 = local_a8;
  if (param_7 == (char *)0x0 || (int)uVar3 < 0) goto LAB_149598ca8;
LAB_149598b92:
  param_6 = local_a8;
  if (*(char *)(lVar1 + 0x61) != '\0') goto LAB_149598ca8;
  if (((int)uVar15 != 1) && (*(char *)(lVar1 + 0xb5) != '\0')) {
    if (*(longlong *)(param_7 + 0x10) != 0) {
      FUN_14955d65a(lVar1);
    }
    param_7[0x10] = '\0';
    param_7[0x11] = '\0';
    param_7[0x12] = '\0';
    param_7[0x13] = '\0';
    param_7[0x14] = '\0';
    param_7[0x15] = '\0';
    param_7[0x16] = '\0';
    param_7[0x17] = '\0';
  }
  lVar6 = FUN_1495a9ba3(param_1,param_7);
  uVar2 = local_50;
  if (((*(char *)(lVar1 + 0xb5) == '\0') && (lVar6 != 0 && *(int *)(param_3 + 8) == 0)) &&
     (*(longlong *)(lVar6 + 0x70) == *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x38))) {
    uVar15 = 1;
  }
  param_6 = local_a8;
  if (*(char *)(lVar1 + 0x61) != '\0') goto LAB_149598ca8;
  uVar3 = (uint)uVar15;
  local_88 = uVar15 * 0x20;
  local_68 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + local_88);
  local_78 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + 0x18 + local_88);
  local_60 = "trigger";
  local_58 = local_50;
  local_70 = uVar3 == 1;
  local_80 = param_1;
  iVar4 = FUN_1495a9c16(&local_80,param_7);
  param_6 = local_a8;
  if (iVar4 != 0) goto LAB_149598ca8;
  plVar7 = (longlong *)FUN_1495a9ba3(param_1,param_7);
  if (plVar7 == (longlong *)0x0) {
    param_6 = local_a8;
    if (*(char *)(lVar1 + 0xb4) == '\x01') {
      *(byte *)(lVar1 + 0xb8) = *(byte *)(lVar1 + 0xb8) | 1;
    }
    goto LAB_149598ca8;
  }
  if (*(int *)((longlong)plVar7 + 0x54) != 0) {
    pcVar12 = "cannot create triggers on virtual tables";
    goto LAB_149598c98;
  }
  local_90 = plVar7;
  lVar6 = FUN_14958faeb(lVar1,uVar2);
  param_6 = local_a8;
  if (lVar6 == 0) goto LAB_149598ca8;
  local_98 = lVar6;
  iVar4 = FUN_1495a2e5f(param_1,lVar6,"trigger",*local_90);
  if (iVar4 == 0) {
    if ((*(byte *)((longlong)param_1 + 0x114) < 2) &&
       (lVar6 = FUN_14958201d(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18 + local_88) + 0x38,
                              local_98,0), *(longlong *)(lVar6 + 0x10) != 0)) {
      if (param_10 == 0) {
        FUN_14955a364(param_1,"trigger %T already exists",uVar2);
      }
      else {
        plVar7 = (longlong *)param_1[0x14];
        if ((longlong *)param_1[0x14] == (longlong *)0x0) {
          plVar7 = param_1;
        }
        if (((*(uint *)((longlong)plVar7 + 0x74) >> (uVar3 & 0x1f) & 1) == 0) &&
           (*(uint *)((longlong)plVar7 + 0x74) =
                 *(uint *)((longlong)plVar7 + 0x74) | 1 << ((byte)uVar15 & 0x1f), uVar3 == 1)) {
          FUN_14955dea7(plVar7);
        }
      }
    }
    else {
      iVar4 = local_9c;
      if (*local_90 == 0) {
LAB_149598dc0:
        if (local_9c == 0x41 || local_90[3] == 0) {
          if (local_9c != 0x41 || local_90[3] != 0) {
            if (*(byte *)((longlong)param_1 + 0x114) < 2) {
              lVar6 = *(longlong *)(lVar1 + 0x20);
              iVar16 = -1000000;
              if (local_90[0xe] != 0) {
                iVar16 = -1;
                plVar7 = (longlong *)(lVar6 + 0x18);
                do {
                  iVar16 = iVar16 + 1;
                  lVar8 = *plVar7;
                  plVar7 = plVar7 + 4;
                } while (lVar8 != local_90[0xe]);
              }
              uVar2 = *(undefined8 *)(lVar6 + (longlong)iVar16 * 0x20);
              local_b8 = uVar2;
              if (param_9 != 0) {
                local_b8 = *(undefined8 *)(lVar6 + 0x20);
              }
              cVar11 = '\x05';
              if (param_9 == 0) {
                cVar11 = (iVar16 != 1) * '\x02' + '\x05';
              }
              iVar5 = FUN_1495a2d6b(param_1,cVar11,local_98);
              if (iVar5 == 0) {
                pcVar12 = "sqlite_master";
                if (iVar16 == 1) {
                  pcVar12 = "sqlite_temp_master";
                }
                local_b8 = uVar2;
                iVar16 = FUN_1495a2d6b(param_1,0x12,pcVar12,0);
                if (iVar16 == 0) goto LAB_149598ed0;
              }
            }
            else {
LAB_149598ed0:
              if (lVar1 == 0) {
                plVar7 = (longlong *)FUN_145e3bd67(0x48);
              }
              else {
                plVar7 = (longlong *)FUN_14955d750(lVar1,0x48);
              }
              if (plVar7 != (longlong *)0x0) {
                plVar7[7] = 0;
                plVar7[8] = 0;
                plVar7[5] = 0;
                plVar7[6] = 0;
                plVar7[3] = 0;
                plVar7[4] = 0;
                plVar7[1] = 0;
                plVar7[2] = 0;
                *plVar7 = local_98;
                lVar6 = FUN_149559683(lVar1,*(undefined8 *)(param_7 + 0x18));
                plVar7[1] = lVar6;
                plVar7[5] = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18 + local_88);
                plVar7[6] = local_90[0xe];
                *(char *)(plVar7 + 2) = (char)local_a0;
                *(char *)((longlong)plVar7 + 0x11) = '\x02' - ((iVar4 - 0x21U & 0xffffffdf) == 0);
                if (*(byte *)((longlong)param_1 + 0x114) < 2) {
                  if (param_8 == 0) {
                    lVar8 = 0;
                    goto LAB_149599082;
                  }
                  lVar8 = FUN_1495a1c89(lVar1,param_8,1,0);
                }
                else {
                  plVar9 = (longlong *)param_1[0x33];
                  lVar8 = param_8;
                  if (plVar9 != (longlong *)0x0) {
                    do {
                      if (*plVar9 == *(longlong *)(param_7 + 0x18)) {
                        *plVar9 = lVar6;
                        break;
                      }
                      plVar9 = (longlong *)plVar9[3];
                    } while (plVar9 != (longlong *)0x0);
                  }
LAB_149599082:
                  param_8 = 0;
                }
                plVar7[3] = lVar8;
                plVar7[4] = local_a8;
                param_1[0x2a] = (longlong)plVar7;
                param_6 = 0;
                goto LAB_149598ca8;
              }
            }
            goto LAB_149598e0f;
          }
          pcVar10 = "cannot create INSTEAD OF trigger on table: %S";
          pcVar13 = (char *)0x0;
          pcVar12 = param_7;
        }
        else {
          pcVar12 = "AFTER";
          if (local_9c == 0x21) {
            pcVar12 = "BEFORE";
          }
          local_b8 = 0;
          pcVar10 = "cannot create %s trigger on view: %S";
          pcVar13 = param_7;
        }
        FUN_14955a364(param_1,pcVar10,pcVar12,pcVar13);
      }
      else {
        lVar6 = 0;
        do {
          uVar15 = (ulonglong)*(byte *)(*local_90 + lVar6);
          if (uVar15 == 0) {
            cVar14 = (&DAT_14bd3ff30)[(byte)"sqlite_"[lVar6]];
            cVar11 = '\0';
LAB_149598eaa:
            if (cVar11 != cVar14) goto LAB_149598dc0;
            break;
          }
          cVar11 = (&DAT_14bd3ff30)[uVar15];
          cVar14 = (&DAT_14bd3ff30)[(byte)"sqlite_"[lVar6]];
          if (cVar11 != cVar14) goto LAB_149598eaa;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 7);
        FUN_14955a364(param_1,"cannot create trigger on system table");
      }
    }
  }
LAB_149598e0f:
  FUN_14955d65a(lVar1,local_98);
  param_6 = local_a8;
LAB_149598ca8:
  FUN_149582b1a(lVar1,param_7);
  FUN_149582cb1(lVar1,param_6);
  if (param_8 != 0) {
    FUN_14958288e(lVar1,param_8);
  }
  if (param_1[0x2a] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495990da FUN_1495990da body=205 status=ok
// SIG undefined FUN_1495990da(void)

longlong FUN_1495990da(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_1495cb193(param_1,0x7f,param_2,param_6,param_7);
  if (lVar2 == 0) goto LAB_14959913f;
  if (*(byte *)((longlong)param_1 + 0x114) < 2) {
    uVar3 = FUN_1495a22be(uVar1,param_3,1);
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    if (param_4 == 0) {
      lVar4 = 0;
      goto LAB_149599135;
    }
    lVar4 = FUN_1495a1c89(uVar1,param_4,1,0);
  }
  else {
    *(longlong *)(lVar2 + 0x28) = param_3;
    param_3 = 0;
    lVar4 = param_4;
LAB_149599135:
    param_4 = 0;
  }
  *(longlong *)(lVar2 + 0x20) = lVar4;
  *(undefined1 *)(lVar2 + 1) = param_5;
LAB_14959913f:
  if (param_3 != 0) {
    FUN_149582d29(uVar1,param_3);
  }
  if (param_4 != 0) {
    FUN_14958288e(uVar1,param_4);
  }
  return lVar2;
}



// FUNCTION 1495991a7 FUN_1495991a7 body=215 status=ok
// SIG undefined FUN_1495991a7(void)

longlong FUN_1495991a7(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined1 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *param_1;
  lVar2 = FUN_1495cb193(param_1,0x7d,param_2,param_7,param_8);
  if (lVar2 == 0) {
    FUN_149582cb1(uVar1,param_3);
    FUN_1495861f8(uVar1,param_6);
  }
  else {
    if (*(byte *)((longlong)param_1 + 0x114) < 2) {
      lVar3 = FUN_1495a1fd1(uVar1,param_4,1);
    }
    else {
      lVar3 = param_4;
      param_4 = 0;
    }
    *(longlong *)(lVar2 + 0x10) = lVar3;
    *(undefined8 *)(lVar2 + 0x30) = param_3;
    *(undefined8 **)(lVar2 + 0x38) = param_6;
    *(undefined1 *)(lVar2 + 1) = param_5;
    if (param_6 != (undefined8 *)0x0) {
      FUN_1495a9b42(param_1,*param_6);
    }
  }
  if (param_4 != 0) {
    FUN_149582a1c(uVar1,param_4,1);
  }
  return lVar2;
}



// FUNCTION 14959927e FUN_14959927e body=131 status=ok
// SIG undefined FUN_14959927e(void)

longlong FUN_14959927e(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *param_1;
  lVar2 = FUN_1495cb193(param_1,0x7e,param_2,param_4,param_5);
  if (lVar2 == 0) goto LAB_1495992c3;
  lVar3 = param_3;
  if (*(byte *)((longlong)param_1 + 0x114) < 2) {
    if (param_3 == 0) {
      lVar3 = 0;
      goto LAB_1495992b9;
    }
    lVar3 = FUN_1495a1c89(uVar1,param_3,1,0);
  }
  else {
LAB_1495992b9:
    param_3 = 0;
  }
  *(longlong *)(lVar2 + 0x20) = lVar3;
  *(undefined1 *)(lVar2 + 1) = 0xb;
LAB_1495992c3:
  if (param_3 != 0) {
    FUN_14958288e(uVar1,param_3);
  }
  return lVar2;
}



// FUNCTION 149599301 FUN_149599301 body=215 status=ok
// SIG undefined FUN_149599301(void)

undefined2 * FUN_149599301(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  
  if (param_1 == 0) {
    puVar3 = (undefined2 *)FUN_145e3bd67(0x58);
  }
  else {
    puVar3 = (undefined2 *)FUN_14955d750(param_1,0x58);
  }
  if (puVar3 == (undefined2 *)0x0) {
    if (param_2 != 0) {
      FUN_149582a1c(param_1,param_2,1);
    }
  }
  else {
    *(undefined8 *)(puVar3 + 9) = 0;
    *(undefined8 *)(puVar3 + 0xd) = 0;
    *(undefined8 *)(puVar3 + 1) = 0;
    *(undefined8 *)(puVar3 + 5) = 0;
    *(undefined8 *)(puVar3 + 0x21) = 0;
    *(undefined8 *)(puVar3 + 0x25) = 0;
    *(undefined8 *)(puVar3 + 0x19) = 0;
    *(undefined8 *)(puVar3 + 0x1d) = 0;
    *(undefined8 *)(puVar3 + 0x11) = 0;
    *(undefined8 *)(puVar3 + 0x15) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *puVar3 = 0xb88;
    *(longlong *)(puVar3 + 8) = param_2;
    pbVar4 = (byte *)FUN_1495a97c9(param_1,param_3,param_4);
    if (pbVar4 != (byte *)0x0) {
      bVar1 = *pbVar4;
      pbVar2 = pbVar4;
      while (bVar1 != 0) {
        if (((&DAT_14bd400b0)[bVar1] & 1) != 0) {
          *pbVar2 = 0x20;
        }
        bVar1 = pbVar2[1];
        pbVar2 = pbVar2 + 1;
      }
    }
    *(byte **)(puVar3 + 0x20) = pbVar4;
  }
  return puVar3;
}



// FUNCTION 1495993d8 FUN_1495993d8 body=275 status=ok
// SIG undefined FUN_1495993d8(void)

void FUN_1495993d8(longlong *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  
  lVar2 = *param_1;
  if ((*(char *)(lVar2 + 0x61) == '\0') && (iVar5 = FUN_14958537a(), iVar5 == 0)) {
    lVar3 = *(longlong *)(param_2 + 0x10);
    iVar5 = *(int *)(lVar2 + 0x28);
    if (0 < iVar5) {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      uVar8 = 0;
      do {
        uVar7 = (ulonglong)(uVar8 < 2 ^ uVar8);
        if (lVar3 != 0) {
          lVar6 = 0;
          do {
            bVar1 = *(byte *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + uVar7 * 0x20) + lVar6);
            if (bVar1 == *(byte *)(lVar3 + lVar6)) {
              if ((ulonglong)bVar1 == 0) break;
            }
            else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar3 + lVar6)])
            goto LAB_149599494;
            lVar6 = lVar6 + 1;
          } while( true );
        }
        lVar6 = FUN_14958201d(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x18 + uVar7 * 0x20) +
                              0x38,uVar4,0);
        if (*(longlong *)(lVar6 + 0x10) != 0) {
          FUN_1495ab227(param_1);
          goto LAB_1495994c6;
        }
        iVar5 = *(int *)(lVar2 + 0x28);
LAB_149599494:
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar5);
    }
    if (param_3 == 0) {
      FUN_14955a364(param_1,"no such trigger: %S",param_2,0);
    }
    else {
      FUN_1495aabeb(param_1,lVar3);
    }
    *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  }
LAB_1495994c6:
  FUN_149582b1a(lVar2,param_2);
  return;
}



// FUNCTION 1495994eb FUN_1495994eb body=543 status=ok
// SIG undefined FUN_1495994eb(void)

void FUN_1495994eb(longlong *param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  iVar4 = FUN_14958537a();
  if (iVar4 == 0) {
    if (param_2 == 0) {
      lVar2 = *param_1;
      iVar4 = *(int *)(lVar2 + 0x28);
      if (0 < iVar4) {
        lVar7 = *(longlong *)(lVar2 + 0x20);
        iVar9 = 0;
        do {
          plVar8 = *(longlong **)(*(longlong *)(lVar7 + 0x18) + 0x10);
          if (plVar8 != (longlong *)0x0) {
            do {
              FUN_1495cc339(param_1,plVar8[2],0);
              plVar8 = (longlong *)*plVar8;
            } while (plVar8 != (longlong *)0x0);
            iVar4 = *(int *)(lVar2 + 0x28);
          }
          iVar9 = iVar9 + 1;
          lVar7 = lVar7 + 0x20;
        } while (iVar9 < iVar4);
      }
    }
    else {
      if ((param_3 == (longlong *)0x0) || (*param_3 == 0)) {
        lVar7 = FUN_14958faeb(*param_1,param_2);
        if (lVar7 == 0) goto LAB_14959951d;
        bVar1 = *(byte *)(lVar2 + 0x5e);
        lVar6 = FUN_14958201d(lVar2 + 0x240,lVar7,0);
        if ((*(longlong *)(lVar6 + 0x10) != 0) &&
           (*(longlong *)(lVar6 + 0x10) + (ulonglong)bVar1 * 0x28 != 0x28)) {
          lVar2 = *param_1;
          iVar4 = *(int *)(lVar2 + 0x28);
          if (0 < iVar4) {
            lVar6 = *(longlong *)(lVar2 + 0x20);
            iVar9 = 0;
            do {
              plVar8 = *(longlong **)(*(longlong *)(lVar6 + 0x18) + 0x10);
              if (plVar8 != (longlong *)0x0) {
                do {
                  FUN_1495cc339(param_1,plVar8[2],lVar7);
                  plVar8 = (longlong *)*plVar8;
                } while (plVar8 != (longlong *)0x0);
                iVar4 = *(int *)(lVar2 + 0x28);
              }
              iVar9 = iVar9 + 1;
              lVar6 = lVar6 + 0x20;
            } while (iVar9 < iVar4);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
        }
        FUN_14955d65a(lVar2,lVar7);
      }
      uVar5 = FUN_1495a2df6(param_1,param_2,param_3,&local_48);
      if (-1 < (int)uVar5) {
        lVar7 = FUN_14958faeb(lVar2,local_48);
        if (lVar7 != 0) {
          uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)uVar5 * 0x20);
          lVar6 = FUN_14955d004(lVar2,lVar7,uVar3);
          if (lVar6 != 0) {
            FUN_1495cc339(param_1,lVar6,0);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
          }
          lVar6 = FUN_149581e2b(lVar2,lVar7,uVar3);
          FUN_14955d65a(lVar2,lVar7);
          if (lVar6 != 0) {
            FUN_1495a3043(param_1,0,uVar5);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
          }
          FUN_14955a364(param_1,"unable to identify the object to be reindexed");
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
        }
      }
    }
  }
LAB_14959951d:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149599753 FUN_149599753 body=406 status=ok
// SIG undefined FUN_149599753(void)

void FUN_149599753(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  iVar1 = FUN_14958537a();
  if (iVar1 != 0) goto LAB_149599780;
  if (param_2 == 0) {
    iVar1 = *(int *)(lVar3 + 0x28);
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        if (iVar7 != 1) {
          FUN_1495cc425(param_1,iVar7);
          iVar1 = *(int *)(lVar3 + 0x28);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
  }
  else if ((*(int *)(param_3 + 8) == 0) && (iVar1 = FUN_1495a3139(lVar3,param_2), -1 < iVar1)) {
    FUN_1495cc425(param_1,iVar1);
  }
  else {
    uVar2 = FUN_1495a2df6(param_1,param_2,param_3,&local_30);
    if (-1 < (int)uVar2) {
      if (*(int *)(param_3 + 8) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)uVar2 * 0x20);
      }
      lVar4 = FUN_14958faeb(lVar3,local_30);
      if (lVar4 != 0) {
        lVar5 = FUN_149581e2b(lVar3,lVar4,uVar8);
        if (lVar5 == 0) {
          lVar6 = FUN_14955a08c(param_1,0,lVar4,uVar8);
          if (lVar6 != 0) {
            lVar5 = 0;
            goto LAB_1495998da;
          }
        }
        else {
          lVar6 = *(longlong *)(lVar5 + 0x18);
LAB_1495998da:
          FUN_1495cc4c8(param_1,lVar6,lVar5);
        }
        FUN_14955d65a(lVar3,lVar4);
      }
    }
  }
  if (*(char *)(lVar3 + 0x6a) != '\0') {
LAB_149599780:
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar3 = FUN_14955a44a(param_1);
    if (lVar3 == 0) goto LAB_149599780;
  }
  local_38 = 0;
  FUN_149584f48(lVar3,0x9e,0,0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1495998ef FUN_1495998ef body=972 status=ok
// SIG undefined FUN_1495998ef(void)

void FUN_1495998ef(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong *puVar13;
  byte *pbVar14;
  char *pcVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 in_stack_ffffffffffffff80;
  ulonglong uVar21;
  longlong *local_68;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  lVar2 = *param_1;
  uVar1 = *(undefined4 *)(lVar2 + 0x2c);
  if ((*(char *)(lVar2 + 0x61) == '\0') &&
     (puVar8 = (ulonglong *)FUN_1495a8206(param_1,0,param_2 + 8), puVar8 != (ulonglong *)0x0)) {
    iVar16 = -1000000;
    if (puVar8[0xe] != 0) {
      iVar16 = -1;
      puVar13 = (ulonglong *)(*(longlong *)(*param_1 + 0x20) + 0x18);
      do {
        iVar16 = iVar16 + 1;
        uVar9 = *puVar13;
        puVar13 = puVar13 + 4;
      } while (uVar9 != puVar8[0xe]);
    }
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar16 * 0x20);
    *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x2c) | 2;
    uVar9 = FUN_14958faeb(lVar2,param_3);
    if (uVar9 != 0) {
      lVar10 = FUN_14955d004(lVar2,uVar9,uVar3);
      if ((lVar10 == 0) && (lVar10 = FUN_149581e2b(lVar2,uVar9,uVar3), lVar10 == 0)) {
        iVar6 = FUN_1495cd3a3(param_1,puVar8);
        if ((iVar6 == 0) && (iVar6 = FUN_1495a2e5f(param_1,uVar9,"table",uVar9), iVar6 == 0)) {
          if (puVar8[3] != 0) {
            pcVar15 = "view %s may not be altered";
            uVar17 = *puVar8;
            goto LAB_149599a44;
          }
          iVar6 = FUN_1495a2d6b(param_1,0x1a,uVar3,*puVar8,0);
          if ((iVar6 == 0) && (iVar6 = FUN_1495a8238(param_1,puVar8), iVar6 == 0)) {
            if (*(int *)((longlong)puVar8 + 0x54) == 0) {
              local_68 = (longlong *)0x0;
            }
            else {
              for (local_68 = (longlong *)puVar8[0xc]; local_68 != (longlong *)0x0;
                  local_68 = (longlong *)local_68[5]) {
                if (*local_68 == lVar2) goto LAB_149599a8a;
              }
              local_68 = (longlong *)0x0;
LAB_149599a8a:
              if (*(longlong *)(*(longlong *)local_68[2] + 0x98) == 0) {
                local_68 = (longlong *)0x0;
              }
            }
            lVar10 = param_1[2];
            if (lVar10 == 0) {
              if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
                *(undefined1 *)((longlong)param_1 + 0x23) = 1;
              }
              lVar10 = FUN_14955a44a(param_1);
              if (lVar10 == 0) goto LAB_149599a49;
            }
            plVar11 = (longlong *)param_1[0x14];
            if ((longlong *)param_1[0x14] == (longlong *)0x0) {
              plVar11 = param_1;
            }
            *(undefined1 *)((longlong)plVar11 + 0x21) = 1;
            pbVar4 = (byte *)*puVar8;
            bVar5 = *pbVar4;
            uVar18 = 0;
            if (pbVar4 != (byte *)0xffffffffffffffff && bVar5 != 0) {
              uVar18 = 0;
              pbVar14 = pbVar4;
              do {
                if (bVar5 < 0xc0) {
                  pbVar14 = pbVar14 + 1;
                  bVar5 = *pbVar14;
                }
                else {
                  do {
                    bVar5 = pbVar14[1];
                    pbVar14 = pbVar14 + 1;
                  } while (SBORROW1('\0',bVar5 & 0xc0));
                }
                uVar18 = uVar18 + 1;
              } while ((bVar5 != 0) && (pbVar14 != (byte *)0xffffffffffffffff));
            }
            FUN_1495a3e15(param_1,
                          "UPDATE \"%w\".%s SET sql = sqlite_rename_table(%Q, type, name, sql, %Q, %Q, %d) WHERE (type!=\'index\' OR tbl_name=%Q COLLATE nocase)AND   name NOT LIKE \'sqliteX_%%\' ESCAPE \'X\'"
                          ,uVar3,"sqlite_master",uVar3,pbVar4,uVar9,
                          CONCAT44(uVar7,(uint)(iVar16 == 1)),pbVar4);
            uVar21 = (ulonglong)uVar18;
            uVar17 = uVar9;
            uVar19 = uVar9;
            uVar20 = uVar9;
            pbVar14 = pbVar4;
            FUN_1495a3e15(param_1,
                          "UPDATE %Q.%s SET tbl_name = %Q, name = CASE WHEN type=\'table\' THEN %Q WHEN name LIKE \'sqliteX_autoindex%%\' ESCAPE \'X\'      AND type=\'index\' THEN \'sqlite_autoindex_\' || %Q || substr(name,%d+18) ELSE name END WHERE tbl_name=%Q COLLATE nocase AND (type=\'table\' OR type=\'index\' OR type=\'trigger\');"
                          ,uVar3,"sqlite_master",uVar9,uVar9,uVar9,uVar21,pbVar4);
            lVar12 = FUN_14955d004(lVar2,"sqlite_sequence",uVar3);
            if (lVar12 != 0) {
              uVar17 = *puVar8;
              FUN_1495a3e15(param_1,"UPDATE \"%w\".sqlite_sequence set name = %Q WHERE name = %Q",
                            uVar3,uVar9,uVar17,uVar19,uVar20,uVar21,pbVar14);
            }
            if (iVar16 != 1) {
              uVar17 = uVar9;
              FUN_1495a3e15(param_1,
                            "UPDATE sqlite_temp_master SET sql = sqlite_rename_table(%Q, type, name, sql, %Q, %Q, 1), tbl_name = CASE WHEN tbl_name=%Q COLLATE nocase AND           sqlite_rename_test(%Q, sql, type, name, 1) THEN %Q ELSE tbl_name END WHERE type IN (\'view\', \'trigger\')"
                            ,uVar3,pbVar4,uVar9,pbVar4,uVar3,uVar9,pbVar14);
            }
            if (local_68 != (longlong *)0x0) {
              iVar6 = (int)param_1[7] + 1;
              *(int *)(param_1 + 7) = iVar6;
              uVar17 = uVar17 & 0xffffffff00000000;
              uVar7 = FUN_149584f48(lVar10,0x73,0,iVar6,uVar17);
              FUN_14955a5b6(lVar10,uVar7,uVar9,0);
              uVar7 = FUN_149584f48(lVar10,0xa7,iVar6,0,uVar17 & 0xffffffff00000000);
              FUN_14955a5b6(lVar10,uVar7,local_68,0xfffffff4);
            }
            FUN_1495cd430(param_1,iVar16);
            FUN_1495cd4a4(param_1,uVar3,(uint)(iVar16 == 1));
          }
        }
      }
      else {
        pcVar15 = "there is already another table or index with this name: %s";
        uVar17 = uVar9;
LAB_149599a44:
        FUN_14955a364(param_1,pcVar15,uVar17);
      }
LAB_149599a49:
      FUN_149582b1a(lVar2,param_2);
      FUN_14955d65a(lVar2,uVar9);
      goto LAB_149599930;
    }
  }
  FUN_149582b1a(lVar2,param_2);
LAB_149599930:
  *(undefined4 *)(lVar2 + 0x2c) = uVar1;
  return;
}



// FUNCTION 149599cbb FUN_149599cbb body=1062 status=ok
// SIG undefined FUN_149599cbb(void)

void FUN_149599cbb(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *_Src;
  size_t sVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte *_Dst;
  byte *pbVar12;
  longlong *plVar13;
  char *pcVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  byte *local_a0;
  int local_98;
  longlong local_90;
  size_t local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((int)param_1[6] != 0) || (lVar2 = *param_1, *(char *)(lVar2 + 0x61) != '\0')) {
LAB_149599cf3:
    if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_78 = (longlong *)param_1[0x28];
  iVar15 = -1000000;
  if (local_78[0xe] != 0) {
    iVar15 = -1;
    plVar13 = (longlong *)(*(longlong *)(lVar2 + 0x20) + 0x18);
    do {
      iVar15 = iVar15 + 1;
      lVar3 = *plVar13;
      plVar13 = plVar13 + 4;
    } while (lVar3 != local_78[0xe]);
  }
  local_58 = (ulonglong)iVar15;
  lVar16 = local_58 * 0x20;
  uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + lVar16);
  lVar3 = *local_78;
  local_80 = local_78[1];
  lVar17 = (longlong)*(short *)((longlong)local_78 + 0x46) * 0x20;
  local_60 = *(longlong *)((local_80 - 0x18) + lVar17);
  puVar11 = (undefined8 *)FUN_14955d004(lVar2,lVar3 + 0x10,uVar4);
  local_a8 = (longlong *)0x0;
  iVar8 = FUN_1495a2d6b(param_1,0x1a,uVar4,*puVar11);
  uVar6 = local_58;
  if (iVar8 != 0) goto LAB_149599cf3;
  lVar17 = local_80 + lVar17;
  uVar1 = *(ushort *)(lVar17 + -4);
  local_70 = uVar4;
  local_68 = lVar16;
  if ((uVar1 & 1) != 0) {
    pcVar14 = "Cannot add a PRIMARY KEY column";
LAB_149599e0a:
    FUN_14955a364(param_1,pcVar14);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  if (local_78[2] != 0) {
    pcVar14 = "Cannot add a UNIQUE column";
    goto LAB_149599e0a;
  }
  if ((uVar1 & 0x60) == 0) {
    if (local_60 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      if (**(char **)(local_60 + 0x10) != 'w') {
        lVar16 = local_60;
      }
    }
    if ((((*(byte *)(lVar2 + 0x31) & 0x40) != 0) && (local_78[4] != 0)) && (lVar16 != 0)) {
      pcVar14 = "Cannot add a REFERENCES column with non-NULL default value";
      goto LAB_149599e0a;
    }
    if ((*(char *)(lVar17 + -8) != '\0') && (lVar16 == 0)) {
      pcVar14 = "Cannot add a NOT NULL column with default value NULL";
      goto LAB_149599e0a;
    }
    if (lVar16 != 0) {
      local_a8 = &local_50;
      local_50 = 0;
      iVar8 = FUN_14959f32d(lVar2,lVar16,CONCAT71((int7)((ulonglong)lVar17 >> 8),1),0x41);
      if (iVar8 != 0) goto LAB_149599cf3;
      if (local_50 == 0) {
        FUN_14955a364(param_1,"Cannot add a column with non-constant default");
        goto LAB_149599cf3;
      }
      FUN_149559090();
    }
  }
  else if ((uVar1 & 0x40) != 0) {
    pcVar14 = "cannot add a STORED column";
    goto LAB_149599e0a;
  }
  _Src = (void *)*param_2;
  if (_Src != (void *)0x0) {
    local_80 = (size_t)*(uint *)(param_2 + 1);
    _Dst = (byte *)FUN_14955d750(lVar2,local_80 + 1);
    sVar5 = local_80;
    if (_Dst != (byte *)0x0) {
      memcpy(_Dst,_Src,local_80);
      _Dst[sVar5] = 0;
      uVar10 = *(uint *)(lVar2 + 0x2c);
      uVar9 = uVar10;
      if (*(int *)(param_2 + 1) - 1U != 0) {
        pbVar12 = _Dst + (*(int *)(param_2 + 1) - 1U);
        do {
          if (((ulonglong)*pbVar12 != 0x3b) && (((&DAT_14bd400b0)[*pbVar12] & 1) == 0)) break;
          *pbVar12 = 0;
          pbVar12 = pbVar12 + -1;
        } while (_Dst < pbVar12);
        uVar9 = *(uint *)(lVar2 + 0x2c);
      }
      *(uint *)(lVar2 + 0x2c) = uVar9 | 2;
      local_98 = (int)local_78[10] + 1;
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(int)local_78[10]);
      local_a0 = _Dst;
      local_90 = lVar3 + 0x10;
      FUN_1495a3e15(param_1,
                    "UPDATE \"%w\".%s SET sql = substr(sql,1,%d) || \', \' || %Q || substr(sql,%d) WHERE type = \'table\' AND name = %Q"
                    ,local_70,"sqlite_master");
      FUN_14955d65a(lVar2,_Dst);
      *(uint *)(lVar2 + 0x2c) = uVar10;
    }
  }
  plVar13 = (longlong *)param_1[2];
  if (plVar13 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar13 = (longlong *)FUN_14955a44a(param_1);
    if (plVar13 == (longlong *)0x0) goto LAB_14959a0cd;
  }
  if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
    iVar8 = (int)param_1[7] + 1;
    *(int *)(param_1 + 7) = iVar8;
  }
  else {
    bVar7 = *(char *)((longlong)param_1 + 0x1f) - 1;
    *(byte *)((longlong)param_1 + 0x1f) = bVar7;
    iVar8 = *(int *)((longlong)param_1 + (ulonglong)bVar7 * 4 + 0xcc);
  }
  local_a8._0_4_ = 2;
  FUN_149584f48(plVar13,0x5d,uVar6 & 0xffffffff,iVar8);
  uVar10 = 1 << ((byte)uVar6 & 0x1f);
  *(uint *)((longlong)plVar13 + 0xcc) = *(uint *)((longlong)plVar13 + 0xcc) | uVar10;
  if ((iVar15 != 1) &&
     (*(char *)(*(longlong *)(*(longlong *)(*plVar13 + 0x20) + 8 + local_68) + 0x11) != '\0')) {
    *(uint *)(plVar13 + 0x1a) = *(uint *)(plVar13 + 0x1a) | uVar10;
  }
  local_a8._0_4_ = 0;
  FUN_149584f48(plVar13,0x52,iVar8,0xfffffffe);
  local_a8._0_4_ = 0;
  FUN_149584f48(plVar13,0x30,iVar8,(int)plVar13[0x12] + 2);
  local_a8 = (longlong *)CONCAT44(local_a8._4_4_,3);
  FUN_149584f48(plVar13,0x5e,iVar15,2);
  if (iVar8 != 0) {
    bVar7 = *(byte *)((longlong)param_1 + 0x1f);
    if ((ulonglong)bVar7 < 8) {
      *(byte *)((longlong)param_1 + 0x1f) = bVar7 + 1;
      *(int *)((longlong)param_1 + (ulonglong)bVar7 * 4 + 0xcc) = iVar8;
    }
  }
LAB_14959a0cd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14959a104 FUN_14959a104 body=578 status=ok
// SIG undefined FUN_14959a104(void)

void FUN_14959a104(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  void *_Dst;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  char *pcVar12;
  longlong lVar13;
  size_t _Size;
  longlong lVar14;
  
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x61) == '\0') {
    puVar7 = (undefined8 *)FUN_1495a8206(param_1,0,param_2 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      if (*(int *)((longlong)puVar7 + 0x54) == 0) {
        if (puVar7[3] == 0) {
          iVar6 = FUN_1495cd3a3(param_1,puVar7);
          if (iVar6 == 0) {
            plVar8 = (longlong *)param_1[0x14];
            if ((longlong *)param_1[0x14] == (longlong *)0x0) {
              plVar8 = param_1;
            }
            *(undefined1 *)((longlong)plVar8 + 0x21) = 1;
            lVar13 = -1000000;
            if (puVar7[0xe] != 0) {
              lVar13 = -0x100000000;
              plVar8 = (longlong *)(*(longlong *)(lVar4 + 0x20) + 0x18);
              do {
                lVar13 = lVar13 + 0x100000000;
                lVar9 = *plVar8;
                plVar8 = plVar8 + 4;
              } while (lVar9 != puVar7[0xe]);
              lVar13 = lVar13 >> 0x20;
            }
            if (lVar4 == 0) {
              plVar8 = (longlong *)FUN_145e3bd67(0x80);
            }
            else {
              plVar8 = (longlong *)FUN_14955d750(lVar4,0x80);
            }
            if (plVar8 != (longlong *)0x0) {
              plVar8[0xe] = 0;
              plVar8[0xf] = 0;
              plVar8[0xc] = 0;
              plVar8[0xd] = 0;
              plVar8[10] = 0;
              plVar8[0xb] = 0;
              plVar8[8] = 0;
              plVar8[9] = 0;
              plVar8[6] = 0;
              plVar8[7] = 0;
              plVar8[4] = 0;
              plVar8[5] = 0;
              plVar8[2] = 0;
              plVar8[3] = 0;
              *plVar8 = 0;
              plVar8[1] = 0;
              param_1[0x28] = (longlong)plVar8;
              *(undefined4 *)((longlong)plVar8 + 0x3c) = 1;
              sVar3 = *(short *)((longlong)puVar7 + 0x46);
              uVar1 = (int)sVar3 - 1;
              uVar11 = (int)sVar3 + 6;
              if (-1 < (int)uVar1) {
                uVar11 = uVar1;
              }
              _Size = (longlong)(int)(uVar11 & 0xfffffff8) * 0x20 + 0x100;
              *(short *)((longlong)plVar8 + 0x46) = sVar3;
              if (lVar4 == 0) {
                _Dst = (void *)FUN_145e3bd67(_Size);
              }
              else {
                _Dst = (void *)FUN_14955d750(lVar4);
              }
              if (_Dst != (void *)0x0) {
                memset(_Dst,0,_Size);
              }
              plVar8[1] = (longlong)_Dst;
              lVar9 = FUN_14955a402(lVar4,"sqlite_altertab_%s",*puVar7);
              *plVar8 = lVar9;
              if (lVar9 != 0 && (void *)plVar8[1] != (void *)0x0) {
                memcpy((void *)plVar8[1],(void *)puVar7[1],
                       (longlong)*(short *)((longlong)plVar8 + 0x46) << 5);
                if (0 < *(short *)((longlong)plVar8 + 0x46)) {
                  lVar14 = 0;
                  lVar9 = 0;
                  do {
                    lVar5 = plVar8[1];
                    uVar10 = FUN_149559683(lVar4,*(undefined8 *)(lVar5 + lVar14));
                    *(undefined8 *)(lVar5 + lVar14) = uVar10;
                    lVar9 = lVar9 + 1;
                    puVar2 = (undefined8 *)(lVar5 + 8 + lVar14);
                    *puVar2 = 0;
                    puVar2[1] = 0;
                    lVar14 = lVar14 + 0x20;
                  } while (lVar9 < *(short *)((longlong)plVar8 + 0x46));
                }
                plVar8[0xe] = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x18 + lVar13 * 0x20);
                *(undefined4 *)(plVar8 + 10) = *(undefined4 *)(puVar7 + 10);
                *(undefined4 *)((longlong)plVar8 + 0x3c) = 1;
              }
            }
          }
          goto LAB_14959a138;
        }
        pcVar12 = "Cannot add a column to a view";
      }
      else {
        pcVar12 = "virtual tables may not be altered";
      }
      FUN_14955a364(param_1,pcVar12);
    }
  }
LAB_14959a138:
  FUN_149582b1a(lVar4,param_2);
  return;
}



// FUNCTION 14959a346 FUN_14959a346 body=726 status=ok
// SIG undefined FUN_14959a346(void)

void FUN_14959a346(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  longlong lVar15;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar3 = *param_1;
  puVar7 = (undefined8 *)FUN_1495a8206(param_1,0,param_2 + 8);
  if ((puVar7 == (undefined8 *)0x0) || (iVar5 = FUN_1495cd3a3(param_1,puVar7), iVar5 != 0)) {
LAB_14959a4ab:
    FUN_149582b1a(lVar3,param_2);
    return;
  }
  if (*(int *)((longlong)puVar7 + 0x54) != 0 || puVar7[3] != 0) {
    pcVar11 = "view";
    if (puVar7[3] == 0) {
      pcVar11 = (char *)0x0;
    }
    pcVar12 = "virtual table";
    if (*(int *)((longlong)puVar7 + 0x54) == 0) {
      pcVar12 = pcVar11;
    }
    FUN_14955a364(param_1,"cannot rename columns of %s \"%s\"",pcVar12,*puVar7);
    goto LAB_14959a4ab;
  }
  iVar5 = -1000000;
  if (puVar7[0xe] != 0) {
    iVar5 = -1;
    plVar9 = (longlong *)(*(longlong *)(lVar3 + 0x20) + 0x18);
    do {
      iVar5 = iVar5 + 1;
      lVar8 = *plVar9;
      plVar9 = plVar9 + 4;
    } while (lVar8 != puVar7[0xe]);
  }
  uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar5 * 0x20);
  iVar6 = FUN_1495a2d6b(param_1,0x1a,uVar4,*puVar7,0);
  if ((iVar6 != 0) || (lVar8 = FUN_14958faeb(lVar3,param_3), lVar8 == 0)) goto LAB_14959a4ab;
  sVar2 = *(short *)((longlong)puVar7 + 0x46);
  if (0 < sVar2) {
    uVar13 = 0;
LAB_14959a441:
    lVar10 = 0;
    do {
      bVar1 = *(byte *)(*(longlong *)(puVar7[1] + uVar13 * 0x20) + lVar10);
      if (bVar1 == *(byte *)(lVar8 + lVar10)) {
        if ((ulonglong)bVar1 == 0) goto LAB_14959a4ca;
      }
      else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar8 + lVar10)])
      goto LAB_14959a474;
      lVar10 = lVar10 + 1;
    } while( true );
  }
  uVar13 = 0;
LAB_14959a4ca:
  if ((uint)uVar13 == (int)sVar2) {
LAB_14959a4cf:
    FUN_14955a364(param_1,"no such column: \"%s\"",lVar8);
  }
  else {
    plVar9 = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      plVar9 = param_1;
    }
    *(undefined1 *)((longlong)plVar9 + 0x21) = 1;
    lVar10 = FUN_14958faeb(lVar3,param_4);
    if (lVar10 != 0) {
      bVar1 = (&DAT_14bd400b0)[*(byte *)*param_4];
      lVar15 = lVar10;
      FUN_1495a3e15(param_1,
                    "UPDATE \"%w\".%s SET sql = sqlite_rename_column(sql, type, name, %Q, %Q, %d, %Q, %d, %d) WHERE name NOT LIKE \'sqliteX_%%\' ESCAPE \'X\'  AND (type != \'index\' OR tbl_name = %Q) AND sql NOT LIKE \'create virtual%%\'"
                    ,uVar4,"sqlite_master",uVar4,*puVar7,CONCAT44(uVar14,(uint)uVar13),lVar10,
                    bVar1 & 0xffffff80,iVar5 == 1,*puVar7);
      FUN_1495a3e15(param_1,
                    "UPDATE temp.%s SET sql = sqlite_rename_column(sql, type, name, %Q, %Q, %d, %Q, %d, 1) WHERE type IN (\'trigger\', \'view\')"
                    ,"sqlite_master",uVar4,*puVar7,uVar13 & 0xffffffff,lVar10,
                    CONCAT44((int)((ulonglong)lVar15 >> 0x20),(uint)bVar1) & 0xffffffffffffff80);
      FUN_1495cd430(param_1,iVar5);
      FUN_1495cd4a4(param_1,uVar4,iVar5 == 1);
      goto LAB_14959a4e4;
    }
  }
  lVar10 = 0;
LAB_14959a4e4:
  FUN_149582b1a(lVar3,param_2);
  FUN_14955d65a(lVar3,lVar8);
  if (lVar10 != 0) {
    FUN_14955d65a(lVar3,lVar10);
    return;
  }
  return;
LAB_14959a474:
  uVar13 = uVar13 + 1;
  if (uVar13 == (uint)(int)sVar2) goto LAB_14959a4cf;
  goto LAB_14959a441;
}



// FUNCTION 14959a61c FUN_14959a61c body=626 status=ok
// SIG undefined FUN_14959a61c(void)

void FUN_14959a61c(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  
  puVar1 = (undefined8 *)param_1[0x28];
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = *param_1;
    FUN_1495cd4fb();
    param_1[0x2c] = 0;
    if (0 < *(int *)((longlong)puVar1 + 0x54)) {
      if (*(char *)(lVar2 + 0xb5) == '\0') {
        plVar4 = (longlong *)param_1[0x14];
        if ((longlong *)param_1[0x14] == (longlong *)0x0) {
          plVar4 = param_1;
        }
        *(undefined1 *)((longlong)plVar4 + 0x21) = 1;
        if (param_2 != (int *)0x0) {
          *(int *)(param_1 + 0x1f) = (*param_2 - (int)param_1[0x1e]) + param_2[2];
        }
        lVar5 = FUN_14955a402(lVar2,"CREATE VIRTUAL TABLE %T",param_1 + 0x1e);
        iVar9 = -1000000;
        if (puVar1[0xe] != 0) {
          iVar9 = -1;
          plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x20) + 0x18);
          do {
            iVar9 = iVar9 + 1;
            lVar8 = *plVar4;
            plVar4 = plVar4 + 4;
          } while (lVar8 != puVar1[0xe]);
        }
        uVar7 = *puVar1;
        FUN_1495a3e15(param_1,
                      "UPDATE %Q.%s SET type=\'table\', name=%Q, tbl_name=%Q, rootpage=0, sql=%Q WHERE rowid=#%d"
                      ,*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar9 * 0x20),
                      "sqlite_master",uVar7,uVar7,lVar5,(int)param_1[0xf]);
        uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
        lVar8 = param_1[2];
        lVar6 = lVar8;
        if (lVar8 == 0) {
          if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
            *(undefined1 *)((longlong)param_1 + 0x23) = 1;
          }
          lVar6 = FUN_14955a44a(param_1);
          lVar8 = param_1[2];
        }
        uVar11 = CONCAT44(uVar3,**(int **)(*(longlong *)(*param_1 + 0x20) + 0x18 +
                                          (longlong)iVar9 * 0x20) + 1);
        FUN_149584f48(lVar8,0x5e,iVar9,1,uVar11);
        uVar11 = uVar11 & 0xffffffff00000000;
        FUN_149584f48(lVar6,0x9e,0,0,uVar11);
        uVar7 = FUN_14955a402(lVar2,"name=%Q AND sql=%Q",*puVar1,lVar5);
        FUN_1495a3f28(lVar6,iVar9,uVar7);
        if (lVar5 != 0) {
          FUN_14955d65a(lVar2,lVar5);
        }
        iVar10 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar10;
        uVar7 = *puVar1;
        uVar11 = uVar11 & 0xffffffff00000000;
        uVar3 = FUN_149584f48(lVar6,0x73,0,iVar10,uVar11);
        FUN_14955a5b6(lVar6,uVar3,uVar7,0);
        FUN_149584f48(lVar6,0xa3,iVar9,iVar10,uVar11 & 0xffffffff00000000);
      }
      else {
        lVar5 = FUN_14958256b(puVar1[0xe] + 8,*puVar1,puVar1);
        if (lVar5 == 0) {
          param_1[0x28] = 0;
        }
        else if ((*(char *)(lVar2 + 0x61) == '\0') && (*(char *)(lVar2 + 0x62) == '\0')) {
          *(undefined1 *)(lVar2 + 0x61) = 1;
          if (0 < *(int *)(lVar2 + 0xd4)) {
            *(undefined4 *)(lVar2 + 0x170) = 1;
          }
          *(int *)(lVar2 + 0x178) = *(int *)(lVar2 + 0x178) + 1;
          *(undefined2 *)(lVar2 + 0x17c) = 0;
          if (*(longlong *)(lVar2 + 0x138) != 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x138) + 0x18) = 7;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14959a88e FUN_14959a88e body=272 status=ok
// SIG undefined FUN_14959a88e(void)

void FUN_14959a88e(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_149589688();
  puVar1 = (undefined8 *)param_1[0x28];
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = *param_1;
    uVar3 = FUN_14958faeb(lVar2,param_4);
    FUN_149585d03(param_1,puVar1,uVar3);
    FUN_149585d03(param_1,puVar1,0);
    uVar3 = FUN_149559683(lVar2,*puVar1);
    FUN_149585d03(param_1,puVar1,uVar3);
    *(int *)(param_1 + 0x1f) = (*param_4 + param_4[2]) - (int)param_1[0x1e];
    if ((undefined8 *)puVar1[0xb] != (undefined8 *)0x0) {
      lVar4 = -1000000;
      if (puVar1[0xe] != 0) {
        lVar4 = -0x100000000;
        plVar5 = (longlong *)(*(longlong *)(lVar2 + 0x20) + 0x18);
        do {
          lVar4 = lVar4 + 0x100000000;
          lVar2 = *plVar5;
          plVar5 = plVar5 + 4;
        } while (lVar2 != puVar1[0xe]);
        lVar4 = lVar4 >> 0x20;
      }
      FUN_1495a2d6b(param_1,0x1d,*puVar1,*(undefined8 *)puVar1[0xb],
                    *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + lVar4 * 0x20));
    }
  }
  return;
}



// FUNCTION 14959a99e FUN_14959a99e body=471 status=ok
// SIG undefined FUN_14959a99e(void)

int * FUN_14959a99e(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4,
                   longlong param_5)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar5 = *param_1;
  lVar3 = FUN_14958faeb(lVar5);
  piVar4 = param_2;
  if (param_2 == (int *)0x0 || lVar3 == 0) {
LAB_14959aa3d:
    if (param_2 == (int *)0x0) {
      if (lVar5 == 0) {
        piVar4 = (int *)FUN_145e3bd67(0x30);
      }
      else {
        piVar4 = (int *)FUN_14955d750(lVar5,0x30);
      }
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4[8] = 0;
        piVar4[9] = 0;
        piVar4[10] = 0;
        piVar4[0xb] = 0;
        piVar4[4] = 0;
        piVar4[5] = 0;
        piVar4[6] = 0;
        piVar4[7] = 0;
        piVar4[0] = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      goto LAB_14959aa94;
    }
    iVar2 = *param_2;
  }
  else {
    iVar2 = *param_2;
    if (0 < iVar2) {
      lVar7 = 0;
LAB_14959a9eb:
      lVar6 = 0;
      do {
        bVar1 = *(byte *)(lVar3 + lVar6);
        if (bVar1 == *(byte *)(*(longlong *)(param_2 + lVar7 * 8 + 4) + lVar6)) {
          if ((ulonglong)bVar1 == 0) goto LAB_14959aa1e;
        }
        else if ((&DAT_14bd3ff30)[bVar1] !=
                 (&DAT_14bd3ff30)[*(byte *)(*(longlong *)(param_2 + lVar7 * 8 + 4) + lVar6)])
        goto LAB_14959aa32;
        lVar6 = lVar6 + 1;
      } while( true );
    }
  }
  uVar8 = (longlong)iVar2 * 0x20 + 0x30;
  if (param_2 < *(int **)(lVar5 + 0x1c8)) {
    if (param_2 < *(int **)(lVar5 + 0x1b8)) {
      if ((*(int **)(lVar5 + 0x1c0) <= param_2) && (uVar8 <= *(ushort *)(lVar5 + 0x17e)))
      goto LAB_14959aa94;
    }
    else if (uVar8 < 0x81) goto LAB_14959aa94;
  }
  piVar4 = (int *)FUN_14955d7f6(lVar5,param_2);
LAB_14959aa94:
  if (*(char *)(lVar5 + 0x61) == '\0') {
    *(longlong *)(piVar4 + (longlong)*piVar4 * 8 + 8) = param_5;
    iVar2 = *piVar4;
    lVar5 = (longlong)iVar2;
    *(longlong *)(piVar4 + lVar5 * 8 + 6) = param_4;
    *(longlong *)(piVar4 + lVar5 * 8 + 4) = lVar3;
    (piVar4 + lVar5 * 8 + 10)[0] = 0;
    (piVar4 + lVar5 * 8 + 10)[1] = 0;
    *piVar4 = iVar2 + 1;
  }
  else {
    if (param_4 != 0) {
      FUN_149582d29(lVar5,param_4);
    }
    if (param_5 != 0) {
      FUN_149582a1c(lVar5,param_5,1);
    }
    piVar4 = param_2;
    if (lVar3 != 0) {
      FUN_14955d65a(lVar5,lVar3);
    }
  }
  return piVar4;
LAB_14959aa1e:
  FUN_14955a364(param_1,"duplicate WITH table name: %s",lVar3);
  iVar2 = *param_2;
LAB_14959aa32:
  lVar7 = lVar7 + 1;
  if (iVar2 <= lVar7) goto LAB_14959aa3d;
  goto LAB_14959a9eb;
}



// FUNCTION 14959ab75 FUN_14959ab75 body=207 status=ok
// SIG undefined FUN_14959ab75(void)

void FUN_14959ab75(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    uVar1 = *param_1;
    lVar2 = FUN_1495a6849(param_1,param_3,*(longlong *)(param_2 + 8));
    if (lVar2 != 0) {
      if (*(longlong *)(param_2 + 0x10) == 0) {
        if ((*(longlong *)(lVar2 + 0x18) == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
          if (*(char *)(lVar2 + 0x23) != '\0') {
            uVar3 = FUN_1495a22be(uVar1,*(undefined8 *)(lVar2 + 0x10),0);
            *(undefined8 *)(param_2 + 0x10) = uVar3;
            if (*(longlong *)(lVar2 + 0x18) != 0) {
              uVar3 = FUN_1495a22be(uVar1,*(longlong *)(lVar2 + 0x18),0);
              *(undefined8 *)(param_2 + 0x18) = uVar3;
            }
            if (*(longlong *)(param_2 + 8) != 0) {
              FUN_14955d65a(uVar1);
            }
            *(undefined8 *)(param_2 + 8) = 0;
            return;
          }
          pcVar4 = "frame specification";
        }
        else {
          pcVar4 = "ORDER BY clause";
        }
      }
      else {
        pcVar4 = "PARTITION clause";
      }
      FUN_14955a364(param_1,"cannot override %s of window: %s",pcVar4,*(undefined8 *)(param_2 + 8));
    }
  }
  return;
}



// FUNCTION 14959ac44 FUN_14959ac44 body=147 status=ok
// SIG undefined FUN_14959ac44(void)

longlong FUN_14959ac44(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                      undefined8 *param_5)

{
  void *_Src;
  void *_Dst;
  ulonglong _Size;
  
  if (param_2 == 0) {
    if (param_3 != 0) {
      FUN_149582d29(*param_1,param_3);
    }
    if (param_4 == 0) {
      return 0;
    }
    FUN_149582d29(*param_1,param_4);
    return 0;
  }
  *(longlong *)(param_2 + 0x10) = param_3;
  *(longlong *)(param_2 + 0x18) = param_4;
  if (param_5 == (undefined8 *)0x0) {
    return param_2;
  }
  _Src = (void *)*param_5;
  if (_Src != (void *)0x0) {
    _Size = (ulonglong)*(uint *)(param_5 + 1);
    _Dst = (void *)FUN_14955d750(*param_1,_Size + 1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((longlong)_Dst + _Size) = 0;
      goto LAB_14959ac77;
    }
  }
  _Dst = (void *)0x0;
LAB_14959ac77:
  *(void **)(param_2 + 8) = _Dst;
  return param_2;
}



// FUNCTION 14959acd7 FUN_14959acd7 body=321 status=ok
// SIG undefined FUN_14959acd7(void)

void * FUN_14959acd7(longlong *param_1,int param_2,int param_3,longlong param_4,int param_5,
                    longlong param_6,byte param_7)

{
  void *_Dst;
  undefined8 uVar1;
  undefined1 uVar2;
  
  if (param_5 != 0x58 || param_3 != 0x55) {
    if ((param_3 != 0x56) || ((param_5 != 0x58 && (param_5 != 0x55)))) {
      if (*param_1 == 0) {
        _Dst = (void *)FUN_145e3bd67(0x90);
      }
      else {
        _Dst = (void *)FUN_14955d750();
      }
      if (_Dst != (void *)0x0) {
        memset(_Dst,0,0x90);
        uVar2 = 0x59;
        if (param_2 != 0) {
          uVar2 = (char)param_2;
        }
        *(undefined1 *)((longlong)_Dst + 0x20) = uVar2;
        *(char *)((longlong)_Dst + 0x21) = (char)param_3;
        *(char *)((longlong)_Dst + 0x22) = (char)param_5;
        if (param_7 == 0) {
          param_7 = (char)(*(char *)(*param_1 + 0x5c) << 6) >> 7 & 0x42;
        }
        *(byte *)((longlong)_Dst + 0x24) = param_7;
        *(bool *)((longlong)_Dst + 0x23) = param_2 == 0;
        uVar1 = FUN_1495cd570(param_1,param_6);
        *(undefined8 *)((longlong)_Dst + 0x30) = uVar1;
        uVar1 = FUN_1495cd570(param_1,param_4);
        *(undefined8 *)((longlong)_Dst + 0x28) = uVar1;
        return _Dst;
      }
      goto LAB_14959ad22;
    }
  }
  FUN_14955a364(param_1,"unsupported frame specification");
LAB_14959ad22:
  if (param_6 != 0) {
    FUN_14958288e(*param_1,param_6);
  }
  if (param_4 != 0) {
    FUN_14958288e(*param_1,param_4);
  }
  return (void *)0x0;
}



// FUNCTION 14959ae18 FUN_14959ae18 body=174 status=ok
// SIG undefined FUN_14959ae18(void)

void FUN_14959ae18(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar4 = FUN_14955a44a(param_1);
  }
  if (0 < (int)param_1[0x11]) {
    lVar5 = 0x10;
    lVar6 = 0;
    do {
      lVar1 = param_1[0x12];
      uVar2 = *(undefined8 *)(lVar1 + lVar5);
      uVar3 = FUN_149584f48(lVar4,0xa1,*(undefined4 *)(lVar1 + -0x10 + lVar5),
                            *(undefined4 *)(lVar1 + -0xc + lVar5),
                            *(undefined1 *)(lVar1 + -8 + lVar5));
      FUN_14955a5b6(lVar4,uVar3,uVar2,0xffffffff);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_1[0x11]);
  }
  return;
}



// FUNCTION 14959aec6 FUN_14959aec6 body=282 status=ok
// SIG undefined FUN_14959aec6(void)

void FUN_14959aec6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)param_1[0x13];
  if (plVar7 != (longlong *)0x0) {
    lVar2 = *param_1;
    lVar3 = param_1[2];
    do {
      iVar1 = *(int *)((longlong)plVar7 + 0x14);
      FUN_14959b02c(param_1,0,(longlong)(int)plVar7[2],
                    *(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(lVar2 + 0x20) + 0x18 + (longlong)(int)plVar7[2] * 0x20) + 0x68
                     ),0x60);
      uVar4 = *(undefined8 *)plVar7[1];
      uVar5 = FUN_149584f48(lVar3,0x73,0,iVar1 + -1,0);
      FUN_14955a5b6(lVar3,uVar5,uVar4,0);
      lVar6 = FUN_14955a4e8(lVar3,0xc,&DAT_14bd46300);
      if (lVar6 == 0) {
        return;
      }
      *(int *)(lVar6 + 8) = iVar1;
      *(int *)(lVar6 + 0xc) = iVar1 + 2;
      *(int *)(lVar6 + 0x3c) = iVar1;
      *(int *)(lVar6 + 0x4c) = iVar1 + -1;
      *(int *)(lVar6 + 0x54) = iVar1;
      *(undefined2 *)(lVar6 + 0x4a) = 0x10;
      *(int *)(lVar6 + 0x68) = iVar1 + 1;
      *(int *)(lVar6 + 0x84) = iVar1;
      *(int *)(lVar6 + 0x94) = iVar1;
      *(int *)(lVar6 + 0xb0) = iVar1 + 2;
      *(int *)(lVar6 + 0xac) = iVar1;
      *(int *)(lVar6 + 0xf8) = iVar1;
      if (*(int *)((longlong)param_1 + 0x34) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x34) = 1;
      }
      plVar7 = (longlong *)*plVar7;
    } while (plVar7 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 14959afe0 FUN_14959afe0 body=76 status=ok
// SIG undefined FUN_14959afe0(void)

void FUN_14959afe0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_14959b4fb();
  if ((iVar1 != param_3) && (*(longlong *)(param_1 + 0x10) != 0)) {
    FUN_149584f48(*(longlong *)(param_1 + 0x10),
                  0x4e - (uint)((*(uint *)(param_2 + 4) >> 0x15 & 1) != 0),iVar1,param_3,0);
  }
  return;
}



// FUNCTION 14959b02c FUN_14959b02c body=269 status=ok
// SIG undefined FUN_14959b02c(void)

void FUN_14959b02c(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  int param_5)

{
  short sVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar3 = (longlong *)FUN_14955a44a(param_1);
  }
  FUN_14959b139(param_1,param_3,*(undefined4 *)(param_4 + 7),param_5 == 0x61,*param_4);
  if ((*(byte *)(param_4 + 8) & 0x80) == 0) {
    sVar1 = *(short *)(param_4 + 9);
    iVar2 = FUN_149584f48(plVar3,param_5,param_2,*(undefined4 *)(param_4 + 7),param_3);
    if (*(char *)(*plVar3 + 0x61) == '\0') {
      lVar4 = plVar3[0x11];
      *(undefined1 *)(lVar4 + 1 + (longlong)iVar2 * 0x18) = 0xfd;
      *(int *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = (int)sVar1;
    }
    return;
  }
  for (lVar4 = param_4[2]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28)) {
    if ((*(uint *)(lVar4 + 100) & 3) == 2) goto LAB_14959b10a;
  }
  lVar4 = 0;
LAB_14959b10a:
  FUN_149584f48(plVar3,param_5,param_2,*(undefined4 *)(lVar4 + 0x58),param_3);
  FUN_14959b2a7(param_1,lVar4);
  return;
}



// FUNCTION 14959b139 FUN_14959b139 body=366 status=ok
// SIG undefined FUN_14959b139(void)

void FUN_14959b139(longlong *param_1,int param_2,int param_3,char param_4,undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_1[0x14];
  if ((longlong *)param_1[0x14] == (longlong *)0x0) {
    plVar5 = param_1;
  }
  if ((param_2 != 1) &&
     (*(char *)(*(longlong *)(*(longlong *)(*param_1 + 0x20) + 8 + (longlong)param_2 * 0x20) + 0x11)
      != '\0')) {
    iVar1 = (int)plVar5[0x11];
    lVar4 = plVar5[0x12];
    if (0 < (longlong)iVar1) {
      lVar3 = 0;
      do {
        if ((*(int *)(lVar4 + lVar3) == param_2) && (*(int *)(lVar4 + 4 + lVar3) == param_3)) {
          *(bool *)(lVar4 + 8 + lVar3) = param_4 != '\0' || *(char *)(lVar4 + 8 + lVar3) != '\0';
          return;
        }
        lVar3 = lVar3 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar3);
    }
    lVar3 = *plVar5;
    lVar2 = FUN_14955d6fd(lVar3,lVar4,(longlong)(iVar1 * 0x18 + 0x18));
    if ((lVar4 == 0) || (lVar2 != 0)) {
      plVar5[0x12] = lVar2;
      if (lVar2 != 0) {
        lVar4 = (longlong)(int)plVar5[0x11];
        *(int *)(plVar5 + 0x11) = (int)plVar5[0x11] + 1;
        *(int *)(lVar2 + lVar4 * 0x18) = param_2;
        *(int *)(lVar2 + 4 + lVar4 * 0x18) = param_3;
        *(char *)(lVar2 + 8 + lVar4 * 0x18) = param_4;
        *(undefined8 *)(lVar2 + 0x10 + lVar4 * 0x18) = param_5;
        return;
      }
    }
    else {
      FUN_14955d65a(lVar3,lVar4);
      plVar5[0x12] = 0;
    }
    *(undefined4 *)(plVar5 + 0x11) = 0;
    lVar4 = *plVar5;
    if ((*(char *)(lVar4 + 0x61) == '\0') && (*(char *)(lVar4 + 0x62) == '\0')) {
      *(undefined1 *)(lVar4 + 0x61) = 1;
      if (0 < *(int *)(lVar4 + 0xd4)) {
        *(undefined4 *)(lVar4 + 0x170) = 1;
      }
      *(int *)(lVar4 + 0x178) = *(int *)(lVar4 + 0x178) + 1;
      *(undefined2 *)(lVar4 + 0x17c) = 0;
      if (*(longlong *)(lVar4 + 0x138) != 0) {
        *(undefined4 *)(*(longlong *)(lVar4 + 0x138) + 0x18) = 7;
      }
    }
  }
  return;
}



// FUNCTION 14959b2a7 FUN_14959b2a7 body=93 status=ok
// SIG undefined FUN_14959b2a7(void)

void FUN_14959b2a7(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  piVar4 = (int *)FUN_14959b304();
  if (piVar4 != (int *)0x0) {
    if (*(char *)(*plVar1 + 0x61) == '\0') {
      lVar2 = plVar1[0x11];
      lVar3 = plVar1[0x12];
      *(undefined1 *)(lVar2 + -0x17 + (longlong)(int)lVar3 * 0x18) = 0xf7;
      *(int **)(lVar2 + -8 + (longlong)(int)lVar3 * 0x18) = piVar4;
    }
    else if ((*(longlong *)(*plVar1 + 0x2d8) == 0) && (*piVar4 = *piVar4 + -1, *piVar4 == 0)) {
      FUN_14955d65a(*(undefined8 *)(piVar4 + 4),piVar4);
      return;
    }
  }
  return;
}



// FUNCTION 14959b304 FUN_14959b304 body=224 status=ok
// SIG undefined FUN_14959b304(void)

int * FUN_14959b304(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 6) == 0) {
    uVar1 = *(ushort *)(param_2 + 0x60);
    if ((*(byte *)(param_2 + 100) & 8) == 0) {
      uVar4 = *param_1;
      iVar5 = 0;
      uVar2 = uVar1;
    }
    else {
      uVar2 = *(ushort *)(param_2 + 0x5e);
      iVar5 = (uint)uVar1 - (uint)uVar2;
      uVar4 = *param_1;
    }
    piVar3 = (int *)FUN_14959b3e4(uVar4,uVar2,iVar5);
    if (piVar3 != (int *)0x0) {
      if (uVar1 != 0) {
        uVar6 = 0;
        do {
          if (*(char **)(*(longlong *)(param_2 + 0x40) + uVar6 * 8) == "BINARY") {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_14959b4a2(param_1);
          }
          *(undefined8 *)(piVar3 + uVar6 * 2 + 8) = uVar4;
          *(undefined1 *)(*(longlong *)(piVar3 + 6) + uVar6) =
               *(undefined1 *)(*(longlong *)(param_2 + 0x38) + uVar6);
          uVar6 = uVar6 + 1;
        } while ((uint)uVar1 != uVar6);
      }
      if (*(int *)(param_1 + 6) == 0) {
        return piVar3;
      }
      if ((*(uint *)(param_2 + 100) >> 8 & 1) == 0) {
        *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) | 0x100;
        *(undefined4 *)(param_1 + 3) = 0x201;
      }
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        FUN_14955d65a(*(undefined8 *)(piVar3 + 4),piVar3);
      }
    }
  }
  return (int *)0x0;
}



// FUNCTION 14959b3e4 FUN_14959b3e4 body=190 status=ok
// SIG undefined FUN_14959b3e4(void)

undefined4 * FUN_14959b3e4(longlong param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  param_3 = param_3 + param_2;
  puVar1 = (undefined4 *)FUN_14955d750();
  if (puVar1 == (undefined4 *)0x0) {
    if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
      *(undefined1 *)(param_1 + 0x61) = 1;
      if (0 < *(int *)(param_1 + 0xd4)) {
        *(undefined4 *)(param_1 + 0x170) = 1;
      }
      *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
      *(undefined2 *)(param_1 + 0x17c) = 0;
      if (*(longlong *)(param_1 + 0x138) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
      }
    }
  }
  else {
    *(undefined4 **)(puVar1 + 6) = puVar1 + (longlong)param_3 * 2 + 8;
    *(short *)((longlong)puVar1 + 6) = (short)param_2;
    *(short *)(puVar1 + 2) = (short)param_3;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 0x5e);
    *(longlong *)(puVar1 + 4) = param_1;
    *puVar1 = 1;
    memset(puVar1 + 10,0,(longlong)(param_3 * 9 + -8));
  }
  return puVar1;
}



// FUNCTION 14959b4a2 FUN_14959b4a2 body=89 status=ok
// SIG undefined FUN_14959b4a2(void)

void FUN_14959b4a2(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)(lVar2 + 0x5e));
  cVar1 = *(char *)(lVar2 + 0xb5);
  lVar2 = FUN_14958644d(lVar2,uVar3 & 0xffffffff,param_2,cVar1);
  if ((cVar1 == '\0') && ((lVar2 == 0 || (*(longlong *)(lVar2 + 0x18) == 0)))) {
    FUN_1495865a6(param_1,uVar3 & 0xffffffff,lVar2,param_2);
    return;
  }
  return;
}



// FUNCTION 14959b4fb FUN_14959b4fb body=5998 status=ok
// SIG undefined FUN_14959b4fb(void)

uint FUN_14959b4fb(ulonglong *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  ushort uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  longlong *plVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  size_t sVar18;
  undefined *puVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong *puVar22;
  char cVar23;
  uint uVar24;
  char *pcVar25;
  int *piVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  uint *puVar31;
  undefined8 unaff_RBX;
  uint *puVar32;
  byte bVar33;
  ulonglong uVar34;
  char *pcVar35;
  undefined8 uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  ulonglong uVar41;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  int *local_120;
  uint local_118;
  uint local_110;
  uint local_108;
  uint local_fc;
  ulonglong *local_f8;
  uint *local_f0;
  int *local_e8;
  undefined1 *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  uint local_b4;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  ulonglong *puStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar4 = (longlong *)param_1[2];
  local_5c = 0;
  local_60 = 0;
  if (plVar4 == (longlong *)0x0) {
LAB_14959c4c7:
    uVar16 = 0;
    goto LAB_14959c4c9;
  }
  uVar16 = param_3;
  if (param_2 != (byte *)0x0) {
LAB_14959b552:
    bVar33 = *param_2;
    uVar17 = (uint)bVar33;
    uVar15 = param_3;
    if (100 < bVar33) {
      switch(bVar33) {
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
        goto switchD_14959b56a_caseD_65;
      case 0x6f:
      case 0xab:
      case 0xb2:
        goto switchD_14959b56a_caseD_6f;
      case 0x70:
        goto switchD_14959b56a_caseD_70;
      default:
        goto switchD_14959b56a_caseD_71;
      case 0x73:
        puVar19 = *(undefined **)(param_2 + 8);
        local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
        uVar14 = FUN_149584f48(plVar4,0x73,0,param_3);
        uVar30 = 0;
        break;
      case 0x88:
        if (**(int **)(*(longlong *)(param_2 + 0x20) + 0x20) == 1) goto switchD_14959b5c8_caseD_14;
        if ((int)param_1[6] == 0) {
          FUN_14955a364(param_1,"sub-select returns %d columns - expected %d",
                        **(int **)(*(longlong *)(param_2 + 0x20) + 0x20),1);
        }
        goto LAB_14959b645;
      case 0x96:
        uVar30 = *(undefined8 *)(param_2 + 8);
        uVar36 = 0;
        goto LAB_14959c2d0;
      case 0x97:
        iVar13 = -1;
        pcVar35 = (char *)(*(longlong *)(param_2 + 8) + 2);
        if (pcVar35 != (char *)0x0) {
          sVar18 = strlen(pcVar35);
          iVar13 = ((uint)sVar18 & 0x3fffffff) - 1;
        }
        puVar19 = (undefined *)FUN_14959d069(*plVar4,pcVar35,iVar13);
        local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
        uVar14 = FUN_149584f48(plVar4,0x4a,iVar13 / 2,param_3);
        uVar30 = 0xfffffff9;
        break;
      case 0x98:
        uVar30 = 0;
LAB_14959c1c8:
        FUN_14959ce25(param_1,param_2,uVar30,param_3);
        goto LAB_14959c4c9;
      case 0x99:
        local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
        FUN_149584f48(plVar4,0x4b,(int)*(short *)(param_2 + 0x30),param_3);
        if (*(char *)(*(longlong *)(param_2 + 8) + 1) == '\0') goto LAB_14959c4c9;
        puVar5 = (undefined4 *)param_1[0x25];
        if (puVar5 == (undefined4 *)0x0) goto LAB_14959c188;
        iVar13 = 2;
        goto LAB_14959c170;
      case 0x9a:
        uVar34 = *param_1;
        piVar26 = *(int **)(param_2 + 0x20);
        iVar13 = *piVar26;
        uVar41 = (ulonglong)iVar13;
        uVar16 = *(uint *)((longlong)param_1 + 0x44);
        local_f0 = (uint *)CONCAT44(local_f0._4_4_,uVar16 - 1);
        *(uint *)((longlong)param_1 + 0x44) = uVar16 - 1;
        lVar20 = *(longlong *)(param_2 + 0x10);
        if (lVar20 == 0) {
          local_f8 = (ulonglong *)0x0;
          local_e0 = (undefined1 *)0x0;
          local_fc = param_3;
          local_e8 = piVar26;
          local_d0 = (longlong *)(ulonglong)uVar16;
          local_c0 = uVar34;
          goto LAB_14959bf9d;
        }
        local_fc = param_3;
        puVar27 = (undefined1 *)FUN_1495a1c89(uVar34,lVar20,0,0);
        param_3 = local_fc;
        if (*(char *)(uVar34 + 0x61) == '\0') {
          local_e8 = piVar26;
          local_d0 = (longlong *)(ulonglong)uVar16;
          local_c0 = uVar34;
          uVar14 = FUN_14959eb5a(param_1,puVar27,&local_5c);
          puVar28 = puVar27;
          goto joined_r0x00014959ca34;
        }
        if (puVar27 != (undefined1 *)0x0) {
          FUN_14958288e(uVar34,puVar27);
        }
        goto LAB_14959b645;
      case 0xa4:
        goto switchD_14959b56a_caseD_a4;
      case 0xa5:
        if (*(longlong *)(param_2 + 0x38) == 0) {
          FUN_14955a364(param_1,"misuse of aggregate: %s()",*(undefined8 *)(param_2 + 8));
          goto LAB_14959b645;
        }
        uVar16 = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x38) + 0x30) + 0x10 +
                          (longlong)*(short *)(param_2 + 0x32) * 0x18);
        goto LAB_14959c4c9;
      case 0xa6:
        pcVar35 = *(char **)(param_2 + 0x38);
        lVar20 = (longlong)*(short *)(param_2 + 0x32) * 0x20 + *(longlong *)(pcVar35 + 0x20);
        if (*pcVar35 == '\0') {
          uVar16 = *(uint *)(lVar20 + 0x14);
          goto LAB_14959c4c9;
        }
        if (pcVar35[1] != '\0') {
          uVar16 = *(uint *)(lVar20 + 0x10);
          local_128 = (undefined8 *)CONCAT44(local_128._4_4_,param_3);
          uVar30 = 0x59;
          uVar15 = *(uint *)(pcVar35 + 8);
          goto LAB_14959b58b;
        }
switchD_14959b56a_caseD_a4:
        if ((param_2[4] & 8) == 0) {
          iVar13 = *(int *)(param_2 + 0x2c);
          if (iVar13 < 0) {
            uVar17 = (uint)param_1[8];
            if (-1 < (int)uVar17) {
              iVar13 = uVar17 - 1;
              goto LAB_14959bdad;
            }
            if ((longlong)*(short *)(param_2 + 0x30) < 0) {
              uVar16 = ~uVar17;
              goto LAB_14959c4c9;
            }
            lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8);
            lVar21 = (longlong)*(short *)(param_2 + 0x30) * 0x20;
            puVar29 = (undefined8 *)(lVar20 + lVar21);
            sVar10 = FUN_14959cc88();
            uVar16 = (int)sVar10 - uVar17;
            uVar3 = *(ushort *)(lVar20 + 0x1c + lVar21);
            if ((uVar3 & 0x60) != 0) {
              if ((uVar3 >> 8 & 1) != 0) {
                FUN_14955a364(param_1,"generated column loop on \"%s\"",*puVar29);
                goto LAB_14959c4c7;
              }
              uVar11 = uVar3 | 0x100;
              *(ushort *)((longlong)puVar29 + 0x1c) = uVar11;
              if ((char)uVar3 < '\0') {
                FUN_14959cce8(param_1,puVar29,uVar16);
                uVar11 = *(ushort *)((longlong)puVar29 + 0x1c);
              }
              *(ushort *)((longlong)puVar29 + 0x1c) = uVar11 & 0xfe7f;
              goto LAB_14959c4c9;
            }
            if (*(char *)((longlong)puVar29 + 0x19) != 'E') goto LAB_14959c4c9;
            local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
            FUN_149584f48(plVar4,0x4e,uVar16,param_3);
          }
          else {
LAB_14959bdad:
            local_120 = (int *)CONCAT71(local_120._1_7_,param_2[2]);
            local_128 = (undefined8 *)CONCAT44(local_128._4_4_,param_3);
            FUN_14959cdb3(param_1,*(undefined8 *)(param_2 + 0x40),(int)*(short *)(param_2 + 0x30),
                          iVar13);
            if ((*(longlong *)(param_2 + 0x40) != 0) || (param_2[1] != 0x45)) goto LAB_14959c4c9;
          }
          local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
          uVar30 = 0x53;
          uVar16 = 0;
          goto LAB_14959b58b;
        }
        uVar16 = FUN_14959b4fb(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          param_2 = param_2 + 1;
LAB_14959bd98:
          bVar33 = *param_2;
          if ((char)bVar33 < 'B') goto LAB_14959c4c9;
        }
        else {
          if (-1 < (longlong)*(short *)(param_2 + 0x30)) {
            param_2 = (byte *)(*(longlong *)(*(longlong *)(param_2 + 0x40) + 8) +
                               (longlong)*(short *)(param_2 + 0x30) * 0x20 + 0x19);
            goto LAB_14959bd98;
          }
          bVar33 = 0x44;
        }
        if (uVar16 != param_3) {
          local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
          FUN_149584f48(plVar4,0x4e,uVar16,param_3);
        }
        puVar19 = &DAT_14bd46330 + (ulonglong)(byte)(bVar33 + 0xbe) * 2;
        local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
        uVar14 = FUN_149584f48(plVar4,0x5a,param_3,1);
        uVar30 = 0xffffffff;
        break;
      case 0xa7:
        goto switchD_14959b56a_caseD_a7;
      case 0xa8:
        goto switchD_14959b56a_caseD_a8;
      case 0xa9:
        uVar16 = *(uint *)(param_2 + 4);
        if ((uVar16 >> 0x18 & 1) != 0) {
          uVar16 = *(uint *)(*(longlong *)(param_2 + 0x40) + 0x60);
          goto LAB_14959c4c9;
        }
        puVar27 = (undefined1 *)*param_1;
        uVar2 = puVar27[0x5e];
        if (*(char *)((longlong)param_1 + 0x23) != '\0') {
          local_88._0_6_ = CONCAT24(2,(undefined4)local_88);
          uStack_a0 = 0x4959f99d;
          uStack_9c = 1;
          local_98 = &LAB_14959fa8c;
          uStack_80 = uStack_80 & 0xffffffff00000000;
          FUN_14959fa98(&local_a8,param_2);
          if (local_88._4_2_ != 0) {
            uVar16 = FUN_14959d4d8(param_1,param_2,0xffffffff);
            goto LAB_14959c4c9;
          }
          uVar16 = *(uint *)(param_2 + 4);
        }
        uVar34 = (ulonglong)uVar16;
        if ((uVar16 >> 0xe & 1) == 0) {
          local_f0 = *(uint **)(param_2 + 0x20);
          uVar34 = 0;
          if (local_f0 == (uint *)0x0) goto LAB_14959c349;
          uVar34 = (ulonglong)*local_f0;
          local_d8._0_4_ = 0;
        }
        else {
LAB_14959c349:
          local_d8._0_4_ = (int)CONCAT71((int7)(uVar34 >> 8),1);
          local_f0 = (uint *)0x0;
          uVar34 = 0;
        }
        uVar30 = *(undefined8 *)(param_2 + 8);
        local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffffffffff00);
        iVar13 = (int)uVar34;
        local_e0 = puVar27;
        lVar20 = FUN_14955c8a3(puVar27,uVar30,uVar34,
                               CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
        if ((lVar20 == 0) || (*(longlong *)(lVar20 + 0x20) != 0)) {
          FUN_14955a364(param_1,"unknown function: %s()",uVar30);
          goto LAB_14959b645;
        }
        uVar16 = *(uint *)(lVar20 + 4);
        if ((uVar16 >> 0x16 & 1) != 0) {
          uVar16 = FUN_14959d5b0(param_1,local_f0,*(undefined4 *)(lVar20 + 8),param_3);
          goto LAB_14959c4c9;
        }
        if ((((uVar16 & 0x280000) != 0) && ((param_2[7] & 0x40) != 0)) &&
           (((uVar16 >> 0x13 & 1) != 0 || ((*(byte *)(*param_1 + 0x30) & 0x80) == 0)))) {
          FUN_14955a364(param_1,"unsafe use of %s()",*(undefined8 *)(lVar20 + 0x38));
        }
        if (0 < iVar13) {
          puVar32 = local_f0 + 2;
          local_e8 = (int *)CONCAT44(local_e8._4_4_,iVar13);
          uVar41 = 0;
          uVar16 = 0;
          lVar21 = 0;
          local_fc = param_3;
          local_f8 = param_1;
          local_d0 = plVar4;
          goto LAB_14959c3f5;
        }
        uVar17 = 0;
        uVar15 = 0;
        if ((char)local_d8 != '\0') {
          uVar16 = 0;
          uVar38 = 0;
          local_d0 = plVar4;
          if ((*(byte *)(lVar20 + 4) & 0x20) == 0) goto LAB_14959cbc0;
          goto LAB_14959cb6f;
        }
        local_e8 = (int *)CONCAT44(local_e8._4_4_,iVar13);
        lVar21 = 0;
        local_fc = param_3;
        local_f8 = param_1;
        local_d0 = plVar4;
        goto LAB_14959cacd;
      case 0xaa:
        pbVar6 = *(byte **)(param_2 + 0x10);
        if (*pbVar6 != 0x96) {
          if (*pbVar6 != 0x98) {
            local_a8 = CONCAT31(local_a8._1_3_,0x98);
            uStack_a4 = 0x4400;
            uStack_a0 = 0;
            uVar15 = FUN_14959d278(param_1,&local_a8,&local_5c);
            uVar16 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x10),&local_60);
            local_128 = (undefined8 *)CONCAT44(local_128._4_4_,param_3);
            bVar33 = 0x6a;
            goto LAB_14959bb0c;
          }
          uVar30 = 1;
          param_2 = pbVar6;
          goto LAB_14959c1c8;
        }
        uVar30 = *(undefined8 *)(pbVar6 + 8);
        uVar36 = 1;
LAB_14959c2d0:
        FUN_14959cfc7(plVar4,uVar30,uVar36,param_3);
        goto LAB_14959c4c9;
      case 0xac:
        uVar14 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x10),&local_5c);
        lVar20 = *(longlong *)(param_2 + 0x18);
        goto LAB_14959c2ad;
      case 0xad:
        uVar16 = *(uint *)(param_2 + 0x2c);
        goto LAB_14959c4c9;
      case 0xae:
        goto switchD_14959b56a_caseD_ae;
      case 0xaf:
        pcVar35 = *(char **)(param_2 + 0x10);
        if (*(int *)(pcVar35 + 0x2c) == 0) {
          uVar14 = FUN_14959dc3b(param_1);
          *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x2c) = uVar14;
          pcVar35 = *(char **)(param_2 + 0x10);
        }
        if (*(int *)(param_2 + 0x2c) != 0) {
          cVar8 = *pcVar35;
          if (cVar8 == -0x53) {
            cVar8 = pcVar35[2];
          }
          pcVar25 = pcVar35;
          if (cVar8 == -0x52) {
LAB_14959ba4c:
            iVar13 = **(int **)(pcVar25 + 0x20);
          }
          else {
            iVar13 = 1;
            if (cVar8 == -0x78) {
              pcVar25 = *(char **)(pcVar35 + 0x20);
              goto LAB_14959ba4c;
            }
          }
          if (*(int *)(param_2 + 0x2c) != iVar13) {
            FUN_14955a364(param_1,"%d columns assigned %d values");
            pcVar35 = *(char **)(param_2 + 0x10);
          }
        }
        uVar16 = (int)*(short *)(param_2 + 0x30) + *(int *)(pcVar35 + 0x2c);
        goto LAB_14959c4c9;
      case 0xb0:
        uVar2 = *(undefined1 *)((longlong)param_1 + 0x23);
        local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
        iVar13 = FUN_149584f48(plVar4,0x15,*(undefined4 *)(param_2 + 0x2c),0);
        *(undefined1 *)((longlong)param_1 + 0x23) = 0;
        param_3 = FUN_14959b4fb(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
        *(undefined1 *)((longlong)param_1 + 0x23) = uVar2;
        if (*(char *)(*plVar4 + 0x61) == '\0') {
          iVar40 = (int)plVar4[0x12] + -1;
          if (-1 < iVar13) {
            iVar40 = iVar13;
          }
          puVar27 = (undefined1 *)((longlong)iVar40 * 0x18 + plVar4[0x11]);
        }
        else {
          puVar27 = &DAT_14cc1ee40;
        }
        *(int *)(puVar27 + 8) = (int)plVar4[0x12];
        if (iVar13 < 0) {
          iVar13 = (int)plVar4[0x12] + -1;
        }
        if (*(char *)(*plVar4 + 0x61) == '\0') {
          puVar27 = (undefined1 *)((longlong)iVar13 * 0x18 + plVar4[0x11]);
        }
        else {
          puVar27 = &DAT_14cc1ee40;
        }
        *(uint *)(puVar27 + 0xc) = param_3;
        goto LAB_14959b645;
      }
      FUN_14955a5b6(plVar4,uVar14,puVar19,uVar30);
      uVar16 = param_3;
      goto LAB_14959c4c9;
    }
    switch(bVar33) {
    case 0x13:
switchD_14959b56a_caseD_70:
      uVar16 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x10),&local_5c);
      local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
      break;
    case 0x14:
switchD_14959b5c8_caseD_14:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_148);
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2e:
    case 0x2f:
      goto switchD_14959b56a_caseD_71;
    case 0x24:
      uVar16 = FUN_14959b4fb(param_1,*(undefined8 *)(param_2 + 0x10),param_3);
      if (uVar16 != param_3) {
        local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
        FUN_149584f48(plVar4,0x4e,uVar16,param_3);
      }
      cVar8 = FUN_14959d0ed(*(undefined8 *)(param_2 + 8),0);
      uVar16 = (uint)cVar8;
      local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
      uVar30 = 0x54;
      goto LAB_14959b58b;
    case 0x2b:
    case 0x2c:
switchD_14959b56a_caseD_65:
      uVar15 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x10),&local_5c);
      uVar16 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x18),&local_60);
      local_128 = (undefined8 *)CONCAT44(local_128._4_4_,param_3);
      break;
    case 0x2d:
switchD_14959b56a_caseD_a8:
      uVar17 = bVar33 == 0x2d | 0x34;
      uVar16 = 0x80;
      goto LAB_14959b5cc;
    case 0x30:
      local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
      FUN_14959e955(param_1,param_2,param_3,0);
      goto LAB_14959c4c9;
    case 0x31:
      iVar13 = *(int *)((longlong)param_1 + 0x44);
      *(int *)((longlong)param_1 + 0x44) = iVar13 + -2;
      local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
      FUN_149584f48(plVar4,0x48,0,param_3);
      FUN_14959df59(param_1,param_2,iVar13 + -1,iVar13 + -2);
      local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
      FUN_149584f48(plVar4,0x45,1,param_3);
      lVar20 = plVar4[3];
      if (*(int *)(lVar20 + 0x44) + *(int *)(lVar20 + 0x48) < 0) {
        FUN_1495a1bff(lVar20,plVar4);
      }
      else {
        *(int *)(*(longlong *)(lVar20 + 0x50) + (longlong)-iVar13 * 4) = (int)plVar4[0x12];
      }
      local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
      FUN_149584f48(plVar4,0x52,param_3,0);
      lVar20 = plVar4[3];
      if (*(int *)(lVar20 + 0x44) + *(int *)(lVar20 + 0x48) < 0) {
        FUN_1495a1bff(lVar20,plVar4);
      }
      else {
        *(int *)(*(longlong *)(lVar20 + 0x50) + (longlong)(1 - iVar13) * 4) = (int)plVar4[0x12];
      }
      goto LAB_14959c4c9;
    case 0x32:
    case 0x33:
      local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
      FUN_149584f48(plVar4,0x45,1,param_3);
      uVar14 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x10),&local_5c);
      local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
      iVar13 = FUN_149584f48(plVar4,bVar33,uVar14,0);
      local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
      FUN_149584f48(plVar4,0x45,0,param_3);
      if (*(char *)(*plVar4 + 0x61) == '\0') {
        iVar40 = (int)plVar4[0x12] + -1;
        if (-1 < iVar13) {
          iVar40 = iVar13;
        }
        puVar27 = (undefined1 *)((longlong)iVar40 * 0x18 + plVar4[0x11]);
      }
      else {
        puVar27 = &DAT_14cc1ee40;
      }
      *(int *)(puVar27 + 8) = (int)plVar4[0x12];
      goto LAB_14959b645;
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      uVar16 = 0;
LAB_14959b5cc:
      pcVar35 = *(char **)(param_2 + 0x10);
      cVar8 = *pcVar35;
      cVar23 = cVar8;
      if (cVar8 == -0x53) {
        cVar23 = pcVar35[2];
      }
      pcVar25 = pcVar35;
      if (cVar23 == -0x52) {
LAB_14959b5f8:
        if (1 < **(int **)(pcVar25 + 0x20)) {
          if (cVar8 == -0x53) {
            cVar8 = pcVar35[2];
          }
          pcVar25 = pcVar35;
          if (cVar8 == -0x52) {
LAB_14959b628:
            iVar13 = **(int **)(pcVar25 + 0x20);
          }
          else {
            iVar13 = 1;
            if (cVar8 == -0x78) {
              pcVar25 = *(char **)(pcVar35 + 0x20);
              goto LAB_14959b628;
            }
          }
          puVar32 = *(uint **)(param_2 + 0x18);
          uVar15 = *(uint *)((longlong)param_1 + 0x44);
          *(uint *)((longlong)param_1 + 0x44) = uVar15 - 1;
          if ((int)param_1[6] != 0) goto LAB_14959b645;
          local_c8 = CONCAT44(local_c8._4_4_,uVar15 - 1);
          cVar8 = (char)*puVar32;
          cVar23 = cVar8;
          if (cVar8 == -0x53) {
            cVar23 = *(char *)((longlong)puVar32 + 2);
          }
          puVar31 = puVar32;
          if (cVar23 == -0x52) {
LAB_14959b6cc:
            iVar40 = **(int **)(puVar31 + 8);
          }
          else {
            iVar40 = 1;
            if (cVar23 == -0x78) {
              puVar31 = *(uint **)(puVar32 + 8);
              goto LAB_14959b6cc;
            }
          }
          if (iVar13 != iVar40) {
switchD_14959b56a_caseD_ae:
            FUN_14955a364(param_1,"row value misused");
            goto LAB_14959b645;
          }
          uVar38 = *(uint *)(param_2 + 4);
          uVar24 = 0x38;
          if (uVar17 != 0x37) {
            uVar24 = uVar17;
          }
          uVar39 = 0x36;
          if ((char)uVar24 != '9') {
            uVar39 = uVar24;
          }
          local_d8 = local_d8 & 0xffffffff00000000;
          local_e0 = (undefined1 *)((ulonglong)local_e0 & 0xffffffff00000000);
          local_fc = param_3;
          local_f0 = puVar32;
          local_d0 = plVar4;
          local_b4 = uVar17;
          if (*pcVar35 == -0x78) {
            uVar14 = FUN_14959dc3b(param_1,pcVar35);
            local_e0 = (undefined1 *)CONCAT44(local_e0._4_4_,uVar14);
            cVar8 = (char)*local_f0;
          }
          local_f8 = (ulonglong *)CONCAT44(local_f8._4_4_,uVar39);
          local_b0 = (ulonglong)uVar15;
          if (cVar8 == -0x78) {
            uVar14 = FUN_14959dc3b(param_1,local_f0);
            local_d8 = CONCAT44(local_d8._4_4_,uVar14);
          }
          bVar33 = (byte)uVar16 | 0x20;
          local_e8 = (int *)(ulonglong)(uint)-iVar13;
          iVar13 = 0;
          local_c0 = CONCAT44(local_c0._4_4_,uVar38 >> 9) & 0xffffffff00000001;
          uVar16 = uVar38 >> 9 & 1;
          goto LAB_14959b781;
        }
      }
      else if (cVar23 == -0x78) {
        pcVar25 = *(char **)(pcVar35 + 0x20);
        goto LAB_14959b5f8;
      }
      uVar14 = FUN_14959d278(param_1,pcVar35,&local_5c);
      uVar12 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x18),&local_60);
      local_108 = *(uint *)(param_2 + 4) >> 9 & 1;
      local_110 = uVar16 | 0x20;
      local_120 = (int *)CONCAT44(local_120._4_4_,uVar12);
      local_128 = (undefined8 *)CONCAT44(local_128._4_4_,uVar14);
      local_118 = param_3;
      FUN_14959d3ba(param_1,pcVar35,*(undefined8 *)(param_2 + 0x18),uVar17);
      goto LAB_14959b645;
    default:
      if (bVar33 == 0x47) {
        if (param_1[0x15] == 0) {
          FUN_14955a364(param_1,"RAISE() may only be used within a trigger-program");
          goto LAB_14959c4c7;
        }
        bVar33 = param_2[1];
        if (bVar33 == 2) {
          puVar22 = (ulonglong *)param_1[0x14];
          if ((ulonglong *)param_1[0x14] == (ulonglong *)0x0) {
            puVar22 = param_1;
          }
          *(undefined1 *)((longlong)puVar22 + 0x21) = 1;
          bVar33 = param_2[1];
        }
        if (bVar33 == 4) {
          uVar30 = *(undefined8 *)(param_2 + 8);
          local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
          uVar14 = FUN_149584f48(plVar4,0x44,0,4);
          FUN_14955a5b6(plVar4,uVar14,uVar30,0);
        }
        else {
          local_120 = (int *)((ulonglong)local_120._1_7_ << 8);
          local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffffffffff00);
          FUN_14959efda(param_1,0x713,(int)(char)bVar33,*(undefined8 *)(param_2 + 8));
        }
        goto LAB_14959b645;
      }
      if (bVar33 != 0x4d) goto switchD_14959b56a_caseD_71;
      lVar20 = *(longlong *)(param_2 + 0x40);
      uVar34 = (ulonglong)*(short *)(param_2 + 0x30);
      sVar10 = *(short *)(lVar20 + 0x46);
      iVar13 = *(int *)(param_2 + 0x2c);
      sVar9 = FUN_14959cc88(lVar20,uVar34 & 0xffffffff);
      local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
      FUN_149584f48(plVar4,0x94,(int)sVar9 + (sVar10 + 1) * iVar13 + 1,param_3);
      if (((longlong)uVar34 < 0) ||
         (*(char *)(*(longlong *)(lVar20 + 8) + 0x19 + uVar34 * 0x20) != 'E')) goto LAB_14959b645;
      local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
      bVar33 = 0x53;
      uVar15 = 0;
    }
LAB_14959bb0c:
    FUN_149584f48(plVar4,bVar33,uVar16,uVar15);
    goto LAB_14959b645;
  }
switchD_14959b56a_caseD_71:
  uVar34 = (ulonglong)local_128 >> 0x20;
  uVar30 = 0x48;
  uVar15 = 0;
  goto LAB_14959b588;
LAB_14959c2ad:
  if (lVar20 == 0) goto LAB_14959c518;
  if ((*(byte *)(lVar20 + 5) & 0x10) == 0) goto LAB_14959c51a;
  lVar20 = *(longlong *)(lVar20 + 0x10);
  goto LAB_14959c2ad;
LAB_14959c518:
  lVar20 = 0;
LAB_14959c51a:
  cVar8 = *(char *)(*(longlong *)(lVar20 + 8) + 4);
  bVar33 = param_2[2];
  local_128 = (undefined8 *)CONCAT44(local_128._4_4_,(uint)(cVar8 != '\0'));
  iVar13 = FUN_149584f48(plVar4,0x57,uVar14,param_3);
  if (*(char *)(*plVar4 + 0x61) == '\0') {
    lVar20 = plVar4[0x11];
    *(undefined1 *)(lVar20 + 1 + (longlong)iVar13 * 0x18) = 0xfd;
    *(uint *)(lVar20 + 0x10 + (longlong)iVar13 * 0x18) = (uint)((bVar33 == 0x2d) != (cVar8 == '\0'))
    ;
  }
  goto LAB_14959b645;
LAB_14959c3f5:
  do {
    if (uVar41 < 0x20) {
      local_88._0_6_ = CONCAT24(1,(undefined4)local_88);
      uStack_a0 = 0x4959f99d;
      uStack_9c = 1;
      local_98 = &LAB_14959fa8c;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      if (*(longlong *)puVar32 != 0) {
        FUN_14959fa98(&local_a8);
        if (local_88._4_2_ == 0) goto LAB_14959c42d;
      }
      uVar16 = uVar16 | 1 << ((uint)uVar41 & 0x1f);
    }
LAB_14959c42d:
    if (((*(byte *)(lVar20 + 4) & 0x20) != 0) && (lVar21 == 0)) {
      lVar21 = FUN_1495862ab(local_f8,*(undefined8 *)puVar32);
    }
    uVar41 = uVar41 + 1;
    puVar32 = puVar32 + 8;
  } while (uVar34 != uVar41);
  uVar15 = 0;
  if ((char)local_d8 == '\0') {
    if (uVar16 == 0) {
LAB_14959cacd:
      uVar15 = FUN_14959d77c(local_f8,(ulonglong)local_e8 & 0xffffffff);
      uVar16 = 0;
    }
    else {
      uVar15 = (int)local_f8[7] + 1;
      *(int *)(local_f8 + 7) = (int)local_f8[7] + (int)local_e8;
    }
    uVar17 = *(uint *)(lVar20 + 4) & 0xc0;
    if ((uVar17 != 0) && ((**(byte **)(local_f0 + 2) & 0xfd) == 0xa4)) {
      (*(byte **)(local_f0 + 2))[2] = (byte)uVar17;
    }
    local_128 = (undefined8 *)CONCAT71(local_128._1_7_,3);
    FUN_14959d7c6(local_f8,local_f0,uVar15,0);
  }
  param_3 = local_fc;
  iVar13 = (int)local_e8;
  if ((int)local_e8 < 2) {
    uVar34 = 8;
    if ((int)local_e8 == 1) goto LAB_14959cb3e;
  }
  else {
    uVar34 = (ulonglong)(param_2[4] >> 7) << 5 | 8;
LAB_14959cb3e:
    lVar20 = FUN_14959d9dd(local_e0,lVar20,(ulonglong)local_e8 & 0xffffffff,
                           *(undefined8 *)((longlong)local_f0 + uVar34));
  }
  param_1 = local_f8;
  uVar17 = uVar16;
  uVar38 = uVar15;
  if ((*(byte *)(lVar20 + 4) & 0x20) != 0) {
    if (lVar21 == 0) {
LAB_14959cb6f:
      lVar21 = *(longlong *)(local_e0 + 0x10);
    }
    plVar4 = local_d0;
    local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
    local_fc = uVar15;
    uVar14 = FUN_149584f48(local_d0,0x51,0,0);
    uVar38 = local_fc;
    FUN_14955a5b6(plVar4,uVar14,lVar21,0xfffffffe);
    uVar17 = uVar16;
  }
LAB_14959cbc0:
  local_118 = (uint)param_2[2];
  local_128 = (undefined8 *)CONCAT44(local_128._4_4_,iVar13);
  local_120 = (int *)lVar20;
  FUN_14959db43(param_1,uVar17,uVar38,param_3);
  uVar16 = param_3;
  if ((iVar13 != 0) && (uVar17 == 0)) {
    if (iVar13 == 1) {
      if (uVar38 != 0) {
        bVar33 = *(byte *)((longlong)param_1 + 0x1f);
        if ((ulonglong)bVar33 < 8) {
          *(byte *)((longlong)param_1 + 0x1f) = bVar33 + 1;
          *(uint *)((longlong)param_1 + (ulonglong)bVar33 * 4 + 0xcc) = uVar38;
        }
      }
    }
    else if ((int)param_1[5] < iVar13) {
      *(int *)(param_1 + 5) = iVar13;
      *(uint *)((longlong)param_1 + 0x2c) = uVar38;
    }
  }
  goto LAB_14959c4c9;
  while (param_2 = *(byte **)(param_2 + 0x10), param_2 != (byte *)0x0) {
switchD_14959b56a_caseD_a7:
    if ((param_2[5] & 0x10) == 0) goto LAB_14959c66c;
  }
  param_2 = (byte *)0x0;
LAB_14959c66c:
  uVar15 = (uint)(*(char *)(*(longlong *)(param_2 + 8) + 4) == '\0');
  uVar34 = (ulonglong)local_128._4_4_;
  uVar30 = 0x45;
LAB_14959b588:
  local_128 = (undefined8 *)(uVar34 << 0x20);
LAB_14959b58b:
  FUN_149584f48(plVar4,uVar30,uVar15,uVar16);
  uVar16 = param_3;
  goto LAB_14959c4c9;
joined_r0x00014959ca34:
  if (puVar28 == (undefined1 *)0x0) goto LAB_14959ca3a;
  if ((*(uint *)(puVar28 + 4) & 0x41000) == 0) goto LAB_14959ca3c;
  if ((*(uint *)(puVar28 + 4) >> 0x12 & 1) == 0) {
    puVar29 = (undefined8 *)(puVar28 + 0x10);
  }
  else {
    puVar29 = (undefined8 *)(*(longlong *)(puVar28 + 0x20) + 8);
  }
  puVar28 = (undefined1 *)*puVar29;
  goto joined_r0x00014959ca34;
  while (iVar13 = iVar13 + piVar26[1], iVar13 < (int)puVar5[1]) {
LAB_14959c170:
    piVar26 = puVar5 + iVar13;
    if (*piVar26 == (int)*(short *)(param_2 + 0x30)) {
      piVar26 = piVar26 + 2;
      goto LAB_14959c18a;
    }
  }
LAB_14959c188:
  piVar26 = (int *)0x0;
LAB_14959c18a:
  *puVar5 = 0;
  if (*(char *)(*plVar4 + 0x61) == '\0') {
    lVar20 = plVar4[0x11];
    lVar21 = plVar4[0x12];
    *(undefined1 *)(lVar20 + -0x17 + (longlong)(int)lVar21 * 0x18) = 0xff;
    *(int **)(lVar20 + -8 + (longlong)(int)lVar21 * 0x18) = piVar26;
  }
  goto LAB_14959c4c9;
switchD_14959b56a_caseD_6f:
  param_2 = *(byte **)(param_2 + 0x10);
  if (param_2 == (byte *)0x0) goto switchD_14959b56a_caseD_71;
  goto LAB_14959b552;
LAB_14959b781:
  local_128 = (undefined8 *)&local_a8;
  local_120 = &local_4c;
  local_4c = 0;
  local_50 = 0;
  uVar14 = FUN_14959f828(param_1,pcVar35,iVar13,(ulonglong)local_e0 & 0xffffffff);
  local_128 = &local_58;
  local_120 = &local_50;
  uVar12 = FUN_14959f828(param_1,local_f0,iVar13,local_d8 & 0xffffffff);
  puVar22 = local_f8;
  uVar15 = (uint)local_f8 & 0xff;
  local_110 = (uint)bVar33;
  local_118 = local_fc;
  local_120 = (int *)CONCAT44(local_120._4_4_,uVar12);
  local_128 = (undefined8 *)CONCAT44(local_128._4_4_,uVar14);
  local_108 = uVar16;
  FUN_14959d3ba(param_1,CONCAT44(uStack_a4,local_a8),local_58,uVar15);
  if (local_4c != 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x1f);
    if ((ulonglong)bVar1 < 8) {
      *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
      *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc) = local_4c;
    }
  }
  if (local_50 != 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x1f);
    if ((ulonglong)bVar1 < 8) {
      *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
      *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc) = local_50;
    }
  }
  iVar40 = (int)local_e8 + iVar13;
  if (iVar40 == -1) goto LAB_14959b947;
  if ((char)puVar22 == '4') {
    local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
    uVar30 = FUN_149584f48(local_d0,0x12,local_fc,local_c8 & 0xffffffff);
    uVar14 = (undefined4)CONCAT71((int7)((ulonglong)uVar30 >> 8),0x34);
LAB_14959b8de:
    bVar33 = bVar33 | 8;
    local_f8 = (ulonglong *)CONCAT44(local_f8._4_4_,uVar14);
  }
  else {
    if (uVar15 == 0x35) {
      local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
      uVar30 = FUN_149584f48(local_d0,0x14,local_fc,local_c8 & 0xffffffff);
      uVar14 = (undefined4)CONCAT71((int7)((ulonglong)uVar30 >> 8),0x35);
      goto LAB_14959b8de;
    }
    local_128 = (undefined8 *)((ulonglong)local_128._4_4_ << 0x20);
    FUN_149584f48(local_d0,0x3a,0,local_c8 & 0xffffffff);
    if (iVar40 == -2) {
      uVar15 = local_b4;
    }
    local_f8 = (ulonglong *)CONCAT44(local_f8._4_4_,uVar15);
  }
  iVar13 = iVar13 + 1;
  uVar16 = (uint)local_c0;
  goto LAB_14959b781;
LAB_14959b947:
  lVar20 = local_d0[3];
  if (*(int *)(lVar20 + 0x44) + *(int *)(lVar20 + 0x48) < 0) {
    FUN_1495a1bff();
    param_3 = local_fc;
  }
  else {
    *(int *)(*(longlong *)(lVar20 + 0x50) + (longlong)-(int)local_b0 * 4) = (int)local_d0[0x12];
    param_3 = local_fc;
  }
  goto LAB_14959b645;
LAB_14959ca3a:
  puVar28 = (undefined1 *)0x0;
LAB_14959ca3c:
  puVar28[2] = *puVar28;
  *puVar28 = 0xad;
  *(undefined4 *)(puVar28 + 0x2c) = uVar14;
  puVar28[5] = puVar28[5] & 0xef;
  local_f8 = (ulonglong *)&local_a8;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  puStack_90 = (ulonglong *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  local_a8 = 0x35;
  local_e0 = puVar27;
  local_98 = puVar27;
LAB_14959bf9d:
  local_5c = 0;
  local_d8 = uVar41 - 1;
  local_c8 = uVar41;
  if (1 < iVar13) {
    piVar26 = local_e8 + 10;
    iVar13 = 0;
    do {
      puVar22 = *(ulonglong **)(piVar26 + -8);
      if (lVar20 == 0) {
        local_f8 = *(ulonglong **)(piVar26 + -8);
        puVar22 = puStack_90;
      }
      puStack_90 = puVar22;
      iVar37 = *(int *)((longlong)param_1 + 0x44);
      iVar40 = iVar37 + -1;
      *(int *)((longlong)param_1 + 0x44) = iVar40;
      FUN_14959ec19(param_1,local_f8,iVar40,0x10);
      FUN_14959afe0(param_1,*(undefined8 *)piVar26,local_fc);
      local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
      FUN_149584f48(plVar4,0xb,0,(ulonglong)local_f0 & 0xffffffff);
      lVar21 = plVar4[3];
      iVar37 = -iVar37;
      if (*(int *)(lVar21 + 0x44) + *(int *)(lVar21 + 0x48) < 0) {
        FUN_1495a1bff(lVar21,plVar4,iVar37);
      }
      else {
        *(int *)(*(longlong *)(lVar21 + 0x50) + (longlong)iVar37 * 4) = (int)plVar4[0x12];
      }
      iVar13 = iVar13 + 2;
      piVar26 = piVar26 + 0x10;
    } while (iVar13 < (int)local_d8);
  }
  param_3 = local_fc;
  if ((local_c8 & 1) == 0) {
    local_128 = (undefined8 *)((ulonglong)local_128 & 0xffffffff00000000);
    FUN_149584f48(plVar4,0x48,0,local_fc);
  }
  else {
    FUN_14959afe0(param_1,*(undefined8 *)(local_e8 + local_d8 * 8 + 2),local_fc);
  }
  plVar7 = local_d0;
  if (local_e0 != (undefined1 *)0x0) {
    FUN_14958288e(local_c0);
  }
  lVar20 = plVar4[3];
  if (*(int *)(lVar20 + 0x44) + *(int *)(lVar20 + 0x48) < 0) {
    FUN_1495a1bff(lVar20,plVar4,-(int)plVar7);
  }
  else {
    *(int *)(*(longlong *)(lVar20 + 0x50) + (longlong)-(int)plVar7 * 4) = (int)plVar4[0x12];
  }
LAB_14959b645:
  if (local_5c != 0) {
    bVar33 = *(byte *)((longlong)param_1 + 0x1f);
    if ((ulonglong)bVar33 < 8) {
      *(byte *)((longlong)param_1 + 0x1f) = bVar33 + 1;
      *(int *)((longlong)param_1 + (ulonglong)bVar33 * 4 + 0xcc) = local_5c;
    }
  }
  uVar16 = param_3;
  if (local_60 != 0) {
    bVar33 = *(byte *)((longlong)param_1 + 0x1f);
    if ((ulonglong)bVar33 < 8) {
      *(byte *)((longlong)param_1 + 0x1f) = bVar33 + 1;
      *(int *)((longlong)param_1 + (ulonglong)bVar33 * 4 + 0xcc) = local_60;
    }
  }
LAB_14959c4c9:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 14959cc88 FUN_14959cc88 body=96 status=ok
// SIG undefined FUN_14959cc88(void)

uint FUN_14959cc88(longlong param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  
  sVar1 = (short)param_2;
  uVar2 = param_2;
  if ((-1 < sVar1) && ((*(uint *)(param_1 + 0x40) & 0x20) != 0)) {
    if (sVar1 == 0) {
      lVar3 = 0;
      uVar2 = 0;
    }
    else {
      lVar3 = (longlong)sVar1;
      pbVar4 = (byte *)(*(longlong *)(param_1 + 8) + 0x1c);
      uVar2 = 0;
      lVar5 = lVar3;
      do {
        uVar2 = (uint)(ushort)((short)uVar2 + (ushort)((*pbVar4 & 0x20) == 0));
        pbVar4 = pbVar4 + 0x20;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x1c + lVar3 * 0x20) & 0x20) != 0) {
      uVar2 = CONCAT22((short)(param_2 - uVar2 >> 0x10),
                       (short)(param_2 - uVar2) + *(short *)(param_1 + 0x48));
    }
  }
  return uVar2;
}



// FUNCTION 14959cce8 FUN_14959cce8 body=203 status=ok
// SIG undefined FUN_14959cce8(void)

void FUN_14959cce8(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar2 = FUN_149584f48(plVar1,0x15,*(int *)(param_1 + 0x40) + -1,0,param_3);
  }
  FUN_14959afe0(param_1,*(undefined8 *)(param_2 + 8),param_3);
  if ('A' < *(char *)(param_2 + 0x19)) {
    uVar3 = FUN_149584f48(plVar1,0x5a,param_3,1,0);
    FUN_14955a5b6(plVar1,uVar3,param_2 + 0x19,1);
  }
  if (iVar2 != 0) {
    if (*(char *)(*plVar1 + 0x61) == '\0') {
      iVar4 = (int)plVar1[0x12] + -1;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      puVar5 = (undefined1 *)((longlong)iVar4 * 0x18 + plVar1[0x11]);
    }
    else {
      puVar5 = &DAT_14cc1ee40;
    }
    *(int *)(puVar5 + 8) = (int)plVar1[0x12];
  }
  return;
}



// FUNCTION 14959cdb3 FUN_14959cdb3 body=114 status=ok
// SIG undefined FUN_14959cdb3(void)

undefined4
FUN_14959cdb3(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,byte param_6)

{
  longlong *plVar1;
  char *pcVar2;
  
  FUN_14959f097(*(undefined8 *)(param_1 + 0x10),param_2,param_4,param_3,param_5);
  if (param_6 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (*(char *)(*plVar1 + 0x61) == '\0') {
      pcVar2 = (char *)(plVar1[0x11] + (longlong)(int)plVar1[0x12] * 0x18 + -0x18);
    }
    else {
      pcVar2 = &DAT_14cc1ee40;
    }
    if (*pcVar2 == 'Y') {
      *(ushort *)(pcVar2 + 2) = (ushort)param_6;
    }
  }
  return param_5;
}



// FUNCTION 14959ce25 FUN_14959ce25 body=389 status=ok
// SIG undefined FUN_14959ce25(void)

void FUN_14959ce25(longlong param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  wchar_t *pwVar6;
  char cVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    iVar3 = FUN_14955d462(lVar2,&local_38);
    if (((iVar3 != 2) && (iVar3 != 3 || param_3 != 0)) && (!SBORROW8(0,local_38) || param_3 == 0)) {
      if ((param_3 != 0) && (local_38 = -local_38, iVar3 == 3)) {
        local_38 = -0x8000000000000000;
      }
      local_48 = 0xfffffff2;
      FUN_14959f7bb(uVar1,0x46,param_4,&local_38);
      if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (lVar2 == 0) {
LAB_14959ce99:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    lVar4 = 0;
    do {
      if ((ulonglong)*(byte *)(lVar2 + lVar4) == 0) {
        cVar7 = (&DAT_14bd3ff30)[(byte)(&DAT_14a179929)[lVar4]];
        cVar5 = '\0';
LAB_14959cf93:
        if (cVar5 != cVar7) goto LAB_14959ce99;
        break;
      }
      cVar5 = (&DAT_14bd3ff30)[*(byte *)(lVar2 + lVar4)];
      cVar7 = (&DAT_14bd3ff30)[(byte)(&DAT_14a179929)[lVar4]];
      if (cVar5 != cVar7) goto LAB_14959cf93;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 2);
    pwVar6 = L"";
    if (param_3 != 0) {
      pwVar6 = L"-`[Left Bracket";
    }
    FUN_14955a364(param_1,"hex literal too big: %s%s",pwVar6,lVar2);
  }
  else {
    iVar3 = -*(int *)(param_2 + 8);
    if (param_3 == 0) {
      iVar3 = *(int *)(param_2 + 8);
    }
    local_48 = 0;
    FUN_149584f48(uVar1,0x45,iVar3,param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 14959cfc7 FUN_14959cfc7 body=161 status=ok
// SIG undefined FUN_14959cfc7(void)

void FUN_14959cfc7(undefined8 param_1,char *param_2,int param_3,undefined4 param_4)

{
  size_t sVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    FUN_14956c0e2(param_2,&local_30,(uint)sVar1 & 0x3fffffff,1);
    if (param_3 != 0) {
      local_30 = local_30 ^ 0x8000000000000000;
    }
    local_38 = 0xfffffff3;
    FUN_14959f7bb(param_1,0x96,param_4,&local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14959d069 FUN_14959d069 body=132 status=ok
// SIG undefined FUN_14959d069(void)

void FUN_14959d069(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = (int)param_3;
  lVar2 = FUN_14955d750(param_1,((int)(((uint)(param_3 >> 0x1f) & 1) + iVar4) >> 1) + 1);
  if (lVar2 != 0) {
    if (iVar4 < 2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        cVar1 = *(char *)(param_2 + 1 + uVar3);
        *(byte *)(lVar2 + (uVar3 >> 1)) =
             ((char)(cVar1 * '\x02') >> 7 & 9U) + cVar1 & 0xf |
             (((char)(*(char *)(param_2 + uVar3) * '\x02') >> 7 & 9U) + *(char *)(param_2 + uVar3))
             * '\x10';
        uVar3 = uVar3 + 2;
      } while (uVar3 < iVar4 - 1);
      uVar3 = uVar3 >> 1 & 0x7fffffff;
    }
    *(undefined1 *)(lVar2 + uVar3) = 0;
  }
  return;
}



// FUNCTION 14959d0ed FUN_14959d0ed body=394 status=ok
// SIG undefined FUN_14959d0ed(void)

ulonglong FUN_14959d0ed(byte *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  byte *pbVar4;
  byte bVar5;
  undefined8 unaff_RBX;
  undefined7 uVar7;
  ulonglong uVar6;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar5 = *param_1;
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (bVar5 != 0) {
    pbVar4 = (byte *)0x0;
    uVar6 = CONCAT71(uVar7,0x43);
    uVar8 = 0;
LAB_14959d126:
    param_1 = param_1 + 1;
    uVar9 = uVar8 << 8;
    uVar8 = (byte)(&DAT_14bd3ff30)[bVar5] | uVar9;
    uVar7 = (undefined7)(uVar6 >> 8);
    if ((int)uVar8 < 0x636c6f62) {
      if (uVar8 == 0x626c6f62) {
        if (((char)uVar6 != 'E') && (((uint)uVar6 & 0xff) != 0x43)) goto LAB_14959d19a;
        bVar5 = *param_1;
        if (bVar5 == 0x28) {
          pbVar4 = param_1;
        }
        uVar6 = CONCAT71(uVar7,0x41);
        goto LAB_14959d172;
      }
      if (uVar8 == 0x63686172) {
        uVar6 = CONCAT71(uVar7,0x42);
        pbVar4 = param_1;
        goto LAB_14959d16f;
      }
LAB_14959d19a:
      if ((uVar8 == 0x646f7562 || (uVar8 == 0x666c6f61 || uVar8 == 0x7265616c)) &&
          (char)uVar6 == 'C') {
        uVar6 = CONCAT71(uVar7,0x45);
        goto LAB_14959d16f;
      }
      if (((uint)(byte)(&DAT_14bd3ff30)[bVar5] | uVar9 & 0xffffff) == 0x696e74) {
        uVar6 = CONCAT71(uVar7,0x44);
        goto LAB_14959d21e;
      }
    }
    else {
      if ((uVar8 != 0x636c6f62) && (uVar8 != 0x74657874)) goto LAB_14959d19a;
      uVar6 = CONCAT71(uVar7,0x42);
    }
LAB_14959d16f:
    bVar5 = *param_1;
LAB_14959d172:
    if (bVar5 == 0) goto LAB_14959d1e8;
    goto LAB_14959d126;
  }
  uVar6 = CONCAT71(uVar7,0x43);
LAB_14959d21e:
  if (param_2 == 0) goto LAB_14959d234;
  iVar2 = 0;
  goto LAB_14959d225;
LAB_14959d1e8:
  if (param_2 == 0) goto LAB_14959d234;
  local_24 = 0;
  iVar2 = 0;
  if ((byte)uVar6 < 0x43) {
    if (pbVar4 == (byte *)0x0) {
      iVar2 = 4;
    }
    else {
      bVar5 = *pbVar4;
      while (iVar2 = 0, bVar5 != 0) {
        if (0xfffffffffffffff5 < (ulonglong)bVar5 - 0x3a) {
          FUN_149581ec6(pbVar4,&local_24);
          iVar2 = local_24 + 3;
          if (-1 < local_24) {
            iVar2 = local_24;
          }
          iVar2 = iVar2 >> 2;
          break;
        }
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar5 = *pbVar1;
      }
    }
  }
LAB_14959d225:
  cVar3 = -2;
  if (iVar2 < 0xfe) {
    cVar3 = (char)iVar2;
  }
  *(char *)(param_2 + 0x1a) = cVar3 + '\x01';
LAB_14959d234:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14959d278 FUN_14959d278 body=321 status=ok
// SIG undefined FUN_14959d278(void)

void FUN_14959d278(longlong param_1,char *param_2,int *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  code *local_58;
  undefined1 *local_50;
  short local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (char *)0x0) {
    bVar1 = true;
  }
  else {
    do {
      bVar6 = (*(uint *)(param_2 + 4) & 0x41000) == 0;
      bVar1 = !bVar6;
      if (bVar6) goto LAB_14959d2a0;
      if ((*(uint *)(param_2 + 4) >> 0x12 & 1) == 0) {
        param_2 = param_2 + 0x10;
      }
      else {
        param_2 = (char *)(*(longlong *)(param_2 + 0x20) + 8);
      }
      param_2 = *(char **)param_2;
    } while (param_2 != (char *)0x0);
  }
  param_2 = (char *)0x0;
LAB_14959d2a0:
  if ((*(char *)(param_1 + 0x23) != '\0') && (*param_2 != -0x53)) {
    local_3c = 2;
    local_58 = FUN_14959f99d;
    local_50 = &LAB_14959fa8c;
    local_38 = 0;
    if ((bVar1) || (FUN_14959fa98(local_60,param_2), local_3c != 0)) {
      *param_3 = 0;
      FUN_14959d4d8(param_1,param_2,0xffffffff);
      goto LAB_14959d314;
    }
  }
  if (*(char *)(param_1 + 0x1f) == '\0') {
    iVar5 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar5;
  }
  else {
    bVar2 = *(char *)(param_1 + 0x1f) - 1;
    *(byte *)(param_1 + 0x1f) = bVar2;
    iVar5 = *(int *)(param_1 + 0xcc + (ulonglong)bVar2 * 4);
  }
  iVar3 = FUN_14959b4fb(param_1,param_2,iVar5);
  iVar4 = iVar5;
  if ((iVar3 != iVar5) && (iVar4 = 0, iVar5 != 0)) {
    bVar2 = *(byte *)(param_1 + 0x1f);
    if ((ulonglong)bVar2 < 8) {
      *(byte *)(param_1 + 0x1f) = bVar2 + 1;
      *(int *)(param_1 + 0xcc + (ulonglong)bVar2 * 4) = iVar5;
    }
  }
  *param_3 = iVar4;
LAB_14959d314:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14959d3ba FUN_14959d3ba body=286 status=ok
// SIG undefined FUN_14959d3ba(void)

void FUN_14959d3ba(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar4 = param_3;
    uVar6 = param_2;
    if (param_9 == 0) {
      uVar4 = param_2;
      uVar6 = param_3;
    }
    uVar4 = FUN_149586264(param_1,uVar4,uVar6);
    bVar1 = FUN_14959f8fa(param_3);
    bVar2 = FUN_14959f8fa(param_2);
    if ((char)bVar1 < 'A' || (char)bVar2 < 'A') {
      if ((char)bVar2 < 'A') {
        bVar2 = bVar1;
      }
      bVar7 = bVar2 | 0x40;
    }
    else {
      bVar7 = 0x43;
      if (bVar1 < 0x43) {
        bVar7 = (0x42 < bVar2) * '\x02' | 0x41;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = FUN_149584f48(uVar6,param_4,param_6,param_7,param_5);
    FUN_14955a5b6(uVar6,uVar3,uVar4,0xfffffffe);
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x90);
    if (0 < lVar5) {
      *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + -0x16 + lVar5 * 0x18) =
           (ushort)(bVar7 | param_8);
    }
  }
  return;
}



// FUNCTION 14959d4d8 FUN_14959d4d8 body=216 status=ok
// SIG undefined FUN_14959d4d8(void)

ulonglong FUN_14959d4d8(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar8 = param_3 & 0xffffffff;
  puVar1 = (uint *)param_1[0xb];
  if ((((int)param_3 < 0) && (puVar1 != (uint *)0x0)) && (0 < (int)*puVar1)) {
    iVar7 = *puVar1 + 1;
    puVar2 = puVar1;
    do {
      if (((puVar2[7] & 8) != 0) &&
         (iVar3 = FUN_14959fe84(0,*(undefined8 *)(puVar2 + 2),param_2,0xffffffff), iVar3 == 0)) {
        return (ulonglong)puVar2[8];
      }
      iVar7 = iVar7 + -1;
      puVar2 = puVar2 + 8;
    } while (1 < iVar7);
  }
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1495a1c89(*param_1,param_2,0,0);
  }
  piVar5 = (int *)FUN_14958f62a(param_1,puVar1,uVar4);
  if (piVar5 != (int *)0x0) {
    lVar6 = (longlong)*piVar5;
    piVar5[lVar6 * 8 + -1] =
         (piVar5[lVar6 * 8 + -1] & 0xfffffff7U) + ((uint)(param_3 >> 0x1f) & 1) * 8;
    if ((int)param_3 < 0) {
      uVar8 = (ulonglong)(*(int *)(param_1 + 7) + 1U);
      *(uint *)(param_1 + 7) = *(int *)(param_1 + 7) + 1U;
    }
    piVar5[lVar6 * 8] = (int)uVar8;
  }
  param_1[0xb] = piVar5;
  return uVar8;
}



// FUNCTION 14959d5b0 FUN_14959d5b0 body=460 status=ok
// SIG undefined FUN_14959d5b0(void)

ulonglong FUN_14959d5b0(longlong param_1,uint *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  
  uVar6 = (ulonglong)param_4;
  if (3 < param_3) {
    uVar6 = FUN_14959b4fb(param_1,*(undefined8 *)(param_2 + 2),uVar6);
    return uVar6;
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  switch(param_3) {
  case 0:
    uVar2 = *param_2;
    iVar8 = *(int *)(param_1 + 0x44);
    iVar1 = iVar8 + -1;
    *(int *)(param_1 + 0x44) = iVar1;
    FUN_14959afe0(param_1,*(undefined8 *)(param_2 + 2),param_4);
    if (1 < (int)uVar2) {
      lVar9 = 0;
      do {
        FUN_149584f48(plVar3,0x33,param_4,iVar1,0);
        FUN_14959afe0(param_1,*(undefined8 *)((longlong)param_2 + lVar9 + 0x28),uVar6);
        lVar9 = lVar9 + 0x20;
      } while ((ulonglong)uVar2 * 0x20 + -0x20 != lVar9);
    }
    if (*(char *)(*plVar3 + 0x61) == '\0') {
      pcVar5 = (char *)(plVar3[0x11] + (longlong)(int)plVar3[0x12] * 0x18 + -0x18);
    }
    else {
      pcVar5 = &DAT_14cc1ee40;
    }
    if ((*pcVar5 == 'M') && (0 < (longlong)(int)plVar3[0x12])) {
      *(undefined2 *)(plVar3[0x11] + -0x16 + (longlong)(int)plVar3[0x12] * 0x18) = 1;
    }
    lVar9 = plVar3[3];
    iVar8 = -iVar8;
    if (-1 < *(int *)(lVar9 + 0x44) + *(int *)(lVar9 + 0x48)) {
      *(int *)(*(longlong *)(lVar9 + 0x50) + (longlong)iVar8 * 4) = (int)plVar3[0x12];
      return uVar6;
    }
    FUN_1495a1bff(lVar9,plVar3,iVar8);
    return uVar6;
  case 1:
    if (**(char **)(param_2 + 10) != -0x5c) {
      uVar7 = 0x48;
      uVar4 = 0;
      goto LAB_14959d6e7;
    }
    uVar4 = FUN_1495a0531(*(undefined8 *)(param_2 + 2),
                          *(undefined4 *)(*(char **)(param_2 + 10) + 0x2c));
    break;
  case 2:
    uVar4 = FUN_1495a04a0(param_1,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 10),
                          0xffffffff);
    break;
  case 3:
    uVar4 = FUN_14959fe84(0,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 10),0xffffffff);
  }
  uVar7 = 0x45;
LAB_14959d6e7:
  FUN_149584f48(plVar3,uVar7,uVar4,uVar6,0);
  return uVar6;
}



// FUNCTION 14959d77c FUN_14959d77c body=74 status=ok
// SIG undefined FUN_14959d77c(void)

int FUN_14959d77c(longlong param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  if (param_2 != 1) {
    if (*(int *)(param_1 + 0x28) < param_2) {
      iVar2 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = param_2 + iVar2;
      return iVar2 + 1;
    }
    iVar2 = *(int *)(param_1 + 0x2c);
    *(int *)(param_1 + 0x2c) = param_2 + iVar2;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - param_2;
    return iVar2;
  }
  if (*(char *)(param_1 + 0x1f) != '\0') {
    bVar1 = *(char *)(param_1 + 0x1f) - 1;
    *(byte *)(param_1 + 0x1f) = bVar1;
    return *(int *)(param_1 + 0xcc + (ulonglong)bVar1 * 4);
  }
  iVar2 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar2;
  return iVar2;
}



// FUNCTION 14959d7c6 FUN_14959d7c6 body=534 status=ok
// SIG undefined FUN_14959d7c6(void)

void FUN_14959d7c6(longlong param_1,ushort *param_2,undefined8 param_3,int param_4,byte param_5)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_8c;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  code *local_70;
  undefined1 *local_68;
  short local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar9 = *(int *)param_2;
  local_80 = param_3;
  if (0 < iVar9) {
    local_88 = *(longlong **)(param_1 + 0x10);
    bVar3 = param_5 & 0xfd;
    if (*(char *)(param_1 + 0x23) != '\0') {
      bVar3 = param_5;
    }
    local_8c = 0x4e - (uint)(param_5 & 1);
    iVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_2 + 4);
      if (((bVar3 & 4) == 0) || (uVar1 = param_2[0x10], uVar1 == 0)) {
        if ((bVar3 & 2) != 0) {
          local_54 = 2;
          local_70 = FUN_14959f99d;
          local_68 = &LAB_14959fa8c;
          local_50 = 0;
          if ((lVar2 == 0) || (FUN_14959fa98(local_78,lVar2), local_54 != 0)) {
            FUN_14959d4d8(param_1,lVar2,(int)local_80 + iVar6);
            goto LAB_14959d85e;
          }
        }
        iVar8 = (int)local_80 + iVar6;
        iVar7 = FUN_14959b4fb(param_1,lVar2,iVar8);
        if (iVar7 != iVar8) {
          if ((param_5 & 1) != 0) {
            pcVar4 = &DAT_14cc1ee40;
            if (*(char *)(*local_88 + 0x61) == '\0') {
              pcVar4 = (char *)(local_88[0x11] + (longlong)(int)local_88[0x12] * 0x18 + -0x18);
            }
            if ((((*pcVar4 == 'M') &&
                 (iVar5 = *(int *)(pcVar4 + 0xc) + 1, *(int *)(pcVar4 + 4) + iVar5 == iVar7)) &&
                (*(int *)(pcVar4 + 8) + iVar5 == iVar8)) && (*(short *)(pcVar4 + 2) == 0)) {
              *(int *)(pcVar4 + 0xc) = iVar5;
              goto LAB_14959d85e;
            }
          }
LAB_14959d992:
          local_98 = 0;
          FUN_149584f48(local_88,local_8c,iVar7,iVar8);
        }
      }
      else {
        if ((bVar3 & 8) == 0) {
          iVar8 = (int)local_80 + iVar6;
          iVar7 = (uint)uVar1 + param_4 + -1;
          goto LAB_14959d992;
        }
        iVar6 = iVar6 + -1;
        iVar9 = iVar9 + -1;
      }
LAB_14959d85e:
      iVar6 = iVar6 + 1;
      param_2 = param_2 + 0x10;
    } while (iVar6 < iVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14959d9dd FUN_14959d9dd body=357 status=ok
// SIG undefined FUN_14959d9dd(void)

undefined8 * FUN_14959d9dd(longlong param_1,undefined8 *param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  char *_Str;
  int iVar2;
  longlong *plVar3;
  undefined8 *_Dst;
  longlong lVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  if ((((param_4 != (char *)0x0) && (*param_4 == -0x5c)) &&
      (lVar4 = *(longlong *)(param_4 + 0x40), lVar4 != 0)) && (*(int *)(lVar4 + 0x54) != 0)) {
    for (plVar3 = *(longlong **)(lVar4 + 0x60); plVar3 != (longlong *)0x0;
        plVar3 = (longlong *)plVar3[5]) {
      if (*plVar3 == param_1) goto LAB_14959da37;
    }
    plVar3 = (longlong *)0x0;
LAB_14959da37:
    pcVar1 = *(code **)(*(longlong *)plVar3[2] + 0x90);
    if (pcVar1 != (code *)0x0) {
      local_48 = &local_38;
      iVar2 = (*pcVar1)((longlong *)plVar3[2],param_3,param_2[7],&local_30);
      if (iVar2 != 0) {
        sVar6 = 0x49;
        if ((char *)param_2[7] != (char *)0x0) {
          sVar6 = strlen((char *)param_2[7]);
          sVar6 = (ulonglong)((uint)sVar6 & 0x3fffffff) + 0x49;
        }
        if (param_1 == 0) {
          _Dst = (undefined8 *)FUN_145e3bd67(sVar6);
        }
        else {
          _Dst = (undefined8 *)FUN_14955d750(param_1);
        }
        if (_Dst != (undefined8 *)0x0) {
          memset(_Dst,0,sVar6);
          puVar5 = param_2;
          puVar7 = _Dst;
          for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          _Dst[7] = _Dst + 9;
          _Str = (char *)param_2[7];
          if (_Str == (char *)0x0) {
            sVar6 = 1;
          }
          else {
            sVar6 = strlen(_Str);
            sVar6 = (ulonglong)((uint)sVar6 & 0x3fffffff) + 1;
          }
          memcpy(_Dst + 9,_Str,sVar6);
          _Dst[3] = local_30;
          _Dst[1] = local_38;
          *(byte *)((longlong)_Dst + 4) = *(byte *)((longlong)_Dst + 4) | 0x10;
          param_2 = _Dst;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14959db43 FUN_14959db43 body=248 status=ok
// SIG undefined FUN_14959db43(void)

void FUN_14959db43(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,longlong param_6,int param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[2];
  puVar3 = (undefined8 *)FUN_14955d750(*param_1);
  if (puVar3 == (undefined8 *)0x0) {
    if ((*(byte *)(param_6 + 4) & 0x10) != 0) {
      FUN_14955d65a(*param_1,param_6);
      return;
    }
  }
  else {
    *puVar3 = 0;
    puVar3[1] = param_6;
    puVar3[3] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
    *(undefined1 *)((longlong)puVar3 + 0x29) = param_5;
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(lVar1 + 0x90);
    uVar2 = FUN_149584f48(lVar1,(param_7 == 0) + '?',param_2,param_3,param_4);
    FUN_14955a5b6(lVar1,uVar2,puVar3,0xfffffff0);
    if (0 < (longlong)*(int *)(lVar1 + 0x90)) {
      *(ushort *)(*(longlong *)(lVar1 + 0x88) + -0x16 + (longlong)*(int *)(lVar1 + 0x90) * 0x18) =
           (ushort)param_7 & 0x2e;
    }
  }
  return;
}



// FUNCTION 14959dc3b FUN_14959dc3b body=797 status=ok
// SIG undefined FUN_14959dc3b(void)

int FUN_14959dc3b(undefined8 *param_1,char *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined1 local_78 [4];
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)param_1[2];
  lVar3 = *(longlong *)(param_2 + 0x20);
  uVar1 = *(uint *)(param_2 + 4);
  iVar5 = 0;
  if ((uVar1 & 0x20) == 0) {
    if ((uVar1 >> 0x19 & 1) != 0) {
      FUN_1495a08a0(param_1,0,"REUSE SUBQUERY %d",*(undefined4 *)(lVar3 + 0x10));
      local_88 = 0;
      FUN_149584f48(plVar2,0xc,*(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x40));
      iVar6 = *(int *)(param_2 + 0x2c);
      goto LAB_14959de9a;
    }
    *(uint *)(param_2 + 4) = uVar1 | 0x2000000;
    iVar5 = *(int *)(param_1 + 7);
    *(int *)(param_1 + 7) = iVar5 + 1;
    *(int *)(param_2 + 0x44) = iVar5 + 1;
    local_88 = 0;
    iVar5 = FUN_149584f48(plVar2,0x45,0);
    *(int *)(param_2 + 0x40) = iVar5 + 1;
    local_88 = 0;
    iVar5 = FUN_149584f48(plVar2,0x11,0,0);
  }
  local_88 = *(undefined4 *)(lVar3 + 0x10);
  pcVar12 = "";
  if (iVar5 == 0) {
    pcVar12 = "CORRELATED ";
  }
  FUN_1495a08a0(param_1,1,"%sSCALAR SUBQUERY %d",pcVar12);
  iVar6 = 1;
  if (*param_2 == -0x78) {
    iVar6 = **(int **)(lVar3 + 0x20);
  }
  local_74 = *(int *)(param_1 + 7) + 1;
  local_88 = *(int *)(param_1 + 7) + iVar6;
  local_70 = 0;
  uStack_68 = 0;
  *(int *)(param_1 + 7) = local_88;
  if (*param_2 == -0x78) {
    local_70 = CONCAT44(iVar6,local_74);
    FUN_149584f48(plVar2,0x48,0);
    local_78[0] = 10;
  }
  else {
    local_88 = 0;
    FUN_149584f48(plVar2,0x45,0);
    local_78[0] = 3;
  }
  uVar8 = *param_1;
  if (*(longlong *)(lVar3 + 0x60) == 0) {
    local_58 = &DAT_149e377d0;
    local_50 = 1;
    uVar8 = FUN_14958f7cb(uVar8,0x98,&local_58,0);
    uVar8 = FUN_14958aad5(param_1,0x92,uVar8,0);
    *(undefined8 *)(lVar3 + 0x60) = uVar8;
  }
  else {
    local_58 = &DAT_149dfd150;
    local_50 = 1;
    uVar10 = 0;
    lVar9 = FUN_14958f7cb(uVar8,0x98,&local_58,0);
    if (lVar9 != 0) {
      *(undefined1 *)(lVar9 + 1) = 0x43;
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + 0x10);
      if (lVar4 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_1495a1c89(uVar8,lVar4,0,0);
      }
      uVar10 = FUN_14958aad5(param_1,0x34,uVar10,lVar9);
    }
    lVar9 = *(longlong *)(lVar3 + 0x60);
    if (*(longlong *)(lVar9 + 0x10) != 0) {
      FUN_14958288e(uVar8);
      lVar9 = *(longlong *)(lVar3 + 0x60);
    }
    *(undefined8 *)(lVar9 + 0x10) = uVar10;
  }
  *(undefined4 *)(lVar3 + 8) = 0;
  iVar7 = FUN_14958cf93(param_1,lVar3,local_78);
  iVar6 = 0;
  if (iVar7 == 0) {
    *(int *)(param_2 + 0x2c) = local_74;
    iVar6 = local_74;
    if (iVar5 != 0) {
      puVar13 = &DAT_14cc1ee40;
      puVar11 = &DAT_14cc1ee40;
      if (*(char *)(*plVar2 + 0x61) == '\0') {
        iVar7 = (int)plVar2[0x12] + -1;
        if (-1 < iVar5) {
          iVar7 = iVar5;
        }
        puVar11 = (undefined1 *)((longlong)iVar7 * 0x18 + plVar2[0x11]);
      }
      *(int *)(puVar11 + 8) = (int)plVar2[0x12];
      local_88 = 0;
      FUN_149584f48(plVar2,0x41,*(undefined4 *)(param_2 + 0x44),0);
      iVar5 = (int)plVar2[0x12] + -1;
      if (*(char *)(*plVar2 + 0x61) == '\0') {
        iVar7 = *(int *)(param_2 + 0x40) + -1;
        if (*(int *)(param_2 + 0x40) < 1) {
          iVar7 = iVar5;
        }
        puVar13 = (undefined1 *)((longlong)iVar7 * 0x18 + plVar2[0x11]);
      }
      *(int *)(puVar13 + 4) = iVar5;
      *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
      *(undefined4 *)(param_1 + 5) = 0;
    }
  }
LAB_14959de9a:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14959df59 FUN_14959df59 body=2555 status=ok
// SIG undefined FUN_14959df59(void)

void FUN_14959df59(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  void *_Dst;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  char cVar14;
  undefined1 *puVar15;
  uint uVar16;
  size_t _Size;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 *local_b0;
  longlong *local_a8;
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  int local_84;
  int *local_80;
  ulonglong local_78;
  int local_6c;
  ulonglong local_68;
  byte *local_60;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [4];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_4c = 0;
  local_54 = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  iVar4 = FUN_1495a0961();
  if (iVar4 != 0) goto LAB_14959dfa7;
  local_60 = (byte *)FUN_1495a09f2(param_1);
  pcVar10 = *(char **)(param_2 + 0x10);
  cVar14 = *pcVar10;
  if (cVar14 == -0x53) {
    cVar14 = pcVar10[2];
  }
  if (cVar14 == -0x52) {
LAB_14959e00d:
    uVar21 = **(uint **)(pcVar10 + 0x20);
  }
  else {
    uVar21 = 1;
    if (cVar14 == -0x78) {
      pcVar10 = *(char **)(pcVar10 + 0x20);
      goto LAB_14959e00d;
    }
  }
  _Size = (longlong)(int)uVar21 * 5 + 1;
  if (*param_1 == 0) {
    _Dst = (void *)FUN_145e3bd67(_Size);
  }
  else {
    _Dst = (void *)FUN_14955d750();
  }
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
  }
  if (*(char *)(*param_1 + 0x61) == '\0') {
    local_a8 = (longlong *)param_1[2];
    piVar20 = &local_4c;
    if (param_3 == param_4) {
      piVar20 = (int *)0x0;
    }
    local_b0 = &local_54;
    local_b8 = _Dst;
    uVar5 = FUN_1495a0aff(param_1,param_2,3,piVar20);
    local_80 = (int *)CONCAT44(local_80._4_4_,uVar5);
    uVar6 = FUN_14959eb5a(param_1,uVar1,local_50);
    uVar12 = (ulonglong)uVar6;
    if ((int)uVar21 < 1) {
      if (uVar21 != 0) {
        uVar12 = FUN_14959d77c(param_1,uVar21);
        uVar12 = uVar12 & 0xffffffff;
      }
    }
    else {
      uVar11 = 0;
      do {
        if (uVar11 != *(uint *)((longlong)_Dst + uVar11 * 4)) {
          if (uVar21 != (uint)uVar11) {
            local_9c = uVar6;
            uVar6 = FUN_14959d77c(param_1,uVar21);
            local_98 = (ulonglong)uVar6;
            local_90 = (ulonglong)local_9c;
            uVar11 = 0;
            do {
              local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
              local_78 = uVar11;
              FUN_149584f48(local_a8,0x4d,(int)local_90 + (int)uVar11,
                            *(int *)((longlong)_Dst + uVar11 * 4) + (int)local_98);
              uVar11 = local_78 + 1;
              uVar12 = local_98;
              uVar6 = local_9c;
            } while (uVar21 != uVar11);
          }
          goto LAB_14959e123;
        }
        uVar11 = uVar11 + 1;
      } while (uVar21 != uVar11);
      uVar12 = (ulonglong)uVar6;
    }
LAB_14959e123:
    if ((int)local_80 == 5) {
      local_80 = *(int **)(param_2 + 0x20);
      local_9c = uVar6;
      local_98 = uVar12;
      local_78 = FUN_1495862ab(param_1,*(undefined8 *)(param_2 + 0x10));
      local_68 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
      local_84 = *(uint *)((longlong)param_1 + 0x44) - 1;
      iVar4 = 0;
      *(int *)((longlong)param_1 + 0x44) = local_84;
      if (param_3 != param_4) {
        if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
          iVar4 = (int)param_1[7] + 1;
          *(int *)(param_1 + 7) = iVar4;
        }
        else {
          bVar2 = *(char *)((longlong)param_1 + 0x1f) - 1;
          *(byte *)((longlong)param_1 + 0x1f) = bVar2;
          iVar4 = *(int *)((longlong)param_1 + (ulonglong)bVar2 * 4 + 0xcc);
        }
        local_b8 = (void *)CONCAT44(local_b8._4_4_,iVar4);
        FUN_149584f48(local_a8,0x65,local_98,local_98 & 0xffffffff);
      }
      uVar3 = FUN_14959f8fa(*(undefined8 *)(param_2 + 0x10));
      local_90 = CONCAT71(local_90._1_7_,uVar3);
      plVar18 = local_a8;
      if (0 < *local_80) {
        piVar20 = local_80 + 2;
        lVar19 = 0;
        local_6c = iVar4;
        do {
          if ((char)local_90 == 'E') {
            if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
              iVar7 = (int)param_1[7] + 1;
              *(int *)(param_1 + 7) = iVar7;
            }
            else {
              bVar2 = *(char *)((longlong)param_1 + 0x1f) - 1;
              *(byte *)((longlong)param_1 + 0x1f) = bVar2;
              iVar7 = *(int *)((longlong)param_1 + (ulonglong)bVar2 * 4 + 0xcc);
            }
            local_58 = iVar7;
            FUN_14959afe0(param_1,*(undefined8 *)piVar20,iVar7);
            plVar18 = local_a8;
            local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
            uVar5 = FUN_149584f48(local_a8,0x5a,iVar7,1);
            FUN_14955a5b6(plVar18,uVar5,&DAT_149dfd146,0xffffffff);
            iVar4 = local_6c;
          }
          else {
            iVar7 = FUN_14959d278(param_1,*(undefined8 *)piVar20,&local_58);
          }
          if ((iVar4 != 0) && (iVar9 = FUN_1495a1a8a(*(undefined8 *)piVar20), iVar9 != 0)) {
            local_b8 = (void *)CONCAT44(local_b8._4_4_,iVar4);
            FUN_149584f48(local_a8,0x65,iVar4,iVar7);
          }
          plVar18 = local_a8;
          if (local_58 != 0) {
            bVar2 = *(byte *)((longlong)param_1 + 0x1f);
            if ((ulonglong)bVar2 < 8) {
              *(byte *)((longlong)param_1 + 0x1f) = bVar2 + 1;
              *(int *)((longlong)param_1 + (ulonglong)bVar2 * 4 + 0xcc) = local_58;
            }
          }
          if ((param_3 == param_4) && ((longlong)*local_80 + -1 <= lVar19)) {
            local_b8 = (void *)CONCAT44(local_b8._4_4_,iVar7);
            uVar5 = FUN_149584f48(local_a8,((int)local_98 != iVar7) * '\x02' + '2',local_98,param_3)
            ;
            FUN_14955a5b6(plVar18,uVar5,local_78,0xfffffffe);
            uVar21 = *(uint *)(plVar18 + 0x12);
            if (0 < (int)uVar21) {
              bVar2 = *local_60 | 0x10;
LAB_14959e7ad:
              *(short *)(plVar18[0x11] + -0x16 + (ulonglong)uVar21 * 0x18) = (short)(char)bVar2;
            }
          }
          else {
            local_b8 = (void *)CONCAT44(local_b8._4_4_,iVar7);
            uVar5 = FUN_149584f48(local_a8,((int)local_98 != iVar7) * '\x02' + '3',local_98,local_84
                                 );
            FUN_14955a5b6(plVar18,uVar5,local_78,0xfffffffe);
            uVar21 = *(uint *)(plVar18 + 0x12);
            if (0 < (int)uVar21) {
              bVar2 = *local_60;
              goto LAB_14959e7ad;
            }
          }
          lVar19 = lVar19 + 1;
          piVar20 = piVar20 + 8;
        } while (lVar19 < *local_80);
      }
      if (iVar4 != 0) {
        local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
        FUN_149584f48(plVar18,0x32,iVar4,param_4);
        local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
        FUN_149584f48(plVar18,0xb,0,param_3);
      }
      lVar19 = plVar18[3];
      if (*(int *)(lVar19 + 0x44) + *(int *)(lVar19 + 0x48) < 0) {
        FUN_1495a1bff(lVar19,plVar18);
      }
      else {
        *(int *)(*(longlong *)(lVar19 + 0x50) + (longlong)-(int)local_68 * 4) = (int)plVar18[0x12];
      }
      uVar12 = local_98;
      uVar6 = local_9c;
      if (iVar4 != 0) {
        bVar2 = *(byte *)((longlong)param_1 + 0x1f);
        if ((ulonglong)bVar2 < 8) {
          *(byte *)((longlong)param_1 + 0x1f) = bVar2 + 1;
          *(int *)((longlong)param_1 + (ulonglong)bVar2 * 4 + 0xcc) = iVar4;
        }
      }
    }
    else {
      iVar7 = 0;
      iVar4 = param_3;
      if (param_3 != param_4) {
        iVar7 = *(int *)((longlong)param_1 + 0x44) + -1;
        *(int *)((longlong)param_1 + 0x44) = iVar7;
        iVar4 = iVar7;
      }
      if ((int)param_1[6] == 0) {
        local_78 = CONCAT44(local_78._4_4_,iVar4);
        local_90 = CONCAT44(local_90._4_4_,iVar7);
        local_9c = uVar6;
        local_98 = uVar12;
        if (0 < (int)uVar21) {
          uVar16 = 0;
          do {
            uVar13 = FUN_14959f8a5(*(undefined8 *)(param_2 + 0x10),uVar16);
            iVar4 = FUN_1495a1a8a(uVar13);
            if (iVar4 != 0) {
              local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
              FUN_149584f48(local_a8,0x32,(int)local_98 + uVar16,local_78 & 0xffffffff);
            }
            uVar16 = uVar16 + 1;
          } while (uVar21 != uVar16);
        }
        uVar5 = local_54;
        uVar12 = local_98;
        plVar18 = local_a8;
        uVar8 = (undefined4)local_98;
        if ((int)local_80 == 1) {
          local_b8._0_4_ = uVar8;
          FUN_149584f48(local_a8,0x1f,local_54,param_3);
          local_b8 = (void *)((ulonglong)local_b8._4_4_ << 0x20);
          local_84 = FUN_149584f48(plVar18,0xb,0,0);
          plVar17 = plVar18;
        }
        else {
          local_b8 = (void *)((ulonglong)local_b8._4_4_ << 0x20);
          uVar5 = FUN_149584f48(local_a8,0x5a,local_98 & 0xffffffff,uVar21);
          FUN_14955a5b6(plVar18,uVar5,local_60,uVar21);
          uVar5 = local_54;
          if (param_3 == param_4) {
            local_b8 = (void *)CONCAT44(local_b8._4_4_,uVar8);
            iVar4 = FUN_149584f48(plVar18,0x1d,local_54,param_3);
            uVar6 = local_9c;
            if (*(char *)(*plVar18 + 0x61) == '\0') {
              lVar19 = local_a8[0x11];
              *(undefined1 *)(lVar19 + 1 + (longlong)iVar4 * 0x18) = 0xfd;
              *(uint *)(lVar19 + 0x10 + (longlong)iVar4 * 0x18) = uVar21;
            }
            goto LAB_14959e147;
          }
          local_b8 = (void *)CONCAT44(local_b8._4_4_,uVar8);
          local_84 = FUN_149584f48(plVar18,0x1e,local_54,0);
          plVar17 = local_a8;
          if (*(char *)(*plVar18 + 0x61) == '\0') {
            lVar19 = local_a8[0x11];
            *(undefined1 *)(lVar19 + 1 + (longlong)local_84 * 0x18) = 0xfd;
            *(uint *)(lVar19 + 0x10 + (longlong)local_84 * 0x18) = uVar21;
          }
        }
        if (uVar21 == 1 && local_4c != 0) {
          local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
          FUN_149584f48(plVar17,0x33,local_4c,param_3);
        }
        if (param_3 == param_4) {
          local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
          FUN_149584f48(plVar17,0xb,0,param_3);
        }
        if ((uint)local_90 != 0) {
          lVar19 = plVar17[3];
          if (*(int *)(lVar19 + 0x44) + *(int *)(lVar19 + 0x48) < 0) {
            FUN_1495a1bff(lVar19,plVar17);
          }
          else {
            *(int *)(*(longlong *)(lVar19 + 0x50) + (longlong)(int)~(uint)local_90 * 4) =
                 (int)plVar17[0x12];
          }
        }
        local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
        iVar4 = FUN_149584f48(plVar17,0x25,uVar5,param_3);
        local_68 = CONCAT44(local_68._4_4_,uVar5);
        if ((int)uVar21 < 2) {
          local_90 = CONCAT44(local_90._4_4_,param_3);
          if (0 < (int)uVar21) goto LAB_14959e31a;
LAB_14959e4fb:
          plVar18 = local_a8;
          local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
          FUN_149584f48(local_a8,0xb,0,param_4);
        }
        else {
          iVar7 = *(int *)((longlong)param_1 + 0x44) + -1;
          local_90 = CONCAT44(local_90._4_4_,iVar7);
          *(int *)((longlong)param_1 + 0x44) = iVar7;
LAB_14959e31a:
          uVar6 = 0;
          local_6c = iVar4;
          do {
            if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
              iVar4 = (int)param_1[7] + 1;
              *(int *)(param_1 + 7) = iVar4;
            }
            else {
              bVar2 = *(char *)((longlong)param_1 + 0x1f) - 1;
              *(byte *)((longlong)param_1 + 0x1f) = bVar2;
              iVar4 = *(int *)((longlong)param_1 + (ulonglong)bVar2 * 4 + 0xcc);
            }
            local_80 = (int *)CONCAT44(local_80._4_4_,iVar4);
            uVar13 = FUN_14959f8a5(uVar1,uVar6);
            local_78 = FUN_1495862ab(param_1,uVar13);
            plVar18 = local_a8;
            local_b8._0_4_ = iVar4;
            FUN_149584f48(local_a8,0x59,local_68 & 0xffffffff,uVar6);
            local_b8 = (void *)CONCAT44(local_b8._4_4_,(int)local_80);
            uVar5 = FUN_149584f48(plVar18,0x34,(int)local_98 + uVar6,local_90 & 0xffffffff);
            iVar4 = (int)local_80;
            FUN_14955a5b6(plVar18,uVar5,local_78,0xfffffffe);
            plVar18 = local_a8;
            if (iVar4 != 0) {
              bVar2 = *(byte *)((longlong)param_1 + 0x1f);
              if ((ulonglong)bVar2 < 8) {
                *(byte *)((longlong)param_1 + 0x1f) = bVar2 + 1;
                *(int *)((longlong)param_1 + (ulonglong)bVar2 * 4 + 0xcc) = iVar4;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar21 != uVar6);
          local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
          FUN_149584f48(local_a8,0xb,0,param_4);
          if (1 < (int)uVar21) {
            lVar19 = plVar18[3];
            uVar21 = ~(uint)local_90;
            local_90 = CONCAT44(local_90._4_4_,uVar21);
            if (*(int *)(lVar19 + 0x44) + *(int *)(lVar19 + 0x48) < 0) {
              FUN_1495a1bff(lVar19,local_a8,uVar21);
            }
            else {
              *(int *)(*(longlong *)(lVar19 + 0x50) + (longlong)(int)uVar21 * 4) =
                   (int)local_a8[0x12];
            }
            local_b8 = (void *)((ulonglong)local_b8 & 0xffffffff00000000);
            FUN_149584f48(local_a8,5,local_68 & 0xffffffff,local_6c + 1);
            param_4 = param_3;
            goto LAB_14959e4fb;
          }
        }
        if (*(char *)(*plVar18 + 0x61) == '\0') {
          iVar4 = (int)plVar18[0x12] + -1;
          if (-1 < local_84) {
            iVar4 = local_84;
          }
          puVar15 = (undefined1 *)((longlong)iVar4 * 0x18 + plVar18[0x11]);
        }
        else {
          puVar15 = &DAT_14cc1ee40;
        }
        *(int *)(puVar15 + 8) = (int)plVar18[0x12];
        uVar12 = local_98;
        uVar6 = local_9c;
      }
    }
LAB_14959e147:
    uVar21 = (uint)uVar12;
    if (uVar21 != 0 && uVar21 != uVar6) {
      bVar2 = *(byte *)((longlong)param_1 + 0x1f);
      if ((ulonglong)bVar2 < 8) {
        *(byte *)((longlong)param_1 + 0x1f) = bVar2 + 1;
        *(uint *)((longlong)param_1 + (ulonglong)bVar2 * 4 + 0xcc) = uVar21;
      }
    }
  }
  if (_Dst != (void *)0x0) {
    FUN_14955d65a(*param_1,_Dst);
  }
  if (local_60 != (byte *)0x0) {
    FUN_14955d65a(*param_1);
  }
LAB_14959dfa7:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14959e955 FUN_14959e955 body=516 status=ok
// SIG undefined FUN_14959e955(void)

void FUN_14959e955(longlong *param_1,longlong param_2,undefined4 param_3,code *param_4,
                  undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_158 [44];
  int local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_12c = 0;
  lVar2 = *param_1;
  puVar4 = (undefined1 *)0x0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (undefined1 *)0x0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = (undefined1 *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    puVar4 = (undefined1 *)FUN_1495a1c89(lVar2,*(longlong *)(param_2 + 0x10),0,0);
  }
  if (*(char *)(lVar2 + 0x61) == '\0') {
    local_88 = CONCAT71(local_88._1_7_,0x2c);
    local_78 = &local_d8;
    puStack_70 = &local_128;
    local_d8 = CONCAT71(local_d8._1_7_,0x39);
    uStack_c0 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 8);
    local_128 = CONCAT71(local_128._1_7_,0x37);
    uStack_110 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x28);
    local_118 = puVar4;
    local_c8 = puVar4;
    uVar3 = FUN_14959eb5a(param_1,puVar4,&local_12c);
    puVar6 = puVar4;
    while (puVar6 != (undefined1 *)0x0) {
      if ((*(uint *)(puVar6 + 4) & 0x41000) == 0) goto LAB_14959ead8;
      if ((*(uint *)(puVar6 + 4) >> 0x12 & 1) == 0) {
        puVar5 = (undefined8 *)(puVar6 + 0x10);
      }
      else {
        puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x20) + 8);
      }
      puVar6 = (undefined1 *)*puVar5;
    }
    puVar6 = (undefined1 *)0x0;
LAB_14959ead8:
    puVar6[2] = *puVar6;
    *puVar6 = 0xad;
    *(undefined4 *)(puVar6 + 0x2c) = uVar3;
    puVar6[5] = puVar6[5] & 0xef;
    if (param_4 == (code *)0x0) {
      puVar4[4] = puVar4[4] | 1;
      FUN_14959b4fb(param_1,&local_88,param_3);
    }
    else {
      (*param_4)(param_1,&local_88,param_3,param_5);
    }
    if (local_12c != 0) {
      bVar1 = *(byte *)((longlong)param_1 + 0x1f);
      if ((ulonglong)bVar1 < 8) {
        *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
        *(int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc) = local_12c;
      }
    }
  }
  if (puVar4 != (undefined1 *)0x0) {
    FUN_14958288e(lVar2,puVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14959eb5a FUN_14959eb5a body=191 status=ok
// SIG undefined FUN_14959eb5a(void)

ulonglong FUN_14959eb5a(longlong param_1,char *param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  char *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  cVar2 = *param_2;
  if (cVar2 == -0x53) {
    cVar2 = param_2[2];
  }
  pcVar4 = param_2;
  if (cVar2 != -0x52) {
    if (cVar2 != -0x78) goto LAB_14959ebeb;
    pcVar4 = *(char **)(param_2 + 0x20);
  }
  uVar1 = **(uint **)(pcVar4 + 0x20);
  if ((ulonglong)uVar1 != 1) {
    *param_3 = 0;
    if (*param_2 != -0x78) {
      uVar3 = (ulonglong)(*(int *)(param_1 + 0x38) + 1);
      *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar1;
      if (0 < (int)uVar1) {
        lVar6 = 0;
        uVar5 = uVar3;
        do {
          FUN_1495a287d(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 8 + lVar6),uVar5);
          lVar6 = lVar6 + 0x20;
          uVar5 = (ulonglong)((int)uVar5 + 1);
        } while ((ulonglong)uVar1 << 5 != lVar6);
      }
      return uVar3;
    }
    uVar3 = FUN_14959dc3b(param_1,param_2);
    return uVar3;
  }
LAB_14959ebeb:
  uVar3 = FUN_14959d278(param_1,param_2);
  return uVar3;
}



// FUNCTION 14959ec19 FUN_14959ec19 body=960 status=ok
// SIG undefined FUN_14959ec19(void)

void FUN_14959ec19(longlong param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined4 local_70;
  undefined4 local_68;
  uint local_60;
  uint local_58;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = *(longlong *)(param_1 + 0x10);
  local_44 = 0;
  local_48 = 0;
  if (param_2 == (byte *)0x0 || lVar9 == 0) goto LAB_14959ec57;
  bVar1 = *param_2;
  if (0xa7 < bVar1) {
    if (bVar1 != 0xa8) {
      if (bVar1 == 0xac) {
        for (lVar9 = *(longlong *)(param_2 + 0x18); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x10))
        {
          if ((*(byte *)(lVar9 + 5) & 0x10) == 0) goto LAB_14959ef23;
        }
        lVar9 = 0;
LAB_14959ef23:
        param_4 = (uint)(param_2[2] != 0xa8) << 4;
        pbVar7 = *(byte **)(param_2 + 0x10);
        if ((*(char *)(*(longlong *)(lVar9 + 8) + 4) != '\0') == (param_2[2] == 0xa8))
        goto LAB_14959eed2;
        goto LAB_14959ee69;
      }
      goto switchD_14959ecb7_caseD_2e;
    }
switchD_14959ecb7_caseD_2d:
    bVar10 = bVar1 == 0x2d ^ 0x35;
    param_4 = 0x80;
switchD_14959ecb7_caseD_34:
    pcVar2 = *(char **)(param_2 + 0x10);
    cVar4 = *pcVar2;
    if (cVar4 == -0x53) {
      cVar4 = pcVar2[2];
    }
    pcVar8 = pcVar2;
    if (cVar4 == -0x52) {
LAB_14959ecdf:
      if (1 < **(int **)(pcVar8 + 0x20)) goto switchD_14959ecb7_caseD_2e;
    }
    else if (cVar4 == -0x78) {
      pcVar8 = *(char **)(pcVar2 + 0x20);
      goto LAB_14959ecdf;
    }
    uVar5 = FUN_14959d278(param_1,pcVar2,&local_44);
    local_70 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x18),&local_48);
    local_58 = *(uint *)(param_2 + 4) >> 9 & 1;
    local_78 = uVar5;
    local_68 = param_3;
    local_60 = param_4;
    FUN_14959d3ba(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),bVar10);
    goto LAB_14959ed13;
  }
  if (0xe < bVar1 - 0x2b) {
    if (bVar1 != 0x13) goto switchD_14959ecb7_caseD_2e;
    pbVar7 = *(byte **)(param_2 + 0x10);
LAB_14959ee69:
    FUN_1495a29b7(param_1,pbVar7,param_3,param_4);
    goto LAB_14959ed13;
  }
  bVar10 = bVar1 ^ 1;
  switch((uint)bVar1) {
  case 0x2b:
  case 0x2c:
    pbVar7 = (byte *)FUN_1495a2927(param_2);
    if (pbVar7 == param_2) {
      if (bVar1 != 0x2c) {
        iVar11 = *(int *)(param_1 + 0x44);
        *(int *)(param_1 + 0x44) = iVar11 + -1;
        FUN_1495a29b7(param_1,*(undefined8 *)(param_2 + 0x10),iVar11 + -1,param_4 ^ 0x10);
        FUN_14959ec19(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
        goto LAB_14959ef84;
      }
      FUN_14959ec19(param_1,*(undefined8 *)(param_2 + 0x10),param_3,param_4);
      pbVar7 = *(byte **)(param_2 + 0x18);
    }
LAB_14959eed2:
    FUN_14959ec19(param_1,pbVar7,param_3,param_4);
    break;
  case 0x2d:
    goto switchD_14959ecb7_caseD_2d;
  case 0x2e:
  case 0x2f:
switchD_14959ecb7_caseD_2e:
    if ((*(uint *)(param_2 + 4) & 0x20000001) == 0x20000000) {
      local_78 = 0;
      bVar10 = 0xb;
      uVar6 = 0;
    }
    else {
      if ((*(uint *)(param_2 + 4) & 0x10000001) == 0x10000000) break;
      uVar6 = FUN_14959d278(param_1,param_2,&local_44);
      local_78 = (uint)(param_4 != 0);
      bVar10 = 0x14;
    }
    goto LAB_14959ee45;
  case 0x30:
    local_78 = param_4;
    FUN_14959e955(param_1,param_2,param_3,FUN_14959ec19);
    break;
  case 0x31:
    if (param_4 == 0) {
      iVar11 = *(int *)(param_1 + 0x44);
      *(int *)(param_1 + 0x44) = iVar11 + -1;
      FUN_14959df59(param_1,param_2,param_3);
LAB_14959ef84:
      lVar3 = *(longlong *)(lVar9 + 0x18);
      if (*(int *)(lVar3 + 0x44) + *(int *)(lVar3 + 0x48) < 0) {
        FUN_1495a1bff(lVar3,lVar9,-iVar11);
      }
      else {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x50) + (longlong)-iVar11 * 4) =
             *(undefined4 *)(lVar9 + 0x90);
      }
    }
    else {
      FUN_14959df59(param_1,param_2,param_3,param_3);
    }
    break;
  case 0x32:
  case 0x33:
    uVar6 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x10),&local_44);
    local_78 = 0;
LAB_14959ee45:
    FUN_149584f48(lVar9,bVar10,uVar6,param_3);
    break;
  default:
    goto switchD_14959ecb7_caseD_34;
  }
LAB_14959ed13:
  if (local_44 != 0) {
    bVar1 = *(byte *)(param_1 + 0x1f);
    if ((ulonglong)bVar1 < 8) {
      *(byte *)(param_1 + 0x1f) = bVar1 + 1;
      *(int *)(param_1 + 0xcc + (ulonglong)bVar1 * 4) = local_44;
    }
  }
  if (local_48 != 0) {
    bVar1 = *(byte *)(param_1 + 0x1f);
    if ((ulonglong)bVar1 < 8) {
      *(byte *)(param_1 + 0x1f) = bVar1 + 1;
      *(int *)(param_1 + 0xcc + (ulonglong)bVar1 * 4) = local_48;
    }
  }
LAB_14959ec57:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14959efda FUN_14959efda body=189 status=ok
// SIG undefined FUN_14959efda(void)

void FUN_14959efda(longlong *param_1,undefined4 param_2,int param_3,undefined8 param_4,char param_5,
                  byte param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar2 = FUN_14955a44a(param_1);
  }
  if (param_3 == 2) {
    plVar3 = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      plVar3 = param_1;
    }
    *(undefined1 *)((longlong)plVar3 + 0x21) = 1;
  }
  uVar1 = FUN_149584f48(lVar2,0x44,param_2,param_3,0);
  FUN_14955a5b6(lVar2,uVar1,param_4,(int)param_5);
  if (0 < (longlong)*(int *)(lVar2 + 0x90)) {
    *(ushort *)(*(longlong *)(lVar2 + 0x88) + -0x16 + (longlong)*(int *)(lVar2 + 0x90) * 0x18) =
         (ushort)param_6;
  }
  return;
}



// FUNCTION 14959f097 FUN_14959f097 body=630 status=ok
// SIG undefined FUN_14959f097(void)

void FUN_14959f097(longlong *param_1,longlong param_2,int param_3,uint param_4,int param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  short sVar3;
  longlong lVar4;
  short *psVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if (((int)param_4 < 0) || ((int)*(short *)(param_2 + 0x44) == param_4)) {
    uVar6 = 0x7f;
    iVar8 = param_5;
  }
  else {
    uVar6 = 0xa6;
    uVar9 = param_4;
    if (*(int *)(param_2 + 0x54) == 0) {
      uVar1 = *(ushort *)(*(longlong *)(param_2 + 8) + 0x1c + (ulonglong)param_4 * 0x20);
      if ((uVar1 & 0x20) != 0) {
        puVar10 = (undefined8 *)(*(longlong *)(param_2 + 8) + (ulonglong)param_4 * 0x20);
        lVar4 = param_1[3];
        if ((uVar1 >> 8 & 1) == 0) {
          uVar2 = *(undefined4 *)(lVar4 + 0x40);
          *(ushort *)((longlong)puVar10 + 0x1c) = uVar1 | 0x100;
          *(int *)(lVar4 + 0x40) = param_3 + 1;
          FUN_14959cce8(lVar4,puVar10,param_5);
          *(undefined4 *)(lVar4 + 0x40) = uVar2;
          *(byte *)((longlong)puVar10 + 0x1d) = *(byte *)((longlong)puVar10 + 0x1d) & 0xfe;
          goto LAB_14959f1ac;
        }
        FUN_14955a364(lVar4,"generated column loop on \"%s\"",*puVar10,param_4);
        goto LAB_14959f11f;
      }
      if ((*(byte *)(param_2 + 0x40) & 0x80) == 0) {
        sVar3 = FUN_14959cc88(param_2,param_4);
        uVar9 = (uint)sVar3;
        uVar6 = 0x59;
      }
      else {
        for (lVar4 = *(longlong *)(param_2 + 0x10); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x28))
        {
          if ((*(uint *)(lVar4 + 100) & 3) == 2) goto LAB_14959f2a8;
        }
        lVar4 = 0;
LAB_14959f2a8:
        uVar6 = 0x59;
        uVar9 = 0xffffffff;
        if (*(ushort *)(lVar4 + 0x60) != 0) {
          psVar5 = *(short **)(lVar4 + 8);
          lVar7 = 0;
          do {
            if (*psVar5 == (short)param_4) {
              uVar9 = (int)lVar7 >> 0x10;
              break;
            }
            lVar7 = lVar7 + 0x10000;
            psVar5 = psVar5 + 1;
          } while ((ulonglong)*(ushort *)(lVar4 + 0x60) * 0x10000 != lVar7);
        }
      }
    }
    local_48 = (longlong *)CONCAT44(local_48._4_4_,param_5);
    FUN_149584f48(param_1,uVar6,param_3,uVar9);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      local_40 = 0;
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 8 + (ulonglong)param_4 * 0x20);
      if (lVar4 != 0) {
        local_48 = &local_40;
        FUN_14959f32d(*param_1,lVar4,*(undefined1 *)(*param_1 + 0x5e),
                      *(undefined1 *)(*(longlong *)(param_2 + 8) + (ulonglong)param_4 * 0x20 + 0x19)
                     );
        if (local_40 != 0) {
          if (*(char *)(*param_1 + 0x61) == '\0') {
            lVar4 = param_1[0x11];
            lVar7 = param_1[0x12];
            *(undefined1 *)(lVar4 + -0x17 + (longlong)(int)lVar7 * 0x18) = 0xf5;
            *(longlong *)(lVar4 + -8 + (longlong)(int)lVar7 * 0x18) = local_40;
          }
          else if (*(longlong *)(*param_1 + 0x2d8) == 0) {
            FUN_149559090(local_40);
          }
          else {
            FUN_149569a2f();
          }
        }
      }
    }
    if (*(char *)(*(longlong *)(param_2 + 8) + 0x19 + (ulonglong)param_4 * 0x20) != 'E') {
LAB_14959f1ac:
      if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    uVar6 = 0x53;
    iVar8 = 0;
    param_3 = param_5;
  }
  local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_149584f48(param_1,uVar6,param_3,iVar8);
LAB_14959f11f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 14959f32d FUN_14959f32d body=1165 status=ok
// SIG undefined FUN_14959f32d(void)

undefined4
FUN_14959f32d(longlong param_1,byte *param_2,ulonglong param_3,uint param_4,ulonglong **param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined8 uVar6;
  uint uVar7;
  byte bVar8;
  wchar_t *pwVar9;
  ulonglong *puVar10;
  char *_Str;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  ulonglong **local_58;
  ulonglong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (ulonglong *)0x0;
  for (; (bVar8 = *param_2, bVar8 == 0xab || (bVar8 == 0xb2)); param_2 = *(byte **)(param_2 + 0x10))
  {
  }
  if (bVar8 == 0xad) {
    bVar8 = param_2[2];
  }
  if (bVar8 == 0xaa) {
    param_2 = *(byte **)(param_2 + 0x10);
    bVar8 = *param_2;
    pwVar9 = L"-`[Left Bracket";
    lVar12 = -1;
    if ((bVar8 == 0x98) || (bVar8 == 0x96)) goto LAB_14959f3ad;
    local_58 = &local_50;
    iVar2 = FUN_14959f32d(param_1,param_2,param_3,param_4);
    puVar10 = local_50;
    uVar4 = 0;
    if (local_50 != (ulonglong *)0x0 && iVar2 == 0) {
      FUN_14957a229(local_50);
      if (((ushort)puVar10[1] & 8) == 0) {
        if (SBORROW8(0,*puVar10)) {
          *puVar10 = 0x43e0000000000000;
          *(ushort *)(puVar10 + 1) = (ushort)puVar10[1] & 0x3e40 | 8;
        }
        else {
          *puVar10 = -*puVar10;
        }
      }
      else {
        *puVar10 = *puVar10 ^ 0x8000000000000000;
      }
      FUN_149575ae7(puVar10,param_4,param_3 & 0xffffffff);
    }
  }
  else {
    if (bVar8 == 0x24) {
      uVar3 = FUN_14959d0ed(*(undefined8 *)(param_2 + 8),0);
      local_58 = param_5;
      uVar4 = FUN_14959f32d(param_1,*(undefined8 *)(param_2 + 0x10),param_3 & 0xffffffff,uVar3);
      if (*param_5 != (ulonglong *)0x0) {
        FUN_149575c07(*param_5,uVar3,1);
        FUN_149575ae7(*param_5,param_4,1);
      }
      goto LAB_14959f472;
    }
    pwVar9 = L"";
    lVar12 = 1;
LAB_14959f3ad:
    puVar10 = (ulonglong *)0x0;
    if (bVar8 < 0x97) {
      if (bVar8 == 0x73) {
LAB_14959f49d:
        puVar10 = (ulonglong *)FUN_14955c570(param_1);
        local_50 = puVar10;
        if (puVar10 == (ulonglong *)0x0) {
LAB_14959f4b2:
          puVar10 = (ulonglong *)0x0;
LAB_14959f4b4:
          if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
            *(undefined1 *)(param_1 + 0x61) = 1;
            if (0 < *(int *)(param_1 + 0xd4)) {
              *(undefined4 *)(param_1 + 0x170) = 1;
            }
            *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
            *(undefined2 *)(param_1 + 0x17c) = 0;
            if (*(longlong *)(param_1 + 0x138) != 0) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
            }
          }
          FUN_149559090(puVar10);
          uVar4 = 7;
          goto LAB_14959f472;
        }
        if ((param_2[5] & 4) == 0) {
          lVar12 = FUN_14955a402(param_1,&DAT_14ab676e8,pwVar9,*(undefined8 *)(param_2 + 8));
          if (lVar12 == 0) goto LAB_14959f4b4;
          local_58 = (ulonglong **)&DAT_1495539b4;
          FUN_14955916b(puVar10,lVar12,0xffffffff,1);
        }
        else if ((*(byte *)((longlong)puVar10 + 9) & 0x24) == 0) {
          *puVar10 = lVar12 * *(int *)(param_2 + 8);
          *(undefined2 *)(puVar10 + 1) = 4;
        }
        else {
          FUN_14956c854(puVar10,lVar12 * *(int *)(param_2 + 8));
        }
        uVar7 = 0x43;
        if ((bVar8 + 0x6a & 0xfd) != 0 || (char)param_4 != 'A') {
          uVar7 = param_4 & 0xff;
        }
        FUN_149575ae7(puVar10,uVar7,1);
        uVar1 = (ushort)puVar10[1];
        if ((uVar1 & 0x2c) != 0) {
          uVar1 = uVar1 & 0xfffd;
          *(ushort *)(puVar10 + 1) = uVar1;
        }
        uVar4 = 0;
        if ((((char)param_3 != '\x01') && ((uVar1 & 2) != 0)) &&
           (*(char *)((longlong)puVar10 + 10) != (char)param_3)) {
          uVar4 = FUN_14956ba6f(puVar10);
        }
      }
      else if (bVar8 == 0x77) {
        puVar10 = (ulonglong *)FUN_14955c570(param_1);
        local_50 = puVar10;
        if (puVar10 == (ulonglong *)0x0) goto LAB_14959f4b2;
        if ((*(byte *)((longlong)puVar10 + 9) & 0x24) == 0) {
          *(undefined2 *)(puVar10 + 1) = 1;
        }
        else {
          FUN_14956b5ca(puVar10);
        }
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        puVar10 = (ulonglong *)0x0;
        if (bVar8 == 0x96) goto LAB_14959f49d;
      }
    }
    else if (bVar8 == 0x97) {
      puVar10 = (ulonglong *)FUN_14955c570(param_1);
      local_50 = puVar10;
      if (puVar10 == (ulonglong *)0x0) goto LAB_14959f4b2;
      uVar11 = 0xffffffff;
      _Str = (char *)(*(longlong *)(param_2 + 8) + 2);
      if (_Str != (char *)0x0) {
        sVar5 = strlen(_Str);
        uVar11 = (ulonglong)(((uint)sVar5 & 0x3fffffff) - 1);
      }
      uVar6 = FUN_14959d069(param_1,_Str);
      local_58 = (ulonglong **)&DAT_1495539b4;
      uVar4 = 0;
      FUN_14955916b(puVar10,uVar6,(int)(uVar11 >> 0x1f) + (int)uVar11 >> 1,0);
    }
    else if (bVar8 == 0xa7) {
      puVar10 = (ulonglong *)FUN_14955c570(param_1);
      uVar4 = 0;
      if (puVar10 == (ulonglong *)0x0) {
        puVar10 = (ulonglong *)0x0;
      }
      else {
        *(undefined2 *)(puVar10 + 1) = 4;
        *puVar10 = (ulonglong)(*(char *)(*(longlong *)(param_2 + 8) + 4) == '\0');
      }
    }
    else {
      uVar4 = 0;
      if (bVar8 == 0x98) goto LAB_14959f49d;
    }
  }
  *param_5 = puVar10;
LAB_14959f472:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14959f7bb FUN_14959f7bb body=109 status=ok
// SIG undefined FUN_14959f7bb(void)

void FUN_14959f7bb(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14955d750(*param_1,8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *param_4;
  }
  uVar1 = FUN_149584f48(param_1,param_2,0,param_3,0);
  FUN_14955a5b6(param_1,uVar1,puVar2,param_5);
  return;
}



// FUNCTION 14959f828 FUN_14959f828 body=125 status=ok
// SIG undefined FUN_14959f828(void)

ulonglong FUN_14959f828(undefined8 param_1,char *param_2,int param_3,int param_4,undefined8 *param_5
                       ,undefined8 param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if (*param_2 == -0x78) {
    *param_5 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x20) + 8 + (longlong)param_3 * 0x20)
    ;
  }
  else {
    if (*param_2 != -0x53) {
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 8 + (longlong)param_3 * 0x20);
      *param_5 = uVar1;
      uVar2 = FUN_14959d278(param_1,uVar1,param_6);
      return uVar2;
    }
    uVar1 = FUN_14959f8a5(param_2,param_3);
    *param_5 = uVar1;
    param_4 = *(int *)(param_2 + 0x2c);
  }
  return (ulonglong)(uint)(param_3 + param_4);
}



// FUNCTION 14959f8a5 FUN_14959f8a5 body=85 status=ok
// SIG undefined FUN_14959f8a5(void)

char * FUN_14959f8a5(char *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  cVar2 = cVar1;
  if (cVar1 == -0x53) {
    cVar2 = param_1[2];
  }
  pcVar3 = param_1;
  if (cVar2 != -0x52) {
    if (cVar2 != -0x78) {
      return param_1;
    }
    pcVar3 = *(char **)(param_1 + 0x20);
  }
  if (1 < **(int **)(pcVar3 + 0x20)) {
    if ((cVar1 == -0x78) || (param_1[2] == -0x78)) {
      param_1 = *(char **)(param_1 + 0x20);
    }
    param_1 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)param_2 * 0x20);
  }
  return param_1;
}



// FUNCTION 14959f8fa FUN_14959f8fa body=163 status=ok
// SIG undefined FUN_14959f8fa(void)

ulonglong FUN_14959f8fa(byte *param_1)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  do {
    for (; (param_1[5] & 0x10) != 0; param_1 = *(byte **)(param_1 + 0x10)) {
    }
    bVar1 = *param_1;
    if (bVar1 == 0xad) {
      bVar1 = param_1[2];
LAB_14959f924:
      if (bVar1 == 0x24) {
        uVar4 = FUN_14959d0ed(*(undefined8 *)(param_1 + 8),0);
        return uVar4;
      }
      if (((bVar1 & 0xfd) == 0xa4) && (*(longlong *)(param_1 + 0x40) != 0)) {
        sVar2 = *(short *)(param_1 + 0x30);
        if ((longlong)sVar2 < 0) {
          return CONCAT71((int7)(char)((ushort)sVar2 >> 8),0x44);
        }
        lVar3 = (longlong)sVar2 * 0x20;
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                        *(undefined1 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x40) + 8) + 0x19 + lVar3));
      }
      if (bVar1 == 0xae) {
        lVar3 = *(longlong *)(param_1 + 0x20);
      }
      else {
        if (bVar1 != 0xaf) {
          return (ulonglong)param_1[1];
        }
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x20) +
                (longlong)*(short *)(param_1 + 0x30) * 0x20;
      }
    }
    else {
      if (bVar1 != 0x88) goto LAB_14959f924;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
    }
    param_1 = *(byte **)(lVar3 + 8);
  } while( true );
}



// FUNCTION 14959f99d FUN_14959f99d body=239 status=ok
// SIG undefined FUN_14959f99d(void)

undefined8 FUN_14959f99d(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ushort uVar5;
  
  uVar5 = *(ushort *)(param_1 + 0x24);
  if ((uVar5 != 2) || ((param_2[4] & 1U) == 0)) {
    cVar1 = *param_2;
    uVar4 = 0;
    switch(cVar1) {
    case -0x5c:
    case -0x5b:
    case -0x5a:
switchD_14959f9dc_caseD_a4:
      if ((param_2[4] & 8U) == 0) {
        if ((uVar5 == 3) && (*(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x28))) {
          return 0;
        }
      }
      else if (uVar5 != 2) {
        return 0;
      }
      break;
    case -0x59:
    case -0x58:
    case -0x56:
    case -0x55:
    case -0x54:
    case -0x52:
    case -0x51:
      goto switchD_14959f9dc_caseD_a7;
    case -0x57:
      uVar2 = *(uint *)(param_2 + 4);
      if (((uVar2 >> 0x18 & 1) == 0 & ((byte)(uVar2 >> 0x13) | 3 < uVar5)) == 1) {
        if (uVar5 != 5) {
          return 0;
        }
        *(uint *)(param_2 + 4) = uVar2 | 0x40000000;
        return 0;
      }
      break;
    case -0x53:
    case -0x50:
      break;
    default:
      if (cVar1 != -0x67) {
        if (cVar1 != ';') {
          return 0;
        }
        iVar3 = FUN_14958ac94(param_2);
        if (iVar3 != 0) {
          return 1;
        }
        uVar5 = *(ushort *)(param_1 + 0x24);
        goto switchD_14959f9dc_caseD_a4;
      }
      if (uVar5 != 4) {
        if (uVar5 != 5) {
          return 0;
        }
        *param_2 = 'w';
        return 0;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x24) = 0;
  uVar4 = 2;
switchD_14959f9dc_caseD_a7:
  return uVar4;
}



// FUNCTION 14959fa98 FUN_14959fa98 body=202 status=ok
// SIG undefined FUN_14959fa98(void)

uint FUN_14959fa98(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  do {
    lVar4 = param_2;
    uVar2 = (**(code **)(param_1 + 8))(param_1);
    if (uVar2 != 0) {
      return uVar2 & 2;
    }
    if ((*(ushort *)(lVar4 + 5) & 0x8040) != 0) {
      return 0;
    }
    if ((*(longlong *)(lVar4 + 0x10) != 0) && (iVar6 = FUN_14959fa98(param_1), iVar6 != 0)) {
      return 2;
    }
    param_2 = *(longlong *)(lVar4 + 0x18);
  } while (*(longlong *)(lVar4 + 0x18) != 0);
  uVar2 = *(uint *)(lVar4 + 4);
  piVar1 = *(int **)(lVar4 + 0x20);
  if ((uVar2 >> 0xb & 1) == 0) {
    if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
      plVar5 = (longlong *)(piVar1 + 2);
      iVar6 = *piVar1 + 1;
      do {
        if ((*plVar5 != 0) && (iVar3 = FUN_14959fa98(param_1), iVar3 != 0)) {
          return 2;
        }
        plVar5 = plVar5 + 4;
        iVar6 = iVar6 + -1;
      } while (1 < iVar6);
      uVar2 = *(uint *)(lVar4 + 4);
    }
    if ((uVar2 >> 0x18 & 1) == 0) {
      return 0;
    }
    iVar6 = FUN_14959fd90(param_1,*(undefined8 *)(lVar4 + 0x40));
  }
  else {
    iVar6 = FUN_14959fb62(param_1,piVar1);
  }
  if (iVar6 == 0) {
    return 0;
  }
  return 2;
}



// FUNCTION 14959fb62 FUN_14959fb62 body=558 status=ok
// SIG undefined FUN_14959fb62(void)

uint FUN_14959fb62(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int *piVar9;
  
  if (param_2 != 0) {
    lVar1 = param_1[2];
    while (lVar1 != 0) {
      uVar4 = (*(code *)param_1[2])(param_1,param_2);
      if (uVar4 != 0) {
        return uVar4 & 2;
      }
      piVar9 = *(int **)(param_2 + 0x20);
      if ((piVar9 != (int *)0x0) && (0 < *piVar9)) {
        plVar8 = (longlong *)(piVar9 + 2);
        iVar6 = *piVar9 + 1;
        do {
          if ((*plVar8 != 0) && (iVar7 = FUN_14959fa98(param_1), iVar7 != 0)) {
            return 2;
          }
          plVar8 = plVar8 + 4;
          iVar6 = iVar6 + -1;
        } while (1 < iVar6);
      }
      if ((*(longlong *)(param_2 + 0x30) != 0) && (iVar6 = FUN_14959fa98(param_1), iVar6 != 0)) {
        return 2;
      }
      piVar9 = *(int **)(param_2 + 0x38);
      if ((piVar9 != (int *)0x0) && (0 < *piVar9)) {
        plVar8 = (longlong *)(piVar9 + 2);
        iVar6 = *piVar9 + 1;
        do {
          if ((*plVar8 != 0) && (iVar7 = FUN_14959fa98(param_1), iVar7 != 0)) {
            return 2;
          }
          plVar8 = plVar8 + 4;
          iVar6 = iVar6 + -1;
        } while (1 < iVar6);
      }
      if ((*(longlong *)(param_2 + 0x40) != 0) && (iVar6 = FUN_14959fa98(param_1), iVar6 != 0)) {
        return 2;
      }
      piVar9 = *(int **)(param_2 + 0x48);
      if ((piVar9 != (int *)0x0) && (0 < *piVar9)) {
        plVar8 = (longlong *)(piVar9 + 2);
        iVar6 = *piVar9 + 1;
        do {
          if ((*plVar8 != 0) && (iVar7 = FUN_14959fa98(param_1), iVar7 != 0)) {
            return 2;
          }
          plVar8 = plVar8 + 4;
          iVar6 = iVar6 + -1;
        } while (1 < iVar6);
      }
      if ((*(longlong *)(param_2 + 0x60) != 0) && (iVar6 = FUN_14959fa98(param_1), iVar6 != 0)) {
        return 2;
      }
      if (((*param_1 != 0) && (1 < *(byte *)(*param_1 + 0x114))) &&
         (iVar6 = FUN_14959fd90(param_1,*(undefined8 *)(param_2 + 0x78)), iVar6 != 0)) {
        return 2;
      }
      iVar6 = **(int **)(param_2 + 0x28);
      if (0 < iVar6) {
        piVar9 = *(int **)(param_2 + 0x28) + 2;
        do {
          if ((*(longlong *)(piVar9 + 10) != 0) && (iVar7 = FUN_14959fb62(param_1), iVar7 != 0)) {
            return 2;
          }
          if ((((*(byte *)(piVar9 + 0x10) & 4) != 0) &&
              (piVar2 = *(int **)(piVar9 + 0x18), piVar2 != (int *)0x0)) && (0 < *piVar2)) {
            plVar8 = (longlong *)(piVar2 + 2);
            iVar7 = *piVar2 + 1;
            do {
              if ((*plVar8 != 0) && (iVar5 = FUN_14959fa98(param_1), iVar5 != 0)) {
                return 2;
              }
              plVar8 = plVar8 + 4;
              iVar7 = iVar7 + -1;
            } while (1 < iVar7);
          }
          piVar9 = piVar9 + 0x1c;
          bVar3 = 1 < iVar6;
          iVar6 = iVar6 + -1;
        } while (bVar3);
      }
      if ((code *)param_1[3] != (code *)0x0) {
        (*(code *)param_1[3])(param_1,param_2);
      }
      param_2 = *(longlong *)(param_2 + 0x50);
      lVar1 = param_2;
    }
  }
  return 0;
}



// FUNCTION 14959fd90 FUN_14959fd90 body=244 status=ok
// SIG undefined FUN_14959fd90(void)

undefined8 FUN_14959fd90(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    piVar1 = *(int **)(param_2 + 0x18);
    if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
      plVar4 = (longlong *)(piVar1 + 2);
      iVar3 = *piVar1 + 1;
      do {
        if ((*plVar4 != 0) && (iVar2 = FUN_14959fa98(param_1), iVar2 != 0)) {
          return 2;
        }
        plVar4 = plVar4 + 4;
        iVar3 = iVar3 + -1;
      } while (1 < iVar3);
    }
    piVar1 = *(int **)(param_2 + 0x10);
    if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
      plVar4 = (longlong *)(piVar1 + 2);
      iVar3 = *piVar1 + 1;
      do {
        if ((*plVar4 != 0) && (iVar2 = FUN_14959fa98(param_1), iVar2 != 0)) {
          return 2;
        }
        plVar4 = plVar4 + 4;
        iVar3 = iVar3 + -1;
      } while (1 < iVar3);
    }
    if ((((*(longlong *)(param_2 + 0x48) != 0) && (iVar3 = FUN_14959fa98(param_1), iVar3 != 0)) ||
        ((*(longlong *)(param_2 + 0x28) != 0 && (iVar3 = FUN_14959fa98(param_1), iVar3 != 0)))) ||
       ((*(longlong *)(param_2 + 0x30) != 0 && (iVar3 = FUN_14959fa98(param_1), iVar3 != 0))))
    break;
    param_2 = *(longlong *)(param_2 + 0x40);
  }
  return 2;
}



// FUNCTION 14959fe84 FUN_14959fe84 body=1119 status=ok
// SIG undefined FUN_14959fe84(void)

char FUN_14959fe84(undefined8 *param_1,byte *param_2,byte *param_3,int param_4)

{
  byte bVar1;
  char *_Str1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (byte *)0x0 || param_3 == (byte *)0x0) {
    cVar7 = (param_3 != param_2) * '\x02';
    goto LAB_14959fec7;
  }
  if ((param_1 != (undefined8 *)0x0) && (*param_2 == 0x99)) {
    local_58 = &local_50;
    local_50 = 0;
    FUN_14959f32d(*param_1,param_3,1,0x41);
    lVar6 = local_50;
    if (local_50 != 0) {
      uVar2 = 0x80000000;
      if (*(short *)(param_2 + 0x30) < 0x20) {
        uVar2 = 1 << ((char)*(short *)(param_2 + 0x30) - 1U & 0x1f);
      }
      *(uint *)(param_1[2] + 0x114) = *(uint *)(param_1[2] + 0x114) | uVar2;
      lVar4 = FUN_1495a0450(param_1[0x26]);
      cVar7 = '\0';
      bVar10 = false;
      if (lVar4 != 0) {
        uVar2 = *(uint *)(lVar4 + 8);
        if ((0x4000400040004U >> ((ulonglong)uVar2 & 0x3f) & 1) != 0) {
          if ((~uVar2 & 0x202) == 0) {
            if (((uVar2 & 1) == 0) && (*(char *)(lVar4 + 10) != '\x01')) {
LAB_1495a02b6:
              FUN_14956b88d(lVar4,1);
            }
          }
          else if ((uVar2 & 1) == 0) goto LAB_1495a02b6;
        }
        iVar3 = FUN_149575d1d(lVar4,lVar6,0);
        bVar10 = iVar3 == 0;
      }
      FUN_149559090(lVar6);
      FUN_149559090(lVar4);
      if (bVar10) goto LAB_14959fec7;
    }
  }
  uVar2 = *(uint *)(param_2 + 4);
  uVar8 = *(uint *)(param_3 + 4);
  uVar9 = uVar8 | uVar2;
  if ((uVar9 >> 10 & 1) == 0) {
    bVar1 = *param_2;
    bVar5 = *param_3;
    if (bVar1 != 0x47 && bVar1 == bVar5) {
      if (((bVar1 | 2) != 0xa6) && (_Str1 = *(char **)(param_2 + 8), _Str1 != (char *)0x0)) {
        if (bVar1 < 0xa5) {
          if (bVar1 == 0x6f) {
            cVar7 = '\x02';
            if (*(longlong *)(param_3 + 8) != 0) {
              lVar6 = 0;
              do {
                bVar1 = _Str1[lVar6];
                bVar5 = *(byte *)(*(longlong *)(param_3 + 8) + lVar6);
                if (bVar1 == bVar5) {
                  if ((ulonglong)bVar1 == 0) goto LAB_14959ff99;
                }
                else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar5]) break;
                lVar6 = lVar6 + 1;
              } while( true );
            }
            goto LAB_14959fec7;
          }
          if (bVar1 == 0x77) goto LAB_14959ff81;
        }
        else if ((bVar1 == 0xa9) || (bVar1 == 0xa5)) {
          lVar6 = 0;
          do {
            bVar1 = _Str1[lVar6];
            if (bVar1 == *(byte *)(*(longlong *)(param_3 + 8) + lVar6)) {
              if ((ulonglong)bVar1 == 0) goto LAB_1495a01f3;
            }
            else if ((&DAT_14bd3ff30)[bVar1] !=
                     (&DAT_14bd3ff30)[*(byte *)(*(longlong *)(param_3 + 8) + lVar6)])
            goto LAB_1495a019e;
            lVar6 = lVar6 + 1;
          } while( true );
        }
        if (*(char **)(param_3 + 8) != (char *)0x0) {
          iVar3 = strcmp(_Str1,*(char **)(param_3 + 8));
          cVar7 = '\x02';
          if (iVar3 != 0) goto LAB_14959fec7;
        }
      }
      goto LAB_14959ff99;
    }
    if (bVar1 == 0x6f) {
      uVar2 = FUN_14959fe84(param_1,*(undefined8 *)(param_2 + 0x10),param_3,param_4);
      cVar7 = '\x01';
      if (uVar2 < 2) goto LAB_14959fec7;
      bVar5 = *param_3;
    }
    if (bVar5 == 0x6f) {
      uVar2 = FUN_14959fe84(param_1,param_2,*(undefined8 *)(param_3 + 0x10),param_4);
      cVar7 = '\x01';
      if (uVar2 < 2) goto LAB_14959fec7;
    }
  }
  else if ((((uVar2 & uVar8) >> 10 & 1) != 0) && (*(int *)(param_2 + 8) == *(int *)(param_3 + 8)))
  goto LAB_14959ff81;
LAB_1495a019e:
  cVar7 = '\x02';
  goto LAB_14959fec7;
LAB_1495a01f3:
  cVar7 = '\x02';
  if ((uVar2 & 0x1000000) >> 0x18 != (uint)((uVar8 >> 0x18 & 1) != 0)) goto LAB_14959fec7;
  if ((uVar2 & 0x1000000) != 0) {
    iVar3 = FUN_1495a02e4(param_1,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_3 + 0x40),1)
    ;
    if (iVar3 != 0) goto LAB_14959fec7;
    uVar2 = *(uint *)(param_2 + 4);
    uVar8 = *(uint *)(param_3 + 4);
  }
LAB_14959ff99:
  cVar7 = '\x02';
  if ((((uVar8 ^ uVar2) & 0x202) != 0) ||
     (((uVar9 >> 0xe & 1) == 0 &&
      ((((uVar9 >> 0xb & 1) != 0 ||
        (((((uVar9 & 8) == 0 &&
           (iVar3 = FUN_14959fe84(param_1,*(undefined8 *)(param_2 + 0x10),
                                  *(undefined8 *)(param_3 + 0x10),param_4), iVar3 != 0)) ||
          (iVar3 = FUN_14959fe84(param_1,*(undefined8 *)(param_2 + 0x18),
                                 *(undefined8 *)(param_3 + 0x18),param_4), iVar3 != 0)) ||
         (iVar3 = FUN_1495a03ca(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_3 + 0x20),
                                param_4), iVar3 != 0)))) ||
       ((((bVar1 = *param_2, bVar1 != 0x73 && (bVar1 != 0xa7)) && ((uVar9 >> 0xd & 1) == 0)) &&
        (((*(short *)(param_2 + 0x30) != *(short *)(param_3 + 0x30) ||
          ((param_2[2] != param_3[2] && ((bVar1 == 0xac || (param_4 < 0 && bVar1 == 0xa9)))))) ||
         ((bVar1 != 0x31 &&
          ((*(int *)(param_2 + 0x2c) != param_4 &&
           (*(int *)(param_2 + 0x2c) != *(int *)(param_3 + 0x2c))))))))))))))) goto LAB_14959fec7;
LAB_14959ff81:
  cVar7 = '\0';
LAB_14959fec7:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar7;
}



// FUNCTION 1495a02e4 FUN_1495a02e4 body=230 status=ok
// SIG undefined FUN_1495a02e4(void)

int FUN_1495a02e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if ((((((param_3 != 0 && param_2 != 0) && (*(char *)(param_2 + 0x20) == *(char *)(param_3 + 0x20))
         ) && (*(char *)(param_2 + 0x21) == *(char *)(param_3 + 0x21))) &&
       ((*(char *)(param_2 + 0x22) == *(char *)(param_3 + 0x22) &&
        (*(char *)(param_2 + 0x24) == *(char *)(param_3 + 0x24))))) &&
      ((iVar1 = FUN_14959fe84(param_1,*(undefined8 *)(param_2 + 0x28),
                              *(undefined8 *)(param_3 + 0x28),0xffffffff), iVar1 == 0 &&
       ((iVar1 = FUN_14959fe84(param_1,*(undefined8 *)(param_2 + 0x30),
                               *(undefined8 *)(param_3 + 0x30),0xffffffff), iVar1 == 0 &&
        (iVar2 = FUN_1495a03ca(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10),
                               0xffffffff), iVar2 == 0)))))) &&
     ((iVar2 = FUN_1495a03ca(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + 0x18),
                             0xffffffff), iVar2 == 0 &&
      ((param_4 == 0 ||
       (iVar2 = FUN_14959fe84(param_1,*(undefined8 *)(param_2 + 0x48),
                              *(undefined8 *)(param_3 + 0x48),0xffffffff), iVar2 == 0)))))) {
    iVar2 = 0;
  }
  return iVar2;
}



// FUNCTION 1495a03ca FUN_1495a03ca body=134 status=ok
// SIG undefined FUN_1495a03ca(void)

undefined8 FUN_1495a03ca(int *param_1,int *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if (param_1 != (int *)0x0 || param_2 != (int *)0x0) {
    if ((param_1 == (int *)0x0 || param_2 == (int *)0x0) || (*param_1 != *param_2)) {
LAB_1495a0449:
      uVar1 = 1;
    }
    else if (0 < *param_1) {
      lVar2 = 0x18;
      lVar3 = 0;
      do {
        if (*(char *)((longlong)param_1 + lVar2) != *(char *)((longlong)param_2 + lVar2))
        goto LAB_1495a0449;
        uVar1 = FUN_14959fe84(0,*(undefined8 *)((longlong)param_1 + lVar2 + -0x10),
                              *(undefined8 *)((longlong)param_2 + lVar2 + -0x10),param_3);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x20;
        uVar1 = 0;
      } while (lVar3 < *param_1);
    }
  }
  return uVar1;
}



// FUNCTION 1495a0450 FUN_1495a0450 body=80 status=ok
// SIG undefined FUN_1495a0450(void)

longlong FUN_1495a0450(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar1 = param_1[0x10];
    if (((*(byte *)(lVar1 + -0x30 + (longlong)param_2 * 0x38) & 1) == 0) &&
       (lVar2 = FUN_14955c570(*param_1), lVar2 != 0)) {
      FUN_1495594c1(lVar2,lVar1 + (longlong)param_2 * 0x38 + -0x38);
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1495a04a0 FUN_1495a04a0 body=145 status=ok
// SIG undefined FUN_1495a04a0(void)

undefined8 FUN_1495a04a0(undefined8 param_1,undefined8 param_2,char *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_14959fe84();
  uVar3 = 1;
  if (iVar2 != 0) {
    cVar1 = *param_3;
    if (cVar1 == '+') {
      iVar2 = FUN_1495a04a0(param_1,param_2,*(undefined8 *)(param_3 + 0x10),param_4);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_1495a04a0(param_1,param_2,*(undefined8 *)(param_3 + 0x18),param_4);
      if (iVar2 != 0) {
        return 1;
      }
      cVar1 = *param_3;
    }
    if ((cVar1 != '3') ||
       (iVar2 = FUN_1495a062a(param_1,param_2,*(undefined8 *)(param_3 + 0x10),param_4,0), iVar2 == 0
       )) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1495a0531 FUN_1495a0531 body=248 status=ok
// SIG undefined FUN_1495a0531(void)

undefined2 FUN_1495a0531(char *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  code *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined2 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  for (; uVar2 = 0, param_1 != (char *)0x0; param_1 = *(char **)param_1) {
    if ((*(uint *)(param_1 + 4) & 0x41000) == 0) {
      if (*param_1 == '3') {
        param_1 = *(char **)(param_1 + 0x10);
        goto LAB_1495a05c5;
      }
      if (*param_1 == ',') goto LAB_1495a05a7;
      goto LAB_1495a0611;
    }
    if ((*(uint *)(param_1 + 4) >> 0x12 & 1) == 0) {
      param_1 = param_1 + 0x10;
    }
    else {
      param_1 = (char *)(*(longlong *)(param_1 + 0x20) + 8);
    }
  }
  goto LAB_1495a0579;
  while (param_1 = *(char **)(param_1 + 0x18), *param_1 == ',') {
LAB_1495a05a7:
    iVar1 = FUN_1495a0531(*(undefined8 *)(param_1 + 0x10),param_2);
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_1495a0579;
    }
  }
LAB_1495a05c5:
  local_48 = FUN_1495a07b3;
  local_2c = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_28 = param_2;
  if (param_1 != (char *)0x0) {
LAB_1495a0611:
    local_2c = 0;
    uStack_38 = 0;
    local_40 = 0;
    local_48 = FUN_1495a07b3;
    local_28 = param_2;
    FUN_14959fa98(local_50,param_1);
    uVar2 = local_2c;
  }
LAB_1495a0579:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a062a FUN_1495a062a body=393 status=ok
// SIG undefined FUN_1495a062a(void)

bool FUN_1495a062a(undefined8 param_1,byte *param_2,char *param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_14959fe84();
  do {
    if (iVar3 == 0) {
      return *param_3 != 'w';
    }
    bVar1 = *param_2;
    uVar4 = (uint)bVar1;
    if (bVar1 < 0x34) {
      if (bVar1 == 0x30) {
        if (param_5 != 0) {
          return false;
        }
        lVar2 = *(longlong *)(param_2 + 0x20);
        iVar3 = FUN_1495a062a(param_1,*(undefined8 *)(lVar2 + 8),param_3,param_4,1);
        if (iVar3 != 0) {
          return true;
        }
        iVar3 = FUN_1495a062a(param_1,*(undefined8 *)(lVar2 + 0x28),param_3,param_4,1);
        param_5 = 1;
        if (iVar3 != 0) {
          return true;
        }
      }
      else {
        if (uVar4 == 0x31) {
          if (param_5 != 0) {
            param_5 = 1;
            if ((param_2[5] & 8) != 0) {
              return false;
            }
            goto switchD_1495a06d2_caseD_6f;
          }
        }
        else if (uVar4 != 0x13) {
          return false;
        }
switchD_1495a06d2_caseD_70:
        param_5 = 1;
      }
    }
    else if (uVar4 < 0xaa) {
      switch(bVar1) {
      case 0x6f:
        break;
      case 0x70:
        goto switchD_1495a06d2_caseD_70;
      default:
        if (5 < uVar4 - 0x34) {
          return false;
        }
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6e:
        param_5 = 1;
      case 0x65:
      case 0x6b:
      case 0x6c:
      case 0x6d:
        iVar3 = FUN_1495a062a(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4,param_5);
        if (iVar3 != 0) {
          return true;
        }
      }
    }
    else if (uVar4 == 0xac) {
      if (param_5 != 0) {
        return false;
      }
      param_5 = 1;
      if (param_2[2] != 0x2d) {
        return false;
      }
    }
    else if ((1 < bVar1 - 0xaa) && (uVar4 != 0xb2)) {
      return false;
    }
switchD_1495a06d2_caseD_6f:
    param_2 = *(byte **)(param_2 + 0x10);
    iVar3 = FUN_14959fe84(param_1,param_2,param_3,param_4);
  } while( true );
}



// FUNCTION 1495a07b3 FUN_1495a07b3 body=237 status=ok
// SIG undefined FUN_1495a07b3(void)

char FUN_1495a07b3(longlong param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\x01';
  if ((param_2[4] & 1) != 0) {
    return '\x01';
  }
  switch(*param_2) {
  case 0x2b:
  case 0x2d:
  case 0x31:
  case 0x32:
  case 0x33:
    goto switchD_1495a07e4_caseD_2b;
  case 0x2c:
    if (*(short *)(param_1 + 0x24) != 0) {
      return '\x01';
    }
    if (*(longlong *)(param_2 + 0x10) == 0) {
      return '\x01';
    }
    FUN_14959fa98(param_1);
    if (*(short *)(param_1 + 0x24) == 0) {
      return '\x01';
    }
    *(undefined2 *)(param_1 + 0x24) = 0;
    if (*(longlong *)(param_2 + 0x18) == 0) {
      return '\x01';
    }
    FUN_14959fa98(param_1);
    return '\x01';
  case 0x2e:
  case 0x2f:
    break;
  case 0x30:
    if (*(longlong *)(param_2 + 0x10) == 0) {
      return '\x01';
    }
    iVar2 = FUN_14959fa98(param_1);
    return (iVar2 == 2) + '\x01';
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    if ((**(char **)(param_2 + 0x10) == -0x5c) &&
       (*(int *)(*(longlong *)(*(char **)(param_2 + 0x10) + 0x40) + 0x54) != 0)) {
      return '\x01';
    }
    if ((**(char **)(param_2 + 0x18) == -0x5c) &&
       (*(int *)(*(longlong *)(*(char **)(param_2 + 0x18) + 0x40) + 0x54) != 0)) {
      return '\x01';
    }
    break;
  default:
    uVar1 = *param_2 - 0x9a;
    if (uVar1 < 0x15) {
      if ((0x14c001U >> (uVar1 & 0x1f) & 1) != 0) {
        return '\x01';
      }
      if (uVar1 == 10) {
        if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x2c)) {
          return '\x01';
        }
        *(undefined2 *)(param_1 + 0x24) = 1;
        return '\x02';
      }
    }
  }
  cVar3 = '\0';
switchD_1495a07e4_caseD_2b:
  return cVar3;
}



// FUNCTION 1495a08a0 FUN_1495a08a0 body=192 status=ok
// SIG undefined FUN_1495a08a0(void)

void FUN_1495a08a0(undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_res20;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_res20 = param_4;
  if (*(char *)((longlong)param_1 + 0x113) == '\x02') {
    local_38 = &local_res20;
    uVar4 = FUN_14955dd50(*param_1,param_3,local_38);
    lVar2 = param_1[2];
    uVar1 = *(undefined4 *)(lVar2 + 0x90);
    local_48 = 0;
    uVar3 = FUN_149584f48(lVar2,0xae,uVar1,*(undefined4 *)(param_1 + 0x24));
    FUN_14955a5b6(lVar2,uVar3,uVar4,0xfffffff9);
    if (param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x24) = uVar1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a0961 FUN_1495a0961 body=145 status=ok
// SIG undefined FUN_1495a0961(void)

undefined8 FUN_1495a0961(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar1 = *(char **)(param_2 + 0x10);
  cVar2 = *pcVar1;
  if (cVar2 == -0x53) {
    cVar2 = pcVar1[2];
  }
  pcVar4 = pcVar1;
  if (cVar2 != -0x52) {
    if (cVar2 != -0x78) {
      iVar3 = 1;
      if ((*(byte *)(param_2 + 5) & 8) == 0) {
        return 0;
      }
      goto LAB_1495a09ba;
    }
    pcVar4 = *(char **)(pcVar1 + 0x20);
  }
  iVar3 = **(int **)(pcVar4 + 0x20);
  if ((*(byte *)(param_2 + 5) & 8) == 0) {
    if (iVar3 == 1) {
      return 0;
    }
    FUN_1495a1b0b(param_1,pcVar1);
    return 1;
  }
LAB_1495a09ba:
  if (iVar3 == **(int **)(*(longlong *)(param_2 + 0x20) + 0x20)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_14955a364(param_1,"sub-select returns %d columns - expected %d");
    return 1;
  }
  return 1;
}



// FUNCTION 1495a09f2 FUN_1495a09f2 body=269 status=ok
// SIG undefined FUN_1495a09f2(void)

longlong FUN_1495a09f2(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  
  pcVar1 = *(char **)(param_2 + 0x10);
  cVar2 = *pcVar1;
  if (cVar2 == -0x53) {
    cVar2 = pcVar1[2];
  }
  pcVar8 = pcVar1;
  if (cVar2 != -0x52) {
    uVar10 = 1;
    if (cVar2 != -0x78) goto LAB_1495a0a31;
    pcVar8 = *(char **)(pcVar1 + 0x20);
  }
  uVar10 = **(uint **)(pcVar8 + 0x20);
LAB_1495a0a31:
  if ((*(byte *)(param_2 + 5) & 8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)(param_2 + 0x20);
  }
  if (*param_1 == 0) {
    lVar5 = FUN_145e3bd67((longlong)(int)(uVar10 + 1));
  }
  else {
    lVar5 = FUN_14955d750();
  }
  if (lVar5 != 0) {
    if (0 < (int)uVar10) {
      lVar9 = 8;
      uVar7 = 0;
      do {
        uVar6 = FUN_14959f8a5(pcVar1,uVar7 & 0xffffffff);
        bVar3 = FUN_14959f8fa(uVar6);
        bVar4 = bVar3;
        if (lVar11 != 0) {
          bVar4 = FUN_14959f8fa(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + lVar9));
          if (((char)bVar3 < 'A') || ((char)bVar4 < 'A')) {
            if ((char)bVar4 < 'A') {
              bVar4 = bVar3;
            }
            bVar4 = bVar4 | 0x40;
          }
          else {
            bVar4 = (0x42 < bVar4) * '\x02' | 0x41;
            if (0x42 < bVar3) {
              bVar4 = 0x43;
            }
          }
        }
        *(byte *)(lVar5 + uVar7) = bVar4;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 0x20;
      } while (uVar10 != uVar7);
    }
    *(undefined1 *)(lVar5 + (int)uVar10) = 0;
  }
  return lVar5;
}



// FUNCTION 1495a0aff FUN_1495a0aff body=3978 status=ok
// SIG undefined FUN_1495a0aff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1495a0aff(longlong *param_1,longlong param_2,ulonglong param_3,int *param_4,longlong param_5
                 ,undefined4 *param_6)

{
  ushort uVar1;
  ulonglong *puVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int *piVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  char *pcVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  undefined4 uVar23;
  uint *puVar24;
  ulonglong uVar25;
  char *pcVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined1 *puVar30;
  uint *puVar31;
  undefined8 *puVar32;
  byte bVar33;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar36 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  longlong local_d0;
  int *local_c8;
  uint *local_c0;
  int local_b4;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  char local_91 [5];
  undefined4 local_8c;
  code *local_88;
  undefined1 *local_80;
  short local_6c;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar21 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) + 1;
  plVar14 = (longlong *)param_1[2];
  if (plVar14 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar14 = (longlong *)FUN_14955a44a(param_1);
  }
  if (param_4 == (int *)0x0) {
    param_4 = (int *)0x0;
  }
  else if ((*(byte *)(param_2 + 5) & 8) != 0) {
    puVar31 = *(uint **)(*(longlong *)(param_2 + 0x20) + 0x20);
    uVar15 = *puVar31;
    if ((int)uVar15 < 1) {
      uVar27 = 0;
    }
    else {
      puVar31 = puVar31 + 2;
      uVar29 = 0;
      local_d0 = param_2;
      do {
        iVar7 = FUN_1495a1a8a(*(undefined8 *)puVar31);
        if (iVar7 != 0) goto LAB_1495a0ba2;
        uVar29 = uVar29 + 1;
        puVar31 = puVar31 + 8;
      } while (uVar15 != uVar29);
      uVar29 = (ulonglong)uVar15;
LAB_1495a0ba2:
      uVar27 = (uint)uVar29;
      param_2 = local_d0;
    }
    if (uVar27 == uVar15) {
      param_4 = (int *)0x0;
    }
  }
  uVar29 = param_3 & 0xffffffff;
  if (((((((int)param_1[6] == 0) && ((*(uint *)(param_2 + 4) & 0x820) == 0x800)) &&
        (lVar20 = *(longlong *)(param_2 + 0x20), *(longlong *)(lVar20 + 0x50) == 0)) &&
       (((*(byte *)(lVar20 + 4) & 9) == 0 && (*(longlong *)(lVar20 + 0x60) == 0)))) &&
      ((*(longlong *)(lVar20 + 0x30) == 0 &&
       ((piVar3 = *(int **)(lVar20 + 0x28), *piVar3 == 1 && (*(longlong *)(piVar3 + 0xc) == 0))))))
     && (puVar2 = *(ulonglong **)(piVar3 + 10), *(int *)((longlong)puVar2 + 0x54) == 0)) {
    puVar31 = *(uint **)(lVar20 + 0x20);
    uVar18 = (ulonglong)*puVar31;
    if (0 < (int)*puVar31) {
      lVar12 = 0;
      do {
        if (**(char **)((longlong)puVar31 + lVar12 + 8) != -0x5c) goto LAB_1495a0bd4;
        lVar12 = lVar12 + 0x20;
      } while (uVar18 << 5 != lVar12);
    }
    if (lVar20 == 0) goto LAB_1495a0bd4;
    local_c0 = (uint *)CONCAT44(local_c0._4_4_,(int)param_3);
    uVar15 = 0xfff0bdc0;
    if (puVar2[0xe] != 0) {
      uVar15 = 0xffffffff;
      puVar22 = (ulonglong *)(*(longlong *)(*param_1 + 0x20) + 0x18);
      do {
        uVar15 = uVar15 + 1;
        uVar29 = *puVar22;
        puVar22 = puVar22 + 4;
      } while (uVar29 != puVar2[0xe]);
    }
    plVar10 = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      plVar10 = param_1;
    }
    local_b4 = (int)(short)uVar15;
    local_e8 = param_1;
    local_e0 = plVar14;
    local_d8 = uVar18;
    local_d0 = param_2;
    local_c8 = param_4;
    local_b0 = uVar21;
    if (((*(uint *)((longlong)plVar10 + 0x74) >> (uVar15 & 0x1f) & 1) == 0) &&
       (*(uint *)((longlong)plVar10 + 0x74) =
             1 << ((byte)uVar15 & 0x1f) | *(uint *)((longlong)plVar10 + 0x74),
       (uVar15 & 0xffff) == 1)) {
      FUN_14955dea7(plVar10);
    }
    local_f8 = *puVar2;
    FUN_14959b139(local_e8,local_b4,(int)puVar2[7],0);
    uVar21 = local_b0;
    plVar10 = local_e0;
    plVar14 = local_e8;
    if ((int)local_d8 != 1) {
      uVar29 = (ulonglong)local_c0 & 0xffffffff;
      if (0 < (int)local_d8) goto LAB_1495a0f23;
LAB_1495a179b:
      puVar32 = (undefined8 *)puVar2[2];
      uVar21 = local_b0;
      param_2 = local_d0;
      plVar14 = local_e0;
      param_1 = local_e8;
      param_4 = local_c8;
      if (puVar32 != (undefined8 *)0x0) {
        local_a8 = -1L << ((byte)local_d8 & 0x3f);
        uVar18 = local_d8;
        do {
          uVar1 = *(ushort *)(puVar32 + 0xc);
          uVar15 = (uint)uVar18;
          if (((((int)uVar15 <= (int)(uint)uVar1) && (uVar1 < 0x3f)) && (puVar32[9] == 0)) &&
             (((uVar29 & 4) == 0 ||
              (((int)(uint)*(ushort *)((longlong)puVar32 + 0x5e) <= (int)uVar15 &&
               ((uVar1 <= uVar15 || (*(char *)((longlong)puVar32 + 0x62) != '\0')))))))) {
            if (0 < (int)uVar15) {
              uVar21 = 0;
              uVar25 = 0;
              do {
                uVar13 = FUN_14959f8a5(*(undefined8 *)(local_d0 + 0x10),uVar21 & 0xffffffff);
                lVar20 = *(longlong *)(puVar31 + uVar21 * 8 + 2);
                plVar14 = (longlong *)FUN_149586264(local_e8,uVar13,lVar20);
                uVar29 = 0;
LAB_1495a1837:
                if (*(short *)(puVar32[1] + uVar29 * 2) != *(short *)(lVar20 + 0x30))
                goto LAB_1495a1874;
                if (plVar14 != (longlong *)0x0) {
                  lVar12 = 0;
                  do {
                    bVar33 = *(byte *)(*plVar14 + lVar12);
                    bVar5 = *(byte *)(*(longlong *)(puVar32[8] + uVar29 * 8) + lVar12);
                    if (bVar33 == bVar5) {
                      if ((ulonglong)bVar33 == 0) break;
                    }
                    else if ((&DAT_14bd3ff30)[bVar33] != (&DAT_14bd3ff30)[bVar5])
                    goto LAB_1495a1874;
                    lVar12 = lVar12 + 1;
                  } while( true );
                }
                if (((int)local_d8 == (int)uVar29) || ((uVar25 >> (uVar29 & 0x3f) & 1) != 0))
                goto LAB_1495a18ae;
                if (param_5 != 0) {
                  *(int *)(param_5 + uVar21 * 4) = (int)uVar29;
                }
                uVar25 = uVar25 | 1L << ((byte)uVar29 & 0x3f);
                uVar21 = uVar21 + 1;
                if (uVar21 == local_d8) goto LAB_1495a18ae;
              } while( true );
            }
            uVar25 = 0;
LAB_1495a18ae:
            uVar21 = local_b0;
            piVar3 = local_c8;
            plVar14 = local_e0;
            plVar10 = local_e8;
            uVar29 = (ulonglong)local_c0 & 0xffffffff;
            uVar18 = local_d8;
            param_2 = local_d0;
            param_1 = local_e8;
            param_4 = local_c8;
            if ((uVar25 ^ local_a8) == 0xffffffffffffffff) {
              local_f8 = local_f8 & 0xffffffff00000000;
              iVar7 = FUN_149584f48(local_e0,0x11,0,0);
              FUN_1495a08a0(plVar10,0,"USING INDEX %s FOR IN-OPERATOR",*puVar32);
              local_f8 = CONCAT44(local_f8._4_4_,local_b4);
              FUN_149584f48(plVar14,0x60,uVar21 & 0xffffffff,*(undefined4 *)(puVar32 + 0xb));
              FUN_14959b2a7(plVar10,puVar32);
              bVar33 = *(byte *)puVar32[7];
              if (piVar3 != (int *)0x0) {
                iVar28 = (int)local_e8[7] + 1;
                *(int *)(local_e8 + 7) = iVar28;
                *local_c8 = iVar28;
                if ((int)local_d8 == 1) {
                  FUN_1495a1b4d(local_e0,local_b0);
                }
              }
              if (*(char *)(*local_e0 + 0x61) == '\0') {
                iVar28 = (int)local_e0[0x12] + -1;
                if (-1 < iVar7) {
                  iVar28 = iVar7;
                }
                puVar17 = (undefined1 *)((longlong)iVar28 * 0x18 + local_e0[0x11]);
              }
              else {
                puVar17 = &DAT_14cc1ee40;
              }
              iVar7 = bVar33 + 3;
              *(int *)(puVar17 + 8) = (int)local_e0[0x12];
              goto LAB_1495a1979;
            }
          }
          puVar32 = (undefined8 *)puVar32[5];
        } while (puVar32 != (undefined8 *)0x0);
      }
      goto LAB_1495a0bd4;
    }
    if (-1 < *(short *)(*(longlong *)(puVar31 + 2) + 0x30)) {
LAB_1495a0f23:
      puVar24 = puVar31 + 2;
      uVar21 = 1;
      do {
        uVar13 = FUN_14959f8a5(*(undefined8 *)(local_d0 + 0x10),(int)uVar21 + -1);
        bVar33 = 0x44;
        if (-1 < (longlong)*(short *)(*(longlong *)puVar24 + 0x30)) {
          bVar33 = *(byte *)(puVar2[1] + 0x19 +
                            (longlong)*(short *)(*(longlong *)puVar24 + 0x30) * 0x20);
        }
        bVar5 = FUN_14959f8fa(uVar13);
        if (((char)bVar33 < 'A') || ((char)bVar5 < 'A')) {
          if ((char)bVar5 < 'A') {
            bVar5 = bVar33;
          }
          bVar5 = bVar5 | 0x40;
        }
        else {
          bVar5 = (0x42 < bVar5) * '\x02' | 0x41;
          if (0x42 < bVar33) {
            bVar5 = 0x43;
          }
        }
        bVar34 = (byte)(bVar5 + 0xbf) < 2;
        if (local_d8 <= uVar21) break;
        uVar21 = uVar21 + 1;
        puVar24 = puVar24 + 8;
      } while ('B' < (char)bVar33 || bVar34);
      uVar29 = (ulonglong)local_c0 & 0xffffffff;
      uVar21 = local_b0;
      param_2 = local_d0;
      plVar14 = local_e0;
      param_1 = local_e8;
      param_4 = local_c8;
      if ('B' >= (char)bVar33 && !bVar34) goto LAB_1495a0bd4;
      goto LAB_1495a179b;
    }
    local_f8 = local_f8 & 0xffffffff00000000;
    iVar28 = FUN_149584f48(local_e0,0x11,0,0);
    local_f8 = CONCAT44(local_f8._4_4_,0x60);
    FUN_14959b02c(plVar14,uVar21 & 0xffffffff,local_b4,puVar2);
    FUN_1495a08a0(plVar14,0,"USING ROWID SEARCH ON TABLE %s FOR IN-OPERATOR",*puVar2);
    iVar7 = (int)plVar10[0x12];
    if (*(char *)(*plVar10 + 0x61) == '\0') {
      iVar16 = iVar7 + -1;
      if (-1 < iVar28) {
        iVar16 = iVar28;
      }
      puVar17 = (undefined1 *)((longlong)iVar16 * 0x18 + local_e0[0x11]);
    }
    else {
      puVar17 = &DAT_14cc1ee40;
    }
    *(int *)(puVar17 + 8) = iVar7;
    iVar7 = 1;
LAB_1495a1979:
    uVar23 = (undefined4)local_b0;
    param_2 = local_d0;
  }
  else {
LAB_1495a0bd4:
    uVar23 = (undefined4)uVar21;
    if (((uVar29 & 1) != 0) && ((*(byte *)(param_2 + 5) & 8) == 0)) {
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x10) = 0;
      local_6c = 1;
      local_88 = FUN_14959f99d;
      local_80 = &LAB_14959fa8c;
      local_68 = 0;
      if (param_2 != 0) {
        FUN_14959fa98(local_91 + 1,param_2);
        *(undefined8 *)(param_2 + 0x10) = uVar13;
        uVar13 = _DAT_00000010;
        if (local_6c == 0) {
          iVar7 = 5;
          goto LAB_1495a0c47;
        }
      }
      _DAT_00000010 = uVar13;
      iVar7 = 5;
      if (**(int **)(param_2 + 0x20) < 3) goto LAB_1495a0c47;
    }
    uVar8 = *(undefined4 *)((longlong)param_1 + 0xbc);
    if ((uVar29 & 4) == 0) {
      iVar7 = 0;
      if (param_4 != (int *)0x0) {
        iVar7 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar7;
        *param_4 = iVar7;
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
      iVar7 = 0;
    }
    local_d0 = CONCAT44(local_d0._4_4_,iVar7);
    plVar10 = (longlong *)param_1[2];
    uVar15 = *(uint *)(param_2 + 4);
    local_d8 = CONCAT44(local_d8._4_4_,uVar8);
    uVar8 = 0;
    if (((uVar15 & 0x20) == 0) && (uVar8 = 0, (int)param_1[8] == 0)) {
      if ((uVar15 >> 0x19 & 1) == 0) {
        *(uint *)(param_2 + 4) = uVar15 | 0x2000000;
        iVar7 = (int)param_1[7] + 1;
        *(int *)(param_1 + 7) = iVar7;
        *(int *)(param_2 + 0x44) = iVar7;
        local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
        iVar7 = FUN_149584f48(plVar10,0x45,0);
        *(int *)(param_2 + 0x40) = iVar7 + 1;
        local_f8 = local_f8 & 0xffffffff00000000;
        uVar8 = FUN_149584f48(plVar10,0x11,0,0);
        goto LAB_1495a1099;
      }
      local_f8 = (ulonglong)local_f8._4_4_ << 0x20;
      iVar7 = FUN_149584f48(plVar10,0x11,0,0);
      if ((*(byte *)(param_2 + 5) & 8) != 0) {
        FUN_1495a08a0(param_1,0,"REUSE LIST SUBQUERY %d",
                      *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x10));
      }
      local_f8 = local_f8 & 0xffffffff00000000;
      FUN_149584f48(plVar10,0xc,*(undefined4 *)(param_2 + 0x44),*(undefined4 *)(param_2 + 0x40));
      local_f8 = local_f8 & 0xffffffff00000000;
      FUN_149584f48(plVar10,0x62,uVar21 & 0xffffffff,*(undefined4 *)(param_2 + 0x2c));
      if (*(char *)(*plVar10 + 0x61) == '\0') {
        iVar28 = (int)plVar10[0x12] + -1;
        if (-1 < iVar7) {
          iVar28 = iVar7;
        }
        puVar17 = (undefined1 *)((longlong)iVar28 * 0x18 + plVar10[0x11]);
      }
      else {
        puVar17 = &DAT_14cc1ee40;
      }
      *(int *)(puVar17 + 8) = (int)plVar10[0x12];
      uVar8 = (int)local_d8;
LAB_1495a1272:
      iVar28 = (int)local_d0;
    }
    else {
LAB_1495a1099:
      local_e8 = (longlong *)CONCAT44(local_e8._4_4_,uVar8);
      pcVar19 = *(char **)(param_2 + 0x10);
      cVar6 = *pcVar19;
      if (cVar6 == -0x53) {
        cVar6 = pcVar19[2];
      }
      pcVar26 = pcVar19;
      if (cVar6 == -0x52) {
LAB_1495a10c6:
        uVar15 = **(uint **)(pcVar26 + 0x20);
      }
      else {
        uVar15 = 1;
        if (cVar6 == -0x78) {
          pcVar26 = *(char **)(pcVar19 + 0x20);
          goto LAB_1495a10c6;
        }
      }
      *(undefined4 *)(param_2 + 0x2c) = uVar23;
      local_f8 = local_f8 & 0xffffffff00000000;
      local_e0 = plVar14;
      uVar8 = FUN_149584f48(plVar10,100,uVar21 & 0xffffffff,uVar15);
      local_b0 = CONCAT44(local_b0._4_4_,uVar8);
      piVar11 = (int *)FUN_14959b3e4(*param_1,uVar15,1);
      piVar3 = *(int **)(param_2 + 0x20);
      if ((*(byte *)(param_2 + 5) & 8) == 0) {
        if (piVar3 == (int *)0x0) {
LAB_1495a111c:
          uVar8 = (int)local_d8;
          iVar7 = (int)local_e8;
        }
        else {
          cVar6 = FUN_14959f8fa(pcVar19);
          local_91[0] = 'A';
          if ('A' < cVar6) {
            local_91[0] = cVar6;
          }
          local_c8 = piVar11;
          if (piVar11 != (int *)0x0) {
            uVar13 = FUN_1495862ab(param_1,*(undefined8 *)(param_2 + 0x10));
            *(undefined8 *)(local_c8 + 8) = uVar13;
          }
          cVar6 = *(char *)((longlong)param_1 + 0x1f);
          if (cVar6 == '\0') {
            iVar28 = (int)param_1[7] + 1;
            local_c0 = (uint *)CONCAT44(local_c0._4_4_,iVar28);
LAB_1495a144c:
            iVar28 = iVar28 + 1;
            *(int *)(param_1 + 7) = iVar28;
          }
          else {
            bVar33 = cVar6 - 1;
            *(byte *)((longlong)param_1 + 0x1f) = bVar33;
            local_c0 = (uint *)CONCAT44(local_c0._4_4_,
                                        *(undefined4 *)
                                         ((longlong)param_1 + (ulonglong)bVar33 * 4 + 0xcc));
            if (bVar33 == 0) {
              iVar28 = (int)param_1[7];
              goto LAB_1495a144c;
            }
            *(byte *)((longlong)param_1 + 0x1f) = cVar6 - 2U;
            iVar28 = *(int *)((longlong)param_1 + (ulonglong)(byte)(cVar6 - 2U) * 4 + 0xcc);
          }
          local_b4 = iVar28;
          if (0 < *piVar3) {
            plVar14 = (longlong *)(piVar3 + 2);
            iVar7 = *piVar3 + 1;
            do {
              lVar20 = *plVar14;
              local_a8 = CONCAT44(local_a8._4_4_,iVar7);
              if ((int)local_e8 == 0) {
LAB_1495a147d:
                local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffff00000000);
              }
              else {
                local_6c = 1;
                local_88 = FUN_14959f99d;
                local_80 = &LAB_14959fa8c;
                local_68 = 0;
                if ((lVar20 != 0) && (FUN_14959fa98(local_91 + 1,lVar20), local_6c == 0)) {
                  if (*(char *)(*plVar10 + 0x61) == '\0') {
                    local_a0 = plVar10[0x11];
                    lVar12 = (longlong)(int)local_e8;
                    local_e8 = (longlong *)(lVar12 * 3);
                    FUN_149569985(*plVar10,(int)*(char *)(local_a0 + 1 + lVar12 * 0x18),
                                  *(undefined8 *)(local_a0 + 0x10 + lVar12 * 0x18));
                    *(undefined8 *)(local_a0 + 0x10 + (longlong)local_e8 * 8) = 0;
                    *(undefined2 *)(local_a0 + (longlong)local_e8 * 8) = 0xad;
                  }
                  *(byte *)(param_2 + 7) = *(byte *)(param_2 + 7) & 0xfd;
                  goto LAB_1495a147d;
                }
              }
              puVar31 = local_c0;
              uVar8 = (int)local_c0;
              FUN_14959afe0(param_1,lVar20,(ulonglong)local_c0 & 0xffffffff);
              iVar28 = local_b4;
              local_f8._0_4_ = local_b4;
              uVar9 = FUN_149584f48(plVar10,0x5b,(ulonglong)puVar31 & 0xffffffff,1);
              FUN_14955a5b6(plVar10,uVar9,local_91,1);
              local_f8 = CONCAT44(local_f8._4_4_,uVar8);
              iVar7 = FUN_149584f48(plVar10,0x83,uVar21 & 0xffffffff,iVar28);
              if (*(char *)(*plVar10 + 0x61) == '\0') {
                lVar20 = plVar10[0x11];
                *(undefined1 *)(lVar20 + 1 + (longlong)iVar7 * 0x18) = 0xfd;
                *(undefined4 *)(lVar20 + 0x10 + (longlong)iVar7 * 0x18) = 1;
              }
              plVar14 = plVar14 + 4;
              iVar7 = (int)local_a8 + -1;
            } while (1 < iVar7);
          }
          if ((int)local_c0 != 0) {
            bVar33 = *(byte *)((longlong)param_1 + 0x1f);
            if ((ulonglong)bVar33 < 8) {
              *(byte *)((longlong)param_1 + 0x1f) = bVar33 + 1;
              *(int *)((longlong)param_1 + (ulonglong)bVar33 * 4 + 0xcc) = (int)local_c0;
            }
          }
          piVar11 = local_c8;
          uVar8 = (int)local_d8;
          iVar7 = (int)local_e8;
          if (iVar28 != 0) {
            bVar33 = *(byte *)((longlong)param_1 + 0x1f);
            if ((ulonglong)bVar33 < 8) {
              *(byte *)((longlong)param_1 + 0x1f) = bVar33 + 1;
              *(int *)((longlong)param_1 + (ulonglong)bVar33 * 4 + 0xcc) = local_b4;
            }
          }
        }
LAB_1495a112a:
        if (piVar11 != (int *)0x0) {
          FUN_14955a5b6(plVar10,local_b0 & 0xffffffff,piVar11,&DAT_fffffff7);
        }
        plVar14 = local_e0;
        iVar28 = (int)local_d0;
        if (iVar7 != 0) {
          puVar30 = &DAT_14cc1ee40;
          puVar17 = &DAT_14cc1ee40;
          if (*(char *)(*plVar10 + 0x61) == '\0') {
            iVar28 = (int)plVar10[0x12] + -1;
            if (-1 < iVar7) {
              iVar28 = iVar7;
            }
            puVar17 = (undefined1 *)((longlong)iVar28 * 0x18 + plVar10[0x11]);
          }
          *(int *)(puVar17 + 8) = (int)plVar10[0x12];
          local_f8 = local_f8 & 0xffffffff00000000;
          FUN_149584f48(plVar10,0x41,*(undefined4 *)(param_2 + 0x44),0);
          iVar7 = (int)plVar10[0x12] + -1;
          if (*(char *)(*plVar10 + 0x61) == '\0') {
            iVar28 = *(int *)(param_2 + 0x40) + -1;
            if (*(int *)(param_2 + 0x40) < 1) {
              iVar28 = iVar7;
            }
            puVar30 = (undefined1 *)((longlong)iVar28 * 0x18 + plVar10[0x11]);
          }
          *(int *)(puVar30 + 4) = iVar7;
          *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
          *(undefined4 *)(param_1 + 5) = 0;
          plVar14 = local_e0;
          goto LAB_1495a1272;
        }
      }
      else {
        local_c0 = *(uint **)(piVar3 + 8);
        pcVar26 = "";
        if ((int)local_e8 == 0) {
          pcVar26 = "CORRELATED ";
        }
        local_f8 = CONCAT44(local_f8._4_4_,piVar3[4]);
        local_c8 = piVar11;
        FUN_1495a08a0(param_1,1,"%sLIST SUBQUERY %d",pcVar26);
        if (*local_c0 != uVar15) {
          piVar11 = local_c8;
          uVar8 = (int)local_d8;
          iVar7 = (int)local_e8;
          goto LAB_1495a112a;
        }
        local_91[1] = 0xb;
        local_88 = (code *)0x0;
        local_8c = uVar23;
        local_80 = (undefined1 *)FUN_1495a09f2(param_1,param_2);
        piVar3[2] = 0;
        iVar7 = FUN_14958cf93(param_1,piVar3);
        if (iVar7 == 0) {
          if (local_80 != (undefined1 *)0x0) {
            FUN_14955d65a(*param_1);
          }
          piVar11 = local_c8;
          if (0 < (int)uVar15) {
            puVar24 = local_c0 + 2;
            local_c0 = (uint *)(ulonglong)uVar15;
            puVar31 = (uint *)0x0;
            do {
              uVar13 = FUN_14959f8a5(pcVar19,(ulonglong)puVar31 & 0xffffffff);
              uVar13 = FUN_149586264(param_1,uVar13,*(undefined8 *)puVar24);
              *(undefined8 *)(local_c8 + (longlong)puVar31 * 2 + 8) = uVar13;
              puVar31 = (uint *)((longlong)puVar31 + 1);
              puVar24 = puVar24 + 8;
              piVar11 = local_c8;
            } while (local_c0 != puVar31);
          }
          goto LAB_1495a111c;
        }
        if (local_80 != (undefined1 *)0x0) {
          FUN_14955d65a(*param_1);
        }
        uVar8 = (int)local_d8;
        plVar14 = local_e0;
        iVar28 = (int)local_d0;
        if ((local_c8 != (int *)0x0) && (*local_c8 = *local_c8 + -1, *local_c8 == 0)) {
          FUN_14955d65a(*(undefined8 *)(local_c8 + 4),local_c8);
          plVar14 = local_e0;
          iVar28 = (int)local_d0;
        }
      }
    }
    if (iVar28 != 0) {
      FUN_1495a1b4d(plVar14,uVar21 & 0xffffffff);
    }
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar8;
    iVar7 = 2;
  }
LAB_1495a0c47:
  auVar4 = _DAT_149931e80;
  if ((param_5 == 0) || (0xfffffffd < iVar7 - 5U)) goto LAB_1495a0d68;
  pcVar19 = *(char **)(param_2 + 0x10);
  cVar6 = *pcVar19;
  if (cVar6 == -0x53) {
    cVar6 = pcVar19[2];
  }
  if (cVar6 == -0x52) {
LAB_1495a0c8e:
    uVar15 = **(uint **)(pcVar19 + 0x20);
    if ((int)uVar15 < 1) goto LAB_1495a0d68;
  }
  else {
    uVar15 = 1;
    if (cVar6 == -0x78) {
      pcVar19 = *(char **)(pcVar19 + 0x20);
      goto LAB_1495a0c8e;
    }
  }
  lVar20 = (ulonglong)uVar15 - 1;
  auVar35._8_4_ = (int)lVar20;
  auVar35._0_8_ = lVar20;
  auVar35._12_4_ = (int)((ulonglong)lVar20 >> 0x20);
  auVar36 = pmovsxbq(in_XMM1,0x302);
  auVar37 = pmovsxbq(in_XMM2,0x100);
  uVar21 = 0;
  auVar35 = auVar35 ^ _DAT_149931e80;
  auVar38 = pmovsxbq(in_XMM5,0x404);
  do {
    auVar39 = auVar37 ^ auVar4;
    lVar20 = auVar35._0_8_;
    lVar12 = auVar35._8_8_;
    iVar28 = (int)uVar21;
    if ((bool)(~(lVar20 < auVar39._0_8_) & 1)) {
      *(int *)(param_5 + uVar21 * 4) = iVar28;
    }
    if (auVar39._8_8_ <= lVar12) {
      *(int *)(param_5 + 4 + uVar21 * 4) = iVar28 + 1;
    }
    auVar39 = auVar36 ^ auVar4;
    if (auVar39._0_8_ <= lVar20) {
      *(int *)(param_5 + 8 + uVar21 * 4) = iVar28 + 2;
    }
    if (auVar39._8_8_ <= lVar12) {
      *(int *)(param_5 + 0xc + uVar21 * 4) = iVar28 + 3;
    }
    uVar21 = uVar21 + 4;
    lVar20 = auVar37._8_8_;
    auVar37._0_8_ = auVar37._0_8_ + auVar38._0_8_;
    auVar37._8_8_ = lVar20 + auVar38._8_8_;
    lVar20 = auVar36._8_8_;
    auVar36._0_8_ = auVar36._0_8_ + auVar38._0_8_;
    auVar36._8_8_ = lVar20 + auVar38._8_8_;
  } while ((uVar15 + 3 & 0xfffffffc) != uVar21);
LAB_1495a0d68:
  *param_6 = uVar23;
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
LAB_1495a1874:
  uVar29 = uVar29 + 1;
  if (uVar29 == local_d8) goto LAB_1495a18ae;
  goto LAB_1495a1837;
}



// FUNCTION 1495a1a8a FUN_1495a1a8a body=129 status=ok
// SIG undefined FUN_1495a1a8a(void)

bool FUN_1495a1a8a(byte *param_1)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  
  for (; bVar2 = *param_1, bVar2 - 0xaa < 2; param_1 = *(byte **)(param_1 + 0x10)) {
  }
  if (bVar2 == 0xad) {
    bVar2 = param_1[2];
  }
  if ((bVar2 - 0x96 < 3) || (bVar2 == 0x73)) {
    return false;
  }
  if (bVar2 == 0xa4) {
    bVar3 = true;
    if (((param_1[6] & 0x10) == 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
      if ((longlong)*(short *)(param_1 + 0x30) < 0) {
        return false;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8);
      bVar3 = false;
      if (lVar1 != 0) {
        return *(char *)(lVar1 + 0x18 + (longlong)*(short *)(param_1 + 0x30) * 0x20) == '\0';
      }
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}



// FUNCTION 1495a1b0b FUN_1495a1b0b body=66 status=ok
// SIG undefined FUN_1495a1b0b(void)

void FUN_1495a1b0b(longlong param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 5) & 8) == 0) {
    FUN_14955a364(param_1,"row value misused");
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    FUN_14955a364(param_1,"sub-select returns %d columns - expected %d",
                  **(undefined4 **)(*(longlong *)(param_2 + 0x20) + 0x20),1);
  }
  return;
}



// FUNCTION 1495a1b4d FUN_1495a1b4d body=178 status=ok
// SIG undefined FUN_1495a1b4d(void)

void FUN_1495a1b4d(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FUN_149584f48(param_1,0x45,0,param_3,0);
  iVar1 = FUN_149584f48(param_1,0x25,param_2,0,0);
  FUN_149584f48(param_1,0x59,param_2,0,param_3);
  iVar2 = (int)param_1[0x12];
  if (0 < (longlong)iVar2) {
    *(undefined2 *)(param_1[0x11] + -0x16 + (longlong)iVar2 * 0x18) = 0x80;
    iVar2 = (int)param_1[0x12];
  }
  if (*(char *)(*param_1 + 0x61) == '\0') {
    iVar3 = iVar2 + -1;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    puVar4 = (undefined1 *)((longlong)iVar3 * 0x18 + param_1[0x11]);
  }
  else {
    puVar4 = &DAT_14cc1ee40;
  }
  *(int *)(puVar4 + 8) = iVar2;
  return;
}



// FUNCTION 1495a1bff FUN_1495a1bff body=138 status=ok
// SIG undefined FUN_1495a1bff(void)

void FUN_1495a1bff(undefined8 *param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 10 - (longlong)*(int *)((longlong)param_1 + 0x44);
  uVar1 = *param_1;
  lVar2 = param_1[10];
  lVar3 = FUN_14955d6fd(uVar1,lVar2,lVar4 * 4);
  if ((lVar2 == 0) || (lVar3 != 0)) {
    param_1[10] = lVar3;
    if (lVar3 != 0) {
      *(int *)(param_1 + 9) = (int)lVar4;
      *(undefined4 *)(lVar3 + (longlong)param_3 * 4) = *(undefined4 *)(param_2 + 0x90);
      return;
    }
  }
  else {
    FUN_14955d65a(uVar1,lVar2);
    param_1[10] = 0;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 1495a1c89 FUN_1495a1c89 body=758 status=ok
// SIG undefined FUN_1495a1c89(void)

char * FUN_1495a1c89(undefined8 param_1,char *param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
  char *_Dst;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1;
  if (param_4 == (undefined8 *)0x0) {
    iVar3 = FUN_1495a1f80(param_2,param_3);
    _Dst = (char *)FUN_14955d750(param_1,(longlong)iVar3);
    uVar9 = 0;
  }
  else {
    _Dst = (char *)*param_4;
    uVar9 = 0x8000000;
  }
  if (_Dst != (char *)0x0) {
    uVar8 = 0x48;
    if ((((param_3 != 0) && (*param_2 != -0x51)) && ((param_2[7] & 1U) == 0)) &&
       (uVar8 = 0x202c, *(longlong *)(param_2 + 0x10) == 0)) {
      uVar8 = 0x202c;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        uVar8 = 0x4010;
      }
    }
    uVar1 = *(uint *)(param_2 + 4);
    uVar10 = 0;
    local_58 = param_4;
    if (((uVar1 >> 10 & 1) == 0) && (uVar10 = 0, *(char **)(param_2 + 8) != (char *)0x0)) {
      sVar4 = strlen(*(char **)(param_2 + 8));
      uVar10 = ((uint)sVar4 & 0x3fffffff) + 1;
    }
    if (param_3 == 0) {
      uVar7 = 0x2c;
      if ((uVar1 >> 0xd & 1) == 0) {
        uVar7 = 0x48;
      }
      sVar4 = 0x10;
      if ((uVar1 >> 0xe & 1) == 0) {
        sVar4 = (size_t)uVar7;
      }
      memcpy(_Dst,param_2,sVar4);
      if ((uint)sVar4 < 0x48) {
        memset(_Dst + sVar4,0,0x48 - sVar4);
      }
    }
    else {
      memcpy(_Dst,param_2,(ulonglong)(uVar8 & 0x7c));
    }
    uVar9 = uVar8 & 0x6000 | uVar9 | *(uint *)(_Dst + 4) & 0xf7fe9fff;
    *(uint *)(_Dst + 4) = uVar9;
    if (uVar10 != 0) {
      *(char **)(_Dst + 8) = _Dst + (uVar8 & 0x7c);
      memcpy(_Dst + (uVar8 & 0x7c),*(void **)(param_2 + 8),(ulonglong)uVar10);
      uVar9 = *(uint *)(_Dst + 4);
    }
    if (((*(uint *)(param_2 + 4) | uVar9) & 0x804000) == 0) {
      if ((*(uint *)(param_2 + 4) >> 0xb & 1) == 0) {
        uVar5 = FUN_1495a22be(local_60,*(undefined8 *)(param_2 + 0x20),param_3);
      }
      else {
        uVar5 = FUN_1495a1fd1(local_60,*(undefined8 *)(param_2 + 0x20),param_3);
      }
      *(undefined8 *)(_Dst + 0x20) = uVar5;
      uVar9 = *(uint *)(_Dst + 4);
    }
    if ((uVar9 & 0x1006000) == 0) {
      if ((*(ushort *)(param_2 + 5) & 0x8040) == 0) {
        lVar6 = *(longlong *)(param_2 + 0x10);
        if (*_Dst != -0x51) {
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = FUN_1495a1c89(local_60,lVar6,0,0);
          }
        }
        *(longlong *)(_Dst + 0x10) = lVar6;
        if (*(longlong *)(param_2 + 0x18) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_1495a1c89(local_60,*(longlong *)(param_2 + 0x18),0,0);
        }
        *(undefined8 *)(_Dst + 0x18) = uVar5;
      }
    }
    else {
      iVar3 = FUN_1495a2418(param_2,param_3);
      puVar2 = local_58;
      local_50 = _Dst + iVar3;
      if ((uVar9 & 0x804000) == 0) {
        if (*(longlong *)(param_2 + 0x10) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_1495a1c89(local_60,*(longlong *)(param_2 + 0x10),1,&local_50);
        }
        *(undefined8 *)(_Dst + 0x10) = uVar5;
        if (*(longlong *)(param_2 + 0x18) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_1495a1c89(local_60,*(longlong *)(param_2 + 0x18),1,&local_50);
        }
        *(undefined8 *)(_Dst + 0x18) = uVar5;
      }
      if ((param_2[7] & 1U) != 0) {
        uVar5 = FUN_1495a247a(local_60,_Dst,*(undefined8 *)(param_2 + 0x40));
        *(undefined8 *)(_Dst + 0x40) = uVar5;
      }
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = local_50;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a1f80 FUN_1495a1f80 body=81 status=ok
// SIG undefined FUN_1495a1f80(void)

int FUN_1495a1f80(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = FUN_1495a2418(param_1,param_2);
      if ((param_2 & 1) == 0) {
        return iVar1;
      }
      iVar2 = FUN_1495a1f80(*(undefined8 *)(param_1 + 0x10),param_2);
      param_1 = *(longlong *)(param_1 + 0x18);
      iVar3 = iVar3 + iVar1 + iVar2;
    } while (param_1 != 0);
  }
  return iVar3;
}



// FUNCTION 1495a1fd1 FUN_1495a1fd1 body=748 status=ok
// SIG undefined FUN_1495a1fd1(void)

undefined8 FUN_1495a1fd1(longlong param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int *_Dst;
  longlong lVar7;
  ulonglong _Size;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  code *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  if (param_2 == (undefined1 *)0x0) {
    local_88 = 0;
  }
  else {
    puVar8 = &local_88;
    puVar9 = (undefined1 *)0x0;
    do {
      puVar3 = (undefined1 *)FUN_14955d750(param_1,0x80);
      if (puVar3 == (undefined1 *)0x0) break;
      uVar4 = FUN_1495a22be(param_1,*(undefined8 *)(param_2 + 0x20),param_3);
      *(undefined8 *)(puVar3 + 0x20) = uVar4;
      uVar4 = FUN_1495a25b6(param_1,*(undefined8 *)(param_2 + 0x28),param_3);
      *(undefined8 *)(puVar3 + 0x28) = uVar4;
      if (*(longlong *)(param_2 + 0x30) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1495a1c89(param_1,*(longlong *)(param_2 + 0x30),param_3,0);
      }
      *(undefined8 *)(puVar3 + 0x30) = uVar4;
      uVar4 = FUN_1495a22be(param_1,*(undefined8 *)(param_2 + 0x38),param_3);
      *(undefined8 *)(puVar3 + 0x38) = uVar4;
      if (*(longlong *)(param_2 + 0x40) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1495a1c89(param_1,*(longlong *)(param_2 + 0x40),param_3,0);
      }
      *(undefined8 *)(puVar3 + 0x40) = uVar4;
      uVar4 = FUN_1495a22be(param_1,*(undefined8 *)(param_2 + 0x48),param_3);
      *(undefined8 *)(puVar3 + 0x48) = uVar4;
      *puVar3 = *param_2;
      *(undefined1 **)(puVar3 + 0x58) = puVar9;
      *(undefined8 *)(puVar3 + 0x50) = 0;
      if (*(longlong *)(param_2 + 0x60) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1495a1c89(param_1,*(longlong *)(param_2 + 0x60),param_3,0);
      }
      *(undefined8 *)(puVar3 + 0x60) = uVar4;
      *(undefined8 *)(puVar3 + 8) = 0;
      *(uint *)(puVar3 + 4) = *(uint *)(param_2 + 4) & 0xffffffdf;
      *(undefined8 *)(puVar3 + 0x14) = 0xffffffffffffffff;
      *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(param_2 + 2);
      piVar2 = *(int **)(param_2 + 0x68);
      if (piVar2 == (int *)0x0) {
        _Dst = (int *)0x0;
      }
      else {
        _Size = (longlong)*piVar2 << 5 | 0x10;
        if (param_1 == 0) {
          _Dst = (int *)FUN_145e3bd67(_Size);
        }
        else {
          _Dst = (int *)FUN_14955d750(param_1);
        }
        if (_Dst == (int *)0x0) {
          _Dst = (int *)0x0;
        }
        else {
          memset(_Dst,0,_Size);
          iVar1 = *piVar2;
          *_Dst = iVar1;
          if (0 < iVar1) {
            lVar5 = 0x20;
            lVar7 = 0;
            do {
              local_80 = lVar7;
              uVar4 = FUN_1495a1fd1(param_1,*(undefined8 *)((longlong)piVar2 + lVar5),0);
              *(undefined8 *)((longlong)_Dst + lVar5) = uVar4;
              uVar4 = FUN_1495a22be(param_1,*(undefined8 *)((longlong)piVar2 + lVar5 + -8));
              *(undefined8 *)((longlong)_Dst + lVar5 + -8) = uVar4;
              uVar4 = FUN_149559683(param_1,*(undefined8 *)((longlong)piVar2 + lVar5 + -0x10));
              *(undefined8 *)((longlong)_Dst + lVar5 + -0x10) = uVar4;
              lVar7 = local_80 + 1;
              lVar5 = lVar5 + 0x20;
            } while (lVar7 < *piVar2);
          }
        }
      }
      *(int **)(puVar3 + 0x68) = _Dst;
      *(undefined8 *)(puVar3 + 0x70) = 0;
      lVar7 = *(longlong *)(param_2 + 0x78);
      local_78 = 0;
      if (lVar7 != 0) {
        plVar6 = &local_78;
        do {
          lVar5 = FUN_1495a247a(param_1,0,lVar7);
          *plVar6 = lVar5;
          if (lVar5 == 0) break;
          plVar6 = (longlong *)(lVar5 + 0x40);
          lVar7 = *(longlong *)(lVar7 + 0x40);
        } while (lVar7 != 0);
      }
      *(longlong *)(puVar3 + 0x78) = local_78;
      if ((*(longlong *)(param_2 + 0x70) != 0) && (*(char *)(param_1 + 0x61) == '\0')) {
        local_70 = FUN_1495a27f6;
        local_68 = &LAB_1495a281b;
        local_60 = 0;
        local_78 = 0;
        local_50 = puVar3;
        FUN_14959fb62(&local_78,puVar3);
      }
      *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *puVar8 = puVar3;
      puVar8 = (undefined8 *)(puVar3 + 0x50);
      param_2 = *(undefined1 **)(param_2 + 0x50);
      puVar9 = puVar3;
    } while (param_2 != (undefined1 *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_88;
}



// FUNCTION 1495a22be FUN_1495a22be body=346 status=ok
// SIG undefined FUN_1495a22be(void)

int * FUN_1495a22be(longlong param_1,int *param_2,undefined4 param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  if ((param_1 != 0) && (param_2 < *(int **)(param_1 + 0x1c8))) {
    uVar2 = 0x80;
    if (*(int **)(param_1 + 0x1b8) <= param_2) goto LAB_1495a2325;
    if (*(int **)(param_1 + 0x1c0) <= param_2) {
      uVar2 = (uint)*(ushort *)(param_1 + 0x17e);
      goto LAB_1495a2325;
    }
  }
  uVar2 = (*DAT_14c765d30)(param_2);
LAB_1495a2325:
  piVar5 = (int *)FUN_14955d750(param_1,(longlong)(int)uVar2);
  if (piVar5 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar8 = *param_2;
  *piVar5 = iVar8;
  if (0 < iVar8) {
    uVar10 = 0;
    lVar9 = 0x20;
    iVar8 = 0;
    do {
      pcVar1 = *(char **)((longlong)param_2 + lVar9 + -0x18);
      if (pcVar1 == (char *)0x0) {
        *(undefined8 *)((longlong)piVar5 + lVar9 + -0x18) = 0;
      }
      else {
        lVar7 = FUN_1495a1c89(param_1,pcVar1,param_3,0);
        *(longlong *)((longlong)piVar5 + lVar9 + -0x18) = lVar7;
        if (lVar7 != 0 && *pcVar1 == -0x51) {
          if (*(short *)(lVar7 + 0x30) == 0) {
            uVar10 = *(undefined8 *)(lVar7 + 0x18);
          }
          *(undefined8 *)(lVar7 + 0x10) = uVar10;
        }
      }
      uVar6 = FUN_149559683(param_1,*(undefined8 *)((longlong)param_2 + lVar9 + -0x10));
      *(undefined8 *)((longlong)piVar5 + lVar9 + -0x10) = uVar6;
      *(undefined1 *)((longlong)piVar5 + lVar9 + -8) =
           *(undefined1 *)((longlong)param_2 + lVar9 + -8);
      uVar3 = *(uint *)((longlong)param_2 + lVar9 + -4) & 3;
      uVar2 = *(uint *)((longlong)piVar5 + lVar9 + -4);
      *(uint *)((longlong)piVar5 + lVar9 + -4) = uVar2 & 0xfffffff8 | uVar3;
      uVar4 = *(uint *)((longlong)param_2 + lVar9 + -4) & 0x20;
      *(uint *)((longlong)piVar5 + lVar9 + -4) = uVar2 & 0xffffffd8 | uVar3 | uVar4;
      *(uint *)((longlong)piVar5 + lVar9 + -4) =
           uVar2 & 0xffffffc8 | uVar3 | uVar4 | *(uint *)((longlong)param_2 + lVar9 + -4) & 0x10;
      *(undefined4 *)((longlong)piVar5 + lVar9) = *(undefined4 *)((longlong)param_2 + lVar9);
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while (iVar8 < *param_2);
    return piVar5;
  }
  return piVar5;
}



// FUNCTION 1495a2418 FUN_1495a2418 body=98 status=ok
// SIG undefined FUN_1495a2418(void)

uint FUN_1495a2418(char *param_1,int param_2)

{
  size_t sVar1;
  int iVar2;
  
  iVar2 = 0x48;
  if ((((param_2 != 0) && (*param_1 != -0x51)) && ((param_1[7] & 1U) == 0)) &&
     (iVar2 = 0x2c, *(longlong *)(param_1 + 0x10) == 0)) {
    iVar2 = 0x2c;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      iVar2 = 0x10;
    }
  }
  if (((param_1[5] & 4U) == 0) && (*(char **)(param_1 + 8) != (char *)0x0)) {
    sVar1 = strlen(*(char **)(param_1 + 8));
    iVar2 = iVar2 + ((uint)sVar1 & 0x3fffffff) + 1;
  }
  return iVar2 + 7U & 0xfffffff8;
}



// FUNCTION 1495a247a FUN_1495a247a body=316 status=ok
// SIG undefined FUN_1495a247a(void)

undefined8 * FUN_1495a247a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 != (undefined8 *)0x0) {
    if (param_1 == 0) {
      _Dst = (undefined8 *)FUN_145e3bd67(0x90);
    }
    else {
      _Dst = (undefined8 *)FUN_14955d750(param_1);
    }
    if (_Dst != (undefined8 *)0x0) {
      uVar2 = 0;
      memset(_Dst,0,0x90);
      uVar1 = FUN_149559683(param_1,*param_3);
      *_Dst = uVar1;
      uVar1 = FUN_149559683(param_1,param_3[1]);
      _Dst[1] = uVar1;
      if (param_3[9] != 0) {
        uVar2 = FUN_1495a1c89(param_1,param_3[9],0,0);
      }
      _Dst[9] = uVar2;
      _Dst[10] = param_3[10];
      uVar2 = 0;
      uVar1 = FUN_1495a22be(param_1,param_3[2],0);
      _Dst[2] = uVar1;
      uVar1 = FUN_1495a22be(param_1,param_3[3],0);
      _Dst[3] = uVar1;
      *(undefined1 *)(_Dst + 4) = *(undefined1 *)(param_3 + 4);
      *(undefined1 *)((longlong)_Dst + 0x22) = *(undefined1 *)((longlong)param_3 + 0x22);
      *(undefined1 *)((longlong)_Dst + 0x21) = *(undefined1 *)((longlong)param_3 + 0x21);
      *(undefined1 *)((longlong)_Dst + 0x24) = *(undefined1 *)((longlong)param_3 + 0x24);
      *(undefined4 *)(_Dst + 0xc) = *(undefined4 *)(param_3 + 0xc);
      if (param_3[5] != 0) {
        uVar2 = FUN_1495a1c89(param_1,param_3[5],0,0);
      }
      _Dst[5] = uVar2;
      if (param_3[6] == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_1495a1c89(param_1,param_3[6],0,0);
      }
      _Dst[6] = uVar1;
      _Dst[0xe] = param_2;
      *(undefined1 *)((longlong)_Dst + 0x23) = *(undefined1 *)((longlong)param_3 + 0x23);
      return _Dst;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1495a25b6 FUN_1495a25b6 body=399 status=ok
// SIG undefined FUN_1495a25b6(void)

int * FUN_1495a25b6(undefined8 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 != (int *)0x0) {
    uVar3 = 0x78;
    if (0 < *param_2) {
      uVar3 = *param_2 * 0x70 | 8;
    }
    piVar4 = (int *)FUN_14955d750(param_1,(longlong)(int)uVar3);
    if (piVar4 != (int *)0x0) {
      iVar1 = *param_2;
      piVar4[1] = iVar1;
      *piVar4 = iVar1;
      if (*param_2 < 1) {
        return piVar4;
      }
      lVar8 = 0x70;
      lVar7 = 0;
      do {
        *(undefined8 *)((longlong)piVar4 + lVar8 + -0x68) =
             *(undefined8 *)((longlong)param_2 + lVar8 + -0x68);
        uVar5 = FUN_149559683(param_1,*(undefined8 *)((longlong)param_2 + lVar8 + -0x60));
        *(undefined8 *)((longlong)piVar4 + lVar8 + -0x60) = uVar5;
        uVar5 = FUN_149559683(param_1,*(undefined8 *)((longlong)param_2 + lVar8 + -0x58));
        *(undefined8 *)((longlong)piVar4 + lVar8 + -0x58) = uVar5;
        uVar5 = FUN_149559683(param_1,*(undefined8 *)((longlong)param_2 + lVar8 + -0x50));
        *(undefined8 *)((longlong)piVar4 + lVar8 + -0x50) = uVar5;
        uVar6 = *(ulonglong *)((longlong)param_2 + lVar8 + -0x2c);
        *(ulonglong *)((longlong)piVar4 + lVar8 + -0x2c) = uVar6;
        *(undefined4 *)((longlong)piVar4 + lVar8 + -0x24) =
             *(undefined4 *)((longlong)param_2 + lVar8 + -0x24);
        *(undefined4 *)((longlong)piVar4 + lVar8 + -0x38) =
             *(undefined4 *)((longlong)param_2 + lVar8 + -0x38);
        *(undefined4 *)((longlong)piVar4 + lVar8 + -0x34) =
             *(undefined4 *)((longlong)param_2 + lVar8 + -0x34);
        uVar6 = uVar6 >> 0x20;
        if ((uVar6 & 2) != 0) {
          uVar5 = FUN_149559683(param_1,*(undefined8 *)((longlong)param_2 + lVar8 + -8));
          *(undefined8 *)((longlong)piVar4 + lVar8 + -8) = uVar5;
          uVar6 = (ulonglong)*(uint *)((longlong)piVar4 + lVar8 + -0x28);
        }
        *(undefined8 *)((longlong)piVar4 + lVar8) = *(undefined8 *)((longlong)param_2 + lVar8);
        if ((uVar6 & 4) != 0) {
          uVar5 = FUN_1495a22be(param_1,*(undefined8 *)((longlong)param_2 + lVar8 + -8),param_3);
          *(undefined8 *)((longlong)piVar4 + lVar8 + -8) = uVar5;
        }
        lVar2 = *(longlong *)((longlong)param_2 + lVar8 + -0x48);
        *(longlong *)((longlong)piVar4 + lVar8 + -0x48) = lVar2;
        if (lVar2 != 0) {
          *(int *)(lVar2 + 0x3c) = *(int *)(lVar2 + 0x3c) + 1;
        }
        uVar5 = FUN_1495a1fd1(param_1,*(undefined8 *)((longlong)param_2 + lVar8 + -0x40),param_3);
        *(undefined8 *)((longlong)piVar4 + lVar8 + -0x40) = uVar5;
        lVar2 = *(longlong *)((longlong)param_2 + lVar8 + -0x20);
        if (lVar2 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_1495a1c89(param_1,lVar2,param_3,0);
        }
        *(undefined8 *)((longlong)piVar4 + lVar8 + -0x20) = uVar5;
        uVar5 = FUN_1495a2745(param_1,*(undefined8 *)((longlong)param_2 + lVar8 + -0x18));
        *(undefined8 *)((longlong)piVar4 + lVar8 + -0x18) = uVar5;
        *(undefined8 *)((longlong)piVar4 + lVar8 + -0x10) =
             *(undefined8 *)((longlong)param_2 + lVar8 + -0x10);
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x70;
      } while (lVar7 < *param_2);
      return piVar4;
    }
  }
  return (int *)0x0;
}



// FUNCTION 1495a2745 FUN_1495a2745 body=177 status=ok
// SIG undefined FUN_1495a2745(void)

longlong * FUN_1495a2745(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if ((param_2 != (longlong *)0x0) &&
     (plVar3 = (longlong *)FUN_14955d750(param_1,0x10), plVar3 != (longlong *)0x0)) {
    lVar4 = param_2[1];
    *(int *)(plVar3 + 1) = (int)lVar4;
    lVar4 = FUN_14955d750(param_1,(longlong)(int)lVar4 << 4);
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      if ((int)param_2[1] < 1) {
        return plVar3;
      }
      lVar4 = 8;
      lVar6 = 0;
      do {
        lVar1 = *plVar3;
        lVar2 = *param_2;
        uVar5 = FUN_149559683(param_1,*(undefined8 *)(lVar2 + -8 + lVar4));
        *(undefined8 *)(lVar1 + -8 + lVar4) = uVar5;
        *(undefined4 *)(lVar1 + lVar4) = *(undefined4 *)(lVar2 + lVar4);
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar6 < (int)param_2[1]);
      return plVar3;
    }
    FUN_14955d65a(param_1,plVar3);
  }
  return (longlong *)0x0;
}



// FUNCTION 1495a27f6 FUN_1495a27f6 body=37 status=ok
// SIG undefined FUN_1495a27f6(void)

undefined8 FUN_1495a27f6(longlong param_1,char *param_2)

{
  if ((*param_2 == -0x57) && ((param_2[7] & 1U) != 0)) {
    FUN_1495a2825(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x40));
  }
  return 0;
}



// FUNCTION 1495a2825 FUN_1495a2825 body=88 status=ok
// SIG undefined FUN_1495a2825(void)

void FUN_1495a2825(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    plVar3 = (longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar2 = 0;
    }
    else {
      iVar1 = FUN_1495a02e4(0,*(longlong *)(param_1 + 0x70),param_2,0);
      if (iVar1 != 0) {
        return;
      }
      lVar2 = *plVar3;
    }
    *(longlong *)(param_2 + 0x40) = lVar2;
    if (*plVar3 != 0) {
      *(longlong *)(*plVar3 + 0x38) = param_2 + 0x40;
    }
    *plVar3 = param_2;
    *(longlong **)(param_2 + 0x38) = plVar3;
  }
  return;
}



// FUNCTION 1495a287d FUN_1495a287d body=169 status=ok
// SIG undefined FUN_1495a287d(void)

void FUN_1495a287d(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  code *local_50;
  undefined1 *local_48;
  short local_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x23) == '\0') {
LAB_1495a28a4:
    FUN_14959afe0(param_1,param_2,param_3);
  }
  else {
    local_34 = 2;
    local_50 = FUN_14959f99d;
    local_48 = &LAB_14959fa8c;
    local_30 = 0;
    if (param_2 != 0) {
      FUN_14959fa98(local_58,param_2);
      if (local_34 == 0) goto LAB_1495a28a4;
    }
    FUN_14959d4d8(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a2927 FUN_1495a2927 body=144 status=ok
// SIG undefined FUN_1495a2927(void)

char * FUN_1495a2927(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  if ((byte)(cVar1 - 0x2bU) < 2) {
    pcVar2 = (char *)FUN_1495a2927(*(undefined8 *)(param_1 + 0x18));
    pcVar3 = (char *)FUN_1495a2927(*(undefined8 *)(param_1 + 0x10));
    if (((*(uint *)(pcVar3 + 4) & 0x10000001) == 0x10000000) ||
       ((*(uint *)(pcVar2 + 4) & 0x20000001) == 0x20000000)) {
      param_1 = pcVar3;
      if (cVar1 == ',') {
        param_1 = pcVar2;
      }
    }
    else if ((((*(uint *)(pcVar3 + 4) & 0x20000001) == 0x20000000) ||
             ((*(uint *)(pcVar2 + 4) & 0x10000001) == 0x10000000)) &&
            (param_1 = pcVar2, cVar1 == ',')) {
      param_1 = pcVar3;
    }
  }
  return param_1;
}



// FUNCTION 1495a29b7 FUN_1495a29b7 body=947 status=ok
// SIG undefined FUN_1495a29b7(void)

void FUN_1495a29b7(longlong param_1,byte *param_2,int param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  longlong lVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined4 local_60;
  int local_58;
  uint local_50;
  uint local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = *(longlong *)(param_1 + 0x10);
  local_3c = 0;
  local_40 = 0;
  if (param_2 == (byte *)0x0 || lVar9 == 0) goto LAB_1495a29f3;
  bVar11 = *param_2;
  if (0xa7 < bVar11) {
    if (bVar11 == 0xa8) goto switchD_1495a2a4a_caseD_2d;
    if (bVar11 == 0xac) {
      for (lVar9 = *(longlong *)(param_2 + 0x18); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x10)) {
        if ((*(byte *)(lVar9 + 5) & 0x10) == 0) goto LAB_1495a2d0b;
      }
      lVar9 = 0;
LAB_1495a2d0b:
      param_4 = (uint)(param_2[2] == 0xa8) << 4;
      pbVar7 = *(byte **)(param_2 + 0x10);
      if ((*(char *)(*(longlong *)(lVar9 + 8) + 4) != '\0') != (param_2[2] == 0xa8))
      goto LAB_1495a2bfc;
      goto LAB_1495a2c7d;
    }
    goto switchD_1495a2a4a_caseD_2e;
  }
  switch(bVar11) {
  case 0x2b:
  case 0x2c:
    pbVar7 = (byte *)FUN_1495a2927(param_2);
    if (pbVar7 == param_2) {
      if (bVar11 == 0x2c) {
        iVar12 = *(int *)(param_1 + 0x44);
        *(int *)(param_1 + 0x44) = iVar12 + -1;
        FUN_14959ec19(param_1,*(undefined8 *)(param_2 + 0x10),iVar12 + -1,param_4 ^ 0x10);
        FUN_1495a29b7(param_1,*(undefined8 *)(param_2 + 0x18),param_3,param_4);
        goto LAB_1495a2cc2;
      }
      FUN_1495a29b7(param_1,*(undefined8 *)(param_2 + 0x10),param_3,param_4);
      pbVar7 = *(byte **)(param_2 + 0x18);
    }
LAB_1495a2c7d:
    FUN_1495a29b7(param_1,pbVar7,param_3,param_4);
    break;
  case 0x2d:
switchD_1495a2a4a_caseD_2d:
    bVar11 = bVar11 == 0x2d | 0x34;
    param_4 = 0x80;
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    pcVar2 = *(char **)(param_2 + 0x10);
    cVar4 = *pcVar2;
    if (cVar4 == -0x53) {
      cVar4 = pcVar2[2];
    }
    pcVar8 = pcVar2;
    if (cVar4 == -0x52) {
LAB_1495a2a72:
      if (1 < **(int **)(pcVar8 + 0x20)) {
switchD_1495a2a4a_caseD_2e:
        if ((*(uint *)(param_2 + 4) & 0x10000001) == 0x10000000) {
          local_68 = 0;
          bVar11 = 0xb;
          uVar6 = 0;
        }
        else {
          if ((*(uint *)(param_2 + 4) & 0x20000001) == 0x20000000) break;
          uVar6 = FUN_14959d278(param_1,param_2,&local_3c);
          local_68 = (uint)(param_4 != 0);
          bVar11 = 0x12;
        }
LAB_1495a2bd8:
        FUN_149584f48(lVar9,bVar11,uVar6,param_3);
        break;
      }
    }
    else if (cVar4 == -0x78) {
      pcVar8 = *(char **)(pcVar2 + 0x20);
      goto LAB_1495a2a72;
    }
    uVar5 = FUN_14959d278(param_1,pcVar2,&local_3c);
    local_60 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x18),&local_40);
    local_48 = *(uint *)(param_2 + 4) >> 9 & 1;
    local_68 = uVar5;
    local_58 = param_3;
    local_50 = param_4;
    FUN_14959d3ba(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),bVar11);
    break;
  case 0x2e:
  case 0x2f:
    goto switchD_1495a2a4a_caseD_2e;
  case 0x30:
    local_68 = param_4;
    FUN_14959e955(param_1,param_2,param_3,FUN_1495a29b7);
    break;
  case 0x31:
    iVar12 = *(int *)(param_1 + 0x44);
    iVar1 = iVar12 + -1;
    *(int *)(param_1 + 0x44) = iVar1;
    iVar10 = param_3;
    if (param_4 == 0) {
      iVar10 = iVar1;
    }
    FUN_14959df59(param_1,param_2,iVar1,iVar10);
    local_68 = 0;
    FUN_149584f48(lVar9,0xb,0,param_3);
LAB_1495a2cc2:
    lVar3 = *(longlong *)(lVar9 + 0x18);
    if (*(int *)(lVar3 + 0x44) + *(int *)(lVar3 + 0x48) < 0) {
      FUN_1495a1bff(lVar3,lVar9,-iVar12);
    }
    else {
      *(undefined4 *)(*(longlong *)(lVar3 + 0x50) + (longlong)-iVar12 * 4) =
           *(undefined4 *)(lVar9 + 0x90);
    }
    break;
  case 0x32:
  case 0x33:
    uVar6 = FUN_14959d278(param_1,*(undefined8 *)(param_2 + 0x10),&local_3c);
    local_68 = 0;
    goto LAB_1495a2bd8;
  default:
    if (bVar11 != 0x13) goto switchD_1495a2a4a_caseD_2e;
    pbVar7 = *(byte **)(param_2 + 0x10);
LAB_1495a2bfc:
    FUN_14959ec19(param_1,pbVar7,param_3,param_4);
  }
  if (local_3c != 0) {
    bVar11 = *(byte *)(param_1 + 0x1f);
    if ((ulonglong)bVar11 < 8) {
      *(byte *)(param_1 + 0x1f) = bVar11 + 1;
      *(int *)(param_1 + 0xcc + (ulonglong)bVar11 * 4) = local_3c;
    }
  }
  if (local_40 != 0) {
    bVar11 = *(byte *)(param_1 + 0x1f);
    if ((ulonglong)bVar11 < 8) {
      *(byte *)(param_1 + 0x1f) = bVar11 + 1;
      *(int *)(param_1 + 0xcc + (ulonglong)bVar11 * 4) = local_40;
    }
  }
LAB_1495a29f3:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495a2d6b FUN_1495a2d6b body=139 status=ok
// SIG undefined FUN_1495a2d6b(void)

ulonglong FUN_1495a2d6b(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  uVar2 = 0;
  if (((*(char *)(lVar1 + 0xb5) == '\0') && (*(char *)((longlong)param_1 + 0x114) == '\0')) &&
     (*(code **)(lVar1 + 0x1d0) != (code *)0x0)) {
    lVar5 = param_1[0x2b];
    uVar2 = (**(code **)(lVar1 + 0x1d0))(*(undefined8 *)(lVar1 + 0x1d8));
    if ((int)uVar2 == 1) {
      uVar4 = 0x17;
      pcVar3 = "not authorized";
    }
    else {
      if ((uVar2 & 0xfffffffd) == 0) {
        return uVar2;
      }
      uVar4 = 1;
      pcVar3 = "authorizer malfunction";
    }
    FUN_14955a364(param_1,pcVar3,param_3,param_4,param_5,lVar5);
    *(undefined4 *)(param_1 + 3) = uVar4;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1495a2df6 FUN_1495a2df6 body=105 status=ok
// SIG undefined FUN_1495a2df6(void)

ulonglong FUN_1495a2df6(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  if (*(int *)(param_3 + 8) == 0) {
    uVar2 = (ulonglong)*(byte *)(lVar1 + 0xb4);
    *param_4 = param_2;
  }
  else {
    if (*(char *)(lVar1 + 0xb5) == '\0') {
      *param_4 = param_3;
      uVar2 = FUN_1495a3139(lVar1,param_2);
      if (-1 < (int)uVar2) {
        return uVar2;
      }
      FUN_14955a364(param_1,"unknown database %T",param_2);
    }
    else {
      FUN_14955a364(param_1,"corrupt database");
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 1495a2e5f FUN_1495a2e5f body=484 status=ok
// SIG undefined FUN_1495a2e5f(void)

undefined8 FUN_1495a2e5f(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  
  lVar6 = *param_1;
  uVar4 = (uint)*(undefined8 *)(lVar6 + 0x30);
  if ((uVar4 & 0x10000001) == 1) {
    return 0;
  }
  if ((*(byte *)(lVar6 + 0xb8) & 2) != 0) {
    return 0;
  }
  if (*(char *)(lVar6 + 0xb5) == '\0') {
    if (*(char *)((longlong)param_1 + 0x1e) == '\0') {
      lVar7 = 0;
      do {
        if ((ulonglong)*(byte *)(param_2 + lVar7) == 0) {
          cVar9 = (&DAT_14bd3ff30)[(byte)"sqlite_"[lVar7]];
          cVar8 = '\0';
LAB_1495a2fb3:
          if (cVar8 != cVar9) goto LAB_1495a2ef2;
          break;
        }
        cVar8 = (&DAT_14bd3ff30)[*(byte *)(param_2 + lVar7)];
        cVar9 = (&DAT_14bd3ff30)[(byte)"sqlite_"[lVar7]];
        if (cVar8 != cVar9) goto LAB_1495a2fb3;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 7);
    }
    else {
LAB_1495a2ef2:
      if ((uVar4 >> 0x1c & 1) == 0) {
        return 0;
      }
      if (*(longlong *)(lVar6 + 0x210) != 0) {
        return 0;
      }
      if (*(int *)(lVar6 + 0xd4) != 0) {
        return 0;
      }
      iVar5 = FUN_1495a3174(lVar6,param_2);
      if (iVar5 == 0) {
        return 0;
      }
    }
    FUN_14955a364(param_1,"object name reserved for internal use: %s",param_2);
    return 1;
  }
  plVar3 = *(longlong **)(lVar6 + 0xc0);
  lVar6 = *plVar3;
  if (param_3 == 0) {
    if (lVar6 == 0) {
LAB_1495a2f35:
      if (plVar3[1] != 0) {
        lVar6 = 0;
        do {
          bVar1 = *(byte *)(param_2 + lVar6);
          bVar2 = *(byte *)(plVar3[1] + lVar6);
          if (bVar1 == bVar2) {
            if ((ulonglong)bVar1 == 0) goto LAB_1495a2fd0;
          }
          else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) break;
          lVar6 = lVar6 + 1;
        } while( true );
      }
    }
  }
  else if (lVar6 != 0) {
    lVar7 = 0;
    do {
      bVar1 = *(byte *)(param_3 + lVar7);
      if (bVar1 == *(byte *)(lVar6 + lVar7)) {
        if ((ulonglong)bVar1 == 0) goto LAB_1495a2f35;
      }
      else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar6 + lVar7)]) break;
      lVar7 = lVar7 + 1;
    } while( true );
  }
  goto LAB_1495a3014;
LAB_1495a2fd0:
  lVar6 = plVar3[2];
  if (param_4 == 0) {
    bVar10 = lVar6 != 0;
  }
  else {
    bVar10 = true;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        bVar1 = *(byte *)(param_4 + lVar7);
        if (bVar1 == *(byte *)(lVar6 + lVar7)) {
          if ((ulonglong)bVar1 == 0) {
            return 0;
          }
        }
        else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar6 + lVar7)]) break;
        lVar7 = lVar7 + 1;
      } while( true );
    }
  }
  if (!bVar10) {
    return 0;
  }
LAB_1495a3014:
  if (DAT_14c765d01 != '\0') {
    FUN_14955a364(param_1,&DAT_149e02088);
    return 1;
  }
  return 0;
}



// FUNCTION 1495a3043 FUN_1495a3043 body=78 status=ok
// SIG undefined FUN_1495a3043(void)

void FUN_1495a3043(longlong param_1,byte param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    lVar2 = param_1;
  }
  uVar1 = 1 << ((byte)param_3 & 0x1f);
  if (((*(uint *)(lVar2 + 0x74) >> (param_3 & 0x1f) & 1) == 0) &&
     (*(uint *)(lVar2 + 0x74) = *(uint *)(lVar2 + 0x74) | uVar1, param_3 == 1)) {
    FUN_14955dea7(lVar2);
  }
  *(uint *)(lVar2 + 0x70) = *(uint *)(lVar2 + 0x70) | uVar1;
  *(byte *)(lVar2 + 0x20) = *(byte *)(lVar2 + 0x20) | param_2;
  return;
}



// FUNCTION 1495a3091 FUN_1495a3091 body=168 status=ok
// SIG undefined FUN_1495a3091(void)

void FUN_1495a3091(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  plVar3 = (longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    plVar3 = (longlong *)FUN_14955a44a(param_1);
  }
  uVar4 = 1;
  FUN_14959b139(param_1,param_2,1,1,"sqlite_master");
  iVar2 = FUN_149584f48(plVar3,0x61,0,1,CONCAT44(uVar4,param_2));
  if (*(char *)(*plVar3 + 0x61) == '\0') {
    lVar1 = plVar3[0x11];
    *(undefined1 *)(lVar1 + 1 + (longlong)iVar2 * 0x18) = 0xfd;
    *(undefined4 *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18) = 5;
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  }
  return;
}



// FUNCTION 1495a3139 FUN_1495a3139 body=59 status=ok
// SIG undefined FUN_1495a3139(void)

undefined4 FUN_1495a3139(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14958faeb();
  uVar1 = FUN_149555d2a(param_1,lVar2);
  if (lVar2 != 0) {
    FUN_14955d65a(param_1,lVar2);
  }
  return uVar1;
}



// FUNCTION 1495a3174 FUN_1495a3174 body=145 status=ok
// SIG undefined FUN_1495a3174(void)

undefined8 FUN_1495a3174(longlong param_1,char *param_2)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  pcVar2 = strrchr(param_2,0x5f);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
    lVar3 = FUN_14955d004(param_1,param_2,0);
    *pcVar2 = '_';
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x54) != 0)) {
      lVar3 = FUN_14958201d(param_1 + 0x1f8,**(undefined8 **)(lVar3 + 0x58),0);
      if ((*(undefined8 **)(lVar3 + 0x10) != (undefined8 *)0x0) &&
         ((piVar1 = (int *)**(undefined8 **)(lVar3 + 0x10), 2 < *piVar1 &&
          (UNRECOVERED_JUMPTABLE = *(code **)(piVar1 + 0x2e), UNRECOVERED_JUMPTABLE != (code *)0x0))
         )) {
                    /* WARNING: Could not recover jumptable at 0x0001495a3202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*UNRECOVERED_JUMPTABLE)(pcVar2 + 1);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 1495a3205 FUN_1495a3205 body=1302 status=ok
// SIG undefined FUN_1495a3205(void)

void FUN_1495a3205(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  size_t sVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  short *psVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_78;
  longlong local_68;
  ulonglong local_60;
  char *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *param_1;
  plVar4 = (longlong *)param_1[2];
  if ((*(byte *)(lVar3 + 0xb8) & 2) == 0) {
    sVar5 = *(short *)(param_2 + 0x46);
    if (0 < sVar5) {
      lVar12 = 0x1c;
      lVar14 = 0;
      do {
        if ((*(byte *)(*(longlong *)(param_2 + 8) + lVar12) & 1) != 0) {
          *(undefined1 *)(*(longlong *)(param_2 + 8) + -4 + lVar12) = 2;
          sVar5 = *(short *)(param_2 + 0x46);
        }
        lVar14 = lVar14 + 1;
        lVar12 = lVar12 + 0x20;
      } while (lVar14 < sVar5);
    }
    *(byte *)(param_2 + 0x41) = *(byte *)(param_2 + 0x41) | 8;
  }
  iVar6 = (int)param_1[0x17];
  if (iVar6 != 0) {
    if (iVar6 < 0) {
      iVar6 = (int)plVar4[0x12] + -1;
    }
    if (*(char *)(*plVar4 + 0x61) == '\0') {
      puVar9 = (undefined1 *)((longlong)iVar6 * 0x18 + plVar4[0x11]);
    }
    else {
      puVar9 = &DAT_14cc1ee40;
    }
    *(undefined4 *)(puVar9 + 0xc) = 2;
  }
  if ((longlong)*(short *)(param_2 + 0x44) < 0) {
    for (lVar12 = *(longlong *)(param_2 + 0x10); lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x28))
    {
      if ((*(uint *)(lVar12 + 100) & 3) == 2) goto LAB_1495a32d5;
    }
    lVar12 = 0;
LAB_1495a32d5:
    uVar16 = *(ushort *)(lVar12 + 0x5e);
    iVar6 = 1;
    if (1 < uVar16) {
      iVar6 = 1;
      uVar20 = 1;
      do {
        iVar7 = FUN_1495a3fbb(lVar12,iVar6,lVar12,uVar20 & 0xffffffff);
        if (iVar7 == 0) {
          lVar14 = (longlong)iVar6;
          *(undefined8 *)(*(longlong *)(lVar12 + 0x40) + lVar14 * 8) =
               *(undefined8 *)(*(longlong *)(lVar12 + 0x40) + uVar20 * 8);
          *(undefined1 *)(*(longlong *)(lVar12 + 0x38) + lVar14) =
               *(undefined1 *)(*(longlong *)(lVar12 + 0x38) + uVar20);
          iVar6 = iVar6 + 1;
          *(undefined2 *)(*(longlong *)(lVar12 + 8) + lVar14 * 2) =
               *(undefined2 *)(*(longlong *)(lVar12 + 8) + uVar20 * 2);
          uVar16 = *(ushort *)(lVar12 + 0x5e);
        }
        else {
          *(short *)(lVar12 + 0x60) = *(short *)(lVar12 + 0x60) + -1;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar16);
    }
    *(short *)(lVar12 + 0x5e) = (short)iVar6;
  }
  else {
    local_58 = *(char **)(*(longlong *)(param_2 + 8) + (longlong)*(short *)(param_2 + 0x44) * 0x20);
    local_50 = 0;
    if (local_58 != (char *)0x0) {
      sVar10 = strlen(local_58);
      local_50 = (uint)sVar10 & 0x3fffffff;
    }
    uVar11 = FUN_14958f7cb(lVar3,0x3b,&local_58,0);
    lVar12 = FUN_14958f62a(param_1,0,uVar11);
    if (lVar12 == 0) goto LAB_1495a34ee;
    if ((1 < *(byte *)((longlong)param_1 + 0x114)) &&
       (plVar13 = (longlong *)param_1[0x33], plVar13 != (longlong *)0x0)) {
      do {
        if (*plVar13 == param_2 + 0x44) {
          *plVar13 = *(longlong *)(lVar12 + 8);
          break;
        }
        plVar13 = (longlong *)plVar13[3];
      } while (plVar13 != (longlong *)0x0);
    }
    *(undefined1 *)(lVar12 + 0x18) = *(undefined1 *)((longlong)param_1 + 0x112);
    *(undefined2 *)(param_2 + 0x44) = 0xffff;
    local_80 = 0;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a0 = (uint)*(byte *)(param_2 + 0x4e);
    local_78 = 2;
    local_a8 = lVar12;
    FUN_14958b0ca(param_1,0,0,0);
    if ((*(char *)(lVar3 + 0x61) != '\0') || ((int)param_1[6] != 0)) goto LAB_1495a34ee;
    for (lVar12 = *(longlong *)(param_2 + 0x10); lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x28))
    {
      if ((*(uint *)(lVar12 + 100) & 3) == 2) goto LAB_1495a3346;
    }
    lVar12 = 0;
  }
LAB_1495a3346:
  uVar19 = *(uint *)(lVar12 + 100);
  *(uint *)(lVar12 + 100) = uVar19 | 0x20;
  if ((*(byte *)(lVar3 + 0xb8) & 2) == 0) {
    *(uint *)(lVar12 + 100) = uVar19 | 0x28;
  }
  uVar16 = *(ushort *)(lVar12 + 0x5e);
  uVar20 = (ulonglong)uVar16;
  *(ushort *)(lVar12 + 0x60) = uVar16;
  if ((plVar4 != (longlong *)0x0) && (0 < (longlong)*(int *)(lVar12 + 0x58))) {
    if (*(char *)(*plVar4 + 0x61) == '\0') {
      puVar9 = (undefined1 *)((longlong)*(int *)(lVar12 + 0x58) * 0x18 + plVar4[0x11]);
    }
    else {
      puVar9 = &DAT_14cc1ee40;
    }
    *puVar9 = 0xb;
  }
  *(undefined4 *)(lVar12 + 0x58) = *(undefined4 *)(param_2 + 0x38);
  lVar14 = *(longlong *)(param_2 + 0x10);
  local_68 = lVar3;
  if (lVar14 != 0) {
    local_60 = uVar20;
    do {
      if ((*(uint *)(lVar14 + 100) & 3) != 2) {
        uVar1 = *(ushort *)(lVar14 + 0x5e);
        if (uVar16 != 0) {
          iVar6 = 0;
          uVar19 = 0;
          do {
            uVar8 = FUN_1495a3fbb(lVar14,uVar1,lVar12,uVar19);
            iVar6 = iVar6 + (uVar8 ^ 1);
            uVar19 = uVar19 + 1;
          } while (uVar16 != uVar19);
          if (iVar6 != 0) {
            iVar6 = FUN_1495a4040(local_68,lVar14,iVar6 + (uint)uVar1);
            if (iVar6 == 0) {
              uVar19 = (uint)*(ushort *)(lVar14 + 0x5e);
              uVar15 = 0;
              do {
                iVar6 = FUN_1495a3fbb(lVar14,*(undefined2 *)(lVar14 + 0x5e),lVar12,
                                      uVar15 & 0xffffffff);
                if (iVar6 == 0) {
                  *(undefined2 *)(*(longlong *)(lVar14 + 8) + (longlong)(int)uVar19 * 2) =
                       *(undefined2 *)(*(longlong *)(lVar12 + 8) + uVar15 * 2);
                  *(undefined8 *)(*(longlong *)(lVar14 + 0x40) + (longlong)(int)uVar19 * 8) =
                       *(undefined8 *)(*(longlong *)(lVar12 + 0x40) + uVar15 * 8);
                  if (*(char *)(*(longlong *)(lVar12 + 0x38) + uVar15) != '\0') {
                    *(byte *)(lVar14 + 0x65) = *(byte *)(lVar14 + 0x65) | 2;
                  }
                  uVar19 = uVar19 + 1;
                }
                uVar15 = uVar15 + 1;
              } while (local_60 != uVar15);
              goto LAB_1495a33f7;
            }
            goto LAB_1495a34ee;
          }
        }
        *(ushort *)(lVar14 + 0x60) = uVar1;
      }
LAB_1495a33f7:
      lVar14 = *(longlong *)(lVar14 + 0x28);
    } while (lVar14 != 0);
  }
  iVar6 = 0;
  uVar19 = (uint)uVar16;
  if (0 < (longlong)*(short *)(param_2 + 0x46)) {
    uVar15 = 0;
    iVar6 = 0;
    psVar18 = *(short **)(lVar12 + 8);
    uVar8 = uVar19;
LAB_1495a349c:
    do {
      if ((int)uVar8 < 1) {
        iVar6 = iVar6 + (uint)((*(byte *)(*(longlong *)(param_2 + 8) + 0x1c + uVar15 * 0x20) & 0x20)
                              == 0);
      }
      else {
        sVar5 = *psVar18;
        psVar18 = psVar18 + 1;
        uVar8 = uVar8 - 1;
        if (uVar15 != (uint)(int)sVar5) goto LAB_1495a349c;
      }
      uVar15 = uVar15 + 1;
      psVar18 = *(short **)(lVar12 + 8);
      uVar8 = uVar19;
    } while (uVar15 != (longlong)*(short *)(param_2 + 0x46));
  }
  iVar6 = FUN_1495a4040(local_68,lVar12,iVar6 + uVar19);
  if (iVar6 == 0) {
    sVar5 = *(short *)(param_2 + 0x46);
    if (0 < sVar5) {
      uVar15 = 0;
      do {
        iVar6 = (int)uVar20;
        uVar17 = uVar20;
        psVar18 = *(short **)(lVar12 + 8);
        do {
          if ((int)uVar17 < 1) {
            if ((*(byte *)(*(longlong *)(param_2 + 8) + 0x1c + uVar15 * 0x20) & 0x20) == 0) {
              (*(short **)(lVar12 + 8))[iVar6] = (short)uVar15;
              *(char **)(*(longlong *)(lVar12 + 0x40) + (longlong)iVar6 * 8) = "BINARY";
              uVar20 = (ulonglong)(iVar6 + 1);
              sVar5 = *(short *)(param_2 + 0x46);
            }
            break;
          }
          uVar17 = (ulonglong)((int)uVar17 - 1);
          sVar2 = *psVar18;
          psVar18 = psVar18 + 1;
        } while (uVar15 != (uint)(int)sVar2);
        uVar15 = uVar15 + 1;
      } while ((longlong)uVar15 < (longlong)sVar5);
    }
    if ((ulonglong)*(ushort *)(lVar12 + 0x60) == 0) {
      uVar20 = 0xffffffffffffffff;
    }
    else {
      uVar15 = (ulonglong)*(ushort *)(lVar12 + 0x60) + 1;
      uVar20 = 0;
      do {
        uVar16 = *(ushort *)(*(longlong *)(lVar12 + 8) + -4 + uVar15 * 2);
        uVar17 = (ulonglong)(short)uVar16;
        if (((-1 < (longlong)uVar17) && (uVar16 < 0x3f)) &&
           ((*(ushort *)(*(longlong *)(*(longlong *)(lVar12 + 0x18) + 8) + 0x1c + uVar17 * 0x20) &
            0x20) == 0)) {
          uVar20 = uVar20 | 1L << (uVar17 & 0x3f);
        }
        uVar15 = uVar15 - 1;
      } while (1 < uVar15);
      uVar20 = ~uVar20;
    }
    *(ulonglong *)(lVar12 + 0x68) = uVar20;
  }
LAB_1495a34ee:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495a371c FUN_1495a371c body=306 status=ok
// SIG undefined FUN_1495a371c(void)

undefined8
FUN_1495a371c(longlong *param_1,undefined8 *param_2,uint param_3,undefined8 param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b0 = 0;
  local_c0 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_d8 = &local_a8;
  uStack_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_a8 = 1;
  uStack_90 = *param_2;
  uStack_60 = 0xffffffff00000000;
  uVar1 = param_3 | 0x40000;
  if (param_2[0xe] == *(longlong *)(*(longlong *)(*param_1 + 0x20) + 0x38)) {
    uVar1 = param_3;
  }
  uStack_b8 = (ulonglong)uVar1 | 0x10000;
  local_e0 = param_1;
  puStack_80 = param_2;
  iVar2 = FUN_1495a4109(&local_e0,param_4);
  uVar3 = 1;
  if (iVar2 == 0) {
    if (param_5 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      if (0 < *param_5) {
        piVar4 = param_5 + 2;
        lVar5 = 0;
        do {
          iVar2 = FUN_1495a4109(&local_e0,*(undefined8 *)piVar4);
          if (iVar2 != 0) {
            uVar3 = 2;
            break;
          }
          lVar5 = lVar5 + 1;
          piVar4 = piVar4 + 8;
          uVar3 = 0;
        } while (lVar5 < *param_5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1495a384f FUN_1495a384f body=205 status=ok
// SIG undefined FUN_1495a384f(void)

void FUN_1495a384f(longlong param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = 0;
  if ((ulonglong)*(ushort *)(param_1 + 0x60) == 0) {
LAB_1495a38cb:
    sVar1 = 0;
  }
  else {
    uVar5 = 0;
    do {
      lVar6 = (longlong)*(short *)(*(longlong *)(param_1 + 8) + uVar5 * 2);
      if (lVar6 < 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = (uint)*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 8) + 0x1a +
                               lVar6 * 0x20);
      }
      iVar2 = iVar2 + uVar3;
      uVar5 = uVar5 + 1;
    } while (*(ushort *)(param_1 + 0x60) != uVar5);
    uVar3 = iVar2 * 4;
    uVar5 = (ulonglong)uVar3;
    if (uVar3 < 8) {
      if (uVar5 == 0) goto LAB_1495a38cb;
      sVar1 = 0x28;
      do {
        sVar1 = sVar1 + -10;
        bVar7 = uVar5 == 0;
        uVar5 = 0;
      } while (bVar7);
      uVar5 = 0;
    }
    else {
      sVar1 = 0x28;
      if (0xff < uVar3) {
        sVar1 = 0x28;
        uVar4 = uVar5;
        do {
          sVar1 = sVar1 + 0x28;
          uVar5 = uVar4 >> 4;
          bVar7 = 0xfff < uVar4;
          uVar4 = uVar5;
        } while (bVar7);
      }
      uVar4 = uVar5;
      if (0xf < uVar5) {
        do {
          sVar1 = sVar1 + 10;
          uVar5 = uVar4 >> 1;
          bVar7 = 0x1f < uVar4;
          uVar4 = uVar5;
        } while (bVar7);
      }
    }
    sVar1 = sVar1 + (&DAT_14bd41890)[(uint)uVar5 & 7] + -10;
  }
  *(short *)(param_1 + 0x5c) = sVar1;
  return;
}



// FUNCTION 1495a391c FUN_1495a391c body=283 status=ok
// SIG undefined FUN_1495a391c(void)

undefined8 * FUN_1495a391c(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  *(ulonglong *)(lVar2 + 0x30) = uVar3 & 0xffffffffffffffbb | 0x40;
  FUN_1495a68fc(param_1,param_2,0);
  *(ulonglong *)(lVar2 + 0x30) = uVar3;
  if ((int)param_1[6] != 0) {
    return (undefined8 *)0x0;
  }
  do {
    lVar5 = param_2;
    param_2 = *(longlong *)(lVar5 + 0x50);
  } while (*(longlong *)(lVar5 + 0x50) != 0);
  if (lVar2 == 0) {
    puVar4 = (undefined8 *)FUN_145e3bd67(0x80);
  }
  else {
    puVar4 = (undefined8 *)FUN_14955d750(lVar2,0x80);
  }
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[0xf] = 0;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 1;
    *puVar4 = 0;
    *(undefined2 *)((longlong)puVar4 + 0x4a) = 200;
    FUN_1495a8a4f(param_1,*(undefined8 *)(lVar5 + 0x20),(longlong)puVar4 + 0x46,puVar4 + 1);
    FUN_1495a8eab(param_1,puVar4,lVar5,param_3);
    *(undefined2 *)((longlong)puVar4 + 0x44) = 0xffff;
    if (*(char *)(lVar2 + 0x61) == '\0') {
      return puVar4;
    }
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x2d8) == 0)) {
      piVar1 = (int *)((longlong)puVar4 + 0x3c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return (undefined8 *)0x0;
      }
    }
    FUN_149585e6d(lVar2,puVar4);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1495a3a37 FUN_1495a3a37 body=351 status=ok
// SIG undefined FUN_1495a3a37(void)

void FUN_1495a3a37(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *_Str;
  ulonglong uVar4;
  longlong lVar5;
  short sVar6;
  longlong lVar7;
  uint uVar8;
  
  _Str = *(char **)(param_2 + 0x28);
  if (_Str == (char *)0x0) {
    lVar5 = *param_1;
    _Str = (char *)FUN_145e3bd67((longlong)*(short *)(param_2 + 0x46) + 1);
    if (_Str == (char *)0x0) {
      if (*(char *)(lVar5 + 0x61) != '\0') {
        return;
      }
      if (*(char *)(lVar5 + 0x62) != '\0') {
        return;
      }
      *(undefined1 *)(lVar5 + 0x61) = 1;
      if (0 < *(int *)(lVar5 + 0xd4)) {
        *(undefined4 *)(lVar5 + 0x170) = 1;
      }
      *(int *)(lVar5 + 0x178) = *(int *)(lVar5 + 0x178) + 1;
      *(undefined2 *)(lVar5 + 0x17c) = 0;
      if (*(longlong *)(lVar5 + 0x138) == 0) {
        return;
      }
      *(undefined4 *)(*(longlong *)(lVar5 + 0x138) + 0x18) = 7;
      return;
    }
    sVar6 = *(short *)(param_2 + 0x46);
    uVar4 = 0;
    if (0 < sVar6) {
      lVar5 = 0x1c;
      lVar7 = 0;
      do {
        if ((*(byte *)(*(longlong *)(param_2 + 8) + lVar5) & 0x20) == 0) {
          iVar1 = (int)uVar4;
          uVar4 = (ulonglong)(iVar1 + 1);
          _Str[iVar1] = *(char *)(*(longlong *)(param_2 + 8) + -3 + lVar5);
          sVar6 = *(short *)(param_2 + 0x46);
        }
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + 0x20;
      } while (lVar7 < sVar6);
      uVar4 = (ulonglong)(int)uVar4;
    }
    do {
      _Str[uVar4] = '\0';
      if ((longlong)uVar4 < 1) break;
      lVar5 = uVar4 - 1;
      uVar4 = uVar4 - 1;
    } while (_Str[lVar5] < 'B');
    *(char **)(param_2 + 0x28) = _Str;
  }
  sVar3 = strlen(_Str);
  uVar8 = (uint)sVar3 & 0x3fffffff;
  if ((sVar3 & 0x3fffffff) == 0) {
    return;
  }
  if (param_3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_149584f48(param_1,0x5a,param_3,uVar8,0);
  }
  FUN_14955a5b6(param_1,uVar2,_Str,uVar8);
  return;
}



// FUNCTION 1495a3b96 FUN_1495a3b96 body=638 status=ok
// SIG undefined FUN_1495a3b96(void)

char * FUN_1495a3b96(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  char *_Str;
  uint uVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  sVar1 = *(short *)((longlong)param_2 + 0x46);
  iVar5 = 2;
  if (0 < sVar1) {
    puVar7 = (undefined8 *)param_2[1];
    iVar8 = 0;
    iVar6 = 0;
LAB_1495a3bd1:
    pcVar3 = (char *)*puVar7;
    iVar5 = 0;
    do {
      if (*pcVar3 == '\"') {
        iVar5 = iVar5 + 1;
      }
      else if (*pcVar3 == '\0') goto LAB_1495a3bf3;
      iVar5 = iVar5 + 1;
      pcVar3 = pcVar3 + 1;
    } while( true );
  }
LAB_1495a3c08:
  pcVar3 = (char *)*param_2;
  iVar6 = 0;
  do {
    if (*pcVar3 == '\"') {
      iVar6 = iVar6 + 1;
    }
    else if (*pcVar3 == '\0') {
      iVar6 = iVar6 + iVar5;
      puVar11 = &DAT_14bd47003;
      if (iVar6 < 0x32) {
        puVar11 = &DAT_149eb5f2c;
      }
      puVar12 = &DAT_14bd47008;
      if (iVar6 < 0x32) {
        puVar12 = &DAT_149dfbe79;
      }
      iVar5 = iVar6 + sVar1 * 6 + 0x23;
      pcVar3 = (char *)FUN_145e3bd67((longlong)iVar5);
      if (pcVar3 == (char *)0x0) {
        if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
          *(undefined1 *)(param_1 + 0x61) = 1;
          if (0 < *(int *)(param_1 + 0xd4)) {
            *(undefined4 *)(param_1 + 0x170) = 1;
          }
          *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
          *(undefined2 *)(param_1 + 0x17c) = 0;
          if (*(longlong *)(param_1 + 0x138) != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
          }
        }
      }
      else {
        local_5c = iVar5;
        local_58 = puVar12;
        FUN_14955591f(iVar5,pcVar3,"CREATE TABLE ");
        sVar4 = strlen(pcVar3);
        local_4c = (uint)sVar4 & 0x3fffffff;
        FUN_1495a963b(pcVar3,&local_4c,*param_2);
        uVar10 = local_4c + 1;
        pcVar3[(int)local_4c] = '(';
        if (0 < *(short *)((longlong)param_2 + 0x46)) {
          puVar9 = &DAT_14bd46fff;
          if (iVar6 < 0x32) {
            puVar9 = &DAT_149e02088;
          }
          puVar7 = (undefined8 *)param_2[1];
          iVar5 = 0;
          do {
            FUN_14955591f(local_5c - uVar10,pcVar3 + (int)uVar10,puVar9);
            uVar2 = 0;
            if (pcVar3 + (int)uVar10 != (char *)0x0) {
              sVar4 = strlen(pcVar3 + (int)uVar10);
              uVar2 = (uint)sVar4 & 0x3fffffff;
            }
            local_4c = uVar2 + uVar10;
            FUN_1495a963b(pcVar3,&local_4c,*puVar7);
            _Str = *(char **)("cannot have both ON and USING clauses in the same join" +
                             (longlong)*(char *)((longlong)puVar7 + 0x19) * 8 + 0x17);
            sVar4 = strlen(_Str);
            uVar2 = local_4c;
            uVar10 = (uint)sVar4 & 0x3fffffff;
            memcpy(pcVar3 + (int)local_4c,_Str,(ulonglong)uVar10);
            uVar10 = uVar10 + uVar2;
            iVar5 = iVar5 + 1;
            puVar7 = puVar7 + 4;
            puVar9 = puVar11;
            local_4c = uVar10;
          } while (iVar5 < *(short *)((longlong)param_2 + 0x46));
        }
        FUN_14955591f(local_5c - uVar10,pcVar3 + (int)uVar10,&DAT_149dfbe46,local_58);
      }
      if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return pcVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    iVar6 = iVar6 + 1;
    pcVar3 = pcVar3 + 1;
  } while( true );
LAB_1495a3bf3:
  iVar5 = iVar6 + iVar5;
  iVar6 = iVar5 + 7;
  iVar8 = iVar8 + 1;
  puVar7 = puVar7 + 4;
  if (iVar8 == sVar1) goto code_r0x0001495a3c05;
  goto LAB_1495a3bd1;
code_r0x0001495a3c05:
  iVar5 = iVar5 + 9;
  goto LAB_1495a3c08;
}



// FUNCTION 1495a3e15 FUN_1495a3e15 body=274 status=ok
// SIG undefined FUN_1495a3e15(void)

void FUN_1495a3e15(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 *local_e0;
  undefined1 local_d8 [168];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((int)param_1[6] == 0) {
    lVar1 = *param_1;
    local_e0 = &local_res18;
    lVar2 = FUN_14955dd50(lVar1);
    if (lVar2 == 0) {
      if (*(char *)(lVar1 + 0x61) == '\0') {
        *(undefined4 *)(param_1 + 3) = 0x12;
      }
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    }
    else {
      *(char *)((longlong)param_1 + 0x1e) = *(char *)((longlong)param_1 + 0x1e) + '\x01';
      _Src = param_1 + 0x20;
      memcpy(local_d8,_Src,0xa0);
      memset(_Src,0,0xa0);
      FUN_14955bebe(param_1,lVar2,&local_e8);
      if (local_e8 != 0) {
        FUN_14955d65a(lVar1);
      }
      FUN_14955d65a(lVar1,lVar2);
      memcpy(_Src,local_d8,0xa0);
      *(char *)((longlong)param_1 + 0x1e) = *(char *)((longlong)param_1 + 0x1e) + -1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a3f28 FUN_1495a3f28 body=147 status=ok
// SIG undefined FUN_1495a3f28(void)

void FUN_1495a3f28(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar2 = FUN_149584f48(param_1,0x8d,param_2,0,0);
  FUN_14955a5b6(param_1,uVar2,param_3,0xfffffff9);
  lVar1 = *param_1;
  if (0 < *(int *)(lVar1 + 0x28)) {
    uVar4 = *(uint *)((longlong)param_1 + 0xcc);
    lVar5 = 8;
    lVar3 = 0;
    do {
      uVar4 = uVar4 | 1 << ((uint)lVar3 & 0x1f);
      *(uint *)((longlong)param_1 + 0xcc) = uVar4;
      if ((lVar3 != 1) &&
         (*(char *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + lVar5) + 0x11) != '\0')) {
        *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) | 1 << ((byte)lVar3 & 0x1f);
      }
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar3 < *(int *)(lVar1 + 0x28));
  }
  return;
}



// FUNCTION 1495a3fbb FUN_1495a3fbb body=133 status=ok
// SIG undefined FUN_1495a3fbb(void)

undefined8 FUN_1495a3fbb(longlong param_1,uint param_2,longlong param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (0 < (int)param_2) {
    uVar3 = 0;
    do {
      if (*(short *)(*(longlong *)(param_1 + 8) + uVar3 * 2) ==
          *(short *)(*(longlong *)(param_3 + 8) + (longlong)param_4 * 2)) {
        lVar4 = 0;
        do {
          bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar3 * 8) + lVar4);
          bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x40) + (longlong)param_4 * 8) +
                           lVar4);
          if (bVar1 == bVar2) {
            if ((ulonglong)bVar1 == 0) {
              return 1;
            }
          }
          else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) break;
          lVar4 = lVar4 + 1;
        } while( true );
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
  }
  return 0;
}



// FUNCTION 1495a4040 FUN_1495a4040 body=201 status=ok
// SIG undefined FUN_1495a4040(void)

undefined8 FUN_1495a4040(longlong param_1,longlong param_2,uint param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((int)(uint)*(ushort *)(param_2 + 0x60) < (int)param_3) {
    if (param_1 == 0) {
      pvVar1 = (void *)FUN_145e3bd67((longlong)(int)(param_3 * 0xb));
    }
    else {
      pvVar1 = (void *)FUN_14955d750();
    }
    if (pvVar1 == (void *)0x0) {
      uVar2 = 7;
    }
    else {
      uVar2 = 0;
      memset(pvVar1,0,(longlong)(int)(param_3 * 0xb));
      memcpy(pvVar1,*(void **)(param_2 + 0x40),(ulonglong)*(ushort *)(param_2 + 0x60) << 3);
      *(void **)(param_2 + 0x40) = pvVar1;
      pvVar1 = (void *)((longlong)pvVar1 + (ulonglong)param_3 * 8);
      memcpy(pvVar1,*(void **)(param_2 + 8),(ulonglong)((uint)*(ushort *)(param_2 + 0x60) * 2));
      *(void **)(param_2 + 8) = pvVar1;
      pvVar1 = (void *)((longlong)pvVar1 + (ulonglong)param_3 * 2);
      memcpy(pvVar1,*(void **)(param_2 + 0x38),(ulonglong)*(ushort *)(param_2 + 0x60));
      *(void **)(param_2 + 0x38) = pvVar1;
      *(short *)(param_2 + 0x60) = (short)param_3;
      *(byte *)(param_2 + 100) = *(byte *)(param_2 + 100) | 0x10;
    }
  }
  return uVar2;
}



// FUNCTION 1495a4109 FUN_1495a4109 body=255 status=ok
// SIG undefined FUN_1495a4109(void)

bool FUN_1495a4109(longlong *param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  code *local_50;
  code *local_48;
  undefined8 local_40;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar2 = false;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 5);
    *(uint *)(param_1 + 5) = uVar1 & 0xffff6fef;
    local_58 = (longlong *)*param_1;
    local_50 = FUN_1495a4209;
    local_48 = FUN_1495a5b55;
    local_40 = 0;
    iVar3 = *(int *)((longlong)local_58 + 0x11c) + *(int *)(param_2 + 0x28);
    *(int *)((longlong)local_58 + 0x11c) = iVar3;
    local_30 = param_1;
    if (*(int *)(*local_58 + 0x88) < iVar3) {
      FUN_14955a364(local_58,"Expression tree is too large (maximum depth %d)");
      bVar2 = true;
    }
    else {
      FUN_14959fa98(&local_58,param_2);
      *(int *)((longlong)local_58 + 0x11c) =
           *(int *)((longlong)local_58 + 0x11c) - *(int *)(param_2 + 0x28);
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | *(uint *)(param_1 + 5) & 0x8010;
      *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | uVar1 & 0x9010;
      bVar2 = true;
      if (*(int *)((longlong)param_1 + 0x24) < 1) {
        bVar2 = 0 < (int)local_58[6];
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a4209 FUN_1495a4209 body=6475 status=ok
// SIG undefined FUN_1495a4209(void)

char FUN_1495a4209(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  size_t sVar13;
  int *piVar14;
  undefined4 uVar15;
  int *piVar16;
  longlong *plVar17;
  byte *pbVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  char *pcVar23;
  undefined8 uVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  byte *pbVar29;
  char *pcVar30;
  byte *pbVar31;
  int *piVar32;
  undefined8 unaff_R14;
  bool bVar33;
  bool bVar34;
  undefined1 auStack_178 [32];
  byte *local_158;
  byte *local_150;
  byte local_141;
  byte *local_140;
  int *local_138;
  byte *local_130;
  longlong *local_128;
  longlong *local_120;
  byte local_111;
  undefined8 local_110;
  longlong local_108;
  byte *local_100;
  int *local_f8;
  byte *local_f0;
  undefined8 local_e8;
  int local_dc;
  longlong local_d8;
  byte *local_d0;
  int local_c4;
  longlong *local_c0;
  longlong *local_b8;
  int *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar19 = *(longlong **)(param_1 + 0x28);
  plVar11 = (longlong *)*plVar19;
  bVar2 = *param_2;
  if (0x87 < bVar2) {
    if (bVar2 < 0x99) {
      if (bVar2 == 0x88) goto switchD_1495a4267_caseD_31;
      if (bVar2 == 0x8b) {
        lVar28 = *(longlong *)(param_2 + 0x10);
        if ((*(uint *)(plVar19 + 5) & 0x28) != 0) {
          FUN_14955a364(plVar11);
        }
        pcVar30 = *(char **)(param_2 + 0x18);
        if (*pcVar30 == ';') {
          local_100 = (byte *)0x0;
        }
        else {
          local_100 = *(byte **)(lVar28 + 8);
          lVar28 = *(longlong *)(pcVar30 + 0x10);
          pcVar30 = *(char **)(pcVar30 + 0x18);
        }
        local_130 = *(byte **)(lVar28 + 8);
        pbVar18 = *(byte **)(pcVar30 + 8);
        if ((1 < *(byte *)((longlong)plVar11 + 0x114)) &&
           (plVar17 = (longlong *)plVar11[0x33], plVar21 = plVar17, plVar17 != (longlong *)0x0)) {
          do {
            if ((char *)*plVar21 == pcVar30) {
              *plVar21 = (longlong)param_2;
              plVar17 = (longlong *)plVar11[0x33];
              break;
            }
            plVar1 = plVar21 + 3;
            plVar21 = (longlong *)*plVar1;
          } while ((longlong *)*plVar1 != (longlong *)0x0);
          if (plVar17 != (longlong *)0x0) {
            do {
              if (*plVar17 == lVar28) {
                *plVar17 = (longlong)(param_2 + 0x40);
                break;
              }
              plVar17 = (longlong *)plVar17[3];
            } while (plVar17 != (longlong *)0x0);
          }
        }
        local_d8 = *plVar11;
        param_2[0x2c] = 0xff;
        param_2[0x2d] = 0xff;
        param_2[0x2e] = 0xff;
        param_2[0x2f] = 0xff;
        if ((local_100 != (byte *)0x0) && ((*(byte *)(plVar19 + 5) & 6) == 0)) {
          if (0 < (longlong)*(int *)(local_d8 + 0x28)) {
            local_108 = 0;
            lVar28 = 0;
LAB_1495a4fbc:
            lVar20 = 0;
            do {
              bVar2 = *(byte *)(*(longlong *)(*(longlong *)(local_d8 + 0x20) + lVar28 * 0x20) +
                               lVar20);
              if (bVar2 == local_100[lVar20]) {
                if ((ulonglong)bVar2 == 0) {
                  local_108 = *(longlong *)(*(longlong *)(local_d8 + 0x20) + 0x18 + lVar28 * 0x20);
                  goto LAB_1495a4502;
                }
              }
              else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[local_100[lVar20]])
              goto LAB_1495a4fed;
              lVar20 = lVar20 + 1;
            } while( true );
          }
          local_108 = 0;
          goto LAB_1495a4502;
        }
        goto LAB_1495a44f6;
      }
    }
    else {
      if (bVar2 != 0x99) {
        if (bVar2 == 0xa8) goto switchD_1495a4267_caseD_2d;
        if (bVar2 != 0xa9) goto switchD_1495a4267_caseD_2e;
        piVar16 = *(int **)(param_2 + 0x20);
        iVar7 = 0;
        if (piVar16 != (int *)0x0) {
          iVar7 = *piVar16;
        }
        lVar28 = *plVar11;
        local_130 = (byte *)0x0;
        if ((param_2[7] & 1) == 0) {
          local_110 = 0;
        }
        else {
          local_110 = 0;
          if (*(char *)(*(longlong *)(param_2 + 0x40) + 0x20) != -0x5d) {
            local_110 = *(longlong *)(param_2 + 0x40);
          }
        }
        uVar22 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),*(undefined1 *)(lVar28 + 0x5e));
        local_e8 = (longlong *)(CONCAT44(local_e8._4_4_,(int)plVar19[5]) & 0xffffffff00004001);
        pbVar18 = *(byte **)(param_2 + 8);
        local_140 = param_2;
        if (pbVar18 != (byte *)0x0) {
          sVar13 = strlen((char *)pbVar18);
          local_130 = (byte *)(ulonglong)((uint)sVar13 & 0x3fffffff);
        }
        local_158 = (byte *)((ulonglong)local_158 & 0xffffffffffffff00);
        piVar14 = (int *)FUN_14955c8a3(lVar28,pbVar18,iVar7,uVar22 & 0xffffffff);
        pbVar31 = local_140;
        if (piVar14 != (int *)0x0) {
          local_f8 = *(int **)(piVar14 + 8);
          bVar34 = local_f8 != (int *)0x0;
          local_128 = plVar19;
          if ((*(byte *)((longlong)piVar14 + 5) & 4) != 0) {
            local_140[6] = local_140[6] | 4;
            if (iVar7 == 2) {
              iVar7 = FUN_1495a613a(*(undefined8 *)(piVar16 + 10));
              *(int *)(pbVar31 + 0x2c) = iVar7;
              if (iVar7 < 0) {
                FUN_14955a364(plVar11,
                              "second argument to likelihood() must be a constant between 0.0 and 1.0"
                             );
                *(int *)((longlong)plVar19 + 0x24) = *(int *)((longlong)plVar19 + 0x24) + 1;
              }
            }
            else {
              uVar15 = 0x7800000;
              if (**(char **)(piVar14 + 0xe) == 'u') {
                uVar15 = 0x800000;
              }
              *(undefined4 *)(local_140 + 0x2c) = uVar15;
            }
          }
          local_158 = (byte *)0x0;
          iVar7 = FUN_1495a2d6b(plVar11,0x1f,0,*(undefined8 *)(piVar14 + 0xe));
          if (iVar7 == 0) {
            uVar27 = piVar14[1];
            if ((uVar27 & 0x2800) != 0) {
              local_140[6] = local_140[6] | 8;
              uVar27 = piVar14[1];
            }
            uVar25 = *(uint *)(plVar19 + 5);
            if ((uVar27 >> 0xb & 1) == 0) {
              if ((uVar25 & 0x2a) != 0) {
                if ((uVar25 & 0x20) == 0) {
                  if ((uVar25 & 4) == 0) {
                    pcVar30 = "generated columns";
                    if ((uVar25 & 8) == 0) {
                      pcVar30 = "partial index WHERE clauses";
                    }
                  }
                  else {
                    pcVar30 = "CHECK constraints";
                  }
                }
                else {
                  pcVar30 = "index expressions";
                }
                FUN_14955a364(plVar11,"%s prohibited in %s","non-deterministic functions",pcVar30);
              }
            }
            else {
              local_140[2] = (byte)uVar25 & 0x2e;
              if ((*(byte *)((longlong)plVar19 + 0x2a) & 4) != 0) {
                local_140[7] = local_140[7] | 0x40;
              }
            }
            plVar19 = local_128;
            uVar27 = piVar14[1];
            if ((((uVar27 >> 0x12 & 1) == 0) || (*(char *)((longlong)plVar11 + 0x1e) != '\0')) ||
               ((*(byte *)(*plVar11 + 0x2c) & 0x20) != 0)) {
              bVar33 = true;
              if ((uVar27 & 0x280000) == 0) {
                bVar3 = true;
              }
              else {
                if (((*(byte *)((longlong)plVar11 + 0x114) < 2) && ((local_140[7] & 0x40) != 0)) &&
                   (((uVar27 >> 0x13 & 1) != 0 || ((*(byte *)(*plVar11 + 0x30) & 0x80) == 0)))) {
                  FUN_14955a364(plVar11,"unsafe use of %s()",*(undefined8 *)(piVar14 + 0xe));
                }
                bVar3 = true;
              }
              goto LAB_1495a5231;
            }
            bVar34 = local_f8 != (int *)0x0;
            if (*(byte *)((longlong)plVar11 + 0x114) < 2) {
              local_138 = (int *)0x0;
              if (local_f8 != (int *)0x0) {
                bVar33 = true;
                bVar3 = false;
                goto LAB_1495a5279;
              }
              if (*(char *)(*plVar11 + 0xb5) != '\0') {
                piVar14 = (int *)0x0;
                goto LAB_1495a553c;
              }
              pcVar30 = "no such function: %.*s";
              bVar34 = false;
              goto LAB_1495a59ed;
            }
            local_138 = (int *)0x0;
            goto LAB_1495a53b1;
          }
          if (iVar7 == 1) {
            FUN_14955a364(plVar11,"not authorized to use function: %s",
                          *(undefined8 *)(piVar14 + 0xe));
            *(int *)((longlong)plVar19 + 0x24) = *(int *)((longlong)plVar19 + 0x24) + 1;
          }
          *local_140 = 0x77;
          goto LAB_1495a532c;
        }
        local_158 = (byte *)((ulonglong)local_158 & 0xffffffffffffff00);
        local_128 = plVar19;
        piVar14 = (int *)FUN_14955c8a3(*plVar11,pbVar18,0xfffffffe,uVar22 & 0xffffffff);
        bVar33 = piVar14 == (int *)0x0;
        bVar3 = !bVar33;
        bVar34 = false;
LAB_1495a5231:
        local_138 = piVar14;
        if (*(byte *)((longlong)plVar11 + 0x114) < 2) {
          if (((piVar14 == (int *)0x0) || (local_110 == 0)) || (*(longlong *)(piVar14 + 10) != 0)) {
            if (!bVar34) {
              bVar34 = false;
              if (bVar3) {
                if (bVar33) {
LAB_1495a553c:
                  local_100 = (byte *)((longlong)plVar11 + 0x114);
                  bVar33 = false;
                  local_138 = piVar14;
                  if ((local_140[7] & 1) != 0) {
                    FUN_14955a364(plVar11,"FILTER may not be used with non-aggregate %.*s()",
                                  local_130,pbVar18);
                    *(int *)((longlong)local_128 + 0x24) = *(int *)((longlong)local_128 + 0x24) + 1;
                  }
                  goto LAB_1495a56b9;
                }
                bVar34 = false;
              }
              else {
                bVar3 = false;
LAB_1495a5679:
                local_100 = (byte *)((longlong)plVar11 + 0x114);
                local_138 = piVar14;
                if (*(char *)(*plVar11 + 0xb5) == '\0') {
                  pcVar30 = "no such function: %.*s";
                  goto LAB_1495a59ed;
                }
                if (bVar33) {
                  lVar28 = local_110;
                  if (bVar3) goto LAB_1495a569a;
                  goto LAB_1495a553c;
                }
              }
LAB_1495a59e6:
              pcVar30 = "wrong number of arguments to function %.*s()";
              goto LAB_1495a59ed;
            }
LAB_1495a5279:
            local_100 = (byte *)((longlong)plVar11 + 0x114);
            if ((((*(uint *)(plVar19 + 5) & 1) == 0) ||
                ((local_110 == 0 && ((local_138[1] & 0x10000U) != 0)))) ||
               ((local_110 != 0 && ((*(uint *)(plVar19 + 5) & 0x4000) == 0)))) {
              pcVar30 = "aggregate";
              if ((local_138[1] & 0x10000U) != 0) {
                pcVar30 = "window";
              }
              if (local_110 != 0) {
                pcVar30 = "window";
              }
              local_158 = pbVar18;
              FUN_14955a364(plVar11,"misuse of %s function %.*s()",pcVar30,local_130);
              *(int *)((longlong)plVar19 + 0x24) = *(int *)((longlong)plVar19 + 0x24) + 1;
              goto LAB_1495a5951;
            }
            if (!bVar3) {
              bVar3 = true;
              bVar34 = true;
              piVar14 = local_138;
              goto LAB_1495a5679;
            }
            lVar28 = local_110;
            if (!bVar33) {
              bVar34 = true;
              goto LAB_1495a59e6;
            }
          }
          else {
            pcVar30 = "%.*s() may not be used as a window function";
LAB_1495a59ed:
            lVar28 = local_110;
            local_100 = (byte *)((longlong)plVar11 + 0x114);
            FUN_14955a364(plVar11,pcVar30,local_130,pbVar18);
            *(int *)((longlong)plVar19 + 0x24) = *(int *)((longlong)plVar19 + 0x24) + 1;
            if (!bVar34) {
LAB_1495a5951:
              bVar33 = false;
              goto LAB_1495a56b9;
            }
          }
LAB_1495a569a:
          *(uint *)(plVar19 + 5) = *(uint *)(plVar19 + 5) & -(uint)(lVar28 == 0) - 0x4001;
          bVar33 = true;
        }
        else {
LAB_1495a53b1:
          local_100 = (byte *)((longlong)plVar11 + 0x114);
          bVar33 = true;
          if ((local_140[7] & 1) == 0) {
            bVar33 = bVar34;
          }
        }
LAB_1495a56b9:
        pbVar18 = local_140;
        if ((piVar16 != (int *)0x0) && (iVar7 = *piVar16, 0 < iVar7)) {
          plVar19 = (longlong *)(piVar16 + 2);
          for (; ((*plVar19 == 0 || (iVar10 = FUN_14959fa98(param_1), iVar10 == 0)) && (1 < iVar7));
              iVar7 = iVar7 + -1) {
            plVar19 = plVar19 + 4;
          }
        }
        lVar28 = local_110;
        plVar19 = local_128;
        cVar5 = '\x01';
        if (bVar33) {
          if (local_110 == 0) {
            *pbVar18 = 0xa5;
            pbVar18[2] = 0;
            if (((pbVar18[7] & 1) != 0) &&
               (*(longlong *)(*(longlong *)(pbVar18 + 0x40) + 0x48) != 0)) {
              FUN_14959fa98(param_1);
            }
            if (plVar19 != (longlong *)0x0) {
              plVar19 = local_128;
              do {
                local_a8 = plVar19[1];
                local_98 = 0;
                uStack_80 = 0;
                local_78 = 0;
                puStack_90 = &LAB_1495a68a5;
                local_88 = &LAB_1495a68f9;
                local_a0 = 0;
                piVar16 = *(int **)(pbVar18 + 0x20);
                local_70 = &local_a8;
                if ((piVar16 != (int *)0x0) && (iVar7 = *piVar16, 0 < iVar7)) {
                  plVar11 = (longlong *)(piVar16 + 2);
                  for (; ((*plVar11 == 0 || (iVar10 = FUN_14959fa98(&local_98), iVar10 == 0)) &&
                         (1 < iVar7)); iVar7 = iVar7 + -1) {
                    plVar11 = plVar11 + 4;
                  }
                }
                if (((local_140[7] & 1) != 0) &&
                   (*(longlong *)(*(longlong *)(local_140 + 0x40) + 0x48) != 0)) {
                  FUN_14959fa98(&local_98);
                }
                if ((0 < (int)local_a0) || (local_a0._4_4_ == 0)) {
                  if (local_138 != (int *)0x0) {
                    *(uint *)(plVar19 + 5) = local_138[1] & 0x1000U | *(uint *)(plVar19 + 5) | 0x10;
                  }
                  break;
                }
                local_140[2] = local_140[2] + 1;
                plVar19 = (longlong *)plVar19[3];
                pbVar18 = local_140;
              } while (plVar19 != (longlong *)0x0);
            }
          }
          else {
            lVar20 = local_128[6];
            if (*local_100 < 2) {
              if (lVar20 == 0) {
                uVar24 = 0;
              }
              else {
                uVar24 = *(undefined8 *)(lVar20 + 0x78);
              }
              FUN_1495a61d7(plVar11,uVar24,local_110,local_138);
            }
            piVar16 = *(int **)(lVar28 + 0x10);
            if ((piVar16 != (int *)0x0) && (iVar7 = *piVar16, 0 < iVar7)) {
              plVar19 = (longlong *)(piVar16 + 2);
              for (; ((*plVar19 == 0 || (iVar10 = FUN_14959fa98(param_1), iVar10 == 0)) &&
                     (1 < iVar7)); iVar7 = iVar7 + -1) {
                plVar19 = plVar19 + 4;
              }
            }
            piVar16 = *(int **)(lVar28 + 0x18);
            if ((piVar16 != (int *)0x0) && (iVar7 = *piVar16, 0 < iVar7)) {
              plVar19 = (longlong *)(piVar16 + 2);
              for (; ((*plVar19 == 0 || (iVar10 = FUN_14959fa98(param_1), iVar10 == 0)) &&
                     (1 < iVar7)); iVar7 = iVar7 + -1) {
                plVar19 = plVar19 + 4;
              }
            }
            if (*(longlong *)(lVar28 + 0x48) != 0) {
              FUN_14959fa98(param_1);
            }
            FUN_1495a2825(lVar20,lVar28);
            *(byte *)((longlong)local_128 + 0x29) = *(byte *)((longlong)local_128 + 0x29) | 0x80;
          }
          *(uint *)(local_128 + 5) = *(uint *)(local_128 + 5) | (uint)local_e8;
        }
        goto LAB_1495a4290;
      }
      uVar27 = *(uint *)(plVar19 + 5);
      if ((uVar27 & 0x2e) != 0) {
        if ((uVar27 & 0x20) == 0) {
          if ((uVar27 & 4) == 0) {
            pcVar30 = "generated columns";
            if ((uVar27 & 8) == 0) {
              pcVar30 = "partial index WHERE clauses";
            }
          }
          else {
            pcVar30 = "CHECK constraints";
          }
        }
        else {
          pcVar30 = "index expressions";
        }
        FUN_14955a364(plVar11,"%s prohibited in %s","parameters",pcVar30);
        if (param_2 != (byte *)0x0) {
          *param_2 = 0x77;
        }
      }
    }
    goto switchD_1495a4267_caseD_2e;
  }
  switch(bVar2) {
  case 0x2d:
switchD_1495a4267_caseD_2d:
    for (pcVar30 = *(char **)(param_2 + 0x18); pcVar30 != (char *)0x0; pcVar30 = *(char **)pcVar30)
    {
      if ((*(uint *)(pcVar30 + 4) & 0x41000) == 0) goto LAB_1495a4445;
      if ((*(uint *)(pcVar30 + 4) >> 0x12 & 1) == 0) {
        pcVar30 = pcVar30 + 0x10;
      }
      else {
        pcVar30 = (char *)(*(longlong *)(pcVar30 + 0x20) + 8);
      }
    }
    pcVar30 = (char *)0x0;
LAB_1495a4445:
    if (*pcVar30 == ';') {
      iVar7 = FUN_1495a4209(param_1,pcVar30);
      cVar5 = '\x02';
      if (iVar7 == 2) goto LAB_1495a4290;
      if (*pcVar30 == -0x59) {
        param_2[2] = *param_2;
        *param_2 = 0xac;
        cVar5 = '\0';
        goto LAB_1495a4290;
      }
    }
  case 0x30:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    if (*(char *)(*plVar11 + 0x61) == '\0') {
      pcVar30 = *(char **)(param_2 + 0x10);
      cVar5 = *pcVar30;
      if (cVar5 == -0x53) {
        cVar5 = pcVar30[2];
      }
      if (cVar5 == -0x52) {
LAB_1495a4343:
        iVar7 = **(int **)(pcVar30 + 0x20);
      }
      else {
        iVar7 = 1;
        if (cVar5 == -0x78) {
          pcVar30 = *(char **)(pcVar30 + 0x20);
          goto LAB_1495a4343;
        }
      }
      if (*param_2 == 0x30) {
        pcVar30 = *(char **)(*(longlong *)(param_2 + 0x20) + 8);
        cVar5 = *pcVar30;
        if (cVar5 == -0x53) {
          cVar5 = pcVar30[2];
        }
        if (cVar5 == -0x52) {
LAB_1495a4383:
          iVar10 = **(int **)(pcVar30 + 0x20);
        }
        else {
          iVar10 = 1;
          if (cVar5 == -0x78) {
            pcVar30 = *(char **)(pcVar30 + 0x20);
            goto LAB_1495a4383;
          }
        }
        if (iVar10 == iVar7) {
          pcVar30 = *(char **)(*(longlong *)(param_2 + 0x20) + 0x28);
          cVar5 = *pcVar30;
          if (cVar5 == -0x53) {
            cVar5 = pcVar30[2];
          }
          if (cVar5 == -0x78) {
LAB_1495a441c:
            pcVar30 = *(char **)(pcVar30 + 0x20);
            goto LAB_1495a4420;
          }
          iVar10 = 1;
          if (cVar5 == -0x52) goto LAB_1495a4420;
        }
      }
      else {
        pcVar30 = *(char **)(param_2 + 0x18);
        cVar5 = *pcVar30;
        if (cVar5 == -0x53) {
          cVar5 = pcVar30[2];
        }
        if (cVar5 == -0x52) {
LAB_1495a4420:
          iVar10 = **(int **)(pcVar30 + 0x20);
        }
        else {
          iVar10 = 1;
          if (cVar5 == -0x78) goto LAB_1495a441c;
        }
      }
      if (iVar7 != iVar10) {
        FUN_14955a364(plVar11,"row value misused");
      }
    }
    break;
  case 0x2e:
  case 0x2f:
  case 0x32:
  case 0x33:
  case 0x3a:
    break;
  case 0x31:
switchD_1495a4267_caseD_31:
    if ((param_2[5] & 8) != 0) {
      lVar28 = plVar19[4];
      uVar27 = *(uint *)(plVar19 + 5);
      if ((uVar27 & 0x2e) != 0) {
        if ((uVar27 & 0x20) == 0) {
          if ((uVar27 & 4) == 0) {
            pcVar30 = "generated columns";
            if ((uVar27 & 8) == 0) {
              pcVar30 = "partial index WHERE clauses";
            }
          }
          else {
            pcVar30 = "CHECK constraints";
          }
        }
        else {
          pcVar30 = "index expressions";
        }
        FUN_14955a364(plVar11,"%s prohibited in %s","subqueries",pcVar30);
        if (param_2 != (byte *)0x0) {
          *param_2 = 0x77;
        }
      }
      FUN_14959fb62(param_1,*(undefined8 *)(param_2 + 0x20));
      if ((int)lVar28 != (int)plVar19[4]) {
        param_2[4] = param_2[4] | 0x20;
        *(byte *)(plVar19 + 5) = *(byte *)(plVar19 + 5) | 0x40;
      }
    }
    break;
  case 0x3b:
    pbVar18 = *(byte **)(param_2 + 8);
    local_d8 = *plVar11;
    param_2[0x2c] = 0xff;
    param_2[0x2d] = 0xff;
    param_2[0x2e] = 0xff;
    param_2[0x2f] = 0xff;
    local_130 = (byte *)0x0;
LAB_1495a44f6:
    local_108 = 0;
    local_100 = (byte *)0x0;
LAB_1495a4502:
    local_f0 = param_2 + 0x2c;
    local_d0 = param_2 + 0x40;
    local_111 = local_130 != (byte *)0x0 && local_100 == (byte *)0x0;
    local_c0 = plVar11 + 0x15;
    local_138 = (int *)0x0;
    local_141 = 0xa4;
    local_dc = 0;
    iVar7 = 0;
    local_140 = param_2;
    local_128 = plVar19;
    local_120 = plVar11;
LAB_1495a456b:
    piVar16 = (int *)plVar19[1];
    pbVar31 = local_130;
    if (piVar16 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      local_b8 = plVar19;
      if (0 < *piVar16) {
        piVar14 = piVar16 + 2;
        iVar10 = 0;
        local_110 = (ulonglong)local_110._4_4_ << 0x20;
        pbVar29 = local_100;
        local_f8 = piVar16;
LAB_1495a45a4:
        plVar19 = *(longlong **)(piVar14 + 8);
        lVar28 = *(longlong *)(piVar14 + 10);
        if ((lVar28 == 0) || ((*(byte *)(lVar28 + 5) & 8) == 0)) {
LAB_1495a45b7:
          if ((pbVar29 != (byte *)0x0) && (plVar19[0xe] != local_108)) goto LAB_1495a4823;
          piVar16 = local_f8;
          if (pbVar31 != (byte *)0x0) {
            lVar28 = *(longlong *)(piVar14 + 6);
            lVar20 = lVar28;
            if (lVar28 == 0) {
              lVar20 = *plVar19;
            }
            lVar26 = 0;
            do {
              bVar2 = *(byte *)(lVar20 + lVar26);
              if (bVar2 == pbVar31[lVar26]) {
                if ((ulonglong)bVar2 == 0) goto LAB_1495a46b0;
              }
              else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[pbVar31[lVar26]])
              goto LAB_1495a4823;
              lVar26 = lVar26 + 1;
            } while( true );
          }
          goto LAB_1495a471e;
        }
        piVar16 = *(int **)(lVar28 + 0x20);
        if (*piVar16 < 1) {
          bVar34 = false;
        }
        else {
          piVar32 = piVar16 + 2;
          lVar28 = 0;
          bVar34 = false;
          local_e8 = plVar19;
          local_b0 = piVar16;
          iVar9 = *piVar16;
          do {
            local_c4 = iVar9;
            iVar8 = FUN_1495a641b(piVar32,pbVar18,pbVar31);
            iVar9 = local_c4;
            if (iVar8 != 0) {
              local_110 = CONCAT44(local_110._4_4_,(int)local_110 + 1);
              *(short *)(local_140 + 0x30) = (short)lVar28;
              iVar7 = 2;
              bVar34 = true;
              iVar9 = *local_b0;
              local_138 = piVar14;
            }
            lVar28 = lVar28 + 1;
            piVar32 = piVar32 + 8;
            plVar19 = local_e8;
            pbVar29 = local_100;
            pbVar31 = local_130;
          } while (lVar28 < iVar9);
        }
        piVar16 = local_f8;
        if (!bVar34 && pbVar31 != (byte *)0x0) goto LAB_1495a45b7;
        goto LAB_1495a4823;
      }
      local_110 = (ulonglong)local_110._4_4_ << 0x20;
LAB_1495a4836:
      iVar10 = (int)local_110;
      plVar19 = local_b8;
      if (local_138 == (int *)0x0) {
        local_138 = (int *)0x0;
      }
      else {
        *(int *)local_f0 = local_138[0x11];
        lVar28 = *(longlong *)(local_138 + 8);
        *(longlong *)local_d0 = lVar28;
        if ((*(byte *)(local_138 + 0xf) & 8) != 0) {
          local_140[6] = local_140[6] | 0x10;
        }
        local_108 = *(longlong *)(lVar28 + 0x70);
      }
    }
    if ((iVar7 == 0 & local_111) == 1) {
      if (*local_c0 != 0) {
        if ((char)local_120[0x19] != '~') {
          lVar28 = 0;
          do {
            bVar2 = (&DAT_14bd4691f)[lVar28];
            if (bVar2 == pbVar31[lVar28]) {
              if ((ulonglong)bVar2 == 0) goto LAB_1495a4bbe;
            }
            else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[pbVar31[lVar28]]) {
              if ((char)local_120[0x19] != '}') break;
              lVar28 = 0;
              goto LAB_1495a4932;
            }
            lVar28 = lVar28 + 1;
          } while( true );
        }
        lVar28 = 0;
        do {
          bVar2 = (&DAT_14bd46923)[lVar28];
          if (bVar2 == pbVar31[lVar28]) {
            if ((ulonglong)bVar2 == 0) goto LAB_1495a4b46;
          }
          else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[pbVar31[lVar28]]) {
            lVar28 = 0;
            goto LAB_1495a4932;
          }
          lVar28 = lVar28 + 1;
        } while( true );
      }
      lVar28 = 0;
      goto LAB_1495a4932;
    }
    goto LAB_1495a4a63;
  default:
    if (bVar2 == 0x14) goto switchD_1495a4267_caseD_31;
  }
switchD_1495a4267_caseD_2e:
  cVar5 = '\x02';
  if ((int)plVar11[6] == 0) {
    cVar5 = (*(char *)(*plVar11 + 0x61) != '\0') * '\x02';
  }
LAB_1495a4290:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar5;
LAB_1495a4fed:
  lVar28 = lVar28 + 1;
  if (lVar28 == *(int *)(local_d8 + 0x28)) goto LAB_1495a4502;
  goto LAB_1495a4fbc;
LAB_1495a46b0:
  if ((lVar28 != 0) && (1 < *(byte *)((longlong)local_120 + 0x114))) {
    for (puVar12 = (undefined8 *)local_120[0x33]; puVar12 != (undefined8 *)0x0;
        puVar12 = (undefined8 *)puVar12[3]) {
      if ((byte *)*puVar12 == local_d0) {
        *puVar12 = 0;
        break;
      }
    }
  }
LAB_1495a471e:
  iVar9 = iVar7 + 1;
  if (iVar7 == 0) {
    local_138 = piVar14;
  }
  iVar7 = iVar9;
  if (0 < *(short *)((longlong)plVar19 + 0x46)) {
    plVar11 = (longlong *)plVar19[1];
    iVar9 = 0;
LAB_1495a474c:
    lVar28 = 0;
    do {
      bVar2 = *(byte *)(*plVar11 + lVar28);
      pbVar29 = local_100;
      pbVar31 = local_130;
      local_e8 = plVar19;
      if (bVar2 == pbVar18[lVar28]) {
        if ((ulonglong)bVar2 == 0) goto LAB_1495a4777;
      }
      else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[pbVar18[lVar28]]) goto LAB_1495a47d9;
      lVar28 = lVar28 + 1;
    } while( true );
  }
LAB_1495a4823:
  iVar10 = iVar10 + 1;
  piVar14 = piVar14 + 0x1c;
  if (*piVar16 <= iVar10) goto LAB_1495a4836;
  goto LAB_1495a45a4;
LAB_1495a4777:
  if ((int)local_110 == 1) {
    if ((*(byte *)(piVar14 + 0xf) & 4) != 0) {
LAB_1495a47d9:
      iVar9 = iVar9 + 1;
      plVar11 = plVar11 + 4;
      if (iVar9 == *(short *)((longlong)plVar19 + 0x46)) goto LAB_1495a4823;
      goto LAB_1495a474c;
    }
    plVar17 = *(longlong **)(piVar14 + 0x14);
    if ((plVar17 != (longlong *)0x0) && (0 < (longlong)(int)plVar17[1])) {
      lVar28 = 0;
LAB_1495a479c:
      lVar20 = 0;
      do {
        bVar2 = *(byte *)(*(longlong *)(*plVar17 + lVar28 * 0x10) + lVar20);
        if (bVar2 == pbVar18[lVar20]) {
          if ((ulonglong)bVar2 == 0) goto LAB_1495a47d9;
        }
        else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[pbVar18[lVar20]]) goto LAB_1495a47cf;
        lVar20 = lVar20 + 1;
      } while( true );
    }
  }
LAB_1495a47e9:
  local_110 = CONCAT44(local_110._4_4_,(int)local_110 + 1);
  uVar6 = (undefined2)iVar9;
  if (iVar9 == *(short *)((longlong)plVar19 + 0x44)) {
    uVar6 = 0xffff;
  }
  *(undefined2 *)(local_140 + 0x30) = uVar6;
  local_138 = piVar14;
  goto LAB_1495a4823;
LAB_1495a47cf:
  lVar28 = lVar28 + 1;
  if (lVar28 == (int)plVar17[1]) goto LAB_1495a47e9;
  goto LAB_1495a479c;
LAB_1495a4bbe:
  iVar7 = 1;
  goto LAB_1495a4b48;
LAB_1495a4b46:
  iVar7 = 0;
LAB_1495a4b48:
  *(int *)local_f0 = iVar7;
  lVar28 = *local_c0;
LAB_1495a4932:
  if (((*(byte *)((longlong)plVar19 + 0x29) & 2) != 0) && (plVar19[2] != 0)) {
    lVar20 = 0;
    do {
      bVar2 = "excluded"[lVar20];
      if (bVar2 == pbVar31[lVar20]) {
        if ((ulonglong)bVar2 == 0) goto LAB_1495a4b61;
      }
      else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[pbVar31[lVar20]]) break;
      lVar20 = lVar20 + 1;
    } while( true );
  }
LAB_1495a493a:
  if (lVar28 == 0) {
    iVar7 = 0;
  }
  else {
    local_108 = *(longlong *)(lVar28 + 0x70);
    uVar27 = (uint)*(short *)(lVar28 + 0x46);
    if (0 < *(short *)(lVar28 + 0x46)) {
      plVar11 = *(longlong **)(lVar28 + 8);
      uVar25 = 0;
LAB_1495a4961:
      lVar20 = 0;
      do {
        bVar2 = *(byte *)(*plVar11 + lVar20);
        if (bVar2 == pbVar18[lVar20]) {
          if ((ulonglong)bVar2 == 0) {
            if (uVar25 == (int)*(short *)(lVar28 + 0x44)) {
              uVar25 = 0xffffffff;
            }
            goto LAB_1495a49df;
          }
        }
        else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[pbVar18[lVar20]]) goto LAB_1495a498b;
        lVar20 = lVar20 + 1;
      } while( true );
    }
    uVar25 = 0;
LAB_1495a49df:
    uVar4 = uVar25;
    if ((int)uVar27 <= (int)uVar25) {
LAB_1495a4c16:
      uVar25 = uVar4;
      iVar7 = FUN_14955d141(pbVar18);
      pbVar31 = local_130;
      if (iVar7 != 0) {
        uVar25 = uVar25 | -(uint)((*(byte *)(lVar28 + 0x41) & 2) == 0);
      }
    }
    iVar7 = 1;
    if ((int)uVar25 < (int)uVar27) {
      iVar10 = iVar10 + 1;
      if (*(int *)local_f0 == 2) {
        if (*(byte *)((longlong)local_120 + 0x114) < 2) {
          *(uint *)(local_140 + 0x2c) = uVar25 + *(int *)(plVar19[2] + 0x30);
          local_140[6] = local_140[6] | 0x40;
          local_141 = 0xad;
        }
        else {
          *(short *)(local_140 + 0x30) = (short)uVar25;
          *(longlong *)(local_140 + 0x40) = lVar28;
          local_141 = 0xa4;
        }
      }
      else {
        if ((int)uVar25 < 0) {
          local_140[1] = 0x44;
        }
        else {
          uVar27 = 1 << ((byte)uVar25 & 0x1f);
          if (0x1f < uVar25) {
            uVar27 = 0xffffffff;
          }
          if (*(int *)local_f0 == 0) {
            *(uint *)(local_120 + 0x18) = *(uint *)(local_120 + 0x18) | uVar27;
          }
          else {
            *(uint *)((longlong)local_120 + 0xc4) = *(uint *)((longlong)local_120 + 0xc4) | uVar27;
          }
        }
        *(longlong *)(local_140 + 0x40) = lVar28;
        *(short *)(local_140 + 0x30) = (short)uVar25;
        local_141 = 0x4d;
      }
    }
LAB_1495a4a63:
    if (((iVar10 == 0) && (iVar7 == 1)) && (local_138 != (int *)0x0)) {
      iVar10 = 0;
      iVar7 = 1;
      if ((((*(byte *)(plVar19 + 5) & 0x28) == 0) &&
          (iVar9 = FUN_14955d141(pbVar18), pbVar31 = local_130, iVar9 != 0)) &&
         ((*(byte *)(*(longlong *)(local_138 + 8) + 0x41) & 2) == 0)) {
        local_140[0x30] = 0xff;
        local_140[0x31] = 0xff;
        local_140[1] = 0x44;
        goto LAB_1495a4daa;
      }
    }
  }
  plVar17 = local_120;
  plVar11 = local_128;
  pbVar29 = local_140;
  if (((pbVar31 == (byte *)0x0) && (iVar10 == 0)) &&
     (uVar27 = *(uint *)(plVar19 + 5), (uVar27 & 0x80) != 0)) {
    piVar16 = (int *)plVar19[2];
    if (0 < (longlong)*piVar16) {
      lVar28 = 0;
      do {
        if ((*(byte *)(piVar16 + lVar28 * 8 + 7) & 3) == 0) {
          lVar20 = *(longlong *)(piVar16 + lVar28 * 8 + 4);
          if (lVar20 == 0) {
            if (pbVar18 == (byte *)0x0) {
LAB_1495a4c40:
              pcVar30 = *(char **)(piVar16 + lVar28 * 8 + 2);
              if (((uVar27 & 1) == 0) && ((*(uint *)(pcVar30 + 4) & 0x10) != 0)) {
                pcVar30 = "misuse of aliased aggregate %s";
LAB_1495a4c5f:
                FUN_14955a364(local_120,pcVar30,lVar20);
              }
              else {
                if (((short)*(uint *)(pcVar30 + 4) < 0) &&
                   ((plVar19 == local_128 & (byte)(uVar27 >> 0xe) & 1) == 0)) {
                  pcVar30 = "misuse of aliased window function %s";
                  goto LAB_1495a4c5f;
                }
                cVar5 = *pcVar30;
                if (cVar5 == -0x53) {
                  cVar5 = pcVar30[2];
                }
                if (cVar5 != -0x52) {
                  if (cVar5 == -0x78) {
                    pcVar30 = *(char **)(pcVar30 + 0x20);
                    goto LAB_1495a4ced;
                  }
LAB_1495a4cfa:
                  local_150 = (byte *)CONCAT44(local_150._4_4_,local_dc);
                  local_158 = &DAT_149e02088;
                  FUN_1495a6573(local_120,piVar16,lVar28,local_140);
                  if (*(byte *)((longlong)plVar17 + 0x114) < 2) goto LAB_1495a5051;
                  puVar12 = (undefined8 *)plVar17[0x33];
                  goto LAB_1495a4d36;
                }
LAB_1495a4ced:
                if (**(int **)(pcVar30 + 0x20) == 1) goto LAB_1495a4cfa;
                FUN_14955a364(local_120,"row value misused");
              }
              cVar5 = '\x02';
              goto LAB_1495a4290;
            }
          }
          else if (pbVar18 != (byte *)0x0) {
            lVar26 = 0;
            do {
              bVar2 = *(byte *)(lVar20 + lVar26);
              if (bVar2 == pbVar18[lVar26]) {
                if ((ulonglong)bVar2 == 0) goto LAB_1495a4c40;
              }
              else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[pbVar18[lVar26]]) break;
              lVar26 = lVar26 + 1;
            } while( true );
          }
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 != *piVar16);
    }
  }
  else if (iVar10 != 0) {
    if (iVar10 != 1) {
      pcVar30 = "ambiguous column name";
      goto LAB_1495a53df;
    }
LAB_1495a4daa:
    bVar34 = true;
    goto LAB_1495a4daf;
  }
  plVar19 = (longlong *)plVar19[3];
  local_dc = local_dc + 1;
  if (plVar19 == (longlong *)0x0) goto LAB_1495a5151;
  goto LAB_1495a456b;
LAB_1495a4b61:
  lVar28 = *(longlong *)(*(longlong *)(plVar19[2] + 0x28) + 0x28);
  local_f0[0] = 2;
  local_f0[1] = 0;
  local_f0[2] = 0;
  local_f0[3] = 0;
  goto LAB_1495a493a;
LAB_1495a498b:
  uVar25 = uVar25 + 1;
  plVar11 = plVar11 + 4;
  uVar4 = uVar27;
  if (uVar25 == uVar27) goto LAB_1495a4c16;
  goto LAB_1495a4961;
LAB_1495a4d36:
  plVar17 = local_120;
  if (puVar12 == (undefined8 *)0x0) goto LAB_1495a5051;
  if ((byte *)*puVar12 == pbVar29) {
    *puVar12 = 0;
    goto LAB_1495a5051;
  }
  puVar12 = (undefined8 *)puVar12[3];
  goto LAB_1495a4d36;
LAB_1495a5151:
  pcVar30 = "no such column";
  if (local_130 == (byte *)0x0) {
    if ((local_140[4] & 0x40) != 0) {
      if (*(char *)(local_d8 + 0xb5) == '\0') {
        iVar7 = 0x1e;
        uVar27 = (uint)*(undefined8 *)(local_d8 + 0x30);
        if ((((*(byte *)((longlong)local_128 + 0x2a) & 1) == 0) ||
            (iVar7 = 0x1d, (uVar27 & 0x50000001) != 0x40000001)) && ((uVar27 >> iVar7 & 1) == 0))
        goto LAB_1495a5178;
      }
      FUN_14955599e(0x1c,"double-quoted string literal: \"%w\"",pbVar18);
      *local_140 = 0x73;
      local_140[0x40] = 0;
      local_140[0x41] = 0;
      local_140[0x42] = 0;
      local_140[0x43] = 0;
      local_140[0x44] = 0;
      local_140[0x45] = 0;
      local_140[0x46] = 0;
      local_140[0x47] = 0;
LAB_1495a532c:
      cVar5 = '\x01';
      goto LAB_1495a4290;
    }
LAB_1495a5178:
    iVar7 = FUN_14958ac94(local_140);
    cVar5 = '\x01';
    if (iVar7 != 0) goto LAB_1495a4290;
    plVar19 = (longlong *)0x0;
  }
  else {
    plVar19 = (longlong *)0x0;
  }
LAB_1495a53df:
  plVar11 = local_120;
  if (local_100 == (byte *)0x0) {
    if (local_130 == (byte *)0x0) {
      pcVar23 = "%s: %s";
      pbVar31 = pbVar18;
    }
    else {
      pcVar23 = "%s: %s.%s";
      pbVar31 = local_130;
      local_158 = pbVar18;
    }
  }
  else {
    local_158 = local_130;
    pcVar23 = "%s: %s.%s.%s";
    pbVar31 = local_100;
    local_150 = pbVar18;
  }
  FUN_14955a364(local_120,pcVar23,pcVar30,pbVar31);
  *(undefined1 *)((longlong)plVar11 + 0x1d) = 1;
  *(int *)((longlong)local_128 + 0x24) = *(int *)((longlong)local_128 + 0x24) + 1;
  bVar34 = false;
LAB_1495a4daf:
  plVar11 = local_128;
  pbVar18 = local_140;
  bVar2 = local_141;
  uVar27 = (uint)*(short *)(local_140 + 0x30);
  if ((-1 < *(short *)(local_140 + 0x30)) && (local_138 != (int *)0x0)) {
    lVar28 = *(longlong *)local_d0;
    if (((*(byte *)(lVar28 + 0x40) & 0x60) == 0) ||
       ((*(byte *)(*(longlong *)(lVar28 + 8) + 0x1c + (ulonglong)uVar27 * 0x20) & 0x60) == 0)) {
      uVar25 = 0x3f;
      if ((int)uVar27 < 0x3f) {
        uVar25 = uVar27;
      }
      *(ulonglong *)(local_138 + 0x16) =
           *(ulonglong *)(local_138 + 0x16) | 1L << ((byte)uVar25 & 0x3f);
    }
    else {
      uVar22 = ~(-1L << ((byte)*(short *)(lVar28 + 0x46) & 0x3f));
      if (0x3f < *(short *)(lVar28 + 0x46)) {
        uVar22 = 0xffffffffffffffff;
      }
      *(ulonglong *)(local_138 + 0x16) = uVar22;
    }
  }
  if (*(longlong *)(local_140 + 0x10) != 0) {
    FUN_14958288e(local_d8);
  }
  pbVar18[0x10] = 0;
  pbVar18[0x11] = 0;
  pbVar18[0x12] = 0;
  pbVar18[0x13] = 0;
  pbVar18[0x14] = 0;
  pbVar18[0x15] = 0;
  pbVar18[0x16] = 0;
  pbVar18[0x17] = 0;
  if (*(longlong *)(pbVar18 + 0x18) != 0) {
    FUN_14958288e(local_d8);
  }
  pbVar18[0x18] = 0;
  pbVar18[0x19] = 0;
  pbVar18[0x1a] = 0;
  pbVar18[0x1b] = 0;
  pbVar18[0x1c] = 0;
  pbVar18[0x1d] = 0;
  pbVar18[0x1e] = 0;
  pbVar18[0x1f] = 0;
  *pbVar18 = bVar2;
  pbVar18[6] = pbVar18[6] | 0x80;
  cVar5 = '\x02';
  plVar17 = local_120;
  if (bVar34) {
LAB_1495a5051:
    pbVar18 = local_140;
    if ((((local_140[6] & 0x40) == 0) && (*(longlong *)(*plVar17 + 0x1d0) != 0)) && (local_108 != 0)
       ) {
      iVar7 = -1;
      plVar21 = (longlong *)(*(longlong *)(*plVar17 + 0x20) + 0x18);
      do {
        iVar7 = iVar7 + 1;
        lVar28 = *plVar21;
        plVar21 = plVar21 + 4;
      } while (lVar28 != local_108);
      plVar21 = local_c0;
      if (*local_140 == 0x4d) {
LAB_1495a50a8:
        puVar12 = (undefined8 *)*plVar21;
        if (puVar12 != (undefined8 *)0x0) {
          lVar28 = (longlong)*(short *)(local_140 + 0x30);
          if ((*(short *)(local_140 + 0x30) < 0) &&
             (lVar28 = (longlong)*(short *)((longlong)puVar12 + 0x44), lVar28 < 0)) {
            pcVar30 = "ROWID";
          }
          else {
            pcVar30 = *(char **)(lVar28 * 0x20 + puVar12[1]);
          }
          iVar7 = FUN_1495a6761(plVar17,*puVar12,pcVar30,iVar7);
          if (iVar7 == 2) {
            *pbVar18 = 0x77;
          }
        }
      }
      else {
        lVar28 = (longlong)*(int *)plVar19[1];
        if (0 < lVar28) {
          plVar21 = (longlong *)((int *)plVar19[1] + 10);
          do {
            if (*(int *)local_f0 == *(int *)((longlong)plVar21 + 0x24)) goto LAB_1495a50a8;
            plVar21 = plVar21 + 0xe;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
        }
      }
    }
    *(int *)(plVar11 + 4) = (int)plVar11[4] + 1;
    cVar5 = '\x01';
    while (plVar11 != plVar19) {
      plVar11 = (longlong *)plVar11[3];
      *(int *)(plVar11 + 4) = (int)plVar11[4] + 1;
    }
  }
  goto LAB_1495a4290;
}



// FUNCTION 1495a5b55 FUN_1495a5b55 body=1508 status=ok
// SIG undefined FUN_1495a5b55(void)

int FUN_1495a5b55(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  int *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  code *local_88;
  code *local_80;
  undefined8 local_78;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar10 = 1;
  if ((*(uint *)(param_2 + 4) & 4) == 0) {
    plVar11 = (longlong *)*param_1;
    lVar13 = *plVar11;
    if ((*(uint *)(param_2 + 4) & 0x40) == 0) {
      FUN_1495a68fc(plVar11,param_2);
      iVar10 = 2;
      if ((int)plVar11[6] == 0) {
        iVar10 = 2 - (uint)(*(char *)(lVar13 + 0x61) == '\0');
      }
    }
    else {
      lVar9 = *(longlong *)(param_2 + 0x50);
      if (param_2 != 0) {
        local_f0 = 0;
        lVar12 = param_2;
        local_f8 = plVar11;
        local_e0 = *(longlong *)(param_2 + 0x50);
        local_d8 = param_1[5];
        do {
          *(byte *)(lVar12 + 4) = *(byte *)(lVar12 + 4) | 4;
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_a0 = 0;
          local_c8 = local_f8;
          local_98 = lVar12;
          iVar1 = FUN_1495a4109(&local_c8,*(undefined8 *)(lVar12 + 0x60));
          iVar10 = 2;
          if (iVar1 != 0) goto LAB_1495a6043;
          if ((*(byte *)(lVar12 + 6) & 1) != 0) {
            *(undefined8 *)(*(longlong *)(*(longlong *)(lVar12 + 0x28) + 0x30) + 0x48) =
                 *(undefined8 *)(lVar12 + 0x48);
            *(undefined8 *)(lVar12 + 0x48) = 0;
          }
          piVar3 = *(int **)(lVar12 + 0x28);
          iVar10 = *piVar3;
          lVar9 = local_d8;
          if (0 < iVar10) {
            lVar8 = 0;
            do {
              plVar11 = local_f8;
              lVar6 = *(longlong *)(piVar3 + lVar8 * 0x1c + 0xc);
              if ((lVar6 != 0) && ((*(byte *)(lVar6 + 4) & 4) == 0)) {
                iVar1 = 0;
                if (lVar9 != 0) {
                  iVar1 = 0;
                  lVar5 = lVar9;
                  do {
                    iVar1 = iVar1 + *(int *)(lVar5 + 0x20);
                    lVar5 = *(longlong *)(lVar5 + 0x18);
                  } while (lVar5 != 0);
                }
                lVar5 = local_f8[0x2b];
                if (*(longlong *)(piVar3 + lVar8 * 0x1c + 6) != 0) {
                  local_f8[0x2b] = *(longlong *)(piVar3 + lVar8 * 0x1c + 6);
                  lVar6 = *(longlong *)(piVar3 + lVar8 * 0x1c + 0xc);
                }
                local_88 = FUN_1495a4209;
                local_80 = FUN_1495a5b55;
                local_78 = 0;
                local_90 = local_f8;
                local_68 = lVar9;
                FUN_14959fb62(&local_90,lVar6);
                plVar11[0x2b] = lVar5;
                if ((int)plVar11[6] != 0) {
                  iVar10 = 2;
                  goto LAB_1495a6043;
                }
                iVar10 = 2;
                lVar9 = local_d8;
                if (*(char *)(lVar13 + 0x61) != '\0') goto LAB_1495a6043;
                for (; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x18)) {
                  iVar1 = iVar1 - *(int *)(lVar9 + 0x20);
                }
                piVar3[lVar8 * 0x1c + 0x12] =
                     (piVar3[lVar8 * 0x1c + 0x12] & 0xfffffff7U) + (uint)(iVar1 != 0) * 8;
                piVar3 = *(int **)(lVar12 + 0x28);
                iVar10 = *piVar3;
                lVar9 = local_d8;
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < iVar10);
          }
          iVar10 = 2;
          local_a0 = CONCAT44(local_a0._4_4_,0x4001);
          local_c0 = *(undefined8 *)(lVar12 + 0x28);
          piVar3 = *(int **)(lVar12 + 0x20);
          uVar2 = 0x4001;
          local_b0 = lVar9;
          if ((piVar3 != (int *)0x0) && (0 < *piVar3)) {
            piVar4 = piVar3 + 2;
            lVar9 = 0;
            do {
              iVar1 = FUN_1495a4109(&local_c8,*(undefined8 *)piVar4);
              if (iVar1 != 0) goto LAB_1495a6043;
              lVar9 = lVar9 + 1;
              piVar4 = piVar4 + 8;
            } while (lVar9 < *piVar3);
            uVar2 = (uint)local_a0;
          }
          local_a0 = CONCAT44(local_a0._4_4_,uVar2) & 0xffffffffffffbfff;
          piVar3 = *(int **)(lVar12 + 0x38);
          if ((piVar3 == (int *)0x0) && ((uVar2 & 0x10) == 0)) {
            local_a0 = CONCAT44(local_a0._4_4_,uVar2) & 0xffffffffffffbfee;
          }
          else {
            *(uint *)(lVar12 + 4) = uVar2 & 0x1000 | *(uint *)(lVar12 + 4) | 8;
          }
          if (*(longlong *)(lVar12 + 0x40) != 0 && piVar3 == (int *)0x0) {
            pcVar7 = "a GROUP BY clause is required before HAVING";
LAB_1495a609f:
            FUN_14955a364(local_f8,pcVar7);
            goto LAB_1495a6043;
          }
          uStack_b8 = *(undefined8 *)(lVar12 + 0x20);
          local_a0 = local_a0 | 0x80;
          iVar1 = FUN_1495a4109(&local_c8);
          if ((iVar1 != 0) ||
             (iVar1 = FUN_1495a4109(&local_c8,*(undefined8 *)(lVar12 + 0x30)), iVar1 != 0))
          goto LAB_1495a6043;
          piVar4 = *(int **)(lVar12 + 0x28);
          iVar1 = *piVar4;
          local_e8 = lVar13;
          local_d0 = piVar3;
          if (0 < iVar1) {
            lVar9 = 0;
            do {
              if ((((*(byte *)(piVar4 + lVar9 * 0x1c + 0x12) & 4) != 0) &&
                  (piVar3 = *(int **)(piVar4 + lVar9 * 0x1c + 0x1a), piVar3 != (int *)0x0)) &&
                 (0 < *piVar3)) {
                piVar4 = piVar3 + 2;
                lVar13 = 0;
                do {
                  iVar1 = FUN_1495a4109(&local_c8,*(undefined8 *)piVar4);
                  if (iVar1 != 0) goto LAB_1495a6043;
                  lVar13 = lVar13 + 1;
                  piVar4 = piVar4 + 8;
                } while (lVar13 < *piVar3);
                piVar4 = *(int **)(lVar12 + 0x28);
                iVar1 = *piVar4;
                lVar13 = local_e8;
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < iVar1);
          }
          piVar3 = local_d0;
          local_b0 = 0;
          local_a0 = local_a0 | 0x4001;
          if ((*(byte *)(lVar12 + 6) & 1) != 0) {
            lVar9 = *(longlong *)(*(longlong *)(lVar12 + 0x28) + 0x30);
            *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(lVar9 + 0x48);
            *(undefined8 *)(lVar9 + 0x48) = 0;
          }
          if ((((local_e0 == 0) || ((int)local_f0 != 0)) &&
              (iVar1 = FUN_1495a6a3c(&local_c8,lVar12,*(undefined8 *)(lVar12 + 0x48),"ORDER"),
              iVar1 != 0)) || (*(char *)(lVar13 + 0x61) != '\0')) goto LAB_1495a6043;
          local_a0 = local_a0 & 0xffffffffffffbfff;
          if (piVar3 != (int *)0x0) {
            iVar1 = FUN_1495a6a3c(&local_c8,lVar12,piVar3,"GROUP");
            if ((iVar1 != 0) || (*(char *)(lVar13 + 0x61) != '\0')) goto LAB_1495a6043;
            iVar1 = *piVar3;
            if (0 < iVar1) {
              plVar11 = (longlong *)(piVar3 + 2);
              do {
                if ((*(byte *)(*plVar11 + 4) & 0x10) != 0) {
                  pcVar7 = "aggregate functions are not allowed in the GROUP BY clause";
                  goto LAB_1495a609f;
                }
                plVar11 = plVar11 + 4;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
          }
          if (1 < *(byte *)((longlong)local_f8 + 0x114)) {
            for (lVar13 = *(longlong *)(lVar12 + 0x78); lVar13 != 0;
                lVar13 = *(longlong *)(lVar13 + 0x40)) {
              piVar3 = *(int **)(lVar13 + 0x18);
              if ((piVar3 != (int *)0x0) && (0 < *piVar3)) {
                piVar4 = piVar3 + 2;
                lVar9 = 0;
                do {
                  iVar1 = FUN_1495a4109(&local_c8,*(undefined8 *)piVar4);
                  if (iVar1 != 0) goto LAB_1495a6043;
                  lVar9 = lVar9 + 1;
                  piVar4 = piVar4 + 8;
                } while (lVar9 < *piVar3);
              }
              piVar3 = *(int **)(lVar13 + 0x10);
              if ((piVar3 != (int *)0x0) && (0 < *piVar3)) {
                piVar4 = piVar3 + 2;
                lVar9 = 0;
                do {
                  iVar1 = FUN_1495a4109(&local_c8,*(undefined8 *)piVar4);
                  if (iVar1 != 0) goto LAB_1495a6043;
                  lVar9 = lVar9 + 1;
                  piVar4 = piVar4 + 8;
                } while (lVar9 < *piVar3);
              }
            }
          }
          if ((*(longlong *)(lVar12 + 0x58) != 0) &&
             (**(int **)(lVar12 + 0x20) != **(int **)(*(longlong *)(lVar12 + 0x58) + 0x20))) {
            FUN_1495a6c5b(local_f8);
            goto LAB_1495a6043;
          }
          lVar12 = *(longlong *)(lVar12 + 0x50);
          local_f0 = (ulonglong)((int)local_f0 + 1);
          lVar9 = local_e0;
          plVar11 = local_f8;
          lVar13 = local_e8;
        } while (lVar12 != 0);
      }
      if (lVar9 != 0) {
        iVar1 = FUN_1495a6ca4(plVar11,param_2);
        iVar10 = 2;
        if (iVar1 != 0) goto LAB_1495a6043;
      }
      iVar10 = 1;
    }
  }
LAB_1495a6043:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar10;
}



// FUNCTION 1495a613a FUN_1495a613a body=156 status=ok
// SIG undefined FUN_1495a613a(void)

int FUN_1495a613a(char *param_1)

{
  char *_Str;
  size_t sVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = -1.0;
  iVar2 = -1;
  if (*param_1 == -0x6a) {
    _Str = *(char **)(param_1 + 8);
    uVar3 = 0;
    if (_Str != (char *)0x0) {
      sVar1 = strlen(_Str);
      uVar3 = (uint)sVar1 & 0x3fffffff;
    }
    FUN_14956c0e2(_Str,&local_28,uVar3,1);
    if (local_28 <= 1.0) {
      iVar2 = (int)(local_28 * 134217728.0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a61d7 FUN_1495a61d7 body=579 status=ok
// SIG undefined FUN_1495a61d7(void)

void FUN_1495a61d7(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_3 == 0) || ((char)param_3[4] != '\0')) {
    FUN_14959ab75(param_1,param_3,param_2);
    cVar2 = (char)param_3[4];
  }
  else {
    lVar3 = FUN_1495a6849(param_1,param_2);
    if (lVar3 == 0) goto LAB_1495a62d7;
    lVar5 = 0;
    lVar4 = FUN_1495a22be(*param_1,*(undefined8 *)(lVar3 + 0x10),0);
    param_3[2] = lVar4;
    lVar4 = FUN_1495a22be(*param_1,*(undefined8 *)(lVar3 + 0x18),0);
    param_3[3] = lVar4;
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      lVar5 = FUN_1495a1c89(*param_1,*(longlong *)(lVar3 + 0x28),0,0);
    }
    param_3[5] = lVar5;
    if (*(longlong *)(lVar3 + 0x30) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_1495a1c89(*param_1,*(longlong *)(lVar3 + 0x30),0,0);
    }
    param_3[6] = lVar4;
    *(undefined1 *)((longlong)param_3 + 0x21) = *(undefined1 *)(lVar3 + 0x21);
    *(undefined1 *)((longlong)param_3 + 0x22) = *(undefined1 *)(lVar3 + 0x22);
    cVar2 = *(char *)(lVar3 + 0x20);
    *(char *)(param_3 + 4) = cVar2;
    *(undefined1 *)((longlong)param_3 + 0x24) = *(undefined1 *)(lVar3 + 0x24);
  }
  if (((cVar2 == 'Y') && ((param_3[5] != 0 || (param_3[6] != 0)))) &&
     (((int *)param_3[3] == (int *)0x0 || (*(int *)param_3[3] != 1)))) {
    pcVar6 = "RANGE with offset PRECEDING/FOLLOWING requires one ORDER BY expression";
LAB_1495a63c2:
    FUN_14955a364(param_1,pcVar6);
  }
  else if ((*(byte *)(param_4 + 6) & 1) != 0) {
    if (param_3[9] != 0) {
      pcVar6 = "FILTER clause may only be used with aggregate window functions";
      goto LAB_1495a63c2;
    }
    uVar1 = *param_1;
    lVar3 = 0x10;
    do {
      if (*(longlong *)(param_4 + 0x38) == *(longlong *)("ntile" + lVar3 + 2)) {
        if (param_3[5] != 0) {
          FUN_14958288e(uVar1);
        }
        if (param_3[6] != 0) {
          FUN_14958288e(uVar1);
        }
        param_3[5] = 0;
        param_3[6] = 0;
        cVar2 = (&UNK_14bd46abc)[lVar3];
        *(undefined *)(param_3 + 4) = (&UNK_14bd46ab8)[lVar3];
        *(char *)((longlong)param_3 + 0x21) = cVar2;
        *(undefined1 *)((longlong)param_3 + 0x22) =
             *(undefined1 *)((longlong)&PTR_s_row_number_14bd46ac0 + lVar3);
        *(undefined1 *)((longlong)param_3 + 0x24) = 0;
        if (cVar2 == 'V') {
          local_48 = &DAT_149e377d0;
          local_40 = 1;
          lVar3 = FUN_14958f7cb(uVar1,0x98,&local_48,0);
          param_3[5] = lVar3;
        }
        break;
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != 0xd0);
  }
  param_3[10] = param_4;
LAB_1495a62d7:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495a641b FUN_1495a641b body=344 status=ok
// SIG undefined FUN_1495a641b(void)

undefined8 FUN_1495a641b(longlong param_1,byte *param_2,byte *param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  byte *pbVar11;
  longlong lVar12;
  
  if ((*(uint *)(param_1 + 0x14) & 3) != 2) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  for (lVar12 = 0; (*(char *)(lVar2 + lVar12) != '\0' && (*(char *)(lVar2 + lVar12) != '.'));
      lVar12 = lVar12 + 1) {
  }
  if (param_4 != 0) {
    if (lVar2 == 0) {
      return 0;
    }
    if (lVar12 != 0) {
      uVar10 = lVar12 + 1;
      lVar7 = 0;
      do {
        if ((ulonglong)*(byte *)(lVar2 + lVar7) == 0) {
          cVar6 = (&DAT_14bd3ff30)[*(byte *)(param_4 + lVar7)];
          cVar5 = '\0';
LAB_1495a6499:
          if (cVar5 != cVar6) {
            return 0;
          }
          break;
        }
        cVar5 = (&DAT_14bd3ff30)[*(byte *)(lVar2 + lVar7)];
        cVar6 = (&DAT_14bd3ff30)[*(byte *)(param_4 + lVar7)];
        if (cVar5 != cVar6) goto LAB_1495a6499;
        uVar3 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar3;
        lVar7 = lVar7 + 1;
      } while (1 < (int)uVar3);
    }
    if (*(char *)(param_4 + lVar12) != '\0') {
      return 0;
    }
  }
  pbVar11 = (byte *)(lVar2 + lVar12 + 1);
  uVar10 = 1;
  for (pbVar4 = (byte *)(lVar2 + lVar12 + 2); (pbVar4[-1] != 0 && (pbVar4[-1] != 0x2e));
      pbVar4 = pbVar4 + 1) {
    uVar10 = uVar10 + 1;
  }
  if (param_3 != (byte *)0x0) {
    if (pbVar11 == (byte *)0x0) {
      return 0;
    }
    if (uVar10 != 1) {
      uVar8 = uVar10 & 0xffffffff;
      pbVar9 = param_3;
      do {
        if ((ulonglong)*pbVar11 == 0) {
          cVar6 = (&DAT_14bd3ff30)[*pbVar9];
          cVar5 = '\0';
LAB_1495a6568:
          if (cVar5 != cVar6) {
            return 0;
          }
          break;
        }
        cVar5 = (&DAT_14bd3ff30)[*pbVar11];
        cVar6 = (&DAT_14bd3ff30)[*pbVar9];
        if (cVar5 != cVar6) goto LAB_1495a6568;
        pbVar11 = pbVar11 + 1;
        pbVar9 = pbVar9 + 1;
        uVar3 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar3;
      } while (1 < (int)uVar3);
    }
    if (param_3[uVar10 - 1] != 0) {
      return 0;
    }
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 == *param_2) {
      if ((ulonglong)bVar1 == 0) {
        return 1;
      }
    }
    else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*param_2]) {
      return 0;
    }
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 1;
  } while( true );
}



// FUNCTION 1495a6573 FUN_1495a6573 body=351 status=ok
// SIG undefined FUN_1495a6573(void)

void FUN_1495a6573(undefined8 *param_1,longlong param_2,int param_3,char *param_4,char *param_5,
                  uint param_6)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_2 + 8 + (longlong)param_3 * 0x20);
  if (lVar5 != 0) {
    uVar1 = *param_1;
    puVar3 = (undefined8 *)FUN_1495a1c89(uVar1,lVar5,0,0);
    if (puVar3 != (undefined8 *)0x0) {
      if ((0 < (int)param_6) && (*param_5 != 'G')) {
        local_68 = 0;
        local_48 = 0;
        local_58 = 0;
        uStack_50 = 0;
        puStack_60 = &LAB_1495a6753;
        uStack_40 = (ulonglong)param_6;
        FUN_14959fa98(&local_68,puVar3);
      }
      if (*param_4 == 'o') {
        puVar3 = (undefined8 *)FUN_1495a66d3(param_1,puVar3,*(undefined8 *)(param_4 + 8));
      }
      param_4[7] = param_4[7] | 8;
      if (param_4 != (char *)0x0) {
        FUN_14958288e(uVar1,param_4);
      }
      puVar6 = puVar3;
      pcVar7 = param_4;
      for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined8 *)pcVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        pcVar7 = pcVar7 + 8;
      }
      uVar2 = *(uint *)(param_4 + 4);
      if (((uVar2 >> 10 & 1) == 0) && (*(longlong *)(param_4 + 8) != 0)) {
        uVar4 = FUN_149559683(uVar1);
        *(undefined8 *)(param_4 + 8) = uVar4;
        uVar2 = *(uint *)(param_4 + 4) | 0x10000;
        *(uint *)(param_4 + 4) = uVar2;
      }
      if (((uVar2 >> 0x18 & 1) != 0) && (*(longlong *)(param_4 + 0x40) != 0)) {
        *(char **)(*(longlong *)(param_4 + 0x40) + 0x70) = param_4;
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_14955d65a(uVar1,puVar3);
      }
    }
  }
  param_4[6] = param_4[6] | 0x40;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a66d3 FUN_1495a66d3 body=127 status=ok
// SIG undefined FUN_1495a66d3(void)

longlong FUN_1495a66d3(undefined8 *param_1,longlong param_2,char *param_3)

{
  size_t sVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  char *local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
    local_20 = (uint)sVar1 & 0x3fffffff;
    if ((sVar1 & 0x3fffffff) != 0) {
      lVar2 = FUN_14958f7cb(*param_1,0x6f,&local_28,0);
      if (lVar2 != 0) {
        *(longlong *)(lVar2 + 0x10) = param_2;
        *(byte *)(lVar2 + 5) = *(byte *)(lVar2 + 5) | 0x11;
        param_2 = lVar2;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a6761 FUN_1495a6761 body=232 status=ok
// SIG undefined FUN_1495a6761(void)

uint FUN_1495a6761(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar1 = *param_1;
  uVar3 = 0;
  if (*(char *)(lVar1 + 0xb5) == '\0') {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + (longlong)param_4 * 0x20);
    uVar3 = (**(code **)(lVar1 + 0x1d0))
                      (*(undefined8 *)(lVar1 + 0x1d8),0x14,param_2,param_3,uVar2,param_1[0x2b]);
    if (uVar3 == 1) {
      uVar5 = FUN_1495558d3("%s.%s",param_2,param_3);
      if ((param_4 != 0) || (2 < *(int *)(lVar1 + 0x28))) {
        uVar5 = FUN_1495558d3("%s.%z",uVar2,uVar5);
      }
      FUN_14955a364(param_1,"access to %z is prohibited",uVar5);
      uVar4 = 0x17;
    }
    else {
      if ((uVar3 & 0xfffffffd) == 0) {
        return uVar3;
      }
      FUN_14955a364(param_1,"authorizer malfunction");
      uVar4 = 1;
    }
    *(undefined4 *)(param_1 + 3) = uVar4;
  }
  return uVar3;
}



// FUNCTION 1495a6849 FUN_1495a6849 body=92 status=ok
// SIG undefined FUN_1495a6849(void)

longlong * FUN_1495a6849(undefined8 param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  
joined_r0x0001495a6851:
  if (param_2 == (longlong *)0x0) {
    FUN_14955a364(param_1,"no such window: %s");
    return (longlong *)0x0;
  }
  lVar2 = 0;
  do {
    bVar1 = *(byte *)(*param_2 + lVar2);
    if (bVar1 == *(byte *)(param_3 + lVar2)) {
      if ((ulonglong)bVar1 == 0) {
        return param_2;
      }
    }
    else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(param_3 + lVar2)]) break;
    lVar2 = lVar2 + 1;
  } while( true );
  param_2 = (longlong *)param_2[8];
  goto joined_r0x0001495a6851;
}



// FUNCTION 1495a68fc FUN_1495a68fc body=319 status=ok
// SIG undefined FUN_1495a68fc(void)

void FUN_1495a68fc(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  undefined2 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(*param_1 + 0x61) == '\0') && ((*(byte *)(param_2 + 4) & 0x80) == 0)) {
    local_50 = (code *)&LAB_1495a70d5;
    local_58 = param_1;
    if (*(char *)((longlong)param_1 + 0x22) != '\0') {
      local_48 = FUN_1495a70d8;
      local_40 = (code *)0x0;
      FUN_14959fb62(&local_58,param_2);
    }
    local_48 = FUN_1495a72b5;
    local_40 = (code *)&LAB_1495a8175;
    local_34 = 0;
    FUN_14959fb62(&local_58,param_2);
    if (((int)param_1[6] == 0) && (*(char *)(*param_1 + 0x61) == '\0')) {
      local_50 = FUN_1495a4209;
      local_48 = FUN_1495a5b55;
      local_40 = (code *)0x0;
      local_58 = param_1;
      local_30 = param_3;
      FUN_14959fb62(&local_58,param_2);
      if (((int)param_1[6] == 0) && (*(char *)(*param_1 + 0x61) == '\0')) {
        local_48 = (code *)&LAB_1495a68f9;
        local_40 = FUN_1495a93b1;
        local_50 = (code *)&LAB_1495a70d5;
        local_58 = param_1;
        FUN_14959fb62(&local_58,param_2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a6a3c FUN_1495a6a3c body=542 status=ok
// SIG undefined FUN_1495a6a3c(void)

undefined8 FUN_1495a6a3c(undefined8 *param_1,longlong param_2,int *param_3,char *param_4)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 *local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    local_b0 = *param_1;
    local_a8 = param_1;
    if (0 < *param_3) {
      local_b4 = **(undefined4 **)(param_2 + 0x20);
      plVar6 = (longlong *)(param_3 + 2);
      iVar5 = 0;
      do {
        lVar1 = *plVar6;
        lVar7 = lVar1;
        while (lVar7 != 0) {
          if ((*(uint *)(lVar7 + 4) & 0x41000) == 0) goto LAB_1495a6ab6;
          if ((*(uint *)(lVar7 + 4) >> 0x12 & 1) == 0) {
            plVar8 = (longlong *)(lVar7 + 0x10);
          }
          else {
            plVar8 = (longlong *)(*(longlong *)(lVar7 + 0x20) + 8);
          }
          lVar7 = *plVar8;
        }
        lVar7 = 0;
LAB_1495a6ab6:
        if ((*param_4 == 'G') ||
           (local_9c = FUN_1495a941e(*(undefined8 *)(param_2 + 0x20),lVar7), (int)local_9c < 1)) {
          iVar2 = FUN_1495a94a2(lVar7,&local_9c);
          if (iVar2 != 0) {
            if (local_9c - 0x10000 < 0xffff0001) {
              local_c8 = local_b4;
              FUN_14955a364(local_b0,"%r %s BY term out of range - should be between 1 and %d",
                            iVar5 + 1,param_4);
              goto LAB_1495a6c20;
            }
            goto LAB_1495a6bd0;
          }
          *(undefined2 *)(plVar6 + 3) = 0;
          iVar2 = FUN_1495a4109(local_a8,lVar1);
          if (iVar2 != 0) {
LAB_1495a6c20:
            uVar4 = 1;
            goto LAB_1495a6c25;
          }
          piVar3 = *(int **)(param_2 + 0x20);
          if (0 < *piVar3) {
            lVar7 = 8;
            lVar9 = 0;
            do {
              iVar2 = FUN_14959fe84(0,lVar1,*(undefined8 *)((longlong)piVar3 + lVar7),0xffffffff);
              if (iVar2 == 0) {
                if (*(longlong *)(param_2 + 0x70) != 0) {
                  local_98 = 0;
                  local_88 = 0;
                  uStack_80 = 0;
                  local_78 = 0;
                  puStack_90 = &LAB_1495a9609;
                  local_70 = param_2;
                  if (lVar1 != 0) {
                    FUN_14959fa98(&local_98,lVar1);
                  }
                }
                *(short *)(plVar6 + 3) = (short)lVar9 + 1;
              }
              lVar9 = lVar9 + 1;
              piVar3 = *(int **)(param_2 + 0x20);
              lVar7 = lVar7 + 0x20;
            } while (lVar9 < *piVar3);
          }
        }
        else {
LAB_1495a6bd0:
          *(short *)(plVar6 + 3) = (short)local_9c;
        }
        iVar5 = iVar5 + 1;
        plVar6 = plVar6 + 4;
      } while (iVar5 < *param_3);
    }
    uVar4 = FUN_1495a9529(local_b0,param_2,param_3,param_4);
  }
LAB_1495a6c25:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a6c5b FUN_1495a6c5b body=73 status=ok
// SIG undefined FUN_1495a6c5b(void)

void FUN_1495a6c5b(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  
  if ((param_2[5] & 2U) == 0) {
    if ((byte)(*param_2 + 0x7bU) < 3) {
      pcVar1 = (&PTR_s_UNION_ALL_14bd4a128)[(byte)(*param_2 + 0x7bU)];
    }
    else {
      pcVar1 = "UNION";
    }
    FUN_14955a364(param_1,
                  "SELECTs to the left and right of %s do not have the same number of result columns"
                  ,pcVar1);
  }
  else {
    FUN_14955a364(param_1,"all VALUES must have the same number of terms");
  }
  return;
}



// FUNCTION 1495a6ca4 FUN_1495a6ca4 body=1072 status=ok
// SIG undefined FUN_1495a6ca4(void)

undefined8 FUN_1495a6ca4(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  int *piVar15;
  char *pcVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  int local_e8;
  longlong *local_d8;
  longlong local_d0;
  int local_c4;
  longlong local_c0;
  int *local_b8;
  int *local_b0;
  uint *local_a8;
  int local_9c;
  longlong *local_98;
  ulonglong local_90;
  int *piStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar2 = *(uint **)(param_2 + 0x48);
  if (puVar2 != (uint *)0x0) {
    local_d0 = *param_1;
    uVar7 = *puVar2;
    if (*(int *)(local_d0 + 0x84) < (int)uVar7) {
      FUN_14955a364(param_1,"too many terms in ORDER BY clause");
LAB_1495a6f75:
      uVar8 = 1;
      goto LAB_1495a6f33;
    }
    if (0 < (int)uVar7) {
      lVar10 = 0;
      do {
        pbVar1 = (byte *)((longlong)puVar2 + lVar10 + 0x1c);
        *pbVar1 = *pbVar1 & 0xfb;
        lVar10 = lVar10 + 0x20;
      } while ((ulonglong)uVar7 << 5 != lVar10);
    }
    *(undefined8 *)(param_2 + 0x58) = 0;
    for (; *(longlong *)(param_2 + 0x50) != 0; param_2 = *(longlong *)(param_2 + 0x50)) {
      *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x58) = param_2;
    }
    uVar7 = *puVar2;
    if (param_2 != 0) {
      local_a8 = puVar2 + 2;
      local_d8 = param_1;
      do {
        if ((int)uVar7 < 1) goto LAB_1495a6f31;
        piVar3 = *(int **)(param_2 + 0x20);
        local_c4 = 0;
        iVar12 = 0;
        puVar13 = local_a8;
        do {
          local_9c = -1;
          if ((puVar13[5] & 4) == 0) {
            pcVar16 = *(char **)puVar13;
            if (pcVar16 == (char *)0x0) {
              bVar4 = true;
            }
            else {
              do {
                bVar17 = (*(uint *)(pcVar16 + 4) & 0x41000) == 0;
                bVar4 = !bVar17;
                if (bVar17) goto LAB_1495a6da0;
                if ((*(uint *)(pcVar16 + 4) >> 0x12 & 1) == 0) {
                  pcVar16 = pcVar16 + 0x10;
                }
                else {
                  pcVar16 = (char *)(*(longlong *)(pcVar16 + 0x20) + 8);
                }
                pcVar16 = *(char **)pcVar16;
              } while (pcVar16 != (char *)0x0);
            }
            pcVar16 = (char *)0x0;
LAB_1495a6da0:
            iVar5 = FUN_1495a94a2(pcVar16,&local_9c);
            if (iVar5 == 0) {
              local_9c = FUN_1495a941e(piVar3,pcVar16);
              if (local_9c == 0) {
                bVar17 = 1 < *(byte *)((longlong)local_d8 + 0x114);
                pcVar9 = (char *)0x0;
                if (bVar17) {
                  pcVar9 = pcVar16;
                }
                if (!(bool)(bVar17 | bVar4)) {
                  pcVar9 = (char *)FUN_1495a1c89(local_d0,pcVar16,0,0);
                }
                iVar5 = local_9c;
                if (*(char *)(local_d0 + 0x61) == '\0') {
                  local_b0 = *(int **)(param_2 + 0x20);
                  uStack_68 = 0;
                  local_80 = 0;
                  uStack_78 = 0;
                  local_98 = local_d8;
                  local_90 = *(ulonglong *)(param_2 + 0x28);
                  local_70 = 0x81;
                  local_b8 = (int *)*local_d8;
                  local_c0 = CONCAT71(local_c0._1_7_,*(undefined1 *)((longlong)local_b8 + 0x65));
                  *(undefined1 *)((longlong)local_b8 + 0x65) = 1;
                  piStack_88 = local_b0;
                  iVar6 = FUN_1495a4109(&local_98,pcVar9);
                  *(undefined1 *)((longlong)local_b8 + 0x65) = (undefined1)local_c0;
                  iVar5 = 0;
                  if ((iVar6 == 0) && (iVar5 = 0, 0 < *local_b0)) {
                    piVar15 = local_b0 + 2;
                    lVar10 = 0;
                    do {
                      local_c0 = lVar10;
                      local_b8 = piVar15;
                      uVar7 = FUN_14959fe84(0,*(undefined8 *)piVar15);
                      if (uVar7 < 2) {
                        iVar5 = (int)local_c0 + 1;
                        break;
                      }
                      lVar10 = local_c0 + 1;
                      piVar15 = local_b8 + 8;
                      iVar5 = 0;
                    } while (lVar10 < *local_b0);
                  }
                }
                local_9c = iVar5;
                if ((*(byte *)((longlong)local_d8 + 0x114) < 2) && (pcVar9 != (char *)0x0)) {
                  FUN_14958288e(local_d0,pcVar9);
                }
              }
              if (0 < local_9c) goto LAB_1495a6dce;
              local_c4 = 1;
            }
            else {
              iVar5 = *piVar3;
              if ((local_9c < 1) || (iVar5 < local_9c)) {
                local_e8 = iVar5;
                FUN_14955a364(local_d8,"%r %s BY term out of range - should be between 1 and %d",
                              iVar12 + 1,"ORDER");
                goto LAB_1495a6f75;
              }
LAB_1495a6dce:
              iVar5 = local_9c;
              if (*(byte *)((longlong)local_d8 + 0x114) < 2) {
                local_98 = (longlong *)0x0;
                local_90 = local_90 & 0xffffffff00000000;
                lVar10 = FUN_14958f7cb(local_d0,0x98,&local_98);
                if (lVar10 == 0) goto LAB_1495a6f75;
                *(byte *)(lVar10 + 5) = *(byte *)(lVar10 + 5) | 4;
                *(int *)(lVar10 + 8) = iVar5;
                pcVar9 = *(char **)puVar13;
                puVar14 = puVar13;
                if (*(char **)puVar13 != pcVar16) {
                  do {
                    pcVar11 = pcVar9;
                    pcVar9 = *(char **)(pcVar11 + 0x10);
                  } while (*pcVar9 == 'o');
                  puVar14 = (uint *)(pcVar11 + 0x10);
                }
                *(longlong *)puVar14 = lVar10;
                if (!bVar4) {
                  FUN_14958288e(local_d0,pcVar16);
                }
                *(short *)(puVar13 + 6) = (short)iVar5;
              }
              *(byte *)(puVar13 + 5) = (byte)puVar13[5] | 4;
            }
            uVar7 = *puVar2;
            param_1 = local_d8;
          }
          iVar12 = iVar12 + 1;
          puVar13 = puVar13 + 8;
        } while (iVar12 < (int)uVar7);
        param_2 = *(longlong *)(param_2 + 0x58);
      } while ((param_2 != 0) && (local_c4 != 0));
    }
    uVar8 = 0;
    if ((int)uVar7 < 1) goto LAB_1495a6f33;
    iVar12 = 1;
    lVar10 = 0;
    do {
      if ((*(byte *)((longlong)puVar2 + lVar10 + 0x1c) & 4) == 0) {
        FUN_14955a364(param_1,"%r ORDER BY term does not match any column in the result set",iVar12)
        ;
        goto LAB_1495a6f75;
      }
      iVar12 = iVar12 + 1;
      lVar10 = lVar10 + 0x20;
    } while ((ulonglong)uVar7 << 5 != lVar10);
  }
LAB_1495a6f31:
  uVar8 = 0;
LAB_1495a6f33:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1495a70d8 FUN_1495a70d8 body=476 status=ok
// SIG undefined FUN_1495a70d8(void)

undefined8 FUN_1495a70d8(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar9 = 0;
  if ((*(longlong *)(param_2 + 0x50) != 0) &&
     (puVar3 = *(uint **)(param_2 + 0x48), param_2 != (char *)0x0 && puVar3 != (uint *)0x0)) {
    pcVar8 = param_2;
    do {
      if ((*pcVar8 != -0x78) && (*pcVar8 != -0x7b)) {
        iVar7 = *puVar3 + 1;
        puVar3 = puVar3 + (ulonglong)*puVar3 * 8 + -6;
        goto LAB_1495a718d;
      }
      pcVar8 = *(char **)(pcVar8 + 0x50);
    } while (pcVar8 != (char *)0x0);
  }
  goto LAB_1495a7121;
  while (lVar1 = *(longlong *)puVar3, puVar3 = puVar3 + -8, (*(byte *)(lVar1 + 5) & 1) == 0) {
LAB_1495a718d:
    iVar7 = iVar7 + -1;
    uVar9 = 0;
    if (iVar7 < 1) goto LAB_1495a7121;
  }
  plVar2 = (longlong *)*param_1;
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    puVar4 = (undefined8 *)FUN_145e3bd67(0x80);
  }
  else {
    puVar4 = (undefined8 *)FUN_14955d750(lVar1,0x80);
  }
  uVar9 = 2;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    local_a8 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a0 = puVar4;
    lVar5 = FUN_14958f2de(plVar2,0,0,0);
    if (lVar5 != 0) {
      pcVar8 = param_2;
      puVar10 = puVar4;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *(undefined8 *)pcVar8;
        pcVar8 = pcVar8 + 8;
        puVar10 = puVar10 + 1;
      }
      *(longlong *)(param_2 + 0x28) = lVar5;
      local_70 = 0;
      local_68 = 0;
      uVar9 = FUN_14958f7cb(lVar1,0xb1,&local_70,0);
      uVar9 = FUN_14958f62a(plVar2,0,uVar9);
      *(undefined8 *)(param_2 + 0x20) = uVar9;
      *param_2 = -0x78;
      param_2[0x30] = '\0';
      param_2[0x31] = '\0';
      param_2[0x32] = '\0';
      param_2[0x33] = '\0';
      param_2[0x34] = '\0';
      param_2[0x35] = '\0';
      param_2[0x36] = '\0';
      param_2[0x37] = '\0';
      puVar4[9] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      param_2[0x68] = '\0';
      param_2[0x69] = '\0';
      param_2[0x6a] = '\0';
      param_2[0x6b] = '\0';
      param_2[0x6c] = '\0';
      param_2[0x6d] = '\0';
      param_2[0x6e] = '\0';
      param_2[0x6f] = '\0';
      param_2[0x78] = '\0';
      param_2[0x79] = '\0';
      param_2[0x7a] = '\0';
      param_2[0x7b] = '\0';
      param_2[0x7c] = '\0';
      param_2[0x7d] = '\0';
      param_2[0x7e] = '\0';
      param_2[0x7f] = '\0';
      param_2[0x50] = '\0';
      param_2[0x51] = '\0';
      param_2[0x52] = '\0';
      param_2[0x53] = '\0';
      param_2[0x54] = '\0';
      param_2[0x55] = '\0';
      param_2[0x56] = '\0';
      param_2[0x57] = '\0';
      param_2[0x58] = '\0';
      param_2[0x59] = '\0';
      param_2[0x5a] = '\0';
      param_2[0x5b] = '\0';
      param_2[0x5c] = '\0';
      param_2[0x5d] = '\0';
      param_2[0x5e] = '\0';
      param_2[0x5f] = '\0';
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffefeff | 0x10000;
      *(undefined8 **)(puVar4[10] + 0x58) = puVar4;
      puVar4[0xc] = 0;
      uVar9 = 0;
    }
  }
LAB_1495a7121:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1495a72b5 FUN_1495a72b5 body=3775 status=ok
// SIG undefined FUN_1495a72b5(void)

undefined8 FUN_1495a72b5(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int *piVar14;
  longlong lVar15;
  byte *pbVar16;
  size_t sVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  char *pcVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  int *piVar26;
  int iVar27;
  byte *pbVar28;
  longlong lVar29;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  int *local_f0;
  int *local_e8;
  byte *local_e0;
  int *local_d8;
  int *local_d0;
  uint local_c4;
  int *local_c0;
  int local_b4;
  longlong *local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  int *local_98;
  longlong local_90;
  longlong local_88;
  int *local_80;
  longlong local_78;
  longlong *local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar5 = (longlong *)*param_1;
  lVar6 = *plVar5;
  uVar19 = *(uint *)(param_2 + 4);
  *(uint *)(param_2 + 4) = uVar19 | 0x40;
  if (*(char *)(lVar6 + 0x61) == '\0') {
    uVar11 = 1;
    if ((uVar19 & 0x40) != 0) goto LAB_1495a7301;
    if (*(short *)((longlong)param_1 + 0x24) != 0) {
      iVar10 = *(int *)((longlong)plVar5 + 0x84) + 1;
      *(int *)((longlong)plVar5 + 0x84) = iVar10;
      *(int *)(param_2 + 0x10) = iVar10;
    }
    piVar18 = *(int **)(param_2 + 0x20);
    piVar7 = *(int **)(param_2 + 0x28);
    lVar29 = *(longlong *)(param_2 + 0x68);
    if (lVar29 != 0) {
      *(longlong *)(lVar29 + 8) = plVar5[0x31];
      plVar5[0x31] = lVar29;
    }
    local_c0 = piVar7;
    FUN_1495a81ac(plVar5);
    piVar26 = piVar7 + 2;
    iVar10 = *piVar7;
    local_d8 = piVar18;
    local_80 = piVar26;
    if (0 < iVar10) {
      uVar24 = 0;
LAB_1495a73c6:
      if ((piVar26[0x10] & 0x20U) != 0) goto LAB_1495a74fc;
      plVar13 = (longlong *)*param_1;
      if ((int)plVar13[6] == 0) {
        local_a0 = uVar24;
        if (((*(longlong *)(piVar26 + 2) == 0) && (lVar29 = *(longlong *)(piVar26 + 4), lVar29 != 0)
            ) && ((int *)plVar13[0x31] != (int *)0x0)) {
          piVar7 = (int *)*plVar13;
          piVar14 = (int *)plVar13[0x31];
          do {
            local_f0 = piVar14;
            local_f8 = plVar13;
            local_e8 = piVar7;
            if (0 < (longlong)*local_f0) {
              lVar15 = 0;
LAB_1495a7528:
              local_100 = (longlong *)(local_f0 + lVar15 * 8 + 4);
              lVar25 = 0;
              do {
                bVar3 = *(byte *)(lVar29 + lVar25);
                bVar1 = *(byte *)(*(longlong *)(local_f0 + lVar15 * 8 + 4) + lVar25);
                if (bVar3 == bVar1) {
                  if ((ulonglong)bVar3 == 0) {
                    pcVar21 = (char *)local_100[3];
                    lVar15 = *(longlong *)(local_f0 + lVar15 * 8 + 4);
                    if (pcVar21 != (char *)0x0) goto LAB_1495a7ae4;
                    if ((piVar26[0x10] & 4U) != 0) {
                      pcVar21 = "\'%s\' is not a function";
                      lVar15 = lVar29;
                      goto LAB_1495a7ae4;
                    }
                    if (piVar7 == (int *)0x0) {
                      piVar14 = (int *)FUN_145e3bd67(0x80);
                    }
                    else {
                      piVar14 = (int *)FUN_14955d750(piVar7,0x80);
                    }
                    piVar18 = local_d8;
                    if (piVar14 == (int *)0x0) goto LAB_1495a7ac1;
                    piVar14[0x1c] = 0;
                    piVar14[0x1d] = 0;
                    piVar14[0x1e] = 0;
                    piVar14[0x1f] = 0;
                    piVar14[0x18] = 0;
                    piVar14[0x19] = 0;
                    piVar14[0x1a] = 0;
                    piVar14[0x1b] = 0;
                    piVar14[0x14] = 0;
                    piVar14[0x15] = 0;
                    piVar14[0x16] = 0;
                    piVar14[0x17] = 0;
                    piVar14[0x10] = 0;
                    piVar14[0x11] = 0;
                    piVar14[0x12] = 0;
                    piVar14[0x13] = 0;
                    piVar14[0xc] = 0;
                    piVar14[0xd] = 0;
                    piVar14[0xe] = 0;
                    piVar14[0xf] = 0;
                    piVar14[8] = 0;
                    piVar14[9] = 0;
                    piVar14[10] = 0;
                    piVar14[0xb] = 0;
                    piVar14[4] = 0;
                    piVar14[5] = 0;
                    piVar14[6] = 0;
                    piVar14[7] = 0;
                    piVar14[0] = 0;
                    piVar14[1] = 0;
                    piVar14[2] = 0;
                    piVar14[3] = 0;
                    *(int **)(piVar26 + 8) = piVar14;
                    piVar14[0xf] = 1;
                    uVar11 = FUN_149559683(piVar7,*local_100);
                    piVar7 = local_e8;
                    *(undefined8 *)piVar14 = uVar11;
                    *(undefined2 *)(piVar14 + 0x11) = 0xffff;
                    *(undefined2 *)((longlong)piVar14 + 0x4a) = 200;
                    piVar14[0x10] = piVar14[0x10] | 0x202;
                    local_d0 = piVar14;
                    pbVar16 = (byte *)FUN_1495a1fd1(local_e8,local_100[2]);
                    *(byte **)(piVar26 + 10) = pbVar16;
                    if (*(char *)((longlong)piVar7 + 0x61) != '\0') goto LAB_1495a72fc;
                    local_a8 = CONCAT71(local_a8._1_7_,*pbVar16) & 0xfffffffffffffffe;
                    local_e0 = pbVar16;
                    if ((*pbVar16 & 0xfe) != 0x84) {
                      if (2 < (uint)local_d0[0xf]) goto LAB_1495a813e;
                      local_100[3] = (longlong)"circular reference: %s";
                      local_e8 = (int *)local_f8[0x31];
                      local_f8[0x31] = (longlong)local_f0;
                      FUN_14959fb62(param_1);
                      goto LAB_1495a7a56;
                    }
                    local_e8 = *(int **)(pbVar16 + 0x28);
                    iVar10 = *local_e8;
                    if (iVar10 < 1) goto LAB_1495a79ef;
                    lVar29 = 0;
                    goto LAB_1495a745a;
                  }
                }
                else if ((&DAT_14bd3ff30)[bVar3] != (&DAT_14bd3ff30)[bVar1]) goto LAB_1495a7568;
                lVar25 = lVar25 + 1;
              } while( true );
            }
LAB_1495a7570:
            piVar14 = *(int **)(local_f0 + 2);
            piVar18 = local_d8;
          } while (*(int **)(local_f0 + 2) != (int *)0x0);
        }
        goto LAB_1495a7409;
      }
      goto LAB_1495a72fc;
    }
LAB_1495a7698:
    if ((((int)plVar5[6] == 0) && (*(char *)(lVar6 + 0x61) == '\0')) &&
       (iVar10 = FUN_1495a85d3(plVar5,param_2), iVar10 == 0)) {
      if ((longlong)*piVar18 < 1) {
        local_c4 = 0;
      }
      else {
        local_98 = piVar18 + 2;
        lVar29 = 0;
        local_c4 = 0;
        do {
          pcVar21 = *(char **)((longlong)piVar18 + lVar29 + 8);
          cVar2 = *pcVar21;
          if (cVar2 == -0x75) {
            cVar2 = **(char **)(pcVar21 + 0x18);
          }
          if (cVar2 == -0x4f) {
            local_a8 = (ulonglong)((uint)*(undefined8 *)(*plVar5 + 0x30) & 0x44);
            lVar29 = 0;
            local_f0 = (int *)0x0;
            goto LAB_1495a7b64;
          }
          local_c4 = local_c4 | *(uint *)(pcVar21 + 4);
          lVar29 = lVar29 + 0x20;
        } while ((longlong)*piVar18 * 0x20 != lVar29);
      }
      piVar18 = *(int **)(param_2 + 0x20);
      goto LAB_1495a7b0a;
    }
  }
  goto LAB_1495a72fc;
LAB_1495a7568:
  lVar15 = lVar15 + 1;
  if (lVar15 == *local_f0) goto LAB_1495a7570;
  goto LAB_1495a7528;
LAB_1495a745a:
  if ((*(longlong *)(local_e8 + lVar29 * 0x1c + 4) == 0) &&
     (*(longlong *)(local_e8 + lVar29 * 0x1c + 6) != 0)) {
    lVar15 = 0;
    do {
      bVar3 = *(byte *)(*(longlong *)(local_e8 + lVar29 * 0x1c + 6) + lVar15);
      piVar18 = local_d8;
      if (bVar3 == *(byte *)(*local_100 + lVar15)) {
        if ((ulonglong)bVar3 == 0) goto LAB_1495a74b2;
      }
      else if ((&DAT_14bd3ff30)[bVar3] != (&DAT_14bd3ff30)[*(byte *)(*local_100 + lVar15)]) break;
      lVar15 = lVar15 + 1;
    } while( true );
  }
  goto LAB_1495a7466;
LAB_1495a74b2:
  *(int **)(local_e8 + lVar29 * 0x1c + 10) = local_d0;
  *(byte *)(local_e8 + lVar29 * 0x1c + 0x12) = *(byte *)(local_e8 + lVar29 * 0x1c + 0x12) | 0x20;
  local_d0[0xf] = local_d0[0xf] + 1;
  pbVar16[5] = pbVar16[5] | 0x20;
  iVar10 = *local_e8;
LAB_1495a7466:
  lVar29 = lVar29 + 1;
  if (iVar10 <= lVar29) goto LAB_1495a79ef;
  goto LAB_1495a745a;
LAB_1495a79ef:
  if (2 < (uint)local_d0[0xf]) {
LAB_1495a813e:
    pcVar21 = "multiple references to recursive table: %s";
    plVar13 = local_f8;
    lVar15 = *local_100;
LAB_1495a7ae4:
    FUN_14955a364(plVar13,pcVar21,lVar15);
    goto LAB_1495a72fc;
  }
  local_100[3] = (longlong)"circular reference: %s";
  local_e8 = (int *)local_f8[0x31];
  local_f8[0x31] = (longlong)local_f0;
  local_b0 = *(longlong **)(pbVar16 + 0x50);
  local_b0[0xd] = *(longlong *)(pbVar16 + 0x68);
  FUN_14959fb62(param_1);
  local_b0[0xd] = 0;
LAB_1495a7a56:
  piVar7 = local_e8;
  plVar13 = local_f8;
  local_f8[0x31] = (longlong)local_f0;
  do {
    pbVar28 = pbVar16;
    pbVar16 = *(byte **)(pbVar28 + 0x50);
  } while (pbVar16 != (byte *)0x0);
  piVar14 = *(int **)(pbVar28 + 0x20);
  piVar8 = (int *)local_100[1];
  piVar20 = piVar14;
  if (((piVar8 != (int *)0x0) && (piVar20 = piVar8, piVar14 != (int *)0x0)) && (*piVar14 != *piVar8)
     ) {
    local_108 = (longlong *)CONCAT44(local_108._4_4_,*piVar8);
    FUN_14955a364(local_f8,"table %s has %d values for %d columns",*local_100);
    plVar13[0x31] = (longlong)piVar7;
    goto LAB_1495a72fc;
  }
  FUN_1495a8a4f(local_f8,piVar20,(longlong)local_d0 + 0x46);
  if ((char)local_a8 == -0x7c) {
    pcVar21 = "multiple recursive references: %s";
    if ((*(uint *)(local_e0 + 4) >> 0xd & 1) == 0) {
      pcVar21 = "recursive reference in a subquery: %s";
    }
    local_100[3] = (longlong)pcVar21;
    FUN_14959fb62(param_1);
  }
  local_100[3] = 0;
  local_f8[0x31] = (longlong)piVar7;
LAB_1495a7409:
  if (*(longlong *)(piVar26 + 8) == 0) {
    if (*(longlong *)(piVar26 + 4) == 0) {
      iVar10 = FUN_14959fb62(param_1,*(undefined8 *)(piVar26 + 10));
      if (iVar10 != 0) goto LAB_1495a72fc;
      lVar29 = *(longlong *)(piVar26 + 10);
      if (*plVar5 == 0) {
        plVar13 = (longlong *)FUN_145e3bd67(0x80);
      }
      else {
        plVar13 = (longlong *)FUN_14955d750(*plVar5,0x80);
      }
      if (plVar13 == (longlong *)0x0) {
LAB_1495a7ac1:
        piVar26[8] = 0;
        piVar26[9] = 0;
        goto LAB_1495a72fc;
      }
      plVar13[0xe] = 0;
      plVar13[0xf] = 0;
      plVar13[0xc] = 0;
      plVar13[0xd] = 0;
      plVar13[10] = 0;
      plVar13[0xb] = 0;
      plVar13[8] = 0;
      plVar13[9] = 0;
      plVar13[6] = 0;
      plVar13[7] = 0;
      plVar13[4] = 0;
      plVar13[5] = 0;
      plVar13[2] = 0;
      plVar13[3] = 0;
      *plVar13 = 0;
      plVar13[1] = 0;
      *(longlong **)(piVar26 + 8) = plVar13;
      *(int *)((longlong)plVar13 + 0x3c) = 1;
      local_100 = plVar13;
      if (*(longlong *)(piVar26 + 6) == 0) {
        lVar15 = FUN_14955a402(*plVar5,"subquery_%u",*(undefined4 *)(lVar29 + 0x10));
      }
      else {
        lVar15 = FUN_149559683(*plVar5);
      }
      plVar13 = local_100;
      *local_100 = lVar15;
      do {
        lVar15 = lVar29;
        lVar29 = *(longlong *)(lVar15 + 0x50);
      } while (lVar29 != 0);
      FUN_1495a8a4f(plVar5,*(undefined8 *)(lVar15 + 0x20),(longlong)local_100 + 0x46);
      *(undefined2 *)((longlong)plVar13 + 0x44) = 0xffff;
      *(undefined2 *)((longlong)plVar13 + 0x4a) = 200;
      *(byte *)(plVar13 + 8) = *(byte *)(plVar13 + 8) | 2;
      if ((int)plVar5[6] != 0) goto LAB_1495a72fc;
    }
    else {
      puVar12 = (undefined8 *)FUN_1495a8206(plVar5,0,piVar26);
      *(undefined8 **)(piVar26 + 8) = puVar12;
      if (puVar12 == (undefined8 *)0x0) goto LAB_1495a72fc;
      if (0xfffe < *(uint *)((longlong)puVar12 + 0x3c)) {
        FUN_14955a364(plVar5,"too many references to \"%s\": max 65535",*puVar12);
        goto LAB_1495a7ac1;
      }
      *(uint *)((longlong)puVar12 + 0x3c) = *(uint *)((longlong)puVar12 + 0x3c) + 1;
      if (*(int *)((longlong)puVar12 + 0x54) == 0) {
        if ((*(byte *)(piVar26 + 0x10) & 4) != 0) {
          pcVar21 = "\'%s\' is not a function";
          plVar13 = plVar5;
          lVar15 = *(longlong *)(piVar26 + 4);
          goto LAB_1495a7ae4;
        }
        if (puVar12[3] == 0) goto LAB_1495a74da;
      }
      bVar3 = *(byte *)((longlong)param_1 + 0x24);
      iVar10 = FUN_1495a8238(plVar5,puVar12);
      if (iVar10 != 0) goto LAB_1495a72fc;
      if ((puVar12[3] != 0) && ((*(byte *)(lVar6 + 0x33) & 0x80) == 0)) {
        FUN_14955a364(plVar5,"access to view \"%s\" prohibited",*puVar12);
      }
      local_100 = (longlong *)CONCAT44(local_100._4_4_,(uint)bVar3);
      if ((((*(int *)((longlong)puVar12 + 0x54) != 0) && ((*(byte *)(piVar26 + 0x10) & 0x40) != 0))
          && (puVar12[0xc] != 0)) &&
         ((*(uint *)(lVar6 + 0x30) >> 7 & 1) < (uint)*(byte *)(puVar12[0xc] + 0x1d))) {
        FUN_14955a364(plVar5,"unsafe use of virtual table \"%s\"",*puVar12);
      }
      uVar11 = FUN_1495a1fd1(lVar6,puVar12[3],0);
      *(undefined8 *)(piVar26 + 10) = uVar11;
      uVar4 = *(undefined2 *)((longlong)puVar12 + 0x46);
      *(undefined2 *)((longlong)puVar12 + 0x46) = 0xffff;
      *(undefined2 *)((longlong)param_1 + 0x24) = 1;
      FUN_14959fb62(param_1,*(undefined8 *)(piVar26 + 10));
      *(short *)((longlong)param_1 + 0x24) = (short)local_100;
      *(undefined2 *)((longlong)puVar12 + 0x46) = uVar4;
      piVar18 = local_d8;
    }
  }
LAB_1495a74da:
  iVar10 = FUN_1495a8545(plVar5,piVar26);
  if (iVar10 != 0) goto LAB_1495a72fc;
  iVar10 = *local_c0;
  uVar24 = local_a0;
LAB_1495a74fc:
  uVar19 = (int)uVar24 + 1;
  uVar24 = (ulonglong)uVar19;
  piVar26 = piVar26 + 0x1c;
  if (iVar10 <= (int)uVar19) goto LAB_1495a7698;
  goto LAB_1495a73c6;
LAB_1495a7d7d:
  lVar15 = lVar15 + 1;
  if (lVar15 == (int)plVar9[1]) goto LAB_1495a7d85;
  goto LAB_1495a7d47;
LAB_1495a7b64:
  do {
    pcVar21 = *(char **)(local_98 + lVar29 * 8);
    local_c4 = local_c4 | *(uint *)(pcVar21 + 4);
    local_78 = lVar29;
    if (*pcVar21 == -0x4f) {
      lVar29 = 0;
LAB_1495a7bb8:
      iVar10 = *local_c0;
      if (0 < iVar10) {
        iVar27 = 0;
        iVar23 = 0;
        piVar18 = local_80;
        local_90 = lVar29;
        do {
          local_100 = *(longlong **)(piVar18 + 6);
          pbVar16 = *(byte **)(piVar18 + 8);
          if (local_100 == (longlong *)0x0) {
            local_100 = *(longlong **)pbVar16;
          }
          local_d0 = piVar18;
          if (*(char *)(lVar6 + 0x61) != '\0') break;
          lVar15 = *(longlong *)(piVar18 + 10);
          local_e0 = pbVar16;
          if ((lVar15 == 0) || ((*(byte *)(lVar15 + 5) & 8) == 0)) {
            if (lVar29 != 0) {
              lVar15 = 0;
              do {
                bVar3 = *(byte *)(lVar29 + lVar15);
                if (bVar3 == *(byte *)((longlong)local_100 + lVar15)) {
                  if ((ulonglong)bVar3 == 0) break;
                }
                else if ((&DAT_14bd3ff30)[bVar3] !=
                         (&DAT_14bd3ff30)[*(byte *)((longlong)local_100 + lVar15)])
                goto LAB_1495a7fd8;
                lVar15 = lVar15 + 1;
              } while( true );
            }
            if (*(longlong *)(pbVar16 + 0x70) == 0) {
              plVar13 = (longlong *)&DAT_149e119c2;
              lVar15 = 0;
            }
            else {
              uVar24 = 0xffffffffffffffff;
              plVar13 = (longlong *)(*(longlong *)(lVar6 + 0x20) + 0x18);
              do {
                uVar24 = uVar24 + 1;
                lVar15 = *plVar13;
                plVar13 = plVar13 + 4;
              } while (lVar15 != *(longlong *)(pbVar16 + 0x70));
              plVar13 = *(longlong **)(*(longlong *)(lVar6 + 0x20) + (uVar24 & 0xffffffff) * 0x20);
              lVar15 = 0;
            }
          }
          else {
            plVar13 = (longlong *)0x0;
          }
          if (0 < *(short *)(pbVar16 + 0x46)) {
            local_a0 = CONCAT71(local_a0._1_7_,lVar15 != 0 && lVar29 != 0);
            local_e8 = (int *)CONCAT71(local_e8._1_7_,iVar27 != 0 && lVar29 == 0);
            lVar29 = 0;
            local_b4 = iVar27;
            local_b0 = plVar13;
            local_88 = lVar15;
            do {
              lVar15 = *(longlong *)(pbVar16 + 8);
              lVar25 = lVar29 * 0x20;
              plVar13 = *(longlong **)(lVar15 + lVar25);
              if ((char)local_a0 == '\0') {
LAB_1495a7d00:
                if (((*(byte *)(param_2 + 6) & 2) != 0) ||
                   ((*(byte *)(lVar15 + 0x1c + lVar25) & 2) == 0)) {
                  if ((char)local_e8 == '\0') {
LAB_1495a7d85:
                    uVar19 = 0;
                    local_70 = plVar13;
                    if (plVar13 != (longlong *)0x0) {
                      sVar17 = strlen((char *)plVar13);
                      uVar19 = (uint)sVar17 & 0x3fffffff;
                    }
                    local_68 = uVar19;
                    uVar11 = FUN_14958f7cb(lVar6,0x3b,&local_70);
                    if (((int)local_a8 == 4) || (1 < *local_c0)) {
                      uVar19 = 0;
                      local_70 = local_100;
                      if (local_100 != (longlong *)0x0) {
                        sVar17 = strlen((char *)local_100);
                        uVar19 = (uint)sVar17 & 0x3fffffff;
                      }
                      local_68 = uVar19;
                      uVar11 = FUN_14958f7cb(lVar6,0x3b,&local_70,0);
                      uVar11 = FUN_14958aad5(plVar5,0x8b,uVar11);
                      if (local_b0 != (longlong *)0x0) {
                        local_70 = local_b0;
                        sVar17 = strlen((char *)local_b0);
                        local_68 = (uint)sVar17 & 0x3fffffff;
                        uVar11 = FUN_14958f7cb(lVar6,0x3b,&local_70,0);
                        uVar11 = FUN_14958aad5(plVar5,0x8b,uVar11);
                      }
                      if ((int)local_a8 != 4) goto LAB_1495a7eaa;
                      plVar13 = (longlong *)FUN_14955a402(lVar6,"%s.%s",local_100);
                      local_f8 = plVar13;
                    }
                    else {
LAB_1495a7eaa:
                      local_f8 = (longlong *)0x0;
                    }
                    local_f0 = (int *)FUN_14958f62a(plVar5,local_f0,uVar11);
                    uVar19 = 0;
                    local_70 = plVar13;
                    if (plVar13 != (longlong *)0x0) {
                      sVar17 = strlen((char *)plVar13);
                      uVar19 = (uint)sVar17 & 0x3fffffff;
                    }
                    piVar18 = local_f0;
                    local_68 = uVar19;
                    FUN_14958f711(plVar5,local_f0,&local_70);
                    if ((piVar18 != (int *)0x0) && ((*(byte *)(param_2 + 5) & 8) != 0)) {
                      lVar15 = (longlong)*local_f0;
                      if (*(longlong *)(local_f0 + lVar15 * 8 + -4) != 0) {
                        FUN_14955d65a(lVar6);
                      }
                      if (local_88 == 0) {
                        local_108 = plVar13;
                        uVar11 = FUN_14955a402(lVar6,"%s.%s.%s",local_b0);
                      }
                      else {
                        uVar11 = FUN_149559683(lVar6,*(undefined8 *)
                                                      (*(longlong *)(local_88 + 0x20) + 0x10 +
                                                      lVar25));
                      }
                      *(undefined8 *)(local_f0 + lVar15 * 8 + -4) = uVar11;
                      local_f0[lVar15 * 8 + -1] = local_f0[lVar15 * 8 + -1] & 0xfffffffcU | 2;
                    }
                    pbVar16 = local_e0;
                    iVar23 = 1;
                    if (local_f8 == (longlong *)0x0) goto LAB_1495a7f3d;
                    FUN_14955d65a(lVar6);
                  }
                  else {
                    if ((*(byte *)(local_d0 + 0xf) & 4) == 0) {
LAB_1495a7d30:
                      plVar9 = *(longlong **)(local_d0 + 0x14);
                      if ((plVar9 != (longlong *)0x0) && (0 < (longlong)(int)plVar9[1])) {
                        lVar15 = 0;
LAB_1495a7d47:
                        lVar22 = 0;
                        do {
                          bVar3 = *(byte *)(*(longlong *)(*plVar9 + lVar15 * 0x10) + lVar22);
                          if (bVar3 == *(byte *)((longlong)plVar13 + lVar22)) {
                            if ((ulonglong)bVar3 == 0) goto LAB_1495a7f38;
                          }
                          else if ((&DAT_14bd3ff30)[bVar3] !=
                                   (&DAT_14bd3ff30)[*(byte *)((longlong)plVar13 + lVar22)])
                          goto LAB_1495a7d7d;
                          lVar22 = lVar22 + 1;
                        } while( true );
                      }
                      goto LAB_1495a7d85;
                    }
                    local_108 = (longlong *)0x0;
                    iVar10 = FUN_1495a899a(local_c0,local_b4,plVar13);
                    if (iVar10 == 0) goto LAB_1495a7d30;
                  }
LAB_1495a7f38:
                  pbVar16 = local_e0;
                  iVar23 = 1;
                }
              }
              else {
                local_f8 = (longlong *)CONCAT44(local_f8._4_4_,iVar23);
                iVar10 = FUN_1495a641b(*(longlong *)(local_88 + 0x20) + lVar25 + 8,0,local_90);
                pbVar16 = local_e0;
                iVar23 = (int)local_f8;
                if (iVar10 != 0) goto LAB_1495a7d00;
              }
LAB_1495a7f3d:
              lVar29 = lVar29 + 1;
            } while (lVar29 < *(short *)(pbVar16 + 0x46));
            iVar10 = *local_c0;
            lVar29 = local_90;
            iVar27 = local_b4;
          }
LAB_1495a7fd8:
          iVar27 = iVar27 + 1;
          piVar18 = local_d0 + 0x1c;
        } while (iVar27 < iVar10);
        if (iVar23 != 0) goto LAB_1495a8082;
      }
      if (lVar29 == 0) {
        FUN_14955a364(plVar5,"no tables specified");
      }
      else {
        FUN_14955a364(plVar5,"no such table: %s");
      }
    }
    else {
      if ((*pcVar21 == -0x75) && (**(char **)(pcVar21 + 0x18) == -0x4f)) {
        lVar29 = *(longlong *)(*(longlong *)(pcVar21 + 0x10) + 8);
        goto LAB_1495a7bb8;
      }
      piVar18 = local_98 + lVar29 * 8;
      local_f0 = (int *)FUN_14958f62a(plVar5,local_f0);
      if (local_f0 != (int *)0x0) {
        lVar29 = (longlong)*local_f0;
        *(undefined8 *)(local_f0 + lVar29 * 8 + -4) = *(undefined8 *)(piVar18 + 2);
        local_f0[lVar29 * 8 + -1] = local_f0[lVar29 * 8 + -1] & 0xfffffffcU | piVar18[5] & 3U;
        piVar18[2] = 0;
        piVar18[3] = 0;
      }
      piVar18[0] = 0;
      piVar18[1] = 0;
    }
LAB_1495a8082:
    lVar29 = local_78 + 1;
  } while (lVar29 < *local_d8);
  if (local_d8 != (int *)0x0) {
    FUN_149582d29(lVar6,local_d8);
  }
  *(int **)(param_2 + 0x20) = local_f0;
  piVar18 = local_f0;
LAB_1495a7b0a:
  uVar11 = 0;
  if (piVar18 == (int *)0x0) goto LAB_1495a7301;
  if (*piVar18 <= *(int *)(lVar6 + 0x84)) {
    if ((local_c4 & 0x200004) != 0) {
      *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 4;
    }
    goto LAB_1495a7301;
  }
  FUN_14955a364(plVar5,"too many columns in result set");
LAB_1495a72fc:
  uVar11 = 2;
LAB_1495a7301:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 1495a81ac FUN_1495a81ac body=90 status=ok
// SIG undefined FUN_1495a81ac(void)

void FUN_1495a81ac(longlong param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_2 != (int *)0x0) && (0 < *param_2)) {
    piVar2 = param_2 + 0x13;
    iVar3 = 0;
    do {
      if (-1 < *piVar2) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x34);
      *(int *)(param_1 + 0x34) = iVar1 + 1;
      *piVar2 = iVar1;
      if (*(longlong *)(piVar2 + -7) != 0) {
        FUN_1495a81ac(param_1,*(undefined8 *)(*(longlong *)(piVar2 + -7) + 0x28));
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x1c;
    } while (iVar3 < *param_2);
  }
  return;
}



// FUNCTION 1495a8206 FUN_1495a8206 body=50 status=ok
// SIG undefined FUN_1495a8206(void)

void FUN_1495a8206(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*param_3 == 0) {
    plVar3 = param_3 + 1;
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(*param_1 + 0x20) + -0x20);
    do {
      plVar3 = plVar2 + 4;
      plVar1 = plVar2 + 7;
      plVar2 = plVar3;
    } while (*plVar1 != *param_3);
  }
  FUN_14955a08c(param_1,param_2,param_3[2],*plVar3);
  return;
}



// FUNCTION 1495a8238 FUN_1495a8238 body=780 status=ok
// SIG undefined FUN_1495a8238(void)

undefined8 FUN_1495a8238(longlong *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined2 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 local_51;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *param_1;
  iVar6 = *(int *)(lVar4 + 0x48);
  *(int *)(lVar4 + 0x48) = iVar6 + 1;
  if (*(int *)((longlong)param_2 + 0x54) != 0) {
    lVar7 = *param_1;
    for (plVar9 = (longlong *)param_2[0xc]; plVar9 != (longlong *)0x0;
        plVar9 = (longlong *)plVar9[5]) {
      if (*plVar9 == lVar7) goto LAB_1495a8286;
    }
    lVar8 = FUN_14958201d(lVar7 + 0x1f8,*(undefined8 *)param_2[0xb],0);
    plVar9 = *(longlong **)(lVar8 + 0x10);
    if (plVar9 != (longlong *)0x0) {
      local_68 = &local_50;
      local_50 = 0;
      iVar6 = FUN_149584380(lVar7,param_2,plVar9,*(undefined8 *)(*plVar9 + 0x10));
      lVar8 = local_50;
      if (iVar6 != 0) {
        FUN_14955a364(param_1,&DAT_149dfbe46,local_50);
        *(int *)(param_1 + 3) = iVar6;
      }
      if (lVar8 != 0) {
        FUN_14955d65a(lVar7,lVar8);
      }
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + -1;
      uVar10 = 1;
      if (iVar6 != 0) goto LAB_1495a82a0;
      goto LAB_1495a8289;
    }
    FUN_14955a364(param_1,"no such module: %s",*(undefined8 *)param_2[0xb]);
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + -1;
LAB_1495a8302:
    uVar10 = 1;
    goto LAB_1495a82a0;
  }
LAB_1495a8286:
  *(int *)(lVar4 + 0x48) = iVar6;
LAB_1495a8289:
  uVar10 = 0;
  if (*(int *)((longlong)param_2 + 0x54) != 0) goto LAB_1495a82a0;
  psVar1 = (short *)((longlong)param_2 + 0x46);
  if (0 < *(short *)((longlong)param_2 + 0x46)) goto LAB_1495a82a0;
  if (*(short *)((longlong)param_2 + 0x46) < 0) {
    FUN_14955a364(param_1,"view %s is circularly defined",*param_2);
    goto LAB_1495a8302;
  }
  lVar7 = FUN_1495a1fd1(lVar4,param_2[3],0);
  uVar10 = 1;
  if (lVar7 != 0) {
    local_51 = *(undefined1 *)((longlong)param_1 + 0x114);
    *(undefined1 *)((longlong)param_1 + 0x114) = 0;
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x34);
    FUN_1495a81ac(param_1,*(undefined8 *)(lVar7 + 0x28));
    *psVar1 = -1;
    *(int *)(lVar4 + 0x178) = *(int *)(lVar4 + 0x178) + 1;
    *(undefined2 *)(lVar4 + 0x17c) = 0;
    uVar10 = *(undefined8 *)(lVar4 + 0x1d0);
    *(undefined8 *)(lVar4 + 0x1d0) = 0;
    lVar8 = FUN_1495a391c(param_1,lVar7,0x40);
    *(undefined8 *)(lVar4 + 0x1d0) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
    uVar11 = local_51;
    if (lVar8 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x46) = 0;
      uVar10 = 1;
    }
    else {
      if (param_2[6] == 0) {
        *(undefined2 *)((longlong)param_2 + 0x46) = *(undefined2 *)(lVar8 + 0x46);
        param_2[1] = *(undefined8 *)(lVar8 + 8);
        *(undefined2 *)(lVar8 + 0x46) = 0;
        *(undefined8 *)(lVar8 + 8) = 0;
      }
      else {
        FUN_1495a8a4f(param_1,param_2[6],psVar1,param_2 + 1);
        uVar11 = local_51;
        if (((*(char *)(lVar4 + 0x61) == '\0') && ((int)param_1[6] == 0)) &&
           (**(int **)(lVar7 + 0x20) == (int)*psVar1)) {
          FUN_1495a8eab(param_1,param_2,lVar7,0x40);
        }
      }
      *(undefined2 *)(param_2 + 9) = *(undefined2 *)((longlong)param_2 + 0x46);
      if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x2d8) == 0)) {
        uVar10 = 0;
        piVar2 = (int *)(lVar8 + 0x3c);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 != 0) goto LAB_1495a845a;
      }
      FUN_149585e6d(lVar4,lVar8);
      uVar10 = 0;
    }
LAB_1495a845a:
    FUN_149582a1c(lVar4,lVar7,1);
    piVar2 = (int *)(lVar4 + 0x178);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      uVar5 = *(undefined2 *)(lVar4 + 0x17e);
    }
    else {
      uVar5 = 0;
    }
    *(undefined2 *)(lVar4 + 0x17c) = uVar5;
    *(undefined1 *)((longlong)param_1 + 0x114) = uVar11;
  }
  *(ushort *)(param_2[0xe] + 0x72) = *(ushort *)(param_2[0xe] + 0x72) | 2;
  if (*(char *)(lVar4 + 0x61) != '\0') {
    FUN_14958605e(lVar4,param_2);
    param_2[1] = 0;
    *(undefined2 *)((longlong)param_2 + 0x46) = 0;
  }
LAB_1495a82a0:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1495a8545 FUN_1495a8545 body=142 status=ok
// SIG undefined FUN_1495a8545(void)

undefined8 FUN_1495a8545(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if ((*(longlong *)(param_2 + 0x20) != 0) && ((*(byte *)(param_2 + 0x40) & 2) != 0)) {
    plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x10);
    if (plVar3 != (longlong *)0x0) {
LAB_1495a857a:
      lVar5 = 0;
      do {
        bVar1 = *(byte *)(*plVar3 + lVar5);
        bVar2 = *(byte *)(*(longlong *)(param_2 + 0x60) + lVar5);
        if (bVar1 == bVar2) {
          if ((ulonglong)bVar1 == 0) {
            *(longlong **)(param_2 + 0x68) = plVar3;
            return 0;
          }
        }
        else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) goto LAB_1495a85a5;
        lVar5 = lVar5 + 1;
      } while( true );
    }
LAB_1495a85ae:
    FUN_14955a364(param_1,"no such index: %s",*(longlong *)(param_2 + 0x60),0);
    *(undefined1 *)(param_1 + 0x1d) = 1;
    uVar4 = 1;
  }
  return uVar4;
LAB_1495a85a5:
  plVar3 = (longlong *)plVar3[5];
  if (plVar3 == (longlong *)0x0) goto LAB_1495a85ae;
  goto LAB_1495a857a;
}



// FUNCTION 1495a85d3 FUN_1495a85d3 body=966 status=ok
// SIG undefined FUN_1495a85d3(void)

undefined8 FUN_1495a85d3(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined4 local_b0;
  uint local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  uint local_8c;
  ulonglong local_88;
  int *local_80;
  int local_74;
  ulonglong local_70;
  int *local_68;
  longlong *local_60;
  int *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  piVar2 = *(int **)(param_2 + 0x28);
  local_98 = param_1;
  if (1 < *piVar2) {
    piVar15 = piVar2 + 2;
    piVar9 = piVar2 + 0x1e;
    puVar19 = (undefined8 *)(param_2 + 0x30);
    local_88 = 0;
    local_70 = 1;
    local_58 = piVar15;
    do {
      lVar3 = *(longlong *)(piVar9 + 8);
      local_80 = piVar9;
      local_68 = piVar15;
      if (lVar3 != 0 && *(longlong *)(piVar15 + 8) != 0) {
        bVar1 = *(byte *)(piVar9 + 0xf);
        local_8c = (bVar1 & 0x20) >> 5;
        if ((bVar1 & 4) != 0) {
          if ((*(longlong *)(piVar9 + 0x12) == 0) && (*(longlong *)(piVar9 + 0x14) == 0)) {
            if (0 < *(short *)(lVar3 + 0x46)) {
              iVar17 = (int)local_88 + 1;
              lVar13 = 0;
              lVar14 = 0;
              do {
                if ((*(byte *)(*(longlong *)(lVar3 + 8) + 0x1c + lVar13) & 2) == 0) {
                  local_b8 = &local_50;
                  iVar5 = FUN_1495a899a(piVar2,iVar17,
                                        *(undefined8 *)(*(longlong *)(lVar3 + 8) + lVar13),&local_4c
                                       );
                  piVar9 = local_80;
                  if (iVar5 != 0) {
                    local_a8 = local_8c;
                    local_b0 = (undefined4)lVar14;
                    local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,iVar17);
                    local_a0 = puVar19;
                    FUN_1495a91bf(local_98,piVar2,local_4c,local_50);
                    piVar9 = local_80;
                  }
                }
                lVar14 = lVar14 + 1;
                lVar13 = lVar13 + 0x20;
              } while (lVar14 < *(short *)(lVar3 + 0x46));
            }
            goto LAB_1495a86b2;
          }
          pcVar12 = "a NATURAL join may not have an ON or USING clause";
          lVar13 = 0;
LAB_1495a8908:
          FUN_14955a364(local_98,pcVar12,lVar13);
LAB_1495a890d:
          uVar7 = 1;
          goto LAB_1495a88ce;
        }
LAB_1495a86b2:
        lVar13 = *(longlong *)(piVar9 + 0x12);
        if (lVar13 != 0) {
          if (*(longlong *)(piVar9 + 0x14) != 0) {
            FUN_14955a364(local_98,"cannot have both ON and USING clauses in the same join");
            goto LAB_1495a890d;
          }
          if ((bVar1 & 0x20) != 0) {
            FUN_1495a9261(lVar13,piVar9[0x11]);
            lVar13 = *(longlong *)(piVar9 + 0x12);
          }
          uVar7 = FUN_149594bf0(local_98,*puVar19,lVar13);
          *puVar19 = uVar7;
          piVar9[0x12] = 0;
          piVar9[0x13] = 0;
        }
        plVar4 = *(longlong **)(piVar9 + 0x14);
        if ((plVar4 != (longlong *)0x0) && (0 < (int)plVar4[1])) {
          local_74 = (int)local_88 + 1;
          lVar14 = 0;
          local_60 = plVar4;
LAB_1495a86e0:
          lVar13 = *(longlong *)(*local_60 + lVar14 * 0x10);
          if (0 < (longlong)*(short *)(lVar3 + 0x46)) {
            lVar8 = 0;
LAB_1495a870b:
            lVar11 = 0;
            do {
              bVar1 = *(byte *)(*(longlong *)(*(longlong *)(lVar3 + 8) + lVar8 * 0x20) + lVar11);
              if (bVar1 == *(byte *)(lVar13 + lVar11)) {
                if ((ulonglong)bVar1 == 0) {
                  uVar6 = 0;
                  goto LAB_1495a874d;
                }
              }
              else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar13 + lVar11)])
              goto LAB_1495a873e;
              lVar11 = lVar11 + 1;
            } while( true );
          }
          goto LAB_1495a88fc;
        }
      }
LAB_1495a865f:
      uVar10 = (int)local_88 + 1;
      local_88 = (ulonglong)uVar10;
      piVar9 = local_80 + 0x1c;
      piVar15 = local_68 + 0x1c;
      local_70 = local_70 + 1;
    } while ((int)uVar10 < *piVar2 + -1);
  }
  uVar7 = 0;
LAB_1495a88ce:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
LAB_1495a873e:
  lVar8 = lVar8 + 1;
  if (lVar8 == *(short *)(lVar3 + 0x46)) goto LAB_1495a88fc;
  goto LAB_1495a870b;
LAB_1495a874d:
  do {
    lVar11 = (longlong)*(short *)(*(longlong *)(local_58 + uVar6 * 0x1c + 8) + 0x46);
    if (0 < lVar11) {
      lVar16 = 0;
LAB_1495a876f:
      lVar18 = 0;
      do {
        bVar1 = *(byte *)(*(longlong *)
                           (*(longlong *)(*(longlong *)(local_58 + uVar6 * 0x1c + 8) + 8) +
                           lVar16 * 0x20) + lVar18);
        if (bVar1 == *(byte *)(lVar13 + lVar18)) {
          if ((ulonglong)bVar1 == 0) {
            local_a8 = local_8c;
            local_b0 = (undefined4)lVar8;
            local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,local_74);
            local_a0 = puVar19;
            FUN_1495a91bf(local_98,piVar2,uVar6 & 0xffffffff);
            lVar14 = lVar14 + 1;
            if ((int)local_60[1] <= lVar14) goto LAB_1495a865f;
            goto LAB_1495a86e0;
          }
        }
        else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar13 + lVar18)])
        goto LAB_1495a87a2;
        lVar18 = lVar18 + 1;
      } while( true );
    }
LAB_1495a87aa:
    uVar6 = uVar6 + 1;
  } while (uVar6 != local_70);
LAB_1495a88fc:
  pcVar12 = "cannot join using column %s - column not present in both tables";
  goto LAB_1495a8908;
LAB_1495a87a2:
  lVar16 = lVar16 + 1;
  if (lVar16 == lVar11) goto LAB_1495a87aa;
  goto LAB_1495a876f;
}



// FUNCTION 1495a899a FUN_1495a899a body=181 status=ok
// SIG undefined FUN_1495a899a(void)

undefined8
FUN_1495a899a(longlong param_1,uint param_2,longlong param_3,undefined4 *param_4,undefined4 *param_5
             )

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (0 < (int)param_2) {
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x28 + uVar3 * 0x70);
      uVar4 = (ulonglong)*(short *)(lVar2 + 0x46);
      if (0 < (longlong)uVar4) {
        lVar2 = *(longlong *)(lVar2 + 8);
        uVar5 = 0;
LAB_1495a89db:
        lVar6 = 0;
        do {
          bVar1 = *(byte *)(*(longlong *)(lVar2 + uVar5 * 0x20) + lVar6);
          if (bVar1 == *(byte *)(param_3 + lVar6)) {
            if ((ulonglong)bVar1 == 0) {
              if ((*(byte *)(lVar2 + 0x1c + (uVar5 & 0xffffffff) * 0x20) & 2) == 0) {
                if (param_4 == (undefined4 *)0x0) {
                  return 1;
                }
                *param_4 = (int)uVar3;
                *param_5 = (int)uVar5;
                return 1;
              }
              break;
            }
          }
          else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(param_3 + lVar6)])
          goto LAB_1495a8a0f;
          lVar6 = lVar6 + 1;
        } while( true );
      }
LAB_1495a8a26:
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
  }
  return 0;
LAB_1495a8a0f:
  uVar5 = uVar5 + 1;
  if (uVar5 == uVar4) goto LAB_1495a8a26;
  goto LAB_1495a89db;
}



// FUNCTION 1495a8a4f FUN_1495a8a4f body=1115 status=ok
// SIG undefined FUN_1495a8a4f(void)

void FUN_1495a8a4f(longlong *param_1,uint *param_2,undefined2 *param_3,undefined8 *param_4)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  char *pcVar6;
  size_t sVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  char *pcVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ushort uVar16;
  undefined8 *puVar17;
  undefined1 auStack_c8 [32];
  uint local_a8;
  char *local_a0;
  uint local_94;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined2 *local_80;
  ulonglong local_78;
  uint *local_70;
  ulonglong local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *param_1;
  local_68 = 0;
  puStack_60 = (undefined8 *)0x0;
  local_58 = 0;
  if (param_2 == (uint *)0x0) {
    *param_3 = 0;
    *param_4 = 0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar13 = *param_2;
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)FUN_145e3bd67((longlong)(int)uVar13 << 5);
    }
    else {
      puVar4 = (undefined8 *)FUN_14955d750(lVar3);
    }
    if (puVar4 != (undefined8 *)0x0) {
      memset(puVar4,0,(longlong)(int)uVar13 << 5);
    }
    uVar10 = 0x7fff;
    if ((int)uVar13 < 0x7fff) {
      uVar10 = uVar13;
    }
    *param_3 = (short)uVar10;
    *param_4 = puVar4;
    local_a0 = (char *)(lVar3 + 0x61);
    if (0 < (int)uVar13) {
      local_70 = param_2 + 2;
      local_78 = (ulonglong)uVar10;
      uVar14 = 0;
      local_94 = uVar10;
      local_90 = puVar4;
      local_88 = param_4;
      local_80 = param_3;
      do {
        uVar13 = (uint)uVar14;
        uVar11 = local_58;
        puVar9 = puStack_60;
        puVar17 = local_90;
        param_3 = local_80;
        param_4 = local_88;
        if (*local_a0 != '\0') break;
        puVar5 = local_70 + uVar14 * 8;
        pcVar12 = *(char **)(local_70 + uVar14 * 8 + 2);
        if ((pcVar12 != (char *)0x0) && ((puVar5[5] & 3) == 0)) goto LAB_1495a8da8;
        while (pcVar6 = *(char **)puVar5, pcVar6 != (char *)0x0) {
          if ((*(uint *)(pcVar6 + 4) & 0x41000) == 0) goto LAB_1495a8c6a;
          if ((*(uint *)(pcVar6 + 4) >> 0x12 & 1) == 0) {
            puVar5 = (uint *)(pcVar6 + 0x10);
          }
          else {
            puVar5 = (uint *)(*(longlong *)(pcVar6 + 0x20) + 8);
          }
        }
        pcVar6 = (char *)0x0;
LAB_1495a8c6a:
        for (; cVar1 = *pcVar6, cVar1 == -0x75; pcVar6 = *(char **)(pcVar6 + 0x18)) {
        }
        if (cVar1 == ';') {
          pcVar12 = pcVar6 + 8;
LAB_1495a8cb8:
          pcVar12 = *(char **)pcVar12;
        }
        else if (cVar1 == -0x5c) {
          uVar16 = *(ushort *)(pcVar6 + 0x30);
          if ((short)uVar16 < 0) {
            uVar16 = *(ushort *)(*(longlong *)(pcVar6 + 0x40) + 0x44);
            pcVar12 = "rowid";
            if ((short)uVar16 < 0) goto LAB_1495a8da8;
          }
          pcVar12 = (char *)((ulonglong)uVar16 * 0x20 +
                            *(longlong *)(*(longlong *)(pcVar6 + 0x40) + 8));
          goto LAB_1495a8cb8;
        }
        if (pcVar12 != (char *)0x0) {
LAB_1495a8da8:
          lVar15 = 0;
          do {
            bVar2 = pcVar12[lVar15];
            if (bVar2 == (&DAT_149dfbe6e)[lVar15]) {
              if ((ulonglong)bVar2 == 0) break;
            }
            else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[(byte)(&DAT_149dfbe6e)[lVar15]]) {
              lVar15 = 0;
              goto LAB_1495a8dd2;
            }
            lVar15 = lVar15 + 1;
          } while( true );
        }
LAB_1495a8cc4:
        pcVar12 = (char *)FUN_14955a402(lVar3,"column%d",uVar13 + 1);
LAB_1495a8cd7:
        local_4c = 0;
        while (pcVar12 != (char *)0x0) {
          lVar15 = FUN_14958201d(&local_68,pcVar12,0);
          if (*(longlong *)(lVar15 + 0x10) == 0) {
            *puVar4 = pcVar12;
            puVar9 = (undefined8 *)FUN_14958256b(&local_68,pcVar12,puVar4);
            if (((puVar9 == puVar4) && (*local_a0 == '\0')) && (*(char *)(lVar3 + 0x62) == '\0')) {
              *(undefined1 *)(lVar3 + 0x61) = 1;
              if (0 < *(int *)(lVar3 + 0xd4)) {
                *(undefined4 *)(lVar3 + 0x170) = 1;
              }
              *(int *)(lVar3 + 0x178) = *(int *)(lVar3 + 0x178) + 1;
              *(undefined2 *)(lVar3 + 0x17c) = 0;
              if (*(longlong *)(lVar3 + 0x138) != 0) {
                *(undefined4 *)(*(longlong *)(lVar3 + 0x138) + 0x18) = 7;
              }
            }
            goto LAB_1495a8d91;
          }
          sVar7 = strlen(pcVar12);
          uVar13 = 0;
          if ((sVar7 & 0x3fffffff) != 0) {
            uVar8 = (ulonglong)((uint)sVar7 & 0x3fffffff);
            do {
              if ((longlong)uVar8 < 2) {
                uVar8 = 0;
                break;
              }
              lVar15 = uVar8 - 1;
              uVar8 = uVar8 - 1;
            } while (0xfffffffffffffff5 < (ulonglong)(byte)pcVar12[lVar15] - 0x3a);
            uVar13 = (uint)sVar7 & 0x3fffffff;
            if (pcVar12[uVar8 & 0xffffffff] == ':') {
              uVar13 = (uint)uVar8;
            }
          }
          local_a8 = local_4c + 1;
          local_4c = local_a8;
          pcVar12 = (char *)FUN_14955a402(lVar3,"%.*z:%u",uVar13,pcVar12);
          if (3 < local_4c) {
            FUN_149555acc(4,&local_4c);
          }
        }
        *puVar4 = 0;
LAB_1495a8d91:
        uVar14 = uVar14 + 1;
        puVar4 = puVar4 + 4;
        uVar11 = local_58;
        puVar9 = puStack_60;
        puVar17 = local_90;
        param_3 = local_80;
        param_4 = local_88;
        uVar13 = local_94;
      } while (uVar14 != local_78);
      goto LAB_1495a8ab6;
    }
  }
  local_a0 = (char *)(lVar3 + 0x61);
  uVar11 = 0;
  puVar9 = (undefined8 *)0x0;
  puVar17 = puVar4;
  uVar13 = 0;
LAB_1495a8ab6:
  puStack_60 = (undefined8 *)0x0;
  FUN_145e3b961(uVar11);
  local_58 = 0;
  local_68 = local_68 & 0xffffffff00000000;
  while (puVar9 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar9;
    FUN_145e3b961(puVar9);
    puVar9 = puVar4;
  }
  local_68 = local_68 & 0xffffffff;
  if (*local_a0 != '\0') {
    if (uVar13 != 0) {
      lVar15 = 0;
      do {
        if (*(longlong *)((longlong)puVar17 + lVar15) != 0) {
          FUN_14955d65a(lVar3);
        }
        lVar15 = lVar15 + 0x20;
      } while ((ulonglong)uVar13 << 5 != lVar15);
    }
    if (puVar17 != (undefined8 *)0x0) {
      FUN_14955d65a(lVar3,puVar17);
    }
    *param_4 = 0;
    *param_3 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1495a8dd2:
  bVar2 = pcVar12[lVar15];
  if (bVar2 == "false"[lVar15]) {
    if ((ulonglong)bVar2 == 0) goto LAB_1495a8cc4;
  }
  else if ((&DAT_14bd3ff30)[bVar2] != (&DAT_14bd3ff30)[(byte)"false"[lVar15]]) {
    pcVar12 = (char *)FUN_149559683(lVar3);
    goto LAB_1495a8cd7;
  }
  lVar15 = lVar15 + 1;
  goto LAB_1495a8dd2;
}



// FUNCTION 1495a8eab FUN_1495a8eab body=478 status=ok
// SIG undefined FUN_1495a8eab(void)

void FUN_1495a8eab(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  char *_Str;
  char cVar3;
  char *_Str_00;
  size_t sVar4;
  size_t sVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [47];
  undefined1 local_a9;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x61) == '\0') {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    local_58 = 0;
    uStack_80 = *(undefined8 *)(param_3 + 0x28);
    local_a8 = lVar2;
    if (0 < *(short *)(param_2 + 0x46)) {
      local_90 = *(longlong *)(param_3 + 0x20);
      lVar2 = *(longlong *)(param_2 + 8);
      lVar11 = 0;
      lVar12 = 0;
      local_a9 = param_4;
      local_a0 = param_1;
      local_98 = param_2;
      do {
        uVar8 = *(undefined8 *)(local_90 + 8 + lVar11);
        _Str_00 = (char *)FUN_1495a908a(&local_88,uVar8);
        cVar3 = FUN_14959f8fa(uVar8);
        *(char *)(lVar2 + 0x19 + lVar11) = cVar3;
        if (_Str_00 != (char *)0x0) {
          sVar4 = strlen(_Str_00);
          _Str = *(char **)(lVar2 + lVar11);
          uVar9 = 0;
          if (_Str != (char *)0x0) {
            sVar5 = strlen(_Str);
            uVar9 = (uint)sVar5 & 0x3fffffff;
          }
          uVar10 = (uint)sVar4 & 0x3fffffff;
          lVar6 = FUN_14955d6fd(local_a8,_Str,uVar9 + uVar10 + 2);
          param_4 = local_a9;
          if ((_Str == (char *)0x0) || (lVar6 != 0)) {
            *(longlong *)(lVar2 + lVar11) = lVar6;
            if (lVar6 != 0) {
              memcpy((void *)((ulonglong)uVar9 + lVar6 + 1),_Str_00,(ulonglong)(uVar10 + 1));
              pbVar1 = (byte *)(lVar2 + 0x1c + lVar11);
              *pbVar1 = *pbVar1 | 4;
            }
          }
          else {
            FUN_14955d65a(local_a8,_Str);
            *(undefined8 *)(lVar2 + lVar11) = 0;
            param_4 = local_a9;
          }
          cVar3 = *(char *)(lVar2 + 0x19 + lVar11);
          param_2 = local_98;
          param_1 = local_a0;
        }
        if (cVar3 < 'A') {
          *(undefined1 *)(lVar2 + 0x19 + lVar11) = param_4;
        }
        puVar7 = (undefined8 *)FUN_1495862ab(param_1,uVar8);
        if ((puVar7 != (undefined8 *)0x0) && (*(longlong *)(lVar2 + 0x10 + lVar11) == 0)) {
          uVar8 = FUN_149559683(local_a8,*puVar7);
          *(undefined8 *)(lVar2 + 0x10 + lVar11) = uVar8;
        }
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x20;
      } while (lVar12 < *(short *)(param_2 + 0x46));
    }
    *(undefined2 *)(param_2 + 0x4c) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495a908a FUN_1495a908a body=308 status=ok
// SIG undefined FUN_1495a908a(void)

char * FUN_1495a908a(undefined8 *param_1,char *param_2)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_2 == -0x5c) {
    if (param_1 != (undefined8 *)0x0) {
      sVar1 = *(short *)(param_2 + 0x30);
      uVar3 = (uint)sVar1;
      lVar7 = 0;
      do {
        piVar2 = (int *)param_1[1];
        if (0 < (longlong)*piVar2) {
          lVar9 = 0;
          do {
            if (*(int *)((longlong)piVar2 + lVar9 + 0x4c) == *(int *)(param_2 + 0x2c)) {
              lVar8 = *(longlong *)((longlong)piVar2 + lVar9 + 0x28);
              lVar7 = *(longlong *)((longlong)piVar2 + lVar9 + 0x30);
              goto LAB_1495a910c;
            }
            lVar9 = lVar9 + 0x70;
          } while ((longlong)*piVar2 * 0x70 - lVar9 != 0);
        }
        param_1 = (undefined8 *)param_1[3];
        lVar8 = 0;
LAB_1495a910c:
      } while ((param_1 != (undefined8 *)0x0) && (lVar8 == 0));
      if (lVar8 != 0) {
        if (lVar7 == 0) {
          if (sVar1 < 0) {
            pcVar5 = "INTEGER";
            goto LAB_1495a90b5;
          }
          if ((*(byte *)(*(longlong *)(lVar8 + 8) + 0x1c + (ulonglong)uVar3 * 0x20) & 4) != 0) {
            pcVar5 = *(char **)(*(longlong *)(lVar8 + 8) + (ulonglong)uVar3 * 0x20);
            sVar4 = strlen(pcVar5);
            pcVar5 = pcVar5 + sVar4 + 1;
            goto LAB_1495a90b5;
          }
        }
        else if ((-1 < sVar1) && ((int)uVar3 < **(int **)(lVar7 + 0x20))) {
          uVar6 = *(undefined8 *)(*(int **)(lVar7 + 0x20) + (ulonglong)uVar3 * 8 + 2);
          local_40 = *(undefined8 *)(lVar7 + 0x28);
          goto LAB_1495a9193;
        }
      }
    }
  }
  else if (*param_2 == -0x78) {
    local_40 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x28);
    uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x20) + 8);
LAB_1495a9193:
    local_48 = *param_1;
    local_30 = param_1;
    pcVar5 = (char *)FUN_1495a908a(&local_48,uVar6);
    goto LAB_1495a90b5;
  }
  pcVar5 = (char *)0x0;
LAB_1495a90b5:
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar5;
}



// FUNCTION 1495a91bf FUN_1495a91bf body=162 status=ok
// SIG undefined FUN_1495a91bf(void)

void FUN_1495a91bf(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,int param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  uVar1 = FUN_1495a92d3(uVar4);
  lVar2 = FUN_1495a92d3(uVar4,param_2,param_5,param_6);
  lVar3 = FUN_14958aad5(param_1,0x35,uVar1,lVar2);
  if (param_7 != 0 && lVar3 != 0) {
    *(byte *)(lVar3 + 4) = *(byte *)(lVar3 + 4) | 1;
    *(undefined2 *)(lVar3 + 0x34) = *(undefined2 *)(lVar2 + 0x2c);
  }
  uVar4 = FUN_149594bf0(param_1,*param_8,lVar3);
  *param_8 = uVar4;
  return;
}



// FUNCTION 1495a9261 FUN_1495a9261 body=114 status=ok
// SIG undefined FUN_1495a9261(void)

void FUN_1495a9261(char *param_1,undefined4 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  for (; param_1 != (char *)0x0; param_1 = *(char **)(param_1 + 0x18)) {
    param_1[4] = param_1[4] | 1;
    *(short *)(param_1 + 0x34) = (short)param_2;
    if (((*param_1 == -0x57) && (piVar1 = *(int **)(param_1 + 0x20), piVar1 != (int *)0x0)) &&
       (0 < *piVar1)) {
      lVar2 = 8;
      lVar3 = 0;
      do {
        FUN_1495a9261(*(undefined8 *)((longlong)piVar1 + lVar2),param_2);
        lVar3 = lVar3 + 1;
        piVar1 = *(int **)(param_1 + 0x20);
        lVar2 = lVar2 + 0x20;
      } while (lVar3 < *piVar1);
    }
    FUN_1495a9261(*(undefined8 *)(param_1 + 0x10),param_2);
  }
  return;
}



// FUNCTION 1495a92d3 FUN_1495a92d3 body=222 status=ok
// SIG undefined FUN_1495a92d3(void)

void FUN_1495a92d3(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar3 = (undefined8 *)FUN_14955d750(param_1,0x48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[8] = 0;
    *(undefined1 *)puVar3 = 0xa4;
    *(undefined2 *)((longlong)puVar3 + 0x32) = 0xffff;
    *(undefined4 *)(puVar3 + 5) = 1;
    lVar5 = (longlong)param_3 * 0x70;
    lVar2 = *(longlong *)(param_2 + 0x28 + lVar5);
    puVar3[8] = lVar2;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = *(undefined4 *)(param_2 + 0x4c + lVar5);
    if (*(short *)(lVar2 + 0x44) == param_4) {
      *(undefined2 *)(puVar3 + 6) = 0xffff;
    }
    else {
      *(short *)(puVar3 + 6) = (short)param_4;
      if (((*(byte *)(lVar2 + 0x40) & 0x60) == 0) ||
         ((*(byte *)(*(longlong *)(lVar2 + 8) + 0x1c + (longlong)param_4 * 0x20) & 0x60) == 0)) {
        bVar4 = 0x3f;
        if (param_4 < 0x3f) {
          bVar4 = (byte)param_4;
        }
        puVar1 = (ulonglong *)(lVar5 + param_2 + 0x60);
        *puVar1 = *puVar1 | 1L << (bVar4 & 0x3f);
      }
      else {
        uVar6 = ~(-1L << ((byte)*(short *)(lVar2 + 0x46) & 0x3f));
        if (0x3f < *(short *)(lVar2 + 0x46)) {
          uVar6 = 0xffffffffffffffff;
        }
        *(ulonglong *)(lVar5 + param_2 + 0x60) = uVar6;
      }
    }
  }
  return;
}



// FUNCTION 1495a93b1 FUN_1495a93b1 body=109 status=ok
// SIG undefined FUN_1495a93b1(void)

void FUN_1495a93b1(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  
  if (-1 < (char)*(uint *)(param_2 + 4)) {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x80;
    piVar1 = *(int **)(param_2 + 0x28);
    iVar4 = *piVar1;
    if (0 < iVar4) {
      uVar2 = *param_1;
      piVar6 = piVar1 + 2;
      iVar7 = 0;
      do {
        if (((*(byte *)(*(longlong *)(piVar6 + 8) + 0x40) & 2) != 0) &&
           (lVar3 = *(longlong *)(piVar6 + 10), *(longlong *)(piVar6 + 10) != 0)) {
          do {
            lVar5 = lVar3;
            lVar3 = *(longlong *)(lVar5 + 0x50);
          } while (lVar3 != 0);
          FUN_1495a8eab(uVar2,*(longlong *)(piVar6 + 8),lVar5,0x40);
          iVar4 = *piVar1;
        }
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 0x1c;
      } while (iVar7 < iVar4);
    }
  }
  return;
}



// FUNCTION 1495a941e FUN_1495a941e body=132 status=ok
// SIG undefined FUN_1495a941e(void)

int FUN_1495a941e(int *param_1,char *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*param_2 == ';') && (0 < (longlong)*param_1)) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar3 = 0;
    do {
      if ((*(byte *)(param_1 + lVar3 * 8 + 7) & 3) == 0) {
        if (*(longlong *)(param_1 + lVar3 * 8 + 4) == 0) {
          if (lVar2 == 0) {
LAB_1495a9498:
            return (int)lVar3 + 1;
          }
        }
        else if (lVar2 != 0) {
          lVar4 = 0;
          do {
            bVar1 = *(byte *)(*(longlong *)(param_1 + lVar3 * 8 + 4) + lVar4);
            if (bVar1 == *(byte *)(lVar2 + lVar4)) {
              if ((ulonglong)bVar1 == 0) goto LAB_1495a9498;
            }
            else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar2 + lVar4)]) break;
            lVar4 = lVar4 + 1;
          } while( true );
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != *param_1);
  }
  return 0;
}



// FUNCTION 1495a94a2 FUN_1495a94a2 body=134 status=ok
// SIG undefined FUN_1495a94a2(void)

undefined8 FUN_1495a94a2(char *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = 0;
  if (param_1 != (char *)0x0) {
    while ((param_1[5] & 4U) == 0) {
      if (*param_1 != -0x55) {
        if (*param_1 == -0x56) {
          iVar1 = FUN_1495a94a2(*(undefined8 *)(param_1 + 0x10),&local_14);
          if (iVar1 != 0) {
            local_14 = -local_14;
            goto LAB_1495a9501;
          }
          uVar2 = 0;
        }
        goto LAB_1495a9508;
      }
      param_1 = *(char **)(param_1 + 0x10);
      if (param_1 == (char *)0x0) goto LAB_1495a9508;
    }
    local_14 = *(int *)(param_1 + 8);
LAB_1495a9501:
    *param_2 = local_14;
    uVar2 = 1;
  }
LAB_1495a9508:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1495a9529 FUN_1495a9529 body=224 status=ok
// SIG undefined FUN_1495a9529(void)

undefined8 FUN_1495a9529(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  
  uVar5 = 0;
  if (((param_3 != (int *)0x0) && (*(char *)(*param_1 + 0x61) == '\0')) &&
     (*(byte *)((longlong)param_1 + 0x114) < 2)) {
    iVar4 = *param_3;
    if (*(int *)(*param_1 + 0x84) < iVar4) {
      FUN_14955a364(param_1,"too many terms in %s BY clause",param_4);
LAB_1495a95e4:
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
      if (0 < iVar4) {
        piVar2 = *(int **)(param_2 + 0x20);
        piVar6 = param_3 + 2;
        iVar7 = 1;
        do {
          uVar1 = *(ushort *)(piVar6 + 6);
          if (uVar1 != 0) {
            iVar4 = *piVar2;
            if (iVar4 < (int)(uint)uVar1) {
              FUN_14955a364(param_1,"%r %s BY term out of range - should be between 1 and %d",iVar7,
                            param_4,iVar4);
              goto LAB_1495a95e4;
            }
            FUN_1495a6573(param_1,piVar2,uVar1 - 1,*(undefined8 *)piVar6,param_4,0);
            iVar4 = *param_3;
          }
          piVar6 = piVar6 + 8;
          bVar3 = iVar7 < iVar4;
          iVar7 = iVar7 + 1;
        } while (bVar3);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1495a963b FUN_1495a963b body=306 status=ok
// SIG undefined FUN_1495a963b(void)

void FUN_1495a963b(longlong param_1,int *param_2,byte *param_3)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = *param_2;
  uVar7 = (ulonglong)*param_3;
  if (uVar7 == 0) {
    bVar1 = false;
    uVar5 = 0;
LAB_1495a9733:
    local_44 = 0x3b;
    FUN_149584e66(param_3,uVar5 & 0xffffffff);
    if (((!bVar1) && ((int)uVar5 != 0)) && (local_44 == 0x3b)) {
      bVar1 = false;
      goto LAB_1495a96bf;
    }
  }
  else {
    uVar5 = 0;
    uVar3 = uVar7;
    do {
      bVar1 = (char)uVar3 != '_' && ((&DAT_14bd400b0)[uVar3] & 6) == 0;
      if (bVar1) break;
      lVar2 = uVar5 + 1;
      uVar3 = (ulonglong)param_3[lVar2];
      uVar5 = uVar5 + 1;
    } while (param_3[lVar2] != 0);
    if (uVar7 - 0x3a < 0xfffffffffffffff6) goto LAB_1495a9733;
  }
  lVar2 = (longlong)iVar4;
  iVar4 = iVar4 + 1;
  *(undefined1 *)(param_1 + lVar2) = 0x22;
  uVar7 = (ulonglong)*param_3;
  bVar1 = true;
LAB_1495a96bf:
  bVar6 = (byte)uVar7;
  while (bVar6 != 0) {
    *(char *)(param_1 + iVar4) = (char)uVar7;
    uVar5 = (longlong)iVar4 + 1;
    if (*param_3 == 0x22) {
      *(undefined1 *)(param_1 + uVar5) = 0x22;
      uVar5 = (ulonglong)(iVar4 + 2);
    }
    bVar6 = param_3[1];
    uVar7 = (ulonglong)bVar6;
    iVar4 = (int)uVar5;
    param_3 = param_3 + 1;
  }
  if (bVar1) {
    lVar2 = (longlong)iVar4;
    iVar4 = iVar4 + 1;
    *(undefined1 *)(param_1 + lVar2) = 0x22;
  }
  *(undefined1 *)(param_1 + iVar4) = 0;
  *param_2 = iVar4;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a976e FUN_1495a976e body=91 status=ok
// SIG undefined FUN_1495a976e(void)

void FUN_1495a976e(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  byte bVar4;
  
  if ((param_1 != (byte *)0x0) && (bVar4 = *param_1, (char)(&DAT_14bd400b0)[bVar4] < '\0')) {
    bVar1 = 0x5d;
    if (bVar4 != 0x5b) {
      bVar1 = bVar4;
    }
    iVar3 = 1;
    uVar2 = 0;
    do {
      bVar4 = param_1[iVar3];
      if (param_1[iVar3] == bVar1) {
        if (param_1[(longlong)iVar3 + 1] != bVar1) {
          param_1[uVar2 & 0xffffffff] = 0;
          return;
        }
        iVar3 = iVar3 + 1;
        bVar4 = bVar1;
      }
      param_1[uVar2] = bVar4;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 1;
    } while( true );
  }
  return;
}



// FUNCTION 1495a97c9 FUN_1495a97c9 body=130 status=ok
// SIG undefined FUN_1495a97c9(void)

void * FUN_1495a97c9(undefined8 param_1,byte *param_2,int param_3)

{
  longlong lVar1;
  size_t sVar2;
  uint uVar3;
  void *_Dst;
  byte *_Src;
  uint uVar4;
  ulonglong uVar5;
  size_t _Size;
  
  uVar3 = param_3 - (int)param_2;
  do {
    uVar4 = uVar3;
    _Src = param_2;
    uVar5 = (ulonglong)uVar4;
    param_2 = _Src + 1;
    uVar3 = uVar4 - 1;
  } while (((&DAT_14bd400b0)[*_Src] & 1) != 0);
  sVar2 = (longlong)(int)uVar4;
  do {
    _Size = sVar2;
    if ((int)uVar5 < 1) break;
    lVar1 = uVar5 - 1;
    uVar5 = uVar5 - 1;
    sVar2 = _Size - 1;
  } while (((&DAT_14bd400b0)[_Src[lVar1]] & 1) != 0);
  if ((_Src != (byte *)0x0) &&
     (_Dst = (void *)FUN_14955d750(param_1,_Size + 1), _Dst != (void *)0x0)) {
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)((longlong)_Dst + _Size) = 0;
    return _Dst;
  }
  return (void *)0x0;
}



// FUNCTION 1495a986f FUN_1495a986f body=280 status=ok
// SIG undefined FUN_1495a986f(void)

undefined8 FUN_1495a986f(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x30) == 0) {
    uVar4 = 1;
    if ((*(byte *)(param_2 + 6) & 0x20) == 0) {
      piVar2 = *(int **)(param_2 + 0x20);
      if ((piVar2 != (int *)0x0) && (iVar3 = *piVar2, 0 < iVar3)) {
        lVar6 = 0;
        do {
          if ((*(longlong *)(piVar2 + lVar6 * 8 + 4) != 0) &&
             ((*(byte *)(piVar2 + lVar6 * 8 + 7) & 3) == 0)) {
            for (plVar5 = *(longlong **)(lVar1 + 0x198); plVar5 != (longlong *)0x0;
                plVar5 = (longlong *)plVar5[3]) {
              if (*plVar5 == *(longlong *)(piVar2 + lVar6 * 8 + 4)) {
                *plVar5 = 0;
                iVar3 = *piVar2;
                break;
              }
            }
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar3);
      }
      piVar2 = *(int **)(param_2 + 0x28);
      if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
        lVar6 = 0;
        do {
          plVar5 = *(longlong **)(lVar1 + 0x198);
          if (plVar5 != (longlong *)0x0) {
            do {
              if (*plVar5 == *(longlong *)(piVar2 + lVar6 * 0x1c + 6)) {
                *plVar5 = 0;
                break;
              }
              plVar5 = (longlong *)plVar5[3];
            } while (plVar5 != (longlong *)0x0);
          }
          if ((*(longlong *)(piVar2 + lVar6 * 0x1c + 0x14) != 0) &&
             (iVar3 = FUN_14959fa98(param_1), iVar3 != 0)) goto LAB_1495a9885;
          lVar6 = lVar6 + 1;
        } while (lVar6 < *piVar2);
      }
      FUN_1495a9987(param_1,param_2);
      uVar4 = 0;
    }
  }
  else {
LAB_1495a9885:
    uVar4 = 2;
  }
  return uVar4;
}



// FUNCTION 1495a9987 FUN_1495a9987 body=192 status=ok
// SIG undefined FUN_1495a9987(void)

void FUN_1495a9987(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  piVar1 = *(int **)(param_2 + 0x68);
  if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
    lVar4 = 0;
    piVar3 = piVar1;
    do {
      uVar2 = *(undefined8 *)(piVar3 + 8);
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_88 = *param_1;
      FUN_1495a68fc(local_88,uVar2,&local_88);
      FUN_14959fb62(param_1,uVar2);
      FUN_1495a9a48(*param_1,*(undefined8 *)(piVar3 + 6));
      lVar4 = lVar4 + 1;
      piVar3 = piVar3 + 8;
    } while (lVar4 < *piVar1);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a9a48 FUN_1495a9a48 body=249 status=ok
// SIG undefined FUN_1495a9a48(void)

void FUN_1495a9a48(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (int *)0x0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_60 = &LAB_1495a984b;
    iVar4 = *param_2;
    local_68 = param_1;
    if (0 < iVar4) {
      plVar3 = (longlong *)(param_2 + 2);
      for (; ((*plVar3 == 0 || (iVar1 = FUN_14959fa98(), iVar1 == 0)) && (1 < iVar4));
          iVar4 = iVar4 + -1) {
        plVar3 = plVar3 + 4;
      }
      iVar4 = *param_2;
      if (0 < iVar4) {
        lVar2 = 0;
        do {
          if (((*(byte *)(param_2 + lVar2 * 8 + 7) & 3) == 0) &&
             (plVar3 = *(longlong **)(param_1 + 0x198), plVar3 != (longlong *)0x0)) {
            do {
              if (*plVar3 == *(longlong *)((longlong)(param_2 + 2) + (lVar2 * 4 + 1) * 8)) {
                *plVar3 = 0;
                iVar4 = *param_2;
                break;
              }
              plVar3 = (longlong *)plVar3[3];
            } while (plVar3 != (longlong *)0x0);
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 < iVar4);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495a9b42 FUN_1495a9b42 body=97 status=ok
// SIG undefined FUN_1495a9b42(void)

undefined8 FUN_1495a9b42(undefined8 param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  
  if ((param_2 != (int *)0x0) && (0 < (longlong)*param_2)) {
    lVar2 = 0;
    do {
      if ((*(byte *)((longlong)param_2 + lVar2 + 0x1c) & 0x20) != 0) {
        cVar1 = *(char *)((longlong)param_2 + lVar2 + 0x18);
        pcVar3 = "LAST";
        if (cVar1 == '\x03') {
          pcVar3 = "FIRST";
        }
        if (cVar1 == '\0') {
          pcVar3 = "FIRST";
        }
        FUN_14955a364(param_1,"unsupported use of NULLS %s",pcVar3);
        return 1;
      }
      lVar2 = lVar2 + 0x20;
    } while ((longlong)*param_2 * 0x20 != lVar2);
  }
  return 0;
}



// FUNCTION 1495a9ba3 FUN_1495a9ba3 body=115 status=ok
// SIG undefined FUN_1495a9ba3(void)

longlong FUN_1495a9ba3(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1495a8206(param_1,0,param_2 + 8);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x2d8) == 0)) {
      piVar1 = (int *)(*(longlong *)(param_2 + 0x28) + 0x3c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) goto LAB_1495a9bcc;
    }
    FUN_149585e6d();
  }
LAB_1495a9bcc:
  *(longlong *)(param_2 + 0x28) = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + 1;
  }
  iVar2 = FUN_1495a8545(param_1,param_2 + 8);
  lVar4 = 0;
  if (iVar2 == 0) {
    lVar4 = lVar3;
  }
  return lVar4;
}



// FUNCTION 1495a9c16 FUN_1495a9c16 body=347 status=ok
// SIG undefined FUN_1495a9c16(void)

undefined8 FUN_1495a9c16(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  
  if ((param_2 == (int *)0x0) || (*param_2 < 1)) {
    return 0;
  }
  lVar2 = param_1[3];
  piVar10 = param_2 + 2;
  iVar9 = 0;
LAB_1495a9c52:
  if (*(char *)(param_1 + 2) == '\0') {
    lVar3 = *(longlong *)(piVar10 + 2);
    if (lVar3 != 0) {
      lVar7 = 0;
      do {
        bVar1 = *(byte *)(lVar3 + lVar7);
        if (bVar1 == *(byte *)(lVar2 + lVar7)) {
          if ((ulonglong)bVar1 == 0) goto LAB_1495a9d2d;
        }
        else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(lVar2 + lVar7)]) {
          FUN_14955a364(*param_1,"%s %T cannot reference objects in database %s",param_1[4],
                        param_1[5],lVar3);
          return 1;
        }
        lVar7 = lVar7 + 1;
      } while( true );
    }
    goto LAB_1495a9c65;
  }
  goto LAB_1495a9c79;
LAB_1495a9d2d:
  FUN_14955d65a(*(undefined8 *)*param_1);
LAB_1495a9c65:
  piVar10[2] = 0;
  piVar10[3] = 0;
  *(undefined8 *)piVar10 = param_1[1];
  *(byte *)(piVar10 + 0x10) = *(byte *)(piVar10 + 0x10) | 0x40;
LAB_1495a9c79:
  iVar5 = FUN_1495aa36b(param_1,*(undefined8 *)(piVar10 + 10));
  if (iVar5 != 0) {
    return 1;
  }
  iVar5 = FUN_1495aa4cc(param_1,*(undefined8 *)(piVar10 + 0x12));
  if (iVar5 != 0) {
    return 1;
  }
  if ((((*(byte *)(piVar10 + 0x10) & 4) != 0) &&
      (piVar4 = *(int **)(piVar10 + 0x18), piVar4 != (int *)0x0)) && (0 < *piVar4)) {
    piVar8 = piVar4 + 2;
    iVar5 = 0;
    do {
      iVar6 = FUN_1495aa4cc(param_1,*(undefined8 *)piVar8);
      if (iVar6 != 0) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 8;
    } while (iVar5 < *piVar4);
  }
  iVar9 = iVar9 + 1;
  piVar10 = piVar10 + 0x1c;
  if (*param_2 <= iVar9) {
    return 0;
  }
  goto LAB_1495a9c52;
}



// FUNCTION 1495a9d71 FUN_1495a9d71 body=190 status=ok
// SIG undefined FUN_1495a9d71(void)

void * FUN_1495a9d71(longlong param_1,short param_2,int param_3,longlong *param_4)

{
  void *_Dst;
  longlong lVar1;
  size_t _Size;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)param_2;
  lVar4 = lVar3 * 2 + 2;
  iVar2 = ((int)param_2 + (int)(lVar3 * 2) + (int)lVar4 + 7U & 0xfffffff8) + param_2 * 8 + 0x70;
  _Size = (size_t)(param_3 + iVar2);
  if (param_1 == 0) {
    _Dst = (void *)FUN_145e3bd67(_Size);
  }
  else {
    _Dst = (void *)FUN_14955d750();
  }
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,_Size);
    *(longlong *)((longlong)_Dst + 0x40) = (longlong)_Dst + 0x70;
    lVar1 = (longlong)_Dst + lVar3 * 8 + 0x70;
    *(longlong *)((longlong)_Dst + 0x10) = lVar1;
    lVar4 = lVar4 + lVar1;
    *(longlong *)((longlong)_Dst + 8) = lVar4;
    *(longlong *)((longlong)_Dst + 0x38) = lVar4 + lVar3 * 2;
    *(short *)((longlong)_Dst + 0x60) = param_2;
    *(short *)((longlong)_Dst + 0x5e) = param_2 + -1;
    *param_4 = (longlong)iVar2 + (longlong)_Dst;
  }
  return _Dst;
}



// FUNCTION 1495a9e2f FUN_1495a9e2f body=1339 status=ok
// SIG undefined FUN_1495a9e2f(void)

void FUN_1495a9e2f(longlong *param_1,undefined8 *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  int local_70;
  int local_6c;
  ulonglong local_68;
  undefined8 local_60;
  int *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar9 = (longlong *)param_2[3];
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  *(int *)((longlong)param_1 + 0x34) = iVar2 + 2;
  iVar12 = -1000000;
  if (param_2[6] != 0) {
    iVar12 = -1;
    plVar8 = (longlong *)(*(longlong *)(*param_1 + 0x20) + 0x18);
    do {
      iVar12 = iVar12 + 1;
      lVar3 = *plVar8;
      plVar8 = plVar8 + 4;
    } while (lVar3 != param_2[6]);
  }
  local_98 = *(longlong *)(*(longlong *)(*param_1 + 0x20) + (longlong)iVar12 * 0x20);
  iVar5 = FUN_1495a2d6b(param_1,0x1b,*param_2,0);
  if (iVar5 == 0) {
    local_98 = *plVar9;
    FUN_14959b139(param_1,iVar12,(int)plVar9[7],1);
    plVar8 = (longlong *)param_1[2];
    if (plVar8 == (longlong *)0x0) {
      if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23) = 1;
      }
      plVar8 = (longlong *)FUN_14955a44a(param_1);
      if (plVar8 == (longlong *)0x0) goto LAB_1495a9eba;
    }
    local_70 = param_3;
    if (param_3 < 0) {
      local_70 = *(int *)(param_2 + 0xb);
    }
    local_58 = (int *)FUN_14959b304(param_1,param_2);
    local_68 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
    *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) + 1;
    if (local_58 != (int *)0x0) {
      *local_58 = *local_58 + 1;
    }
    local_98._0_4_ = (uint)*(ushort *)((longlong)param_2 + 0x5e);
    uVar6 = FUN_149584f48(plVar8,0x6f,local_68,0);
    FUN_14955a5b6(plVar8,uVar6,local_58,&DAT_fffffff7);
    local_98._0_4_ = 0x60;
    FUN_14959b02c(param_1,iVar2,iVar12,plVar9);
    local_98._0_4_ = 0;
    local_60 = FUN_149584f48(plVar8,0x25,iVar2,0);
    if (*(char *)((longlong)param_1 + 0x1f) == '\0') {
      iVar5 = (int)param_1[7] + 1;
      *(int *)(param_1 + 7) = iVar5;
    }
    else {
      bVar4 = *(char *)((longlong)param_1 + 0x1f) - 1;
      *(byte *)((longlong)param_1 + 0x1f) = bVar4;
      iVar5 = *(int *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0xcc);
    }
    plVar9 = (longlong *)param_1[0x14];
    if ((longlong *)param_1[0x14] == (longlong *)0x0) {
      plVar9 = param_1;
    }
    *(undefined1 *)(plVar9 + 4) = 1;
    local_80 = 0;
    local_90 = &local_4c;
    local_98._0_4_ = 0;
    local_88 = 0;
    FUN_1495aa59d(param_1,param_2,iVar2,iVar5);
    local_98._0_4_ = 0;
    local_6c = iVar5;
    FUN_149584f48(plVar8,0x82,local_68,iVar5);
    FUN_1495aa812(param_1,local_4c);
    iVar5 = (int)local_60;
    local_98._0_4_ = 0;
    FUN_149584f48(plVar8,5,iVar2,iVar5 + 1);
    uVar11 = local_68;
    if (*(char *)(*plVar8 + 0x61) == '\0') {
      iVar7 = (int)plVar8[0x12] + -1;
      if (-1 < iVar5) {
        iVar7 = iVar5;
      }
      puVar10 = (undefined1 *)((longlong)iVar7 * 0x18 + plVar8[0x11]);
    }
    else {
      puVar10 = &DAT_14cc1ee40;
    }
    iVar5 = iVar2 + 1;
    *(int *)(puVar10 + 8) = (int)plVar8[0x12];
    if (param_3 < 0) {
      local_98._0_4_ = 0;
      FUN_149584f48(plVar8,0x89,local_70,iVar12);
    }
    local_98._0_4_ = iVar12;
    uVar6 = FUN_149584f48(plVar8,0x61,iVar5,local_70);
    FUN_14955a5b6(plVar8,uVar6,local_58,&DAT_fffffff7);
    if (0 < (longlong)(int)plVar8[0x12]) {
      *(ushort *)(plVar8[0x11] + -0x16 + (longlong)(int)plVar8[0x12] * 0x18) =
           (ushort)(-1 < param_3) * 0x10 + 1;
    }
    local_98._0_4_ = 0;
    local_70 = FUN_149584f48(plVar8,0x23,uVar11 & 0xffffffff,0);
    if (*(char *)((longlong)param_2 + 0x62) == '\0') {
      plVar9 = (longlong *)param_1[0x14];
      if ((longlong *)param_1[0x14] == (longlong *)0x0) {
        plVar9 = param_1;
      }
      *(undefined1 *)((longlong)plVar9 + 0x21) = 1;
      uVar6 = (undefined4)plVar8[0x12];
    }
    else {
      local_98._0_4_ = 0;
      iVar12 = FUN_149584f48(plVar8,0xb,0,1);
      uVar6 = (undefined4)plVar8[0x12];
      uVar1 = *(ushort *)((longlong)param_2 + 0x5e);
      local_98._0_4_ = local_6c;
      iVar7 = FUN_149584f48(plVar8,0x7c,uVar11,iVar12);
      if (*(char *)(*plVar8 + 0x61) == '\0') {
        lVar3 = plVar8[0x11];
        *(undefined1 *)(lVar3 + 1 + (longlong)iVar7 * 0x18) = 0xfd;
        *(uint *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18) = (uint)uVar1;
      }
      FUN_1495aa841(param_1,2,param_2);
      if (*(char *)(*plVar8 + 0x61) == '\0') {
        iVar7 = (int)plVar8[0x12] + -1;
        if (-1 < iVar12) {
          iVar7 = iVar12;
        }
        puVar10 = (undefined1 *)((longlong)iVar7 * 0x18 + plVar8[0x11]);
      }
      else {
        puVar10 = &DAT_14cc1ee40;
      }
      *(int *)(puVar10 + 8) = (int)plVar8[0x12];
      uVar11 = local_68;
    }
    iVar12 = local_6c;
    local_98._0_4_ = iVar5;
    FUN_149584f48(plVar8,0x7d,uVar11 & 0xffffffff,local_6c);
    if ((*(byte *)((longlong)param_2 + 0x65) & 2) == 0) {
      local_98._0_4_ = 0;
      FUN_149584f48(plVar8,0x81,iVar5,0);
    }
    local_98._0_4_ = 0;
    FUN_149584f48(plVar8,0x83,iVar5,iVar12);
    if (0 < (longlong)(int)plVar8[0x12]) {
      *(undefined2 *)(plVar8[0x11] + -0x16 + (longlong)(int)plVar8[0x12] * 0x18) = 0x10;
    }
    if (iVar12 != 0) {
      bVar4 = *(byte *)((longlong)param_1 + 0x1f);
      if ((ulonglong)bVar4 < 8) {
        *(byte *)((longlong)param_1 + 0x1f) = bVar4 + 1;
        *(int *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0xcc) = iVar12;
      }
    }
    local_98._0_4_ = 0;
    FUN_149584f48(plVar8,3,uVar11 & 0xffffffff,uVar6);
    if (*(char *)(*plVar8 + 0x61) == '\0') {
      iVar12 = (int)plVar8[0x12] + -1;
      if (-1 < local_70) {
        iVar12 = local_70;
      }
      puVar10 = (undefined1 *)((longlong)iVar12 * 0x18 + plVar8[0x11]);
    }
    else {
      puVar10 = &DAT_14cc1ee40;
    }
    *(int *)(puVar10 + 8) = (int)plVar8[0x12];
    local_98._0_4_ = 0;
    FUN_149584f48(plVar8,0x74,iVar2,0);
    local_98._0_4_ = 0;
    FUN_149584f48(plVar8,0x74,iVar5,0);
    local_98 = (ulonglong)local_98._4_4_ << 0x20;
    FUN_149584f48(plVar8,0x74,uVar11 & 0xffffffff,0);
  }
LAB_1495a9eba:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495aa36b FUN_1495aa36b body=353 status=ok
// SIG undefined FUN_1495aa36b(void)

undefined8 FUN_1495aa36b(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    piVar2 = *(int **)(param_2 + 0x20);
    if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
      piVar5 = piVar2 + 2;
      iVar3 = 0;
      do {
        iVar1 = FUN_1495aa4cc(param_1,*(undefined8 *)piVar5);
        if (iVar1 != 0) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 8;
      } while (iVar3 < *piVar2);
    }
    iVar3 = FUN_1495a9c16(param_1,*(undefined8 *)(param_2 + 0x28));
    if ((iVar3 != 0) || (iVar3 = FUN_1495aa4cc(param_1,*(undefined8 *)(param_2 + 0x30)), iVar3 != 0)
       ) {
      return 1;
    }
    piVar2 = *(int **)(param_2 + 0x38);
    if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
      piVar5 = piVar2 + 2;
      iVar3 = 0;
      do {
        iVar1 = FUN_1495aa4cc(param_1,*(undefined8 *)piVar5);
        if (iVar1 != 0) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 8;
      } while (iVar3 < *piVar2);
    }
    iVar3 = FUN_1495aa4cc(param_1,*(undefined8 *)(param_2 + 0x40));
    if (iVar3 != 0) break;
    piVar2 = *(int **)(param_2 + 0x48);
    if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
      piVar5 = piVar2 + 2;
      iVar3 = 0;
      do {
        iVar1 = FUN_1495aa4cc(param_1,*(undefined8 *)piVar5);
        if (iVar1 != 0) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 8;
      } while (iVar3 < *piVar2);
    }
    iVar3 = FUN_1495aa4cc(param_1,*(undefined8 *)(param_2 + 0x60));
    if (iVar3 != 0) {
      return 1;
    }
    piVar2 = *(int **)(param_2 + 0x68);
    if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
      lVar4 = 0x20;
      lVar6 = 0;
      do {
        iVar3 = FUN_1495aa36b(param_1,*(undefined8 *)((longlong)piVar2 + lVar4));
        if (iVar3 != 0) {
          return 1;
        }
        lVar6 = lVar6 + 1;
        piVar2 = *(int **)(param_2 + 0x68);
        lVar4 = lVar4 + 0x20;
      } while (lVar6 < *piVar2);
    }
    param_2 = *(longlong *)(param_2 + 0x50);
  }
  return 1;
}



// FUNCTION 1495aa4cc FUN_1495aa4cc body=209 status=ok
// SIG undefined FUN_1495aa4cc(void)

undefined8 FUN_1495aa4cc(undefined8 *param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    if (param_2 == (char *)0x0) {
      return 0;
    }
    if (*(char *)(param_1 + 2) == '\0') {
      param_2[7] = param_2[7] | 0x40;
    }
    if (*param_2 == -0x67) {
      if (*(char *)(*(longlong *)*param_1 + 0xb5) == '\0') {
        FUN_14955a364((longlong *)*param_1,"%s cannot use variables",param_1[4]);
        return 1;
      }
      *param_2 = 'w';
    }
    if ((*(uint *)(param_2 + 4) & 0x804000) != 0) {
      return 0;
    }
    piVar1 = *(int **)(param_2 + 0x20);
    if ((*(uint *)(param_2 + 4) >> 0xb & 1) == 0) {
      if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
        piVar4 = piVar1 + 2;
        iVar3 = 0;
        do {
          iVar2 = FUN_1495aa4cc(param_1,*(undefined8 *)piVar4);
          if (iVar2 != 0) {
            return 1;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 8;
        } while (iVar3 < *piVar1);
      }
    }
    else {
      iVar3 = FUN_1495aa36b(param_1,piVar1);
      if (iVar3 != 0) {
        return 1;
      }
    }
    iVar3 = FUN_1495aa4cc(param_1,*(undefined8 *)(param_2 + 0x18));
    if (iVar3 != 0) break;
    param_2 = *(char **)(param_2 + 0x10);
  }
  return 1;
}



// FUNCTION 1495aa59d FUN_1495aa59d body=629 status=ok
// SIG undefined FUN_1495aa59d(void)

int FUN_1495aa59d(undefined8 *param_1,longlong param_2,undefined8 param_3,int param_4,int param_5,
                 int *param_6,longlong param_7,int param_8)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  longlong *plVar4;
  short sVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  uint uVar12;
  
  plVar4 = (longlong *)param_1[2];
  if (param_6 != (int *)0x0) {
    if (*(longlong *)(param_2 + 0x48) == 0) {
      *param_6 = 0;
    }
    else {
      iVar6 = *(int *)((longlong)param_1 + 0x44) + -1;
      *(int *)((longlong)param_1 + 0x44) = iVar6;
      *param_6 = iVar6;
      *(int *)(param_1 + 8) = (int)param_3 + 1;
      FUN_1495aaa03(param_1,*(undefined8 *)(param_2 + 0x48),*param_6);
      *(undefined4 *)(param_1 + 8) = 0;
      param_7 = 0;
    }
  }
  if ((param_5 == 0) || (lVar7 = 0x5e, (*(byte *)(param_2 + 100) & 8) == 0)) {
    lVar7 = 0x60;
  }
  uVar2 = *(ushort *)(param_2 + lVar7);
  iVar6 = FUN_14959d77c(param_1,uVar2);
  if (((param_7 == 0) || (iVar6 != param_8)) || (*(longlong *)(param_7 + 0x48) != 0)) {
    param_7 = 0;
  }
  if (uVar2 != 0) {
    lVar7 = 8;
    uVar10 = 0;
    do {
      if (param_7 == 0) {
        sVar5 = *(short *)(*(longlong *)(param_2 + 8) + uVar10 * 2);
LAB_1495aa67e:
        if (sVar5 == -2) {
          *(int *)(param_1 + 8) = (int)param_3 + 1;
          FUN_1495aab85(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x50) + lVar7),
                        iVar6 + (int)uVar10);
          *(undefined4 *)(param_1 + 8) = 0;
        }
        else {
          FUN_14959f097(param_1[2],*(undefined8 *)(param_2 + 0x18),param_3,(int)sVar5,
                        iVar6 + (int)uVar10);
        }
        lVar9 = (longlong)(int)plVar4[0x12];
        if (((0 < lVar9) && (*(char *)(plVar4[0x11] + -0x18 + lVar9 * 0x18) == 'S')) &&
           (*(char *)(*plVar4 + 0x61) == '\0')) {
          lVar9 = plVar4[0x11] + lVar9 * 0x18;
          FUN_149569985(*plVar4,(int)*(char *)(lVar9 + -0x17),*(undefined8 *)(lVar9 + -8));
          *(undefined8 *)(lVar9 + -8) = 0;
          *(undefined2 *)(lVar9 + -0x18) = 0xad;
        }
      }
      else {
        sVar3 = *(short *)(*(longlong *)(param_7 + 8) + uVar10 * 2);
        sVar5 = *(short *)(*(longlong *)(param_2 + 8) + uVar10 * 2);
        if ((sVar3 == -2) || (sVar3 != sVar5)) goto LAB_1495aa67e;
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x20;
    } while ((uint)uVar2 != uVar10);
  }
  uVar12 = (uint)uVar2;
  if ((param_4 != 0) &&
     (FUN_149584f48(plVar4,0x5b,iVar6,uVar12,param_4),
     *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x18) != 0)) {
    uVar8 = FUN_1495aaa6f(*param_1,param_2);
    FUN_14955a5b6(plVar4,0xffffffff,uVar8,0);
  }
  if (uVar12 == 1) {
    if (iVar6 == 0) {
      return 0;
    }
    bVar1 = *(byte *)((longlong)param_1 + 0x1f);
    if (7 < (ulonglong)bVar1) {
      return iVar6;
    }
    *(byte *)((longlong)param_1 + 0x1f) = bVar1 + 1;
    piVar11 = (int *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xcc);
  }
  else {
    if ((int)(uint)uVar2 <= *(int *)(param_1 + 5)) {
      return iVar6;
    }
    *(uint *)(param_1 + 5) = uVar12;
    piVar11 = (int *)((longlong)param_1 + 0x2c);
  }
  *piVar11 = iVar6;
  return iVar6;
}



// FUNCTION 1495aa812 FUN_1495aa812 body=47 status=ok
// SIG undefined FUN_1495aa812(void)

void FUN_1495aa812(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 == 0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  puVar4 = *(undefined8 **)(lVar3 + 0x18);
  if (*(int *)((longlong)puVar4 + 0x44) + *(int *)(puVar4 + 9) < 0) {
    lVar6 = 10 - (longlong)*(int *)((longlong)puVar4 + 0x44);
    uVar1 = *puVar4;
    lVar2 = puVar4[10];
    lVar5 = FUN_14955d6fd(uVar1,lVar2,lVar6 * 4);
    if ((lVar2 == 0) || (lVar5 != 0)) {
      puVar4[10] = lVar5;
      if (lVar5 != 0) {
        *(int *)(puVar4 + 9) = (int)lVar6;
        *(undefined4 *)(lVar5 + (longlong)(int)~param_2 * 4) = *(undefined4 *)(lVar3 + 0x90);
        return;
      }
    }
    else {
      FUN_14955d65a(uVar1,lVar2);
      puVar4[10] = 0;
    }
    *(undefined4 *)(puVar4 + 9) = 0;
    return;
  }
  *(undefined4 *)(puVar4[10] + (longlong)(int)~param_2 * 4) = *(undefined4 *)(lVar3 + 0x90);
  return;
}



// FUNCTION 1495aa841 FUN_1495aa841 body=449 status=ok
// SIG undefined FUN_1495aa841(void)

void FUN_1495aa841(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined4 local_6c;
  longlong local_68;
  longlong local_60;
  uint local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined8 *)param_3[3];
  local_68 = *param_1;
  local_54 = *(int *)(local_68 + 0x7c);
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_6c = param_2;
  if (param_3[10] == 0) {
    if (*(short *)((longlong)param_3 + 0x5e) != 0) {
      uVar4 = 0;
      do {
        uVar2 = *(undefined8 *)(puVar1[1] + (longlong)*(short *)(param_3[1] + uVar4 * 2) * 0x20);
        if (uVar4 != 0) {
          if (local_50 + 2 < local_58) {
            *(undefined2 *)(local_60 + (ulonglong)local_50) = 0x202c;
            local_50 = local_50 + 2;
          }
          else {
            FUN_1495557b3(&local_68,&DAT_149dfd133,2);
          }
        }
        FUN_1495555b8(&local_68,*puVar1);
        if (local_50 + 1 < local_58) {
          *(undefined1 *)(local_60 + (ulonglong)local_50) = 0x2e;
          local_50 = local_50 + 1;
        }
        else {
          FUN_1495557b3(&local_68,L".Preview",1);
        }
        FUN_1495555b8(&local_68,uVar2);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)((longlong)param_3 + 0x5e));
    }
  }
  else {
    FUN_149555a84(&local_68,"index \'%q\'",*param_3);
  }
  if (local_60 == 0) {
    lVar3 = 0;
  }
  else {
    *(undefined1 *)(local_60 + (ulonglong)local_50) = 0;
    lVar3 = local_60;
    if ((local_54 != 0) && ((local_4c & 0x400) == 0)) {
      lVar3 = FUN_14955d93a(&local_68);
    }
  }
  local_80 = 2;
  local_88 = 0xf9;
  FUN_14959efda(param_1,(uint)((*(uint *)((longlong)param_3 + 100) & 3) != 2) * 0x200 + 0x613,
                local_6c,lVar3);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495aaa03 FUN_1495aaa03 body=108 status=ok
// SIG undefined FUN_1495aaa03(void)

void FUN_1495aaa03(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1495a1c89(lVar1,param_2,0,0);
  }
  if (*(char *)(lVar1 + 0x61) == '\0') {
    FUN_14959ec19(param_1,lVar2,param_3,0x10);
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_14958288e(lVar1,lVar2);
  return;
}



// FUNCTION 1495aaa6f FUN_1495aaa6f body=278 status=ok
// SIG undefined FUN_1495aaa6f(void)

longlong FUN_1495aaa6f(longlong param_1,longlong param_2)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *(longlong *)(param_2 + 0x20);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_2 + 0x18);
    lVar3 = FUN_145e3bd67((ulonglong)*(ushort *)(param_2 + 0x60) + 1);
    *(longlong *)(param_2 + 0x20) = lVar3;
    if (lVar3 == 0) {
      if ((*(char *)(param_1 + 0x61) == '\0') && (*(char *)(param_1 + 0x62) == '\0')) {
        *(undefined1 *)(param_1 + 0x61) = 1;
        if (0 < *(int *)(param_1 + 0xd4)) {
          *(undefined4 *)(param_1 + 0x170) = 1;
        }
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
        *(undefined2 *)(param_1 + 0x17c) = 0;
        if (*(longlong *)(param_1 + 0x138) != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x138) + 0x18) = 7;
        }
      }
      lVar4 = 0;
    }
    else {
      if (*(short *)(param_2 + 0x60) == 0) {
        uVar5 = 0;
      }
      else {
        lVar3 = 4;
        uVar5 = 0;
        do {
          sVar1 = *(short *)(*(longlong *)(param_2 + 8) + uVar5 * 2);
          if ((longlong)sVar1 < 0) {
            cVar2 = 'D';
            if (sVar1 != -1) {
              cVar2 = FUN_14959f8fa(*(undefined8 *)(*(longlong *)(param_2 + 0x50) + lVar3 * 2));
            }
          }
          else {
            cVar2 = *(char *)(*(longlong *)(lVar4 + 8) + 0x19 + (longlong)sVar1 * 0x20);
          }
          if (cVar2 < 'B') {
            cVar2 = 'A';
          }
          if ('B' < cVar2) {
            cVar2 = 'C';
          }
          *(char *)(*(longlong *)(param_2 + 0x20) + uVar5) = cVar2;
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar5 < *(ushort *)(param_2 + 0x60));
        lVar3 = *(longlong *)(param_2 + 0x20);
      }
      *(undefined1 *)(lVar3 + uVar5) = 0;
      lVar4 = *(longlong *)(param_2 + 0x20);
    }
  }
  return lVar4;
}



// FUNCTION 1495aab85 FUN_1495aab85 body=102 status=ok
// SIG undefined FUN_1495aab85(void)

void FUN_1495aab85(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1495a1c89(lVar1,param_2,0,0);
  }
  if (*(char *)(lVar1 + 0x61) == '\0') {
    FUN_14959afe0(param_1,lVar2,param_3);
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_14958288e(lVar1,lVar2);
  return;
}



// FUNCTION 1495aabeb FUN_1495aabeb body=189 status=ok
// SIG undefined FUN_1495aabeb(void)

void FUN_1495aabeb(longlong *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = *param_1;
  if (0 < *(int *)(lVar3 + 0x28)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar3 + 0x20) + 8 + lVar6 * 0x20) != 0) {
        if (param_2 != 0) {
          lVar5 = 0;
          do {
            bVar1 = *(byte *)(param_2 + lVar5);
            bVar2 = *(byte *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + lVar6 * 0x20) + lVar5);
            if (bVar1 == bVar2) {
              if ((ulonglong)bVar1 == 0) break;
            }
            else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[bVar2]) goto LAB_1495aac84;
            lVar5 = lVar5 + 1;
          } while( true );
        }
        plVar4 = (longlong *)param_1[0x14];
        if ((longlong *)param_1[0x14] == (longlong *)0x0) {
          plVar4 = param_1;
        }
        if (((*(uint *)((longlong)plVar4 + 0x74) >> ((uint)lVar6 & 0x1f) & 1) == 0) &&
           (*(uint *)((longlong)plVar4 + 0x74) =
                 *(uint *)((longlong)plVar4 + 0x74) | 1 << ((byte)lVar6 & 0x1f), lVar6 == 1)) {
          FUN_14955dea7(plVar4);
        }
      }
LAB_1495aac84:
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar3 + 0x28));
  }
  return;
}



// FUNCTION 1495aaca8 FUN_1495aaca8 body=197 status=ok
// SIG undefined FUN_1495aaca8(void)

void FUN_1495aaca8(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined8 *)(*(longlong *)(*param_1 + 0x20) + (longlong)param_2 * 0x20);
  iVar3 = 1;
  do {
    FUN_14955591f(0x18,local_68,"sqlite_stat%d",iVar3);
    lVar2 = FUN_14955d004(*param_1,local_68,uVar1);
    if (lVar2 != 0) {
      local_78 = param_3;
      local_70 = param_4;
      FUN_1495a3e15(param_1,"DELETE FROM %Q.%s WHERE %s=%Q",uVar1,local_68);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 5);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495aad6e FUN_1495aad6e body=378 status=ok
// SIG undefined FUN_1495aad6e(void)

void FUN_1495aad6e(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar1 = *param_1;
  if (((*(byte *)(lVar1 + 0x31) & 0x40) != 0) && (*(int *)((longlong)param_3 + 0x54) == 0)) {
    lVar2 = param_1[2];
    if (lVar2 == 0) {
      if ((param_1[0x14] == 0) && ((*(byte *)(lVar1 + 0x5c) & 8) == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x23) = 1;
      }
      lVar2 = FUN_14955a44a(param_1);
    }
    uVar5 = 0;
    lVar3 = FUN_14958201d(param_3[0xe] + 0x50,*param_3,0);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      for (lVar3 = param_3[4]; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
        if ((*(char *)(lVar3 + 0x2c) != '\0') || ((*(byte *)(lVar1 + 0x32) & 8) != 0)) {
          uVar5 = *(int *)((longlong)param_1 + 0x44) - 1;
          *(uint *)((longlong)param_1 + 0x44) = uVar5;
          FUN_149584f48(lVar2,0x2f,1,uVar5,0);
          goto LAB_1495aae2e;
        }
      }
    }
    else {
LAB_1495aae2e:
      *(undefined1 *)((longlong)param_1 + 0xca) = 1;
      uVar4 = FUN_1495a25b6(lVar1,param_2,0);
      FUN_14958fd0c(param_1,uVar4,0);
      *(undefined1 *)((longlong)param_1 + 0xca) = 0;
      if ((*(byte *)(lVar1 + 0x32) & 8) == 0) {
        FUN_149584f48(lVar2,0x2f,0,*(int *)(lVar2 + 0x90) + 2,0);
        FUN_14959efda(param_1,0x313,2,0,0xff,4);
      }
      if (uVar5 != 0) {
        lVar1 = *(longlong *)(lVar2 + 0x18);
        if (*(int *)(lVar1 + 0x44) + *(int *)(lVar1 + 0x48) < 0) {
          FUN_1495a1bff(lVar1,lVar2,~uVar5);
          return;
        }
        *(undefined4 *)(*(longlong *)(lVar1 + 0x50) + (longlong)(int)~uVar5 * 4) =
             *(undefined4 *)(lVar2 + 0x90);
      }
    }
  }
  return;
}



// FUNCTION 1495aaee8 FUN_1495aaee8 body=672 status=ok
// SIG undefined FUN_1495aaee8(void)

void FUN_1495aaee8(longlong *param_1,ulonglong *param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong uVar16;
  undefined4 uVar17;
  
  lVar2 = *param_1;
  lVar5 = param_1[2];
  lVar15 = (longlong)param_3 * 0x20;
  puVar12 = (undefined8 *)(*(longlong *)(lVar2 + 0x20) + lVar15);
  if (lVar5 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(lVar2 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar5 = FUN_14955a44a(param_1);
  }
  FUN_1495a3043(param_1,1,param_3);
  if (*(int *)((longlong)param_2 + 0x54) != 0) {
    FUN_149584f48(lVar5,0xa2,0,0,in_stack_ffffffffffffffa8 & 0xffffffff00000000);
  }
  for (lVar6 = FUN_1495ab188(param_1,param_2); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x40)) {
    FUN_1495ab227(param_1,lVar6);
  }
  if ((param_2[8] & 8) != 0) {
    FUN_1495a3e15(param_1,"DELETE FROM %Q.sqlite_sequence WHERE name=%Q",*puVar12,*param_2);
  }
  uVar16 = *param_2;
  FUN_1495a3e15(param_1,"DELETE FROM %Q.%s WHERE tbl_name=%Q and type!=\'trigger\'",*puVar12,
                "sqlite_master",uVar16);
  iVar3 = *(int *)((longlong)param_2 + 0x54);
  if (param_4 == 0) {
    if (iVar3 == 0) {
      iVar3 = (int)param_2[7];
      iVar14 = 0;
      while( true ) {
        iVar11 = 0;
        if (iVar3 < iVar14) {
          iVar11 = iVar3;
        }
        if (iVar14 == 0) {
          iVar11 = iVar3;
        }
        for (uVar9 = param_2[2]; uVar9 != 0; uVar9 = *(ulonglong *)(uVar9 + 0x28)) {
          iVar1 = *(int *)(uVar9 + 0x58);
          iVar13 = iVar11;
          if (iVar11 < iVar1) {
            iVar13 = iVar1;
          }
          if (iVar1 < iVar14) {
            iVar11 = iVar13;
          }
          if (iVar14 == 0) {
            iVar11 = iVar13;
          }
        }
        if (iVar11 == 0) break;
        iVar14 = -1000000;
        if (param_2[0xe] != 0) {
          iVar14 = -1;
          puVar10 = (ulonglong *)(*(longlong *)(*param_1 + 0x20) + 0x18);
          do {
            iVar14 = iVar14 + 1;
            uVar9 = *puVar10;
            puVar10 = puVar10 + 4;
          } while (uVar9 != param_2[0xe]);
        }
        FUN_1495ab3c1(param_1,iVar11,iVar14);
        iVar14 = iVar11;
      }
      iVar3 = *(int *)((longlong)param_2 + 0x54);
      goto LAB_1495ab073;
    }
  }
  else {
LAB_1495ab073:
    if (iVar3 == 0) goto LAB_1495ab0b7;
  }
  uVar9 = *param_2;
  uVar16 = uVar16 & 0xffffffff00000000;
  uVar4 = FUN_149584f48(lVar5,0xa4,param_3,0,uVar16);
  FUN_14955a5b6(lVar5,uVar4,uVar9,0);
  plVar7 = (longlong *)param_1[0x14];
  if ((longlong *)param_1[0x14] == (longlong *)0x0) {
    plVar7 = param_1;
  }
  *(undefined1 *)((longlong)plVar7 + 0x21) = 1;
LAB_1495ab0b7:
  uVar9 = *param_2;
  uVar16 = uVar16 & 0xffffffff00000000;
  uVar4 = FUN_149584f48(lVar5,0x8f,param_3,0,uVar16);
  uVar17 = (undefined4)(uVar16 >> 0x20);
  FUN_14955a5b6(lVar5,uVar4,uVar9,0);
  FUN_149584f48(param_1[2],0x5e,param_3,1,
                CONCAT44(uVar17,**(int **)(*(longlong *)(*param_1 + 0x20) + 0x18 + lVar15) + 1));
  lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x18 + lVar15);
  uVar8 = *(ushort *)(lVar5 + 0x72);
  if ((uVar8 & 2) != 0) {
    plVar7 = *(longlong **)(lVar5 + 0x10);
    if (plVar7 != (longlong *)0x0) {
      do {
        lVar5 = plVar7[2];
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          FUN_14958605e(lVar2,lVar5);
          *(undefined8 *)(lVar5 + 8) = 0;
          *(undefined2 *)(lVar5 + 0x46) = 0;
        }
        plVar7 = (longlong *)*plVar7;
      } while (plVar7 != (longlong *)0x0);
      lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x18 + lVar15);
      uVar8 = *(ushort *)(lVar5 + 0x72);
    }
    *(ushort *)(lVar5 + 0x72) = uVar8 & 0xfffd;
  }
  return;
}



// FUNCTION 1495ab188 FUN_1495ab188 body=159 status=ok
// SIG undefined FUN_1495ab188(void)

longlong FUN_1495ab188(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)((longlong)param_1 + 0xca) != '\0') {
    return 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x20) + 0x38);
  if ((lVar3 != param_2[0xe]) && (plVar4 = *(longlong **)(lVar3 + 0x40), plVar4 != (longlong *)0x0))
  {
    lVar3 = 0;
LAB_1495ab1bd:
    lVar2 = plVar4[2];
    if (*(longlong *)(lVar2 + 0x30) == param_2[0xe]) {
      lVar5 = 0;
      do {
        bVar1 = *(byte *)(*(longlong *)(lVar2 + 8) + lVar5);
        if (bVar1 == *(byte *)(*param_2 + lVar5)) {
          if ((ulonglong)bVar1 == 0) goto LAB_1495ab203;
        }
        else if ((&DAT_14bd3ff30)[bVar1] != (&DAT_14bd3ff30)[*(byte *)(*param_2 + lVar5)]) break;
        lVar5 = lVar5 + 1;
      } while( true );
    }
    goto LAB_1495ab1cb;
  }
LAB_1495ab21e:
  return param_2[0xd];
LAB_1495ab203:
  if (lVar3 == 0) {
    lVar3 = param_2[0xd];
  }
  *(longlong *)(lVar2 + 0x40) = lVar3;
  lVar3 = lVar2;
LAB_1495ab1cb:
  plVar4 = (longlong *)*plVar4;
  if (plVar4 == (longlong *)0x0) goto LAB_1495ab215;
  goto LAB_1495ab1bd;
LAB_1495ab215:
  if (lVar3 != 0) {
    return lVar3;
  }
  goto LAB_1495ab21e;
}



// FUNCTION 1495ab227 FUN_1495ab227 body=410 status=ok
// SIG undefined FUN_1495ab227(void)

void FUN_1495ab227(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  
  lVar1 = *param_1;
  iVar6 = -1000000;
  if (param_2[5] != 0) {
    iVar6 = -1;
    plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18);
    do {
      iVar6 = iVar6 + 1;
      lVar4 = *plVar5;
      plVar5 = plVar5 + 4;
    } while (lVar4 != param_2[5]);
  }
  lVar4 = FUN_14958201d(param_2[6] + 8,param_2[1],0);
  if (*(undefined8 **)(lVar4 + 0x10) != (undefined8 *)0x0) {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar6 * 0x20);
    iVar3 = FUN_1495a2d6b(param_1,(iVar6 != 1) * '\x02' + '\x0e',*param_2,
                          **(undefined8 **)(lVar4 + 0x10),uVar8);
    if (iVar3 != 0) {
      return;
    }
    pcVar7 = "sqlite_master";
    if (iVar6 == 1) {
      pcVar7 = "sqlite_temp_master";
    }
    iVar3 = FUN_1495a2d6b(param_1,9,pcVar7,0,uVar8);
    if (iVar3 != 0) {
      return;
    }
  }
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    if ((param_1[0x14] == 0) && ((*(byte *)(*param_1 + 0x5c) & 8) == 0)) {
      *(undefined1 *)((longlong)param_1 + 0x23) = 1;
    }
    lVar4 = FUN_14955a44a(param_1);
    if (lVar4 == 0) {
      return;
    }
  }
  uVar8 = *param_2;
  FUN_1495a3e15(param_1,"DELETE FROM %Q.%s WHERE name=%Q AND type=\'trigger\'",
                *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar6 * 0x20),
                "sqlite_master",uVar8);
  uVar9 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),
                   **(int **)(*(longlong *)(*param_1 + 0x20) + 0x18 + (longlong)iVar6 * 0x20) + 1);
  FUN_149584f48(param_1[2],0x5e,iVar6,1,uVar9);
  uVar8 = *param_2;
  uVar2 = FUN_149584f48(lVar4,0x91,iVar6,0,uVar9 & 0xffffffff00000000);
  FUN_14955a5b6(lVar4,uVar2,uVar8,0);
  return;
}


