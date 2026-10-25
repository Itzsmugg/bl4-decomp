// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145276860 FUN_145276860 body=1433 status=ok
// SIG undefined FUN_145276860(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145276860(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 local_res20;
  undefined4 uVar18;
  undefined1 *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  
  uStack_40 = 0x14527687a;
  lVar11 = 0;
  lVar12 = 0;
  lVar8 = FUN_144babca0();
  lVar9 = lVar11;
  if (lVar8 == 0) {
    uVar18 = 0x72b;
    uVar10 = 0x50;
    uVar15 = 0x41;
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
        (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
      if (param_2[1] != 0) {
        cVar1 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        param_2[1] = param_2[1] + -1;
        if (cVar1 == '\0') goto LAB_1452768f8;
      }
    }
    else {
LAB_1452768f8:
      if (2 < (ulonglong)param_2[1]) {
        puVar5 = (undefined1 *)*param_2;
        uVar14 = param_2[1] - 3;
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        uVar4 = puVar5[2];
        param_2[1] = uVar14;
        *param_2 = (longlong)(puVar5 + 3);
        if ((uVar14 == CONCAT21(CONCAT11(uVar2,uVar3),uVar4)) && (lVar17 = lVar11, uVar14 != 0)) {
          do {
            if ((ulonglong)param_2[1] < 3) {
LAB_145276d6c:
              FUN_144eafc90(param_1,0x32,0x16f,0x87,"ssl\\statem\\statem_clnt.c",0x73d);
              lVar9 = lVar11;
              goto LAB_145276dc8;
            }
            puVar6 = (undefined1 *)*param_2;
            uVar14 = param_2[1] - 3;
            puVar5 = puVar6 + 3;
            uVar13 = (uint)CONCAT21(CONCAT11(*puVar6,puVar6[1]),puVar6[2]);
            *param_2 = (longlong)puVar5;
            uVar16 = (ulonglong)uVar13;
            param_2[1] = uVar14;
            if (uVar14 < uVar16) goto LAB_145276d6c;
            param_2[1] = uVar14 - uVar16;
            *param_2 = (longlong)(puVar5 + uVar13);
            local_58 = puVar5;
            lVar9 = FUN_144bb5d50(0,&local_58);
            if (lVar9 == 0) {
              uVar10 = 0x2a;
              uVar18 = 0x745;
              uVar15 = 0xd;
              goto LAB_145276db0;
            }
            if (local_58 != puVar5 + uVar16) {
              uVar10 = 0x32;
              uVar18 = 0x74b;
              uVar15 = 0x87;
              goto LAB_145276db0;
            }
            if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
                (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
              local_res20 = 0;
              iVar7 = FUN_1452733b0(param_2,local_48);
              if (iVar7 == 0) {
                uVar18 = 0x756;
                uVar10 = 0x32;
                uVar15 = 0x10f;
                goto LAB_145276db0;
              }
              iVar7 = FUN_145270550(param_1,local_48,0x1000,&local_res20,0,lVar17 == 0);
              if ((iVar7 == 0) ||
                 (iVar7 = FUN_145270a30(param_1,0x1000,local_res20,lVar9,lVar17,param_2[1] == 0),
                 iVar7 == 0)) {
                FUN_144ea6530(local_res20,"ssl\\statem\\statem_clnt.c",0x75f);
                goto LAB_145276dc8;
              }
              FUN_144ea6530(local_res20,"ssl\\statem\\statem_clnt.c",0x763);
            }
            iVar7 = FUN_144bac1c0(lVar8,lVar9);
            if (iVar7 == 0) {
              FUN_144eafc90(param_1,0x50,0x16f,0x41,"ssl\\statem\\statem_clnt.c",0x769);
              lVar11 = lVar12;
              goto LAB_145276dc8;
            }
            lVar17 = lVar17 + 1;
          } while (param_2[1] != 0);
          iVar7 = FUN_144b9d990(param_1,lVar8);
          if ((*(int *)(param_1 + 0x558) == 0) || (0 < iVar7)) {
            FUN_144ba26f0();
            if (iVar7 < 2) {
              *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1c0) = lVar8;
              uVar10 = FUN_144babc00(lVar8,0);
              lVar8 = 0;
              lVar11 = FUN_144bb4f60(uVar10);
              if ((lVar11 == 0) || (iVar7 = FUN_144ba6ff0(lVar11), iVar7 != 0)) {
                FUN_144eafc90(param_1,0x50,0x16f,0xef,"ssl\\statem\\statem_clnt.c",0x798);
                lVar11 = lVar12;
                lVar9 = 0;
              }
              else {
                lVar11 = FUN_144b9e120(lVar11,local_50);
                if (lVar11 == 0) {
                  FUN_144eafc90(param_1,0x2f,0x16f,0xf7,"ssl\\statem\\statem_clnt.c",0x7a0);
                  lVar11 = lVar12;
                  lVar9 = 0;
                }
                else if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) ==
                            0) && (iVar7 = **(int **)(param_1 + 8), 0x303 < iVar7)) &&
                         (iVar7 != 0x10000)) ||
                        ((*(uint *)(lVar11 + 4) &
                         *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20)) !=
                         0)) {
                  FUN_144b47250(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8));
                  FUN_144bb6050(uVar10);
                  *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8) = uVar10;
                  *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x1c8) =
                       *(undefined4 *)(param_1 + 0x5a8);
                  lVar9 = 0;
                  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0)
                      || (iVar7 = **(int **)(param_1 + 8), iVar7 < 0x304)) ||
                     ((iVar7 == 0x10000 ||
                      (iVar7 = FUN_144b9bff0(param_1,param_1 + 0x490,0x40,param_1 + 0x4d0),
                      lVar11 = lVar12, iVar7 != 0)))) {
                    lVar11 = 3;
                  }
                }
                else {
                  FUN_144eafc90(param_1,0x2f,0x16f,0x17f,"ssl\\statem\\statem_clnt.c",0x7ad);
                  lVar11 = lVar12;
                  lVar9 = 0;
                }
              }
            }
            else {
              FUN_144eafc90(param_1,0x28,0x16f,iVar7,"ssl\\statem\\statem_clnt.c",0x787);
              lVar9 = lVar11;
            }
          }
          else {
            uVar15 = FUN_144eb4bd0(*(undefined4 *)(param_1 + 0x5a8));
            FUN_144eafc90(param_1,uVar15,0x16f,0x86,"ssl\\statem\\statem_clnt.c",0x781);
            lVar9 = lVar11;
          }
          goto LAB_145276dc8;
        }
      }
    }
    uVar10 = 0x32;
    uVar18 = 0x735;
    uVar15 = 0x9f;
  }
LAB_145276db0:
  FUN_144eafc90(param_1,uVar10,0x16f,uVar15,"ssl\\statem\\statem_clnt.c",uVar18);
LAB_145276dc8:
  FUN_144b47250(lVar9);
  FUN_144babe00(lVar8,FUN_144b47250);
  return lVar11;
}



// FUNCTION 145276e00 FUN_145276e00 body=311 status=ok
// SIG undefined FUN_145276e00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145276e00(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined4 uVar8;
  undefined8 uVar7;
  
  uVar8 = 1;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
  uVar1 = *(uint *)(lVar5 + 0x20);
  uVar2 = *(uint *)(lVar5 + 0x1c);
  if ((uVar1 & 0xab) == 0) {
    return 1;
  }
  uVar4 = FUN_144bb4f60(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8));
  lVar5 = FUN_144b9e120(uVar4,&local_res8);
  if ((lVar5 == 0) || ((uVar1 & *(uint *)(lVar5 + 4)) == 0)) {
    uVar7 = CONCAT44(uVar8,0xe17);
    uVar4 = 0xdd;
  }
  else if ((*(uint *)(lVar5 + 4) & 8) == 0) {
    if (((uVar2 & 0x41) == 0) || (local_res8 == 0)) {
      if ((uVar2 & 2) == 0) {
        return 1;
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0) {
        return 1;
      }
      uVar6 = 0x50;
      uVar7 = CONCAT44(uVar8,0xe2f);
      uVar4 = 0x44;
      goto LAB_145276f0b;
    }
    uVar7 = CONCAT44(uVar8,0xe28);
    uVar4 = 0xa9;
  }
  else {
    iVar3 = FUN_144b9bd20(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8),param_1);
    if (iVar3 != 0) {
      return 1;
    }
    uVar7 = CONCAT44(uVar8,0xe20);
    uVar4 = 0x130;
  }
  uVar6 = 0x28;
LAB_145276f0b:
  FUN_144eafc90(param_1,uVar6,0x82,uVar4,"ssl\\statem\\statem_clnt.c",uVar7);
  return 0;
}



// FUNCTION 145276f40 FUN_145276f40 body=209 status=ok
// SIG undefined FUN_145276f40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145276f40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  size_t _Size;
  void *local_res8;
  undefined4 uVar2;
  
  uVar2 = 1;
  local_res8 = (void *)0x0;
  _Size = 0x20 - (ulonglong)((int)*(undefined8 *)(param_1 + 0x700) + 2U & 0x1f);
  iVar1 = FUN_14526f090(param_2,*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(param_1 + 0x700),1)
  ;
  if (iVar1 != 0) {
    iVar1 = FUN_14526ed50(param_2,_Size,&local_res8,1);
    if (iVar1 != 0) {
      memset(local_res8,0,_Size);
      return 1;
    }
  }
  FUN_144eafc90(param_1,0x50,0x1aa,0x44,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar2,0xe43));
  return 0;
}



// FUNCTION 145277020 FUN_145277020 body=156 status=ok
// SIG undefined FUN_145277020(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145277020(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_144eafc90(param_1,0x32,0x1fb,0x9f,"ssl\\statem\\statem_clnt.c",0xe52,0x14527702a);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x5cc) & 0x40000000) != 0) {
    FUN_144ece130(param_1,1,100);
    return 1;
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    FUN_144b9a450();
    return 1;
  }
  FUN_144b9a500(param_1);
  return 1;
}



// FUNCTION 1452770c0 FUN_1452770c0 body=257 status=ok
// SIG undefined FUN_1452770c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452770c0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte *_Src;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong _Size;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (1 < (ulonglong)param_2[1]) {
    *param_2 = *param_2 + 2;
    param_2[1] = param_2[1] - 2;
    if (param_2[1] != 0) {
      uVar2 = param_2[1] - 1;
      bVar1 = *(byte *)*param_2;
      _Src = (byte *)*param_2 + 1;
      _Size = (ulonglong)bVar1;
      if (bVar1 <= uVar2) {
        *param_2 = (longlong)(_Src + _Size);
        param_2[1] = uVar2 - _Size;
        if (_Size < 0x101) {
          memcpy(*(void **)(param_1 + 0xb0),_Src,_Size);
          *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x100) = _Size;
          return 1;
        }
        uVar5 = 0x51f;
        uVar3 = 0x2f;
        uVar4 = 0x194;
        goto LAB_14527719a;
      }
    }
  }
  uVar3 = 0x32;
  uVar5 = 0x518;
  uVar4 = 0x9f;
LAB_14527719a:
  FUN_144eafc90(param_1,uVar3,0x182,uVar4,"ssl\\statem\\statem_clnt.c",uVar5);
  return 0;
}



// FUNCTION 1452771d0 FUN_1452771d0 body=96 status=ok
// SIG undefined FUN_1452771d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452771d0(longlong param_1)

{
  if ((*(int *)(param_1 + 0x84) - 3U & 0xfffffffb) != 0) {
    FUN_144eafc90(param_1,0x50,0x218,0x42,"ssl\\statem\\statem_clnt.c",0xf09,0x1452771da);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x84) = 7;
  return 1;
}



// FUNCTION 145277230 FUN_145277230 body=342 status=ok
// SIG undefined FUN_145277230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145277230(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res8;
  undefined4 uVar3;
  undefined8 uVar2;
  
  uVar3 = 1;
  local_res8 = 0;
  FUN_144ba5170(*(undefined8 *)(param_1 + 0x468));
  uVar2 = CONCAT44(uVar3,1);
  *(undefined8 *)(param_1 + 0x468) = 0;
  iVar1 = FUN_145270550(param_1,param_2,0x800,&local_res8,0,uVar2);
  if (iVar1 != 0) {
    uVar2 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),1);
    iVar1 = FUN_145270a30(param_1,0x800,local_res8,0,0,uVar2);
    uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (iVar1 != 0) {
      FUN_144ea6530(local_res8,"ssl\\statem\\statem_clnt.c",0x6ef);
      local_res8 = 0;
      if ((*(longlong *)(param_1 + 0x720) == 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) != 0)) {
        FUN_144eafc90(param_1,0x2f,0x262,0xd6,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar3,0x6fd));
      }
      else {
        iVar1 = FUN_144eb5ee0(param_1,0,0,0,0);
        if (iVar1 != 0) {
          iVar1 = FUN_14527dc30(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8),
                                *(longlong *)(param_1 + 0x98) + 4);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  FUN_144ea6530(local_res8,"ssl\\statem\\statem_clnt.c",0x718);
  return 0;
}



// FUNCTION 145277390 FUN_145277390 body=348 status=ok
// SIG undefined FUN_145277390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145277390(undefined8 param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 local_res10 [3];
  undefined1 *local_18;
  ulonglong uStack_10;
  
  puVar1 = (undefined1 *)*param_2;
  uVar3 = param_2[1];
  local_res10[0] = 0;
  if (1 < uVar3) {
    local_18 = puVar1 + 2;
    uStack_10 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    if (uStack_10 <= uVar3 - 2) {
      uVar3 = (uVar3 - 2) - uStack_10;
      puVar1 = local_18 + uStack_10;
      if (uVar3 == 0) {
        *param_2 = local_18 + uStack_10;
        param_2[1] = 0;
        puVar1 = local_18;
        uVar3 = uStack_10;
        if (param_2[1] == 0) {
          iVar2 = FUN_145270550(param_1,&local_18,0x400,local_res10,0,1);
          if (iVar2 != 0) {
            iVar2 = FUN_145270a30(param_1,0x400,local_res10[0],0,0,1);
            if (iVar2 != 0) {
              FUN_144ea6530(local_res10[0],"ssl\\statem\\statem_clnt.c",0xe7f);
              return 3;
            }
          }
          goto LAB_1452774cc;
        }
      }
    }
  }
  uStack_10 = uVar3;
  local_18 = puVar1;
  FUN_144eafc90(param_1,0x32,0x1bc,0x9f,"ssl\\statem\\statem_clnt.c",0xe72);
LAB_1452774cc:
  FUN_144ea6530(local_res10[0],"ssl\\statem\\statem_clnt.c",0xe83);
  return 0;
}



// FUNCTION 1452774f0 FUN_1452774f0 body=57 status=ok
// SIG undefined FUN_1452774f0(void)

undefined8 FUN_1452774f0(int *param_1)

{
  if (((*param_1 < 0x301) ||
      ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x20) & 4) == 0)) &&
     ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x20) & 0x50) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145277530 FUN_145277530 body=697 status=ok
// SIG undefined FUN_145277530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145277530(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong local_res20;
  undefined4 uVar12;
  undefined8 uVar13;
  ulonglong uVar11;
  
  uVar13 = 0x145277543;
  iVar3 = *(int *)(param_1 + 0x780);
  uVar7 = 0;
  iVar1 = FUN_144ebcf30();
  if (iVar1 == 0) {
    uVar12 = 0xea1;
    uVar8 = 0xbf;
  }
  else {
    if (param_2 != 0) {
      uVar4 = 0xfffc;
      if (iVar3 != 0) {
        uVar4 = 0xfffe;
      }
      uVar9 = uVar4 - 2;
      if ((*(byte *)(param_1 + 0x5d0) & 0x80) == 0) {
        uVar9 = uVar4;
      }
      iVar1 = FUN_144babbf0(param_2);
      uVar4 = uVar7;
      uVar11 = uVar7;
      if (0 < iVar1) {
        do {
          if (uVar9 <= uVar7) break;
          lVar5 = FUN_144babc00(param_2,uVar11);
          iVar1 = FUN_144ebd000(param_1,lVar5,0x10001,0);
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))(lVar5,param_3,&local_res20);
            if (iVar1 == 0) {
              uVar8 = 0xeca;
              goto LAB_14527772e;
            }
            if (uVar4 == 0) {
              if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
                iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x340);
                if ((iVar1 <= *(int *)(lVar5 + 0x30)) && (*(int *)(lVar5 + 0x2c) <= iVar1)) {
                  uVar4 = 1;
                }
              }
              else {
                iVar1 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x340);
                iVar6 = *(int *)(lVar5 + 0x38);
                if (iVar6 == 0x100) {
                  iVar6 = 0xff00;
                }
                iVar2 = iVar1;
                if (iVar1 == 0x100) {
                  iVar2 = 0xff00;
                }
                if (iVar6 <= iVar2) {
                  iVar6 = *(int *)(lVar5 + 0x34);
                  if (iVar6 == 0x100) {
                    iVar6 = 0xff00;
                  }
                  if (iVar1 == 0x100) {
                    iVar1 = 0xff00;
                  }
                  if (iVar1 <= iVar6) {
                    uVar4 = 1;
                  }
                }
              }
            }
            uVar7 = uVar7 + local_res20;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          iVar1 = FUN_144babbf0(param_2);
        } while ((int)uVar10 < iVar1);
        if ((uVar7 != 0) && (uVar4 != 0)) {
          if ((iVar3 == 0) &&
             (iVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))
                                (&DAT_14c731bc0,param_3,&local_res20), iVar3 == 0)) {
            uVar8 = 0xef0;
          }
          else {
            if (((*(byte *)(param_1 + 0x5d0) & 0x80) == 0) ||
               (iVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x98))
                                  (&DAT_14c731c10,param_3,&local_res20), iVar3 != 0)) {
              return 1;
            }
            uVar8 = 0xefa;
          }
LAB_14527772e:
          FUN_144eafc90(param_1,0x50,0x1a9,0x44,"ssl\\statem\\statem_clnt.c",uVar8);
          return 0;
        }
      }
      FUN_144eafc90(param_1,0x50,0x1a9,0xb5,"ssl\\statem\\statem_clnt.c",0xee0);
      if (uVar4 == 0) {
        FUN_144ba2bd0(1,"No ciphers enabled for max supported SSL/TLS version");
      }
      return 0;
    }
    uVar12 = 0xea7;
    uVar8 = 0x44;
  }
  FUN_144eafc90(param_1,0x50,0x1a9,uVar8,"ssl\\statem\\statem_clnt.c",uVar12,uVar13);
  return 0;
}



// FUNCTION 1452777f0 FUN_1452777f0 body=323 status=ok
// SIG undefined FUN_1452777f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1452777f0(longlong param_1,int param_2)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    if (param_2 == 4) {
      *(undefined4 *)(param_1 + 0x5c) = 9;
      return 1;
    }
    if (param_2 == 0x18) {
      *(undefined4 *)(param_1 + 0x5c) = 0x2d;
      return 1;
    }
    if (((param_2 == 0xd) &&
        ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0)) &&
       (*(int *)(param_1 + 0x788) == 1)) {
      *(undefined4 *)(param_1 + 0x788) = 4;
      iVar1 = FUN_144eb7dd0(param_1);
      if (iVar1 != 0) {
LAB_145277888:
        *(undefined4 *)(param_1 + 0x5c) = 7;
        return 1;
      }
    }
    break;
  case 3:
    if (param_2 == 8) {
      *(undefined4 *)(param_1 + 0x5c) = 0x26;
      return 1;
    }
    break;
  case 4:
    if (param_2 == 0xf) {
      *(undefined4 *)(param_1 + 0x5c) = 0x27;
      return 1;
    }
    break;
  case 0xc:
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x5c) = 3;
      return 1;
    }
    break;
  case 0x26:
    if (*(int *)(param_1 + 200) != 0) goto switchD_14527782c_caseD_27;
    if (param_2 == 0xd) goto LAB_145277888;
  case 7:
    if (param_2 == 0xb) {
      *(undefined4 *)(param_1 + 0x5c) = 4;
      return 1;
    }
    break;
  case 0x27:
switchD_14527782c_caseD_27:
    if (param_2 == 0x14) {
      *(undefined4 *)(param_1 + 0x5c) = 0xb;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145277980 FUN_145277980 body=442 status=ok
// SIG undefined FUN_145277980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145277980(longlong param_1)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 1:
    if (*(int *)(param_1 + 0x784) != -1) {
      *(undefined4 *)(param_1 + 0x5c) = 0x2b;
      return 1;
    }
    return 2;
  default:
    uVar1 = 0x1a2;
    break;
  case 7:
    if (*(int *)(param_1 + 0x788) == 4) {
      *(undefined4 *)(param_1 + 0x5c) = 0xd;
      return 1;
    }
    if ((*(byte *)(param_1 + 0x44) & 1) != 0) goto switchD_1452779b8_caseD_9;
    uVar1 = 0x1b2;
    break;
  case 9:
  case 0x12:
  case 0x2b:
  case 0x2d:
switchD_1452779b8_caseD_9:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  case 0xb:
    if ((*(int *)(param_1 + 0x84) - 3U & 0xfffffffb) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x2f;
      return 1;
    }
    if (((*(uint *)(param_1 + 0x5cc) & 0x100000) != 0) && (*(int *)(param_1 + 0x4d8) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x10;
      return 1;
    }
    uVar1 = 0x12;
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 0) {
      uVar1 = 0xd;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return 1;
  case 0xd:
    uVar1 = 0x12;
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) == 1) {
      uVar1 = 0xf;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return 1;
  case 0xf:
    *(undefined4 *)(param_1 + 0x5c) = 0x12;
    return 1;
  case 0x2f:
    if (*(int *)(param_1 + 0x710) == 2) {
      *(undefined4 *)(param_1 + 0x5c) = 0x30;
      return 1;
    }
  case 0x10:
  case 0x30:
    uVar1 = 0x12;
    if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) != 0) {
      uVar1 = 0xd;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    return 1;
  }
  FUN_144eafc90(param_1,0x50,0x256,0x44,"ssl\\statem\\statem_clnt.c",uVar1,0x14527798a);
  return 0;
}



// FUNCTION 145277b90 FUN_145277b90 body=525 status=ok
// SIG undefined FUN_145277b90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145277b90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  lVar2 = FUN_144ea40e0(param_1,param_2,0);
  if (lVar2 == 0) {
    FUN_144eafc90(param_1,0x2f,0x21c,0xf8,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar7,0x537));
    return 0;
  }
  iVar1 = FUN_144ebd000(param_1,lVar2,0x10003,1);
  if (iVar1 != 0) {
    FUN_144eafc90(param_1,0x2f,0x21c,0x105,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar7,0x540));
    return 0;
  }
  uVar3 = FUN_144b9bb70(param_1);
  iVar1 = FUN_144bac1a0(uVar3,lVar2);
  if (iVar1 < 0) {
    uVar6 = CONCAT44(uVar7,0x549);
  }
  else {
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
         (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
       ((lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238), lVar4 == 0 ||
        (*(int *)(lVar4 + 0x18) == *(int *)(lVar2 + 0x18))))) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
      if (lVar4 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x1e8) = *(undefined4 *)(lVar4 + 0x18);
      }
      if ((*(int *)(param_1 + 200) == 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x508) + 0x1e8) == *(int *)(lVar2 + 0x18))) {
LAB_145277d7f:
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) = lVar2;
        return 1;
      }
      if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         ((iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1 && (iVar1 != 0x10000)))) {
        lVar4 = FUN_144ea44e0(*(undefined4 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0) + 0x40));
        lVar5 = FUN_144ea44e0(*(undefined4 *)(lVar2 + 0x40));
        if (lVar5 == lVar4) goto LAB_145277d7f;
        uVar6 = CONCAT44(uVar7,0x566);
        uVar3 = 0xda;
      }
      else {
        uVar6 = CONCAT44(uVar7,0x56f);
        uVar3 = 0xc5;
      }
      goto LAB_145277c62;
    }
    uVar6 = CONCAT44(uVar7,0x551);
  }
  uVar3 = 0x105;
LAB_145277c62:
  FUN_144eafc90(param_1,0x2f,0x21c,uVar3,"ssl\\statem\\statem_clnt.c",uVar6);
  return 0;
}



// FUNCTION 145277da0 FUN_145277da0 body=440 status=ok
// SIG undefined FUN_145277da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145277da0(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar4 = (undefined1 *)*param_2;
  uVar5 = param_2[1];
  if (1 < uVar5) {
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    uVar8 = (ulonglong)CONCAT11(uVar1,uVar2);
    if (uVar8 <= uVar5 - 2) {
      *param_2 = puVar4 + 2 + uVar8;
      param_2[1] = (uVar5 - 2) - uVar8;
      if (0x80 < uVar8) {
        uVar7 = 0x28;
        uVar10 = 0x7df;
        uVar9 = 0x92;
LAB_145277e48:
        FUN_144eafc90(param_1,uVar7,0x1a5,uVar9,"ssl\\statem\\statem_clnt.c",uVar10);
        return 0;
      }
      if (CONCAT11(uVar1,uVar2) == 0) {
        FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a0),
                      "ssl\\statem\\statem_clnt.c",0x7e4);
        *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a0) = 0;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x508);
        FUN_144ea6530(*(undefined8 *)(lVar3 + 0x1a0),
                      "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                      ,0x1e2);
        lVar6 = FUN_144ea6e30(puVar4 + 2,uVar8,
                              "d:\\w\\depot\\depot\\3rdparty\\openssl\\source\\openssl-1.1.1t\\ssl\\packet_local.h"
                              ,0x1e5);
        *(longlong *)(lVar3 + 0x1a0) = lVar6;
        if (lVar6 == 0) {
          uVar7 = 0x50;
          uVar10 = 0x7e9;
          uVar9 = 0x44;
          goto LAB_145277e48;
        }
      }
      return 1;
    }
  }
  FUN_144eafc90(param_1,0x32,0x1a5,0x9f,"ssl\\statem\\statem_clnt.c",0x7d2,puVar4,uVar5);
  return 0;
}



// FUNCTION 145277f60 FUN_145277f60 body=645 status=ok
// SIG undefined FUN_145277f60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145277f60(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  pbVar7 = (byte *)*param_2;
  uVar11 = param_2[1];
  if (1 < uVar11) {
    pbVar6 = pbVar7 + 2;
    uVar12 = (ulonglong)CONCAT11(*pbVar7,pbVar7[1]);
    if (uVar12 <= uVar11 - 2) {
      uVar11 = (uVar11 - 2) - uVar12;
      pbVar7 = pbVar6 + uVar12;
      *param_2 = pbVar7;
      param_2[1] = uVar11;
      if (1 < uVar11) {
        pbVar8 = pbVar7 + 2;
        uVar10 = (ulonglong)CONCAT11(*pbVar7,pbVar7[1]);
        if (uVar10 <= uVar11 - 2) {
          pbVar7 = pbVar8 + uVar10;
          uVar11 = (uVar11 - 2) - uVar10;
          *param_2 = pbVar7;
          param_2[1] = uVar11;
          if (uVar11 != 0) {
            bVar1 = *pbVar7;
            uVar3 = (ulonglong)bVar1;
            pbVar9 = pbVar7 + 1;
            if (uVar3 <= uVar11 - 1) {
              uVar11 = (uVar11 - 1) - uVar3;
              pbVar7 = pbVar9 + uVar3;
              *param_2 = pbVar7;
              param_2[1] = uVar11;
              if (1 < uVar11) {
                uVar3 = (ulonglong)CONCAT11(*pbVar7,pbVar7[1]);
                if (uVar3 <= uVar11 - 2) {
                  *param_2 = pbVar7 + 2 + uVar3;
                  param_2[1] = (uVar11 - 2) - uVar3;
                  lVar4 = FUN_144ba0740(pbVar6,uVar12,0);
                  *(longlong *)(param_1 + 0x7d8) = lVar4;
                  if (lVar4 != 0) {
                    lVar4 = FUN_144ba0740(pbVar8,uVar10,0);
                    *(longlong *)(param_1 + 0x7e0) = lVar4;
                    if (lVar4 != 0) {
                      lVar4 = FUN_144ba0740(pbVar9,bVar1,0);
                      *(longlong *)(param_1 + 0x7e8) = lVar4;
                      if (lVar4 != 0) {
                        lVar4 = FUN_144ba0740(pbVar7 + 2,uVar3,0);
                        *(longlong *)(param_1 + 0x7f0) = lVar4;
                        if (lVar4 != 0) {
                          iVar2 = FUN_144eaee70(param_1);
                          if (iVar2 == 0) {
                            return 0;
                          }
                          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20
                                        ) & 3) != 0) {
                            uVar5 = FUN_144bb4f60(*(undefined8 *)
                                                   (*(longlong *)(param_1 + 0x508) + 0x1b8));
                            *param_3 = uVar5;
                          }
                          return 1;
                        }
                      }
                    }
                  }
                  FUN_144eafc90(param_1,0x50,0x1a6,3,"ssl\\statem\\statem_clnt.c",0x811);
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_144eafc90(param_1,0x32,0x1a6,0x9f,"ssl\\statem\\statem_clnt.c",0x7ff,pbVar7,uVar11);
  return 0;
}



// FUNCTION 1452781f0 FUN_1452781f0 body=980 status=ok
// SIG undefined FUN_1452781f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452781f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int local_res10 [2];
  undefined8 *local_res18;
  undefined1 *local_res20;
  undefined4 uVar15;
  
  puVar7 = (undefined1 *)*param_2;
  lVar9 = 0;
  lVar12 = 0;
  lVar13 = 0;
  local_res10[0] = 0;
  local_res18 = param_3;
  if ((ulonglong)param_2[1] < 2) {
LAB_145278588:
    FUN_144eafc90(param_1,0x32,0x1a3,0x9f,"ssl\\statem\\statem_clnt.c",0x835);
    return 0;
  }
  uVar10 = param_2[1] - 2;
  puVar6 = puVar7 + 2;
  uVar14 = (ulonglong)CONCAT11(*puVar7,puVar7[1]);
  if (uVar10 < uVar14) goto LAB_145278588;
  uVar10 = uVar10 - uVar14;
  puVar7 = puVar6 + uVar14;
  *param_2 = puVar7;
  param_2[1] = uVar10;
  local_res20 = puVar6;
  if (uVar10 < 2) goto LAB_145278588;
  uVar11 = (ulonglong)CONCAT11(*puVar7,puVar7[1]);
  if (uVar10 - 2 < uVar11) goto LAB_145278588;
  uVar10 = (uVar10 - 2) - uVar11;
  puVar6 = puVar7 + 2 + uVar11;
  *param_2 = puVar6;
  param_2[1] = uVar10;
  if (uVar10 < 2) goto LAB_145278588;
  uVar5 = (ulonglong)CONCAT11(*puVar6,puVar6[1]);
  if (uVar10 - 2 < uVar5) goto LAB_145278588;
  *param_2 = puVar6 + 2 + uVar5;
  param_2[1] = (uVar10 - 2) - uVar5;
  lVar3 = FUN_144ba6d80();
  lVar4 = FUN_144ed3d30();
  if ((lVar3 == 0) || (lVar4 == 0)) {
    uVar15 = 0x83e;
    uVar2 = 0x41;
  }
  else {
    lVar12 = FUN_144ba0740(local_res20,uVar14,0);
    lVar13 = FUN_144ba0740(puVar7 + 2,uVar11,0);
    lVar9 = FUN_144ba0740(puVar6 + 2,uVar5,0);
    if (((lVar12 == 0) || (lVar13 == 0)) || (lVar9 == 0)) {
      uVar15 = 0x84a;
      uVar2 = 3;
    }
    else {
      iVar1 = FUN_144ba0340(lVar9);
      if (iVar1 != 0) {
        uVar8 = 0x2f;
        uVar15 = 0x851;
        uVar2 = 0x66;
        goto LAB_14527853f;
      }
      iVar1 = FUN_144ed3f00(lVar4,lVar12,0,lVar13);
      if (iVar1 == 0) {
        uVar15 = 0x857;
        uVar2 = 3;
      }
      else {
        lVar13 = 0;
        lVar12 = 0;
        iVar1 = FUN_1454d5e60(lVar4,local_res10);
        if ((iVar1 == 0) || (local_res10[0] != 0)) {
          uVar8 = 0x2f;
          uVar15 = 0x85e;
          uVar2 = 0x66;
          goto LAB_14527853f;
        }
        iVar1 = FUN_144ed3fd0(lVar4,lVar9,0);
        if (iVar1 == 0) {
          uVar15 = 0x864;
          uVar2 = 3;
        }
        else {
          lVar9 = 0;
          iVar1 = FUN_144ba69a0(lVar3,0x1c,lVar4);
          if (iVar1 != 0) {
            lVar4 = 0;
            uVar2 = FUN_144ba67f0(lVar3);
            iVar1 = FUN_144b9dff0(param_1,0x40007,uVar2,0,lVar3);
            if (iVar1 != 0) {
              *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar3;
              if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 3) != 0)
              {
                uVar8 = FUN_144bb4f60(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8));
                *local_res18 = uVar8;
              }
              return 1;
            }
            uVar15 = 0x873;
            uVar8 = 0x28;
            uVar2 = 0x18a;
            goto LAB_14527853f;
          }
          uVar15 = 0x86b;
          uVar2 = 6;
        }
      }
    }
  }
  uVar8 = 0x50;
LAB_14527853f:
  FUN_144eafc90(param_1,uVar8,0x1a3,uVar2,"ssl\\statem\\statem_clnt.c",uVar15);
  FUN_144ba0cd0(lVar12);
  FUN_144ba0cd0(lVar13);
  FUN_144ba0cd0(lVar9);
  FUN_144ed3d50(lVar4);
  FUN_144ba6e60(lVar3);
  return 0;
}



// FUNCTION 1452785d0 FUN_1452785d0 body=510 status=ok
// SIG undefined FUN_1452785d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452785d0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  
  lVar8 = param_2[1];
  if (lVar8 == 0) {
LAB_145278790:
    FUN_144eafc90(param_1,0x32,0x1a4,0xa0,"ssl\\statem\\statem_clnt.c",0x89f);
    return 0;
  }
  pcVar6 = (char *)*param_2;
  cVar1 = *pcVar6;
  *param_2 = (longlong)(pcVar6 + 1);
  param_2[1] = lVar8 - 1U;
  if (lVar8 - 1U < 2) goto LAB_145278790;
  cVar2 = pcVar6[1];
  cVar3 = pcVar6[2];
  *param_2 = *param_2 + 2;
  param_2[1] = lVar8 + -3;
  if ((cVar1 == '\x03') && (iVar7 = FUN_144eba1b0(param_1,CONCAT11(cVar2,cVar3),1), iVar7 != 0)) {
    lVar8 = FUN_144ecb920(CONCAT11(cVar2,cVar3));
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar8;
    if (lVar8 == 0) {
      uVar14 = 0x8af;
      uVar11 = 0x50;
      uVar12 = 0x13a;
      goto LAB_145278772;
    }
    if (param_2[1] != 0) {
      uVar10 = param_2[1] - 1;
      bVar4 = *(byte *)*param_2;
      uVar9 = (ulonglong)bVar4;
      pbVar13 = (byte *)*param_2 + 1;
      if (uVar9 <= uVar10) {
        *param_2 = (longlong)(pbVar13 + uVar9);
        param_2[1] = uVar10 - uVar9;
        iVar7 = FUN_144ba71c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408),pbVar13,bVar4);
        if (iVar7 != 0) {
          uVar5 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20);
          if (((uVar5 & 8) != 0) || ((uVar5 & 1) != 0)) {
            uVar12 = FUN_144bb4f60(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8));
            *param_3 = uVar12;
          }
          return 1;
        }
        uVar14 = 0x8bd;
        uVar12 = 0x132;
        goto LAB_14527876d;
      }
    }
    uVar11 = 0x32;
    uVar14 = 0x8b5;
    uVar12 = 0x9f;
  }
  else {
    uVar14 = 0x8a9;
    uVar12 = 0x17a;
LAB_14527876d:
    uVar11 = 0x2f;
  }
LAB_145278772:
  FUN_144eafc90(param_1,uVar11,0x1a4,uVar12,"ssl\\statem\\statem_clnt.c",uVar14);
  return 0;
}



// FUNCTION 1452787d0 FUN_1452787d0 body=692 status=ok
// SIG undefined FUN_1452787d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452787d0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_208 [32];
  char *local_1e8;
  undefined4 local_1e0;
  char local_1d8;
  char local_1d7 [143];
  char local_148 [256];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1452787ea;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  pcVar1 = *(code **)(param_1 + 0x578);
  uVar11 = 0;
  uVar3 = 0;
  uVar9 = uVar11;
  uVar5 = uVar11;
  uVar6 = uVar11;
  if (pcVar1 == (code *)0x0) {
    local_1e0 = 0xb57;
    uVar10 = 0xe0;
    uVar12 = uVar11;
LAB_145278a16:
    uVar8 = 0x50;
    uVar11 = uVar9;
  }
  else {
    memset(&local_1d8,0,0x81);
    local_1e8 = local_148;
    local_1e0 = 0x100;
    uVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a0),&local_1d8,
                      0x80);
    uVar12 = (ulonglong)uVar2;
    if (0x100 < uVar12) {
      local_1e0 = 0xb63;
      local_1e8 = "ssl\\statem\\statem_clnt.c";
      FUN_144eafc90(param_1,0x28,0x197,0x44);
      uVar12 = 0x100;
      goto LAB_145278a2b;
    }
    if (uVar2 != 0) {
      pcVar7 = &local_1d8;
      while ((local_1d8 != '\0' && (uVar3 = (uint)uVar11, uVar3 < 0x80000000))) {
        pcVar7 = pcVar7 + 1;
        uVar3 = uVar3 + 1;
        local_1d8 = *pcVar7;
        uVar11 = (ulonglong)uVar3;
      }
      uVar9 = (ulonglong)(uVar3 & 0x7fffffff);
      if (uVar9 < 0x81) {
        uVar5 = FUN_144ea6d10(local_148,uVar12,"ssl\\statem\\statem_clnt.c",0xb74);
        uVar6 = FUN_144ea6dc0(&local_1d8,"ssl\\statem\\statem_clnt.c",0xb75);
        if ((uVar5 == 0) || (uVar6 == 0)) {
          local_1e0 = 0xb78;
          uVar10 = 0x41;
        }
        else {
          FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                        "ssl\\statem\\statem_clnt.c",0xb7c);
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = uVar5;
          uVar11 = 0;
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2d0) = uVar12;
          FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a8),
                        "ssl\\statem\\statem_clnt.c",0xb80);
          *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x1a8) = uVar6;
          uVar6 = 0;
          iVar4 = FUN_14526f090(param_2,&local_1d8,uVar9,2);
          if (iVar4 != 0) goto LAB_145278a2b;
          local_1e0 = 0xb86;
          uVar10 = 0x44;
          uVar5 = uVar11;
        }
      }
      else {
        local_1e0 = 0xb70;
        uVar10 = 0x44;
      }
      goto LAB_145278a16;
    }
    local_1e0 = 0xb69;
    uVar8 = 0x28;
    uVar10 = 0xdf;
  }
  local_1e8 = "ssl\\statem\\statem_clnt.c";
  FUN_144eafc90(param_1,uVar8,0x197,uVar10);
  uVar9 = uVar11;
  uVar11 = uVar5;
LAB_145278a2b:
  FUN_14259f0c0(local_148,uVar12);
  FUN_14259f0c0(&local_1d8,0x81);
  FUN_144ea66f0(uVar11,uVar12,"ssl\\statem\\statem_clnt.c",0xb8f);
  FUN_144ea66f0(uVar6,uVar9,"ssl\\statem\\statem_clnt.c",0xb90);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_208);
}



// FUNCTION 145278aa0 FUN_145278aa0 body=717 status=ok
// SIG undefined FUN_145278aa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145278aa0(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  undefined4 uVar7;
  
  local_res18[0] = 0;
  lVar5 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x1b8) == 0) {
    FUN_144eafc90(param_1,0x50,0x199,0x44,"ssl\\statem\\statem_clnt.c",0xba9,0x145278aaf);
    return 0;
  }
  uVar2 = FUN_144bb4f60();
  lVar3 = FUN_144ba6aa0(uVar2);
  if (lVar3 == 0) {
    FUN_144eafc90(param_1,0x50,0x199,0x44,"ssl\\statem\\statem_clnt.c",0xbb0);
    return 0;
  }
  puVar4 = (undefined1 *)FUN_144ea64e0(0x30,"ssl\\statem\\statem_clnt.c",0xbb5);
  if (puVar4 == (undefined1 *)0x0) {
    FUN_144eafc90(param_1,0x50,0x199,0x41,"ssl\\statem\\statem_clnt.c",3000);
    return 0;
  }
  *puVar4 = (char)((uint)param_1[0x17b] >> 8);
  puVar4[1] = (char)param_1[0x17b];
  iVar1 = FUN_144bac850(puVar4 + 2,0x2e);
  if (iVar1 < 1) {
    uVar7 = 0xbc1;
    uVar6 = 0x41;
  }
  else if ((*param_1 < 0x301) || (iVar1 = FUN_14526eb60(param_2,2), iVar1 != 0)) {
    lVar5 = FUN_144ed1530(uVar2,0);
    if (((lVar5 == 0) || (iVar1 = FUN_144ed21c0(lVar5), iVar1 < 1)) ||
       (iVar1 = FUN_144ed2250(lVar5,0,&local_res8,puVar4,0x30), iVar1 < 1)) {
      uVar7 = 0xbcf;
      uVar6 = 6;
    }
    else {
      iVar1 = FUN_14526ed00(param_2,local_res8,local_res18);
      if ((iVar1 == 0) ||
         (iVar1 = FUN_144ed2250(lVar5,local_res18[0],&local_res8,puVar4,0x30), iVar1 < 1)) {
        uVar7 = 0xbd5;
        uVar6 = 0x77;
      }
      else {
        FUN_144ed16b0(lVar5);
        lVar5 = 0;
        if ((*param_1 < 0x301) || (iVar1 = FUN_14526ea40(param_2), iVar1 != 0)) {
          iVar1 = FUN_144b9c0f0(param_1,local_res18[0],local_res8,puVar4,0x30);
          if (iVar1 != 0) {
            *(undefined1 **)(*(longlong *)(param_1 + 0x2a) + 0x2b8) = puVar4;
            *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2c0) = 0x30;
            return 1;
          }
          goto LAB_145278d3a;
        }
        uVar7 = 0xbde;
        uVar6 = 0x44;
      }
    }
  }
  else {
    uVar7 = 0xbc8;
    uVar6 = 0x44;
  }
  FUN_144eafc90(param_1,0x50,0x199,uVar6,"ssl\\statem\\statem_clnt.c",uVar7);
LAB_145278d3a:
  FUN_144ea66f0(puVar4,0x30,"ssl\\statem\\statem_clnt.c",0xbed);
  FUN_144ed16b0(lVar5);
  return 0;
}



// FUNCTION 145278d70 FUN_145278d70 body=341 status=ok
// SIG undefined FUN_145278d70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145278d70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  lVar3 = 0;
  local_res8 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
  if (lVar1 == 0) {
    uVar5 = 0x100000c03;
  }
  else {
    lVar3 = FUN_144ec9340(lVar1);
    if (lVar3 == 0) {
      uVar5 = CONCAT44(uVar6,0xc0a);
    }
    else {
      lVar4 = FUN_144ba6c20(lVar3);
      if (lVar4 == 0) {
        uVar5 = CONCAT44(uVar6,0xc12);
      }
      else {
        iVar2 = FUN_144ec93c0(param_1,lVar3,lVar1,0);
        if (iVar2 == 0) goto LAB_145278dd3;
        FUN_144ed3fb0(lVar4,&local_res18,0);
        iVar2 = FUN_144ba03d0(local_res18);
        iVar2 = FUN_14526ed50(param_2,(longlong)((int)(iVar2 + 7 + (iVar2 + 7 >> 0x1f & 7U)) >> 3),
                              &local_res8,2);
        if (iVar2 != 0) {
          FUN_144ba08c0(local_res18,local_res8);
          FUN_144ba6e60(lVar3);
          return 1;
        }
        uVar5 = CONCAT44(uVar6,0xc20);
      }
    }
  }
  FUN_144eafc90(param_1,0x50,0x194,0x44,"ssl\\statem\\statem_clnt.c",uVar5);
LAB_145278dd3:
  FUN_144ba6e60(lVar3);
  return 0;
}



// FUNCTION 145278ed0 FUN_145278ed0 body=368 status=ok
// SIG undefined FUN_145278ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145278ed0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined4 uVar5;
  
  uVar5 = 1;
  uVar4 = 0;
  local_res8 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
  if (lVar3 == 0) {
    FUN_144eafc90(param_1,0x50,0x195,0x44,"ssl\\statem\\statem_clnt.c",0x100000c3d);
    uVar4 = 0;
  }
  else {
    lVar2 = FUN_144ec9340(lVar3);
    if (lVar2 == 0) {
      FUN_144eafc90(param_1,0x50,0x195,0x41,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar5,0xc44));
    }
    else {
      iVar1 = FUN_144ec93c0(param_1,lVar2,lVar3,0);
      if (iVar1 != 0) {
        lVar3 = FUN_144ba7210(lVar2,&local_res8);
        if (lVar3 == 0) {
          FUN_144eafc90(param_1,0x50,0x195,0x10,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar5,0xc52));
        }
        else {
          iVar1 = FUN_14526f090(param_2,local_res8,lVar3,1);
          if (iVar1 == 0) {
            FUN_144eafc90(param_1,0x50,0x195,0x44,"ssl\\statem\\statem_clnt.c",CONCAT44(uVar5,0xc58)
                         );
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
    }
    FUN_144ea6530(local_res8,"ssl\\statem\\statem_clnt.c",0xc5e);
    FUN_144ba6e60(lVar2);
  }
  return uVar4;
}



// FUNCTION 145279040 FUN_145279040 body=865 status=ok
// SIG undefined FUN_145279040(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145279040(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_198 [32];
  char *local_178;
  undefined1 *local_170;
  ulonglong local_168;
  undefined1 local_160 [8];
  undefined1 local_158 [32];
  undefined1 local_138 [256];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x145279052;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar6 = 0;
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20);
  if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8) == 0) {
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xc7f);
    local_178 = "ssl\\statem\\statem_clnt.c";
    FUN_144eafc90(param_1,0x28,0x196);
    goto LAB_145279391;
  }
  uVar3 = FUN_144bb4f60();
  lVar4 = FUN_144ed1530(uVar3,0);
  if (lVar4 == 0) {
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xc86);
    local_178 = "ssl\\statem\\statem_clnt.c";
    FUN_144eafc90(param_1,0x50,0x196,0x41);
    goto LAB_145279391;
  }
  lVar5 = FUN_144ea64e0(0x20,"ssl\\statem\\statem_clnt.c",0xc91);
  if (lVar5 == 0) {
    local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xc94);
    uVar7 = 0x41;
  }
  else {
    iVar2 = FUN_144ed21c0(lVar4);
    if ((iVar2 < 1) || (iVar2 = FUN_144bac850(lVar5,0x20), iVar2 < 1)) {
      local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xc9e);
    }
    else {
      lVar6 = FUN_144ba5700();
      if (lVar6 != 0) {
        uVar3 = 0x3d6;
        if ((uVar1 & 0x80) == 0) {
          uVar3 = 0x329;
        }
        uVar3 = FUN_144ea8ee0(uVar3);
        uVar3 = FUN_144baab30(uVar3);
        iVar2 = FUN_144ba5e50(lVar6,uVar3);
        if ((((0 < iVar2) &&
             (iVar2 = FUN_144ba5c70(lVar6,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20), 0 < iVar2)) &&
            (iVar2 = FUN_144ba5c70(lVar6,*(longlong *)(param_1 + 0xa8) + 0x98,0x20), 0 < iVar2)) &&
           (iVar2 = FUN_144ba5ca0(lVar6,local_158,local_160), 0 < iVar2)) {
          FUN_144ba5800(lVar6);
          local_170 = local_158;
          lVar6 = 0;
          local_178 = (char *)CONCAT44(local_178._4_4_,8);
          iVar2 = FUN_144ed1710(lVar4,0xffffffff,0x100,8);
          if (iVar2 < 0) {
            local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xcb6);
            uVar7 = 0x112;
          }
          else {
            local_168 = 0xff;
            local_178 = (char *)0x20;
            iVar2 = FUN_144ed2250(lVar4,local_138,&local_168,lVar5);
            if (0 < iVar2) {
              iVar2 = FUN_14526ef00(param_2,0x30,1);
              if (((iVar2 != 0) &&
                  ((local_168 < 0x80 || (iVar2 = FUN_14526ef00(param_2,0x81,1), iVar2 != 0)))) &&
                 (iVar2 = FUN_14526f090(param_2,local_138,local_168,1), iVar2 != 0)) {
                FUN_144ed16b0(lVar4);
                *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2b8) = lVar5;
                *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0) = 0x20;
                goto LAB_145279391;
              }
              local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xcc8);
              goto LAB_14527933b;
            }
            local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xcc0);
            uVar7 = 0x112;
          }
          goto LAB_145279341;
        }
      }
      local_170 = (undefined1 *)CONCAT44(local_170._4_4_,0xcae);
    }
LAB_14527933b:
    uVar7 = 0x44;
  }
LAB_145279341:
  local_178 = "ssl\\statem\\statem_clnt.c";
  FUN_144eafc90(param_1,0x50,0x196,uVar7);
  FUN_144ed16b0(lVar4);
  FUN_144ea66f0(lVar5,0x20,"ssl\\statem\\statem_clnt.c",0xcd3);
  FUN_144ba5800(lVar6);
LAB_145279391:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_198);
}



// FUNCTION 1452793b0 FUN_1452793b0 body=291 status=ok
// SIG undefined FUN_1452793b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452793b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined4 uVar4;
  undefined8 uVar3;
  
  uVar4 = 1;
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x7f8) != 0) {
    uVar4 = 1;
    iVar1 = FUN_144ba03d0();
    iVar1 = FUN_14526ed50(param_2,(longlong)((int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3),
                          &local_res8,2);
    if (iVar1 != 0) {
      FUN_144ba08c0(*(undefined8 *)(param_1 + 0x7f8),local_res8);
      FUN_144ea6530(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x248),
                    "ssl\\statem\\statem_clnt.c",0xceb);
      uVar2 = FUN_144ea6dc0(*(undefined8 *)(param_1 + 2000),"ssl\\statem\\statem_clnt.c",0xcec);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x248) = uVar2;
      if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x248) != 0) {
        return 1;
      }
      uVar3 = CONCAT44(uVar4,0xcef);
      uVar2 = 0x41;
      goto LAB_1452794ae;
    }
  }
  uVar3 = CONCAT44(uVar4,0xce6);
  uVar2 = 0x44;
LAB_1452794ae:
  FUN_144eafc90(param_1,0x50,0x19a,uVar2,"ssl\\statem\\statem_clnt.c",uVar3);
  return 0;
}



// FUNCTION 1452794e0 FUN_1452794e0 body=109 status=ok
// SIG undefined FUN_1452794e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452794e0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1452794ec;
  iVar1 = FUN_144ebc0d0(param_1,0);
  if ((iVar1 == 0) || (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2d8) == 0)) {
    return 0;
  }
  if (((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30001) != 0) &&
     (iVar1 = FUN_144ebb650(param_1,0,0,0,0xfffffffe,uVar2), iVar1 == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 145279550 FUN_145279550 body=10 status=ok
// SIG undefined FUN_145279550(void)

undefined8 FUN_145279550(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return 1;
}



// FUNCTION 145279560 FUN_145279560 body=13 status=ok
// SIG undefined FUN_145279560(void)

undefined8 FUN_145279560(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return 1;
}



// FUNCTION 145279570 FUN_145279570 body=213 status=ok
// SIG undefined FUN_145279570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145279570(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14527958a;
  if (param_1 == 0) {
    uVar3 = 0x3c;
    uVar2 = 0x43;
  }
  else {
    FUN_144e98620(DAT_14c797590);
    if (*(int *)(param_1 + 0xa0) == 0) {
      FUN_144e98640(DAT_14c797590);
      uVar2 = 0x75;
      uVar3 = 0x42;
    }
    else {
      FUN_144e98640(DAT_14c797590);
      if (*(code **)(param_1 + 0x78) == (code *)0x0) {
        uVar3 = 0x48;
        uVar2 = 0x7d;
      }
      else {
        lVar1 = (**(code **)(param_1 + 0x78))(param_1,param_2,param_3,param_4);
        if (lVar1 != 0) {
          return lVar1;
        }
        uVar3 = 0x4e;
        uVar2 = 0x80;
      }
    }
  }
  FUN_144ba24f0(0x26,0x96,uVar2,"crypto\\engine\\eng_pkey.c",uVar3,uVar4);
  return 0;
}



// FUNCTION 145279650 FUN_145279650 body=292 status=ok
// SIG undefined FUN_145279650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145279650(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (param_1 == 0) {
    FUN_144ba24f0(0x26,0xc2,0x43,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x7a));
    uVar1 = 0;
  }
  else {
    FUN_144e98620(DAT_14c797590);
    if (*(int *)(param_1 + 0xa0) == 0) {
      FUN_144e98640(DAT_14c797590);
      FUN_144ba24f0(0x26,0xc2,0x75,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x81));
      uVar1 = 0;
    }
    else {
      FUN_144e98640(DAT_14c797590);
      if (*(code **)(param_1 + 0x88) == (code *)0x0) {
        FUN_144ba24f0(0x26,0xc2,0x7d,"crypto\\engine\\eng_pkey.c",CONCAT44(uVar2,0x87));
        uVar1 = 0;
      }
      else {
        uVar1 = (**(code **)(param_1 + 0x88))
                          (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
  }
  return uVar1;
}



// FUNCTION 145279780 FUN_145279780 body=917 status=ok
// SIG undefined FUN_145279780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145279780(undefined4 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  char *pcVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18;
  undefined1 local_res19;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 *local_1f0;
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 *local_1b0;
  undefined4 local_1a8;
  uint *local_1a0;
  ulonglong local_198;
  undefined4 local_190;
  undefined4 *local_188;
  uint *local_180;
  uint *local_178;
  uint *local_170;
  ulonglong local_168;
  undefined4 local_160;
  undefined4 *local_158;
  uint local_150;
  undefined4 *local_148;
  undefined4 local_138 [2];
  undefined1 *local_130;
  undefined4 local_128;
  undefined4 local_120 [2];
  undefined1 *local_118;
  undefined4 local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined4 local_f8;
  undefined4 local_f0 [2];
  undefined4 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [2];
  undefined4 *local_d0;
  undefined4 local_c8;
  uint local_c0 [2];
  char *local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined4 local_98;
  uint local_90 [2];
  char *local_88;
  undefined4 local_80;
  uint local_78 [2];
  char *local_70;
  undefined4 local_68;
  uint local_60 [2];
  char *local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_30 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = 0x14527979a;
  if ((param_1 == (undefined4 *)0x0) ||
     ((lVar2 = *(longlong *)(param_1 + 0x78), lVar2 == 0 && (param_1[0x7a] == 0)))) {
    uVar5 = 0;
  }
  else {
    memset(&local_1f8,0,0xb8);
    local_1f4 = *param_1;
    local_1f8 = 1;
    if (lVar2 == 0) {
      uVar6 = (undefined2)param_1[0x7a];
    }
    else {
      uVar6 = (undefined2)*(undefined4 *)(lVar2 + 0x18);
    }
    local_res19 = (undefined1)uVar6;
    local_res18 = (undefined1)((ushort)uVar6 >> 8);
    local_130 = &local_res18;
    local_1f0 = local_138;
    local_138[0] = 2;
    uVar4 = 0;
    local_128 = 0;
    if (param_1[0x76] != 0) {
      local_res8[0] = *(undefined1 *)(param_1 + 0x76);
      local_118 = local_res8;
      local_1e8 = local_120;
      local_120[0] = 1;
      local_110 = 0;
    }
    pcVar3 = *(char **)(param_1 + 0x82);
    local_100 = param_1 + 0x14;
    local_108[0] = param_1[2];
    local_1e0 = local_108;
    local_e8 = param_1 + 0x56;
    local_f0[0] = param_1[0x54];
    local_1d8 = local_f0;
    local_d0 = param_1 + 0x60;
    local_d8[0] = param_1[0x5e];
    local_1b0 = local_d8;
    local_1c8 = (longlong)(int)param_1[0x75];
    local_1c0 = (longlong)(int)param_1[0x74];
    local_1a8 = param_1[0x72];
    local_1b8 = *(undefined8 *)(param_1 + 0x6e);
    local_f8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    if (pcVar3 == (char *)0x0) {
      local_1a0 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_c0[0] = uVar4 & 0x7fffffff;
      local_1a0 = local_c0;
      local_b0 = 0;
      local_b8 = pcVar3;
    }
    if (*(longlong *)(param_1 + 0x84) != 0) {
      local_a8[0] = param_1[0x86];
      local_188 = local_a8;
      local_98 = 0;
      local_a0 = *(longlong *)(param_1 + 0x84);
    }
    if (param_1[0x88] != 0) {
      local_198 = (ulonglong)(uint)param_1[0x88];
    }
    pcVar3 = *(char **)(param_1 + 0x68);
    local_190 = param_1[0x89];
    uVar4 = 0;
    if (pcVar3 == (char *)0x0) {
      local_180 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (local_90[0] = uVar4; (cVar1 != '\0' && (local_90[0] < 0x80000000));
          local_90[0] = local_90[0] + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_90[0] = local_90[0] & 0x7fffffff;
      local_180 = local_90;
      local_80 = 0;
      local_88 = pcVar3;
    }
    pcVar3 = *(char **)(param_1 + 0x6a);
    if (pcVar3 == (char *)0x0) {
      local_178 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (local_78[0] = uVar4; (cVar1 != '\0' && (local_78[0] < 0x80000000));
          local_78[0] = local_78[0] + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_78[0] = local_78[0] & 0x7fffffff;
      local_178 = local_78;
      local_68 = 0;
      local_70 = pcVar3;
    }
    pcVar3 = *(char **)(param_1 + 0x92);
    if (pcVar3 == (char *)0x0) {
      local_170 = (uint *)0x0;
    }
    else {
      cVar1 = *pcVar3;
      pcVar7 = pcVar3;
      for (; (cVar1 != '\0' && (uVar4 < 0x80000000)); uVar4 = uVar4 + 1) {
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      local_60[0] = uVar4 & 0x7fffffff;
      local_170 = local_60;
      local_50 = 0;
      local_58 = pcVar3;
    }
    local_168 = (ulonglong)(uint)param_1[0x98];
    local_160 = param_1[0x8a];
    if (*(longlong *)(param_1 + 0x8c) == 0) {
      local_158 = (undefined4 *)0x0;
    }
    else {
      local_48[0] = param_1[0x8e];
      local_158 = local_48;
      local_38 = 0;
      local_40 = *(longlong *)(param_1 + 0x8c);
    }
    local_150 = (uint)*(byte *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x94) == 0) {
      local_148 = (undefined4 *)0x0;
    }
    else {
      local_30[0] = param_1[0x96];
      local_148 = local_30;
      local_20 = local_20 & 0xffffffff00000000;
      local_28 = *(longlong *)(param_1 + 0x94);
    }
    uVar5 = FUN_144f01520(&local_1f8,param_2,&DAT_149d024a0);
  }
  return uVar5;
}



// FUNCTION 145279b20 FUN_145279b20 body=1101 status=ok
// SIG undefined FUN_145279b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_145279b20(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  __time64_t _Var9;
  undefined8 uVar10;
  undefined8 local_res10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  uVar12 = 0x145279b3e;
  local_res10 = *param_2;
  piVar8 = (int *)0x0;
  piVar5 = (int *)FUN_144eff7f0(0,&local_res10,param_3,&DAT_149d024a0);
  piVar6 = piVar8;
  if ((piVar5 == (int *)0x0) ||
     (((param_1 == (longlong *)0x0 || (piVar6 = (int *)*param_1, piVar6 == (int *)0x0)) &&
      (piVar6 = (int *)FUN_144eb0c00(), piVar6 == (int *)0x0)))) goto LAB_145279baf;
  if (*piVar5 == 1) {
    iVar4 = piVar5[1];
    if (((iVar4 >> 8 == 3) || (iVar4 >> 8 == 0xfe)) || (iVar4 == 0x100)) {
      *piVar6 = iVar4;
      if (**(int **)(piVar5 + 2) == 2) {
        pbVar2 = *(byte **)(*(int **)(piVar5 + 2) + 2);
        piVar6[0x7a] = (*pbVar2 | 0x30000) << 8 | (uint)pbVar2[1];
        lVar7 = FUN_144ec9660();
        *(longlong *)(piVar6 + 0x78) = lVar7;
        if ((lVar7 == 0) ||
           (iVar4 = FUN_14527a000(piVar6 + 0x56,piVar6 + 0x54,*(undefined8 *)(piVar5 + 8),0x20),
           iVar4 == 0)) goto LAB_145279baf;
        puVar3 = *(uint **)(piVar5 + 6);
        if (puVar3 != (uint *)0x0) {
          uVar1 = *puVar3;
          if (uVar1 != 0) {
            if (0x100 < uVar1) goto LAB_145279baf;
            memcpy(piVar6 + 0x14,*(void **)(puVar3 + 2),(longlong)(int)uVar1);
            piVar8 = (int *)(longlong)(int)*puVar3;
          }
        }
        *(int **)(piVar6 + 2) = piVar8;
        if (*(longlong *)(piVar5 + 0xc) == 0) {
          _Var9 = _time64((__time64_t *)0x0);
          iVar4 = (int)_Var9;
        }
        else {
          iVar4 = piVar5[0xc];
        }
        piVar6[0x75] = iVar4;
        if (*(longlong *)(piVar5 + 0xe) == 0) {
          piVar6[0x74] = 3;
        }
        else {
          piVar6[0x74] = piVar5[0xe];
        }
        FUN_144b47250(*(undefined8 *)(piVar6 + 0x6e));
        *(undefined8 *)(piVar6 + 0x6e) = *(undefined8 *)(piVar5 + 0x10);
        piVar5[0x10] = 0;
        piVar5[0x11] = 0;
        iVar4 = FUN_14527a000(piVar6 + 0x60,piVar6 + 0x5e,*(undefined8 *)(piVar5 + 0x12),0x20);
        if (iVar4 == 0) goto LAB_145279baf;
        piVar6[0x72] = piVar5[0x14];
        iVar4 = FUN_145279f70(piVar6 + 0x82,*(undefined8 *)(piVar5 + 0x16));
        if (((iVar4 == 0) ||
            (iVar4 = FUN_145279f70(piVar6 + 0x68,*(undefined8 *)(piVar5 + 0x1e)), iVar4 == 0)) ||
           (iVar4 = FUN_145279f70(piVar6 + 0x6a,*(undefined8 *)(piVar5 + 0x20)), iVar4 == 0))
        goto LAB_145279baf;
        piVar6[0x88] = piVar5[0x18];
        piVar6[0x89] = piVar5[0x1a];
        FUN_144ea6530(*(undefined8 *)(piVar6 + 0x84),"ssl\\ssl_asn1.c",0x14b);
        if (*(longlong *)(piVar5 + 0x1c) == 0) {
          piVar6[0x84] = 0;
          piVar6[0x85] = 0;
        }
        else {
          *(undefined8 *)(piVar6 + 0x84) = *(undefined8 *)(*(longlong *)(piVar5 + 0x1c) + 8);
          *(longlong *)(piVar6 + 0x86) = (longlong)**(int **)(piVar5 + 0x1c);
          *(undefined8 *)(*(longlong *)(piVar5 + 0x1c) + 8) = 0;
        }
        piVar8 = *(int **)(piVar5 + 4);
        if (piVar8 == (int *)0x0) {
          piVar6[0x76] = 0;
        }
        else {
          if (*piVar8 != 1) {
            uVar11 = 0x156;
            uVar10 = 0x10f;
            goto LAB_145279baa;
          }
          piVar6[0x76] = (uint)**(byte **)(piVar8 + 2);
        }
        iVar4 = FUN_145279f70(piVar6 + 0x92,*(undefined8 *)(piVar5 + 0x22));
        if (iVar4 != 0) {
          piVar6[0x98] = piVar5[0x24];
          piVar6[0x8a] = piVar5[0x26];
          FUN_144ea6530(*(undefined8 *)(piVar6 + 0x8c),"ssl\\ssl_asn1.c",0x167);
          if (*(longlong *)(piVar5 + 0x28) == 0) {
            piVar6[0x8c] = 0;
            piVar6[0x8d] = 0;
            piVar6[0x8e] = 0;
            piVar6[0x8f] = 0;
          }
          else {
            *(undefined8 *)(piVar6 + 0x8c) = *(undefined8 *)(*(longlong *)(piVar5 + 0x28) + 8);
            *(longlong *)(piVar6 + 0x8e) = (longlong)**(int **)(piVar5 + 0x28);
            *(undefined8 *)(*(longlong *)(piVar5 + 0x28) + 8) = 0;
          }
          *(char *)(piVar6 + 0x90) = (char)piVar5[0x2a];
          FUN_144ea6530(*(undefined8 *)(piVar6 + 0x94),"ssl\\ssl_asn1.c",0x173);
          if (*(longlong *)(piVar5 + 0x2c) == 0) {
            piVar6[0x94] = 0;
            piVar6[0x95] = 0;
            piVar6[0x96] = 0;
            piVar6[0x97] = 0;
          }
          else {
            *(undefined8 *)(piVar6 + 0x94) = *(undefined8 *)(*(longlong *)(piVar5 + 0x2c) + 8);
            *(longlong *)(piVar6 + 0x96) = (longlong)**(int **)(piVar5 + 0x2c);
            *(undefined8 *)(*(longlong *)(piVar5 + 0x2c) + 8) = 0;
          }
          FUN_144eff330(piVar5,&DAT_149d024a0);
          if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
            *param_1 = (longlong)piVar6;
          }
          *param_2 = local_res10;
          return piVar6;
        }
        goto LAB_145279baf;
      }
      uVar11 = 0x114;
      uVar10 = 0x89;
    }
    else {
      uVar11 = 0x10d;
      uVar10 = 0x103;
    }
  }
  else {
    uVar11 = 0x106;
    uVar10 = 0xfe;
  }
LAB_145279baa:
  FUN_144ba24f0(0x14,0x67,uVar10,"ssl\\ssl_asn1.c",uVar11,uVar12);
LAB_145279baf:
  FUN_144eff330(piVar5,&DAT_149d024a0);
  if ((param_1 == (longlong *)0x0) || ((int *)*param_1 != piVar6)) {
    FUN_144eb0d50(piVar6);
  }
  return (int *)0x0;
}



// FUNCTION 145279f70 FUN_145279f70 body=133 status=ok
// SIG undefined FUN_145279f70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145279f70(longlong *param_1,int *param_2)

{
  longlong lVar1;
  
  FUN_144ea6530(*param_1,"ssl\\ssl_asn1.c",0xd5);
  *param_1 = 0;
  if (param_2 == (int *)0x0) {
    return true;
  }
  lVar1 = FUN_144ea6e30(*(undefined8 *)(param_2 + 2),(longlong)*param_2,"ssl\\ssl_asn1.c",0xd9);
  *param_1 = lVar1;
  return lVar1 != 0;
}



// FUNCTION 14527a000 FUN_14527a000 body=114 status=ok
// SIG undefined FUN_14527a000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527a000(void *param_1,longlong *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  if (param_3 != (int *)0x0) {
    iVar1 = *param_3;
    if (iVar1 != 0) {
      if ((-1 < iVar1) && (iVar1 <= param_4)) {
        memcpy(param_1,*(void **)(param_3 + 2),(longlong)iVar1);
        *param_2 = (longlong)*param_3;
        return 1;
      }
      return 0;
    }
  }
  *param_2 = 0;
  return 1;
}



// FUNCTION 14527a080 FUN_14527a080 body=1238 status=ok
// SIG undefined FUN_14527a080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527a080(longlong param_1,int *param_2,longlong param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  byte *local_c8;
  int local_c0;
  int local_b8;
  uint local_b4;
  int local_b0 [2];
  void *local_a8;
  byte *local_a0;
  longlong local_98;
  undefined1 local_90 [40];
  byte abStack_68 [24];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 != 1) {
    local_c0 = 0x29;
    local_c8 = (byte *)0x149d02638;
    FUN_144eafc90(param_1,0x50,0x261,0x44);
    goto LAB_14527a4c6;
  }
  if (param_4 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x438);
    lVar4 = 0x440;
    lVar5 = 0x16c8;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x468);
    lVar4 = 0x470;
    lVar5 = 0x16d0;
  }
  local_a8 = (void *)(lVar4 + param_1);
  local_a0 = (byte *)(param_1 + lVar5);
  if ((lVar7 == 0) || (param_2[1] == 0x15)) {
    memmove(*(void **)(param_2 + 8),*(void **)(param_2 + 10),*(size_t *)(param_2 + 2));
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_2 + 8);
    goto LAB_14527a4c6;
  }
  iVar2 = FUN_144ba3df0(lVar7);
  uVar6 = (ulonglong)iVar2;
  if (*(int *)(param_1 + 0x84) - 3U < 2) {
    lVar4 = *(longlong *)(param_1 + 0x508);
    if (((lVar4 == 0) || (*(int *)(lVar4 + 0x228) == 0)) &&
       ((lVar4 = *(longlong *)(param_1 + 0x510), lVar4 == 0 || (*(int *)(lVar4 + 0x228) == 0)))) {
      local_c0 = 0x4d;
      goto LAB_14527a515;
    }
    uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x1e0) + 0x24);
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
    if (lVar4 == 0) {
      local_c0 = 0x59;
LAB_14527a515:
      local_c8 = (byte *)0x149d02638;
      FUN_144eafc90(param_1,0x50,0x261,0x44);
      goto LAB_14527a4c6;
    }
    uVar3 = *(uint *)(lVar4 + 0x24);
  }
  local_b4 = uVar3 & 0x3c000;
  lVar4 = 8;
  if (local_b4 == 0) {
    if (((uVar3 & 0x3000) != 0) || ((uVar3 >> 0x13 & 1) != 0)) {
      lVar5 = 0x10;
LAB_14527a22b:
      if (param_4 == 0) goto LAB_14527a230;
      goto LAB_14527a24b;
    }
    local_c0 = 0x70;
  }
  else {
    lVar5 = 0x10;
    if ((uVar3 & 0x30000) != 0) {
      lVar5 = 8;
    }
    if (param_4 == 0) {
LAB_14527a230:
      if (*(ulonglong *)(param_2 + 2) < lVar5 + 1U) goto LAB_14527a4c6;
      *(ulonglong *)(param_2 + 2) = *(ulonglong *)(param_2 + 2) - lVar5;
LAB_14527a24b:
      if (uVar6 < 8) {
        local_c0 = 0x82;
      }
      else {
        memcpy(abStack_68 + 8,local_a8,uVar6 - 8);
        abStack_68[uVar6] = *local_a0 ^ *(byte *)((uVar6 - 8) + (longlong)local_a8);
        abStack_68[uVar6 + 1] = *(byte *)((uVar6 - 7) + (longlong)local_a8) ^ local_a0[1];
        abStack_68[uVar6 + 2] = *(byte *)((uVar6 - 6) + (longlong)local_a8) ^ local_a0[2];
        abStack_68[uVar6 + 3] = *(byte *)((uVar6 - 5) + (longlong)local_a8) ^ local_a0[3];
        abStack_68[uVar6 + 4] = *(byte *)((uVar6 - 4) + (longlong)local_a8) ^ local_a0[4];
        abStack_68[uVar6 + 5] = *(byte *)((uVar6 - 3) + (longlong)local_a8) ^ local_a0[5];
        abStack_68[uVar6 + 6] = *(byte *)((uVar6 - 2) + (longlong)local_a8) ^ local_a0[6];
        abStack_68[uVar6 + 7] = *(byte *)((uVar6 - 1) + (longlong)local_a8) ^ local_a0[7];
        do {
          pbVar1 = local_a0 + lVar4 + -1;
          *pbVar1 = *pbVar1 + 1;
          if (*pbVar1 != 0) break;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        if (lVar4 == 0) goto LAB_14527a4c6;
        local_c8 = abStack_68 + 8;
        local_c0 = param_4;
        iVar2 = FUN_144ba4d00(lVar7,0,0,0);
        if ((iVar2 < 1) ||
           ((param_4 == 0 &&
            (iVar2 = FUN_144ba5290(lVar7,0x11,lVar5,
                                   *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 2)),
            iVar2 < 1)))) goto LAB_14527a4c6;
        iVar2 = FUN_14526e9b0(local_90,local_50,5);
        if (((iVar2 == 0) ||
            ((((iVar2 = FUN_14526ef00(local_90,(longlong)param_2[1],1), iVar2 == 0 ||
               (iVar2 = FUN_14526ef00(local_90,(longlong)*param_2,2), iVar2 == 0)) ||
              (iVar2 = FUN_14526ef00(local_90,*(longlong *)(param_2 + 2) + lVar5,2), iVar2 == 0)) ||
             ((iVar2 = FUN_14526f120(local_90,&local_98), iVar2 == 0 || (local_98 != 5)))))) ||
           (iVar2 = FUN_14526ea70(local_90), iVar2 == 0)) {
          FUN_14526f190(local_90);
          goto LAB_14527a4c6;
        }
        if (local_b4 != 0) {
          local_c8 = (byte *)CONCAT44(local_c8._4_4_,param_2[2]);
          iVar2 = FUN_144ba5050(lVar7,0,&local_b8,0);
          if (iVar2 < 1) goto LAB_14527a4c6;
        }
        local_c8 = (byte *)CONCAT44(local_c8._4_4_,5);
        iVar2 = FUN_144ba5050(lVar7,0,&local_b8,local_50);
        if (iVar2 < 1) goto LAB_14527a4c6;
        local_c8 = (byte *)CONCAT44(local_c8._4_4_,param_2[2]);
        iVar2 = FUN_144ba5050(lVar7,*(undefined8 *)(param_2 + 8),&local_b8,
                              *(undefined8 *)(param_2 + 10));
        if (((iVar2 < 1) ||
            (iVar2 = FUN_144ba5080(lVar7,(longlong)local_b8 + *(longlong *)(param_2 + 8),local_b0),
            iVar2 < 1)) ||
           (((longlong)(local_b0[0] + local_b8) != *(longlong *)(param_2 + 2) || (param_4 == 0))))
        goto LAB_14527a4c6;
        iVar2 = FUN_144ba5290(lVar7,0x10,lVar5,
                              *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 2));
        if (0 < iVar2) {
          *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + lVar5;
          goto LAB_14527a4c6;
        }
        local_c0 = 0xbd;
      }
    }
    else {
      iVar2 = FUN_144ba5290(lVar7,0x11,lVar5,0);
      if (0 < iVar2) goto LAB_14527a22b;
      local_c0 = 0x67;
    }
  }
  local_c8 = (byte *)0x149d02638;
  FUN_144eafc90(param_1,0x50,0x261,0x44);
LAB_14527a4c6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14527a570 FUN_14527a570 body=452 status=ok
// SIG undefined FUN_14527a570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527a570(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  size_t _Size;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar5 = 0;
  if (param_3 != 1) {
    return 0;
  }
  if (param_4 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x438);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x468);
  }
  lVar2 = lVar5;
  if (lVar3 != 0) {
    lVar2 = FUN_144ba3db0(lVar3);
  }
  if (((*(longlong *)(param_1 + 0x508) == 0) || (lVar3 == 0)) || (lVar2 == 0)) {
    memmove(*(void **)(param_2 + 0x20),*(void **)(param_2 + 0x28),*(size_t *)(param_2 + 8));
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
    return 1;
  }
  uVar7 = *(ulonglong *)(param_2 + 8);
  iVar1 = FUN_144ba3dd0(lVar3);
  uVar6 = (ulonglong)iVar1;
  if (uVar6 == 1) {
LAB_14527a64e:
    if (param_4 != 0) goto LAB_14527a66c;
  }
  else if (param_4 != 0) {
    _Size = uVar6 - uVar7 % uVar6;
    uVar7 = uVar7 + _Size;
    memset((void *)(*(longlong *)(param_2 + 0x28) + *(longlong *)(param_2 + 8)),0,_Size);
    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + _Size;
    *(char *)(*(longlong *)(param_2 + 0x28) + -1 + uVar7) = (char)_Size + -1;
    goto LAB_14527a64e;
  }
  if ((uVar7 == 0) || (uVar7 % uVar6 != 0)) {
    return 0;
  }
LAB_14527a66c:
  iVar1 = FUN_144ba3ea0(lVar3,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                        uVar7 & 0xffffffff);
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  lVar3 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x450));
  if (lVar3 != 0) {
    uVar4 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x450));
    iVar1 = FUN_144ba3cd0(uVar4);
    if (iVar1 < 0) {
      FUN_144eafc90(param_1,0x50,0x260,0x44,"ssl\\record\\ssl3_record.c",0x392);
      return 0xffffffff;
    }
    lVar5 = (longlong)iVar1;
  }
  if ((uVar6 != 1) && (param_4 == 0)) {
    uVar4 = FUN_14527c680(param_2,uVar6,lVar5);
    return uVar4;
  }
  return 1;
}



// FUNCTION 14527a740 FUN_14527a740 body=768 status=ok
// SIG undefined FUN_14527a740(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527a740(longlong param_1,longlong param_2,undefined1 *param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *_Src;
  size_t _Size;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  void *local_d0;
  size_t local_c8;
  undefined1 local_c0;
  undefined1 local_b8 [8];
  ulonglong local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 auStack_90 [72];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14527a755;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_4 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x450);
    _Src = (void *)(*(longlong *)(param_1 + 0xa8) + 0x10);
    lVar9 = 0x16c8;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x480);
    _Src = (void *)(*(longlong *)(param_1 + 0xa8) + 0x58);
    lVar9 = 0x16d0;
  }
  puVar1 = (undefined8 *)(lVar9 + param_1);
  uVar10 = FUN_144ba3d20(uVar11);
  iVar7 = FUN_144ba3cd0(uVar10);
  if (iVar7 < 0) goto LAB_14527aa30;
  local_b0 = (ulonglong)iVar7;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_b0;
  auVar4 = ZEXT816(0) << 0x40 | ZEXT816(0x30);
  _Size = SUB168(auVar4 / auVar3,0) * local_b0;
  if (param_4 == 0) {
    uVar10 = FUN_144ba3db0(*(undefined8 *)(param_1 + 0x438),SUB168(auVar4 % auVar3,0));
    uVar8 = FUN_144ba3da0(uVar10);
    if (((uVar8 & 0xf0007) != 2) || (cVar6 = FUN_1454d7940(uVar11), uVar5 = local_b0, cVar6 == '\0')
       ) goto LAB_14527a8bf;
    memcpy(&local_98,_Src,local_b0);
    memcpy((void *)((longlong)&local_98 + uVar5),
           "666666666666666666666666666666666666666666666666\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl\\record\\ssl3_record.c"
           ,_Size);
    lVar2 = *(longlong *)(param_2 + 8);
    lVar9 = _Size + uVar5;
    *(undefined8 *)((longlong)&local_98 + lVar9) = *puVar1;
    auStack_90[lVar9] = *(undefined1 *)(param_2 + 4);
    local_e0 = lVar2 + uVar5;
    local_c0 = 1;
    auStack_90[lVar9 + 1] = (char)((ulonglong)lVar2 >> 8);
    local_d8 = *(undefined8 *)(param_2 + 0x10);
    local_c8 = uVar5;
    local_e8 = *(undefined8 *)(param_2 + 0x28);
    auStack_90[lVar9 + 2] = (char)lVar2;
    local_d0 = _Src;
    iVar7 = FUN_1454d7980(uVar11,param_3,&local_b0,&local_98);
    if (iVar7 < 1) goto LAB_14527aa30;
  }
  else {
LAB_14527a8bf:
    lVar9 = FUN_144ba5700();
    if (lVar9 == 0) goto LAB_14527aa30;
    local_b8[0] = *(undefined1 *)(param_2 + 4);
    *param_3 = *(undefined1 *)(param_2 + 9);
    param_3[1] = *(undefined1 *)(param_2 + 8);
    iVar7 = FUN_144ba5840(lVar9,uVar11);
    if (((((iVar7 < 1) || (iVar7 = FUN_144ba5c70(lVar9,_Src,local_b0), iVar7 < 1)) ||
         (iVar7 = FUN_144ba5c70(lVar9,
                                "666666666666666666666666666666666666666666666666\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl\\record\\ssl3_record.c"
                                ,_Size), iVar7 < 1)) ||
        (((iVar7 = FUN_144ba5c70(lVar9,puVar1,8), iVar7 < 1 ||
          (iVar7 = FUN_144ba5c70(lVar9,local_b8,1), iVar7 < 1)) ||
         ((iVar7 = FUN_144ba5c70(lVar9,param_3,2), iVar7 < 1 ||
          ((iVar7 = FUN_144ba5c70(lVar9,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 8)
                                 ), iVar7 < 1 || (iVar7 = FUN_144ba5ca0(lVar9,param_3,0), iVar7 < 1)
           ))))))) ||
       ((iVar7 = FUN_144ba5840(lVar9,uVar11), iVar7 < 1 ||
        ((((iVar7 = FUN_144ba5c70(lVar9,_Src,local_b0), iVar7 < 1 ||
           (iVar7 = FUN_144ba5c70(lVar9,
                                  "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl\\record\\ssl3_record.c"
                                  ,_Size), iVar7 < 1)) ||
          (iVar7 = FUN_144ba5c70(lVar9,param_3,local_b0), iVar7 < 1)) ||
         (iVar7 = FUN_144ba5ca0(lVar9,param_3,local_a8), iVar7 < 1)))))) {
      FUN_144ba5800(lVar9);
      goto LAB_14527aa30;
    }
    FUN_144ba5800(lVar9);
  }
  FUN_144eb4550(puVar1);
LAB_14527aa30:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 14527aa60 FUN_14527aa60 body=1905 status=ok
// SIG undefined FUN_14527aa60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527aa60(undefined4 *param_1,longlong param_2,ulonglong param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_458 [32];
  char *local_438;
  undefined4 local_430;
  longlong local_428;
  ulonglong local_420;
  int local_418;
  ulonglong local_410;
  ulonglong local_408;
  ulonglong local_3f8 [32];
  undefined8 local_2f8 [32];
  undefined1 local_1f8;
  undefined1 uStack_1f7;
  undefined4 uStack_1f6;
  undefined2 uStack_1f2;
  undefined1 local_1df [407];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_458;
  uVar16 = 0;
  local_418 = 0;
  local_408 = 0;
  local_428 = param_2;
  if (param_3 == 0) {
    local_430 = 0x3b6;
    local_438 = "ssl\\record\\ssl3_record.c";
    FUN_144eafc90(param_1,0x50,0x191,0x44);
    goto LAB_14527b1c1;
  }
  if (param_4 == 0) {
    lVar4 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x114));
    if (lVar4 == 0) {
LAB_14527ac90:
      lVar4 = *(longlong *)(param_1 + 0x10e);
      if (lVar4 == 0) {
        local_420 = 0;
        uVar12 = 0;
      }
      else {
        local_420 = FUN_144ba3db0(lVar4);
        uVar12 = local_420;
      }
      goto LAB_14527abd2;
    }
    uVar5 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x114));
    iVar2 = FUN_144ba3cd0(uVar5);
    if (-1 < iVar2) goto LAB_14527ac90;
    local_430 = 0x3e6;
LAB_14527b09d:
    uVar5 = 0x44;
  }
  else {
    lVar4 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x120));
    if (lVar4 != 0) {
      uVar5 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x120));
      iVar2 = FUN_144ba3cd0(uVar5);
      if (iVar2 < 0) {
        local_430 = 0x3bf;
        goto LAB_14527b09d;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x11a);
    if (lVar4 == 0) {
      local_420 = 0;
      uVar12 = uVar16;
    }
    else {
      uVar12 = FUN_144ba3db0(lVar4);
      local_420 = uVar12;
      if (((((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) != 0) &&
           (uVar3 = FUN_144ba3da0(uVar12), (uVar3 & 0xf0007) == 2)) &&
          (iVar2 = FUN_144ba3d90(uVar12), 1 < iVar2)) && (param_2 = local_428, param_3 != 0)) {
        plVar10 = (longlong *)(local_428 + 0x28);
        uVar14 = uVar16;
        do {
          if (plVar10[-1] != *plVar10) {
            local_430 = 0x3d7;
            goto LAB_14527b09d;
          }
          iVar2 = FUN_144bac850();
          if (iVar2 < 1) {
            local_430 = 0x3db;
            goto LAB_14527b09d;
          }
          uVar14 = uVar14 + 1;
          plVar10 = plVar10 + 9;
          uVar12 = local_420;
          param_2 = local_428;
        } while (uVar14 < param_3);
      }
    }
LAB_14527abd2:
    if (((*(longlong *)(param_1 + 0x142) == 0) || (lVar4 == 0)) || (uVar12 == 0)) {
      if (param_3 != 0) {
        puVar9 = (undefined8 *)(param_2 + 0x20);
        do {
          memmove((void *)*puVar9,(void *)puVar9[1],puVar9[-3]);
          puVar9[1] = *puVar9;
          puVar9 = puVar9 + 9;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      goto LAB_14527b1c1;
    }
    uVar5 = FUN_144ba3db0(lVar4);
    iVar2 = FUN_144ba3d70(uVar5);
    local_410 = (ulonglong)iVar2;
    if (param_3 < 2) {
LAB_14527acbe:
      if (param_3 != 0) {
        puVar13 = local_1df;
        puVar11 = (ulonglong *)(local_428 + 8);
        uVar12 = uVar16;
        do {
          local_3f8[uVar12] = *puVar11;
          uVar5 = FUN_144ba3db0(lVar4);
          uVar3 = FUN_144ba3da0(uVar5);
          if ((uVar3 >> 0x15 & 1) == 0) {
            if (local_410 != 1) {
              if (param_4 == 0) goto LAB_14527ae6a;
              uVar14 = local_3f8[uVar12];
              uVar15 = local_410 - uVar14 % local_410;
              if (0x100 < uVar15) {
                local_430 = 0x43a;
                goto LAB_14527b09d;
              }
              if (uVar14 < uVar14 + uVar15) {
                do {
                  *(char *)(uVar14 + puVar11[4]) = (char)uVar15 + -1;
                  uVar14 = uVar14 + 1;
                } while (uVar14 < local_3f8[uVar12] + uVar15);
              }
              local_3f8[uVar12] = local_3f8[uVar12] + uVar15;
              *puVar11 = *puVar11 + uVar15;
            }
LAB_14527ae60:
            if (param_4 == 0) goto LAB_14527ae6a;
          }
          else {
            lVar8 = 0x16c8;
            if (param_4 != 0) {
              lVar8 = 0x16d0;
            }
            puVar9 = (undefined8 *)(lVar8 + (longlong)param_1);
            if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
              pcVar7 = (char *)((longlong)puVar9 + 7);
              *(undefined8 *)(puVar13 + -9) = *puVar9;
              do {
                *pcVar7 = *pcVar7 + '\x01';
                if (*pcVar7 != '\0') break;
                pcVar7 = pcVar7 + -1;
              } while (-1 < (longlong)pcVar7 - (longlong)puVar9);
            }
            else {
              puVar1 = *(undefined2 **)(param_1 + 0x5b8);
              puVar6 = puVar1 + 1;
              if (param_4 == 0) {
                puVar6 = puVar1;
              }
              local_1f8 = *(undefined1 *)((longlong)puVar6 + 1);
              if (param_4 == 0) {
                uStack_1f7 = (undefined1)*puVar1;
              }
              else {
                uStack_1f7 = (undefined1)puVar1[1];
              }
              uStack_1f6 = *(undefined4 *)((longlong)puVar9 + 2);
              uStack_1f2 = *(undefined2 *)((longlong)puVar9 + 6);
              *(ulonglong *)(puVar13 + -9) =
                   CONCAT26(uStack_1f2,CONCAT42(uStack_1f6,CONCAT11(uStack_1f7,local_1f8)));
            }
            puVar13[-1] = *(undefined1 *)((longlong)puVar11 + -4);
            *puVar13 = (char)((uint)*param_1 >> 8);
            puVar13[1] = *(undefined1 *)param_1;
            puVar13[2] = (char)((uint)(int)*puVar11 >> 8);
            puVar13[3] = (char)*puVar11;
            local_418 = FUN_144ba5290(lVar4,0x16,0xd);
            if (local_418 < 1) {
              local_430 = 0x42a;
              goto LAB_14527b09d;
            }
            if (param_4 != 0) {
              local_3f8[uVar12] = local_3f8[uVar12] + (longlong)local_418;
              *puVar11 = *puVar11 + (longlong)local_418;
              goto LAB_14527ae60;
            }
LAB_14527ae6a:
            if ((local_3f8[uVar12] == 0) || (local_3f8[uVar12] % local_410 != 0))
            goto LAB_14527b1c1;
          }
          uVar12 = uVar12 + 1;
          puVar13 = puVar13 + 0xd;
          puVar11 = puVar11 + 9;
        } while (uVar12 < param_3);
      }
      lVar8 = local_428;
      if (param_3 < 2) {
LAB_14527af8f:
        lVar8 = local_428;
        plVar10 = (longlong *)(local_428 + 0x28);
        iVar2 = FUN_144ba3ea0(lVar4,*(undefined8 *)(local_428 + 0x20),
                              *(undefined8 *)(local_428 + 0x28),(undefined4)local_3f8[0]);
        uVar5 = FUN_144ba3db0(lVar4);
        uVar3 = FUN_144ba3da0(uVar5);
        uVar12 = local_420;
        if ((uVar3 >> 0x14 & 1) == 0) {
          bVar17 = iVar2 == 0;
        }
        else {
          bVar17 = iVar2 < 0;
        }
        if (bVar17) goto LAB_14527b1c1;
        if (param_4 == 0) {
          uVar3 = FUN_144ba3da0(local_420);
          uVar14 = param_3;
          if ((uVar3 & 0xf0007) == 6) {
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
              plVar10[-1] = plVar10[-1] + 8;
              *plVar10 = *plVar10 + 8;
              plVar10[-4] = plVar10[-4] + -8;
              plVar10 = plVar10 + 9;
            }
          }
          else {
            uVar3 = FUN_144ba3da0(uVar12);
            uVar12 = param_3;
            if ((uVar3 & 0xf0007) == 7) {
              for (; uVar12 != 0; uVar12 = uVar12 - 1) {
                plVar10[-1] = plVar10[-1] + 8;
                *plVar10 = *plVar10 + 8;
                plVar10[-4] = plVar10[-4] + -8;
                plVar10 = plVar10 + 9;
              }
            }
          }
        }
        uVar12 = uVar16;
        if (((**(uint **)(param_1 + 0x2a) & 0x100) == 0) &&
           (lVar4 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x114)), lVar4 != 0)) {
          uVar5 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x114));
          iVar2 = FUN_144ba3cd0(uVar5);
          if (iVar2 < 0) {
            local_430 = 0x483;
            goto LAB_14527b09d;
          }
          local_408 = (ulonglong)iVar2;
          uVar12 = local_408;
        }
        if (((local_410 != 1) && (param_4 == 0)) && (lVar4 = lVar8, param_3 != 0)) {
          do {
            uVar3 = FUN_14527c720(param_1,lVar4,local_410,uVar12);
            if (uVar3 == 0) goto LAB_14527b1c1;
            uVar16 = uVar16 + 1;
            uVar3 = (int)((uVar3 ^ 1) - 1 & ~(uVar3 ^ 1)) >> 0x1f;
            local_420 = CONCAT44(local_420._4_4_,uVar3);
            local_428 = CONCAT44(local_428._4_4_,~uVar3);
            uVar12 = local_408;
            lVar4 = lVar4 + 0x48;
          } while (uVar16 < param_3);
        }
        if (((local_418 != 0) && (param_4 == 0)) && (param_3 != 0)) {
          plVar10 = (longlong *)(lVar8 + 8);
          do {
            *plVar10 = *plVar10 - (longlong)local_418;
            plVar10 = plVar10 + 9;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        goto LAB_14527b1c1;
      }
      if (param_3 != 0) {
        puVar9 = (undefined8 *)(local_428 + 0x20);
        uVar12 = uVar16;
        do {
          uVar5 = *puVar9;
          puVar9 = puVar9 + 9;
          local_2f8[uVar12] = uVar5;
          uVar12 = uVar12 + 1;
        } while (uVar12 < param_3);
      }
      iVar2 = FUN_144ba5290(lVar4,0x22,param_3 & 0xffffffff,local_2f8);
      if (iVar2 < 1) {
        local_430 = 0x454;
        uVar5 = 0x196;
      }
      else {
        if (param_3 != 0) {
          puVar9 = (undefined8 *)(lVar8 + 0x28);
          uVar12 = uVar16;
          do {
            uVar5 = *puVar9;
            puVar9 = puVar9 + 9;
            local_2f8[uVar12] = uVar5;
            uVar12 = uVar12 + 1;
          } while (uVar12 < param_3);
        }
        iVar2 = FUN_144ba5290(lVar4,0x23,param_3 & 0xffffffff,local_2f8);
        if ((0 < iVar2) &&
           (iVar2 = FUN_144ba5290(lVar4,0x24,param_3 & 0xffffffff,local_3f8), 0 < iVar2))
        goto LAB_14527af8f;
        local_430 = 0x460;
        uVar5 = 0x196;
      }
    }
    else {
      uVar5 = FUN_144ba3db0(lVar4);
      uVar3 = FUN_144ba3da0(uVar5);
      if ((uVar3 >> 0x17 & 1) != 0) goto LAB_14527acbe;
      local_430 = 0x402;
      uVar5 = 0x196;
    }
  }
  local_438 = "ssl\\record\\ssl3_record.c";
  FUN_144eafc90(param_1,0x50,0x191,uVar5);
LAB_14527b1c1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_458);
}



// FUNCTION 14527b1f0 FUN_14527b1f0 body=632 status=ok
// SIG undefined FUN_14527b1f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527b1f0(undefined4 *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_50;
  undefined1 uStack_4f;
  undefined4 uStack_4e;
  undefined2 uStack_4a;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x114);
    uVar11 = param_1[0x4c] & 1;
    lVar5 = 0x16c8;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x120);
    uVar11 = param_1[0x4c] & 2;
    lVar5 = 0x16d0;
  }
  puVar1 = (undefined8 *)((longlong)param_1 + lVar5);
  uVar6 = FUN_144ba3d20(lVar9);
  iVar4 = FUN_144ba3cd0(uVar6);
  if (iVar4 < 0) goto LAB_14527b3e1;
  local_68 = (longlong)iVar4;
  lVar5 = lVar9;
  lVar10 = 0;
  if ((uVar11 != 0) ||
     ((lVar5 = FUN_144ba5700(), lVar10 = lVar5, lVar5 != 0 &&
      (iVar4 = FUN_144ba5e10(lVar5,lVar9), iVar4 != 0)))) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
      local_60 = *puVar1;
    }
    else {
      puVar2 = *(undefined2 **)(param_1 + 0x5b8);
      puVar7 = puVar2 + 1;
      if (param_4 == 0) {
        puVar7 = puVar2;
      }
      local_50 = *(undefined1 *)((longlong)puVar7 + 1);
      if (param_4 == 0) {
        uStack_4f = (undefined1)*puVar2;
      }
      else {
        uStack_4f = (undefined1)puVar2[1];
      }
      uStack_4e = *(undefined4 *)((longlong)puVar1 + 2);
      uStack_4a = *(undefined2 *)((longlong)puVar1 + 6);
      local_60 = CONCAT26(uStack_4a,CONCAT42(uStack_4e,CONCAT11(uStack_4f,local_50)));
    }
    local_58 = *(undefined1 *)(param_2 + 4);
    local_57 = (undefined1)((uint)*param_1 >> 8);
    local_56 = *(undefined1 *)param_1;
    local_55 = (undefined1)((uint)*(undefined4 *)(param_2 + 8) >> 8);
    local_54 = *(undefined1 *)(param_2 + 8);
    if ((param_4 == 0) && ((**(uint **)(param_1 + 0x2a) & 0x100) == 0)) {
      uVar6 = FUN_144ba3db0(*(undefined8 *)(param_1 + 0x10e));
      uVar11 = FUN_144ba3da0(uVar6);
      if (((uVar11 & 0xf0007) != 2) || (cVar3 = FUN_1454d7940(lVar5), cVar3 == '\0'))
      goto LAB_14527b409;
      local_90 = local_68 + *(longlong *)(param_2 + 8);
      local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 8);
      local_80 = *(longlong *)(param_1 + 0x2a) + 0x10;
      local_88 = *(undefined8 *)(param_2 + 0x10);
      local_98 = *(undefined8 *)(param_2 + 0x28);
      local_70 = (char)param_4;
      iVar4 = FUN_1454d7980(lVar5,param_3,&local_68,&local_60);
    }
    else {
LAB_14527b409:
      iVar4 = FUN_144ba5c70(lVar5,&local_60,0xd);
      if ((iVar4 < 1) ||
         (iVar4 = FUN_144ba5c70(lVar5,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 8)),
         iVar4 < 1)) goto LAB_14527b3d7;
      iVar4 = FUN_144ba6180(lVar5,param_3,&local_68);
    }
    if (0 < iVar4) {
      FUN_144ba5800(lVar10);
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
        pcVar8 = (char *)((longlong)puVar1 + 7);
        do {
          *pcVar8 = *pcVar8 + '\x01';
          if (*pcVar8 != '\0') break;
          pcVar8 = pcVar8 + -1;
        } while (-1 < (longlong)pcVar8 - (longlong)puVar1);
      }
      goto LAB_14527b3e1;
    }
  }
LAB_14527b3d7:
  FUN_144ba5800(lVar10);
LAB_14527b3e1:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 14527b490 FUN_14527b490 body=69 status=ok
// SIG undefined FUN_14527b490(void)

void FUN_14527b490(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    do {
      puVar1[-6] = 0;
      puVar1[-5] = 0;
      puVar1[-4] = 0;
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = *puVar1;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 9;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14527b4e0 FUN_14527b4e0 body=98 status=ok
// SIG undefined FUN_14527b4e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527b4e0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    do {
      FUN_144ea6530(*puVar1,"ssl\\record\\ssl3_record.c",0x37);
      *puVar1 = 0;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14527b550 FUN_14527b550 body=8 status=ok
// SIG undefined FUN_14527b550(void)

void FUN_14527b550(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  return;
}



// FUNCTION 14527b560 FUN_14527b560 body=3558 status=ok
// SIG undefined FUN_14527b560(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527b560(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  byte *pbVar7;
  char *_Str1;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  uint *puVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_138 [32];
  char *local_118;
  uint *local_110;
  undefined8 local_108;
  ulonglong *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  uint local_e0 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14527b582;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar19 = *(ulonglong *)(param_1 + 0x180);
  local_e8 = *(longlong *)(param_1 + 0x142);
  local_f8 = (ulonglong *)(param_1 + 0x360);
  uVar15 = 0;
  puVar20 = local_f8;
  local_f0 = uVar19;
  if (uVar19 == 0) {
    uVar19 = 1;
    local_f0 = uVar19;
  }
  do {
    puVar17 = puVar20;
    uVar23 = uVar15;
    puVar20 = puVar17 + -1;
    if ((param_1[0x20f] != 0xf1) || (*(ulonglong *)(param_1 + 0x5a0) < 5)) {
      local_110 = local_e0;
      local_118 = (char *)CONCAT44(local_118._4_4_,(uint)(uVar23 == 0));
      iVar8 = FUN_144eb4230(param_1,5,*(undefined8 *)(param_1 + 0x218));
      if (iVar8 < 1) goto LAB_14527c336;
      uVar19 = *(ulonglong *)(param_1 + 0x5a0);
      pbVar7 = *(byte **)(param_1 + 0x59e);
      param_1[0x20f] = 0xf1;
      if (0x7fffffffffffffff < uVar19) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,0xda);
        goto LAB_14527c30e;
      }
      local_c8._0_4_ = SUB84(pbVar7,0);
      local_c8._4_4_ = (undefined4)((ulonglong)pbVar7 >> 0x20);
      uStack_c0._0_4_ = (undefined4)uVar19;
      uStack_c0._4_4_ = (undefined4)(uVar19 >> 0x20);
      local_d8 = (undefined4)local_c8;
      uStack_d4 = local_c8._4_4_;
      uStack_d0 = (undefined4)uStack_c0;
      uStack_cc = uStack_c0._4_4_;
      local_c8 = pbVar7;
      uStack_c0 = uVar19;
      if (1 < uVar19) {
        bVar1 = *pbVar7;
        bVar2 = pbVar7[1];
        if (uVar19 != 2) {
          if ((((param_1[0xe] != 0) && (param_1[0x5b6] != 0)) && ((char)bVar1 < '\0')) &&
             (pbVar7[2] == 1)) {
            *(uint *)((longlong)puVar17 + -4) = 0x16;
            uVar15 = (ulonglong)(CONCAT11(bVar1,bVar2) & 0x7fff);
            *(uint *)puVar20 = 2;
            *puVar17 = uVar15;
            if (*(longlong *)(param_1 + 0x218) - 2U < uVar15) {
              local_110 = (uint *)CONCAT44(local_110._4_4_,0xfb);
              uVar14 = 0x16;
              uVar22 = 0xc6;
            }
            else {
              uVar19 = local_f0;
              if (8 < uVar15) goto LAB_14527b8a7;
              uVar14 = 0x32;
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x101);
              uVar22 = 0xa0;
            }
            goto LAB_14527c329;
          }
          if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
            local_108 = *(undefined8 *)(param_1 + 0x30);
            local_118 = (char *)0x5;
            local_110 = param_1;
            (**(code **)(param_1 + 0x2e))(0,0,0x100,pbVar7);
          }
          if ((uVar19 != 0) && (bVar1 = *pbVar7, 1 < uVar19 - 1)) {
            bVar2 = pbVar7[1];
            bVar3 = pbVar7[2];
            uVar9 = (uint)CONCAT11(bVar2,bVar3);
            if (1 < uVar19 - 3) {
              bVar4 = pbVar7[3];
              bVar5 = pbVar7[4];
              *(uint *)((longlong)puVar17 + -4) = (uint)bVar1;
              *puVar17 = (ulonglong)CONCAT11(bVar4,bVar5);
              *(uint *)puVar20 = uVar9;
              if ((param_1[0x17a] != 0) ||
                 (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
                    (iVar8 = **(int **)(param_1 + 2), 0x303 < iVar8)) && (iVar8 != 0x10000)) ||
                  ((param_1[0x136] == 1 || (uVar9 == *param_1)))))) {
                if ((uVar9 & 0xffffff00) == 0x300) {
                  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                       && (iVar8 = **(int **)(param_1 + 2), 0x303 < iVar8)) && (iVar8 != 0x10000))
                     && (*(longlong *)(param_1 + 0x10e) != 0)) {
                    if (bVar1 != 0x17) {
                      if (bVar1 != 0x14) {
                        if (bVar1 == 0x15) {
                          bVar24 = param_1[0x20] == 1;
                          goto LAB_14527b86d;
                        }
LAB_14527ba5e:
                        local_110 = (uint *)CONCAT44(local_110._4_4_,0x15e);
                        uVar14 = 10;
                        uVar22 = 0x1bb;
                        goto LAB_14527c329;
                      }
                      if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) != 0) {
                        bVar24 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0;
LAB_14527b86d:
                        if (!bVar24) goto LAB_14527ba5e;
                      }
                    }
                    if (uVar9 != 0x303) {
                      local_110 = (uint *)CONCAT44(local_110._4_4_,0x163);
                      uVar14 = 0x32;
                      uVar22 = 0x10b;
                      goto LAB_14527c329;
                    }
                  }
                  uVar19 = local_f0;
                  if ((ulonglong)CONCAT11(bVar4,bVar5) <= *(longlong *)(param_1 + 0x218) - 5U)
                  goto LAB_14527b8a7;
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x16b);
                  uVar14 = 0x16;
                  uVar22 = 0xc6;
                  goto LAB_14527c329;
                }
                if (param_1[0x5b6] == 0) {
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x151);
                  uVar14 = 0x46;
                  uVar22 = 0x10b;
                }
                else {
                  _Str1 = *(char **)(param_1 + 0x59e);
                  iVar8 = strncmp(_Str1,"GET ",4);
                  if (((iVar8 == 0) || (iVar8 = strncmp(_Str1,"POST ",5), iVar8 == 0)) ||
                     ((iVar8 = strncmp(_Str1,"HEAD ",5), iVar8 == 0 ||
                      (iVar8 = strncmp(_Str1,"PUT ",4), iVar8 == 0)))) {
                    local_110 = (uint *)CONCAT44(local_110._4_4_,0x142);
                    uVar22 = 0x9c;
                    uVar14 = 0xffffffff;
                  }
                  else {
                    iVar8 = strncmp(_Str1,"CONNE",5);
                    uVar14 = 0xffffffff;
                    if (iVar8 == 0) {
                      local_110 = (uint *)CONCAT44(local_110._4_4_,0x146);
                      uVar22 = 0x9b;
                      uVar14 = 0xffffffff;
                    }
                    else {
                      local_110 = (uint *)CONCAT44(local_110._4_4_,0x14c);
                      uVar22 = 0x10b;
                    }
                  }
                }
                goto LAB_14527c329;
              }
              if ((((*param_1 ^ uVar9) & 0xff00) == 0) &&
                 ((*(longlong *)(param_1 + 0x11a) == 0 && (*(longlong *)(param_1 + 0x120) == 0)))) {
                if (bVar1 == 0x15) {
                  local_110 = (uint *)CONCAT44(local_110._4_4_,299);
                  uVar22 = 0x10b;
                  uVar14 = 0xffffffff;
                  goto LAB_14527c329;
                }
                *param_1 = (uint)CONCAT11(bVar2,bVar3);
              }
              local_110 = (uint *)CONCAT44(local_110._4_4_,0x134);
              uVar14 = 0x46;
              uVar22 = 0x10b;
              goto LAB_14527c329;
            }
          }
          uVar14 = 0x32;
          local_110 = (uint *)CONCAT44(local_110._4_4_,0x10f);
          uVar22 = 0x44;
          goto LAB_14527c329;
        }
      }
      uVar14 = 0x32;
      local_110 = (uint *)CONCAT44(local_110._4_4_,0xe1);
      uVar22 = 0x44;
      goto LAB_14527c329;
    }
LAB_14527b8a7:
    uVar18 = 0;
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
        (iVar8 = **(int **)(param_1 + 2), 0x303 < iVar8)) && (iVar8 != 0x10000)) {
      uVar15 = *puVar17;
      if (0x4100 < uVar15) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,0x176);
        uVar14 = 0x16;
        uVar22 = 0x96;
        goto LAB_14527c329;
      }
    }
    else {
      uVar11 = 0x4140;
      uVar15 = *puVar17;
      if (*(longlong *)(param_1 + 0x118) != 0) {
        uVar11 = 0x4540;
      }
      if (uVar11 < uVar15) {
        local_110 = (uint *)CONCAT44(local_110._4_4_,0x187);
        uVar14 = 0x16;
        uVar22 = 0x96;
        goto LAB_14527c329;
      }
    }
    if ((uint)*puVar20 == 2) {
      uVar15 = uVar15 - 3;
    }
    if (uVar15 != 0) {
      local_110 = local_e0;
      local_118 = (char *)((ulonglong)local_118 & 0xffffffff00000000);
      iVar8 = FUN_144eb4230(param_1,uVar15,uVar15);
      if (iVar8 < 1) goto LAB_14527c336;
    }
    param_1[0x20f] = 0xf0;
    if ((uint)*puVar20 == 2) {
      uVar11 = *(longlong *)(param_1 + 0x59e) + 2;
    }
    else {
      uVar11 = *(longlong *)(param_1 + 0x59e) + 5;
    }
    puVar17[4] = uVar11;
    uVar15 = uVar23 + 1;
    puVar17[3] = uVar11;
    puVar17[1] = *puVar17;
    *(uint *)(puVar17 + 6) = 0;
    param_1[0x5a0] = 0;
    param_1[0x5a1] = 0;
    param_1[0x5b6] = 0;
    if ((((uVar19 <= uVar15) || (*(uint *)((longlong)puVar17 + -4) != 0x17)) ||
        ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0)) ||
       (*(longlong *)(param_1 + 0x10e) == 0)) break;
    uVar22 = FUN_144ba3db0();
    uVar9 = FUN_144ba3da0(uVar22);
    if (((uVar9 >> 0x17 & 1) == 0) ||
       (iVar8 = FUN_14527d130(param_1), puVar20 = puVar17 + 9, iVar8 == 0)) break;
  } while( true );
  if (((uVar15 == 1) && (*(uint *)((longlong)puVar17 + -4) == 0x14)) &&
     ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
         (iVar8 = **(int **)(param_1 + 2), 0x303 < iVar8)) && (iVar8 != 0x10000)) ||
       (param_1[0x136] != 0)) &&
      ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0 ||
       (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)))))) {
    if ((*puVar17 == 1) && (*(char *)puVar17[3] == '\x01')) {
      *(uint *)((longlong)puVar17 + -4) = 0x16;
      *(longlong *)(param_1 + 0x5a8) = *(longlong *)(param_1 + 0x5a8) + 1;
      if (*(ulonglong *)(param_1 + 0x5a8) < 0x21) {
        *(uint *)(puVar17 + 6) = 1;
        param_1[0x210] = 1;
        param_1[0x211] = 0;
        goto LAB_14527c336;
      }
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x1e5);
      uVar14 = 10;
      uVar22 = 0x106;
    }
    else {
      local_110 = (uint *)CONCAT44(local_110._4_4_,0x1d9);
      uVar14 = 0x2f;
      uVar22 = 0x104;
    }
  }
  else {
    if (((**(uint **)(param_1 + 0x2a) & 0x100) == 0) || (*(longlong *)(param_1 + 0x114) == 0)) {
LAB_14527bc2b:
      puVar20 = local_f8;
      uVar19 = *local_f8;
      iVar8 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 2) + 0xc0))
                        (param_1,param_1 + 0x35e,uVar15,0);
      if (iVar8 == 0) {
        iVar8 = FUN_144eafd10(param_1);
        if (iVar8 != 0) goto LAB_14527c336;
        if ((uVar15 != 1) || (iVar8 = FUN_144eafd50(param_1), iVar8 == 0)) {
          uVar14 = 0x14;
          local_110 = (uint *)CONCAT44(local_110._4_4_,0x233);
          uVar22 = 0x81;
          goto LAB_14527c329;
        }
        iVar8 = FUN_14527d030(param_1,*puVar20,0x68,0);
        if (iVar8 == 0) goto LAB_14527c336;
        *puVar20 = 0;
      }
      else {
        puVar17 = puVar20;
        if ((((local_e8 != 0) && (*(longlong *)(param_1 + 0x10e) != 0)) &&
            ((**(uint **)(param_1 + 0x2a) & 0x100) == 0)) &&
           (lVar12 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x114)), lVar12 != 0)) {
          uVar22 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x114));
          iVar10 = FUN_144ba3cd0(uVar22);
          uVar18 = (ulonglong)iVar10;
          if (0x40 < uVar18) {
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x24b);
LAB_14527c30e:
            uVar22 = 0x44;
            goto LAB_14527c314;
          }
          uVar11 = 0;
          iVar10 = iVar8;
          if (uVar15 != 0) {
            do {
              if (puVar20[1] < uVar18) {
LAB_14527beeb:
                uVar14 = 0x32;
                local_110 = (uint *)CONCAT44(local_110._4_4_,0x25c);
                uVar22 = 0xa0;
                goto LAB_14527c329;
              }
              uVar22 = FUN_144ba3db0(*(undefined8 *)(param_1 + 0x10e));
              uVar9 = FUN_144ba3da0(uVar22);
              if (((uVar9 & 0xf0007) == 2) && (puVar20[1] < uVar18 + 1)) goto LAB_14527beeb;
              uVar22 = FUN_144ba3db0(*(undefined8 *)(param_1 + 0x10e));
              uVar9 = FUN_144ba3da0(uVar22);
              if ((uVar9 & 0xf0007) == 2) {
                puVar16 = local_78;
                iVar8 = FUN_14527c460(local_78,puVar20 + -1,uVar18);
                if (iVar8 == 0) {
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x26a);
                  goto LAB_14527c30e;
                }
                *puVar20 = *puVar20 - uVar18;
              }
              else {
                *puVar20 = *puVar20 - uVar18;
                puVar16 = (undefined1 *)(*puVar20 + puVar20[3]);
              }
              iVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                                (param_1,puVar20 + -1,local_b8,0);
              if (((iVar8 == 0) || (puVar16 == (undefined1 *)0x0)) ||
                 (iVar8 = FUN_14259f120(local_b8,puVar16,uVar18), iVar8 != 0)) {
                iVar10 = -1;
              }
              iVar8 = -1;
              if (*puVar20 <= uVar18 + 0x4400) {
                iVar8 = iVar10;
              }
              uVar11 = uVar11 + 1;
              puVar20 = puVar20 + 9;
              puVar17 = local_f8;
              iVar10 = iVar8;
            } while (uVar11 < uVar15);
          }
        }
        puVar21 = param_1 + 0x35e;
        if (-1 < iVar8) {
          uVar19 = 0;
          if (uVar15 != 0) {
            do {
              if (*(longlong *)(param_1 + 0x118) != 0) {
                if (0x4400 < *(ulonglong *)(puVar21 + 2)) {
                  uVar14 = 0x16;
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x2b0);
                  uVar22 = 0x8c;
                  goto LAB_14527c329;
                }
                iVar8 = FUN_14527c3d0(param_1,puVar21);
                if (iVar8 == 0) {
                  uVar14 = 0x1e;
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x2b5);
                  uVar22 = 0x6b;
                  goto LAB_14527c329;
                }
              }
              if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                   (iVar8 = **(int **)(param_1 + 2), 0x303 < iVar8)) && (iVar8 != 0x10000)) &&
                 ((*(longlong *)(param_1 + 0x10e) != 0 && (puVar21[1] != 0x15)))) {
                if ((*(longlong *)(puVar21 + 2) == 0) || (puVar21[1] != 0x17)) {
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x2c2);
                  uVar14 = 10;
                  uVar22 = 0x1bb;
                  goto LAB_14527c329;
                }
                lVar12 = *(longlong *)(puVar21 + 2) + -1;
                if (lVar12 != 0) {
                  do {
                    if (*(char *)(*(longlong *)(puVar21 + 8) + lVar12) != '\0') break;
                    lVar12 = lVar12 + -1;
                  } while (lVar12 != 0);
                }
                *(longlong *)(puVar21 + 2) = lVar12;
                bVar1 = *(byte *)(*(longlong *)(puVar21 + 8) + lVar12);
                puVar21[1] = (uint)bVar1;
                if (2 < bVar1 - 0x15) {
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x2d1);
                  uVar14 = 10;
                  uVar22 = 0x1bb;
                  goto LAB_14527c329;
                }
                if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
                  local_108 = *(undefined8 *)(param_1 + 0x30);
                  local_118 = (char *)0x1;
                  local_110 = param_1;
                  (**(code **)(param_1 + 0x2e))(0,*param_1,0x101);
                }
              }
              if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                  (iVar8 = **(int **)(param_1 + 2), 0x303 < iVar8)) &&
                 ((iVar8 != 0x10000 &&
                  ((puVar21[1] - 0x15 < 2 && (*(longlong *)(puVar21 + 2) == 0)))))) {
                local_110 = (uint *)CONCAT44(local_110._4_4_,0x2e2);
                uVar14 = 10;
                uVar22 = 0x10f;
                goto LAB_14527c329;
              }
              uVar23 = *(ulonglong *)(puVar21 + 2);
              if (0x4000 < uVar23) {
                uVar14 = 0x16;
                local_110 = (uint *)CONCAT44(local_110._4_4_,0x2e8);
                uVar22 = 0x92;
                goto LAB_14527c329;
              }
              if (((*(longlong *)(param_1 + 0x142) != 0) &&
                  (cVar6 = *(char *)(*(longlong *)(param_1 + 0x142) + 0x240), (byte)(cVar6 - 1U) < 4
                  )) && ((uint)(0x200 << (cVar6 - 1U & 0x1f)) < uVar23)) {
                uVar14 = 0x16;
                local_110 = (uint *)CONCAT44(local_110._4_4_,0x2f0);
                uVar22 = 0x92;
                goto LAB_14527c329;
              }
              puVar21[6] = 0;
              puVar21[7] = 0;
              if (uVar23 == 0) {
                *(longlong *)(param_1 + 0x5a8) = *(longlong *)(param_1 + 0x5a8) + 1;
                if (0x20 < *(ulonglong *)(param_1 + 0x5a8)) {
                  local_110 = (uint *)CONCAT44(local_110._4_4_,0x303);
                  uVar14 = 10;
                  uVar22 = 0x12a;
                  goto LAB_14527c329;
                }
              }
              else {
                param_1[0x5a8] = 0;
                param_1[0x5a9] = 0;
              }
              uVar19 = uVar19 + 1;
              puVar21 = puVar21 + 0x12;
            } while (uVar19 < uVar15);
          }
          if (((param_1[0x21] != 0xb) || (param_1[0x35f] != 0x17)) ||
             (iVar8 = FUN_14527d030(param_1,*puVar17,0,0), iVar8 != 0)) {
            *(ulonglong *)(param_1 + 0x210) = uVar15;
          }
          goto LAB_14527c336;
        }
        iVar8 = FUN_144eafd10(param_1);
        if (iVar8 != 0) goto LAB_14527c336;
        if ((uVar15 != 1) || (iVar8 = FUN_144eafd50(param_1), iVar8 == 0)) {
          local_110 = (uint *)CONCAT44(local_110._4_4_,0x2a5);
          uVar14 = 0x14;
          uVar22 = 0x119;
          goto LAB_14527c329;
        }
        iVar8 = FUN_14527d030(param_1,uVar19,(int)uVar23 + 0x68,0);
        if (iVar8 == 0) goto LAB_14527c336;
        *puVar17 = 0;
      }
      param_1[0x36c] = 1;
      param_1[0x210] = 1;
      param_1[0x211] = 0;
      FUN_144eb2240(param_1 + 0x20c);
      goto LAB_14527c336;
    }
    uVar22 = FUN_144ba3d20();
    uVar9 = FUN_144ba3cd0(uVar22);
    if (uVar9 < 0x41) {
      uVar19 = (ulonglong)(int)uVar9;
      puVar20 = local_f8;
      if (uVar15 != 0) {
        do {
          if (*puVar20 < uVar19) {
            uVar14 = 0x32;
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x201);
            uVar22 = 0xa0;
            goto LAB_14527c329;
          }
          uVar11 = puVar20[3];
          uVar13 = *puVar20 - uVar19;
          *puVar20 = uVar13;
          iVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                            (param_1,puVar20 + -1,local_b8,0);
          if ((iVar8 == 0) || (iVar8 = FUN_14259f120(local_b8,uVar11 + uVar13,uVar19), iVar8 != 0))
          {
            local_110 = (uint *)CONCAT44(local_110._4_4_,0x209);
            uVar14 = 0x14;
            uVar22 = 0x119;
            goto LAB_14527c329;
          }
          uVar18 = uVar18 + 1;
          puVar20 = puVar20 + 9;
        } while (uVar18 < uVar15);
      }
      goto LAB_14527bc2b;
    }
    local_110 = (uint *)CONCAT44(local_110._4_4_,0x1f8);
    uVar22 = 6;
LAB_14527c314:
    uVar14 = 0x50;
  }
LAB_14527c329:
  local_118 = "ssl\\record\\ssl3_record.c";
  FUN_144eafc90(param_1,uVar14,0x8f,uVar22);
LAB_14527c336:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_138);
}



// FUNCTION 14527c370 FUN_14527c370 body=89 status=ok
// SIG undefined FUN_14527c370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527c370(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_144ea7580(*(undefined8 *)(param_1 + 0x458),*(undefined8 *)(param_2 + 0x20),
                        *(int *)(param_2 + 8) + 0x400,*(undefined8 *)(param_2 + 0x28),
                        *(int *)(param_2 + 8),0x14527c37c);
  if (iVar1 < 0) {
    return 0;
  }
  *(longlong *)(param_2 + 8) = (longlong)iVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  return 1;
}



// FUNCTION 14527c3d0 FUN_14527c3d0 body=144 status=ok
// SIG undefined FUN_14527c3d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527c3d0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x14527c3e0;
  if (*(longlong *)(param_2 + 0x30) == 0) {
    uVar2 = FUN_144ea64e0(0x4540,"ssl\\record\\ssl3_record.c",799);
    *(undefined8 *)(param_2 + 0x30) = uVar2;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    iVar1 = FUN_144ea75d0(*(undefined8 *)(param_1 + 0x460),*(longlong *)(param_2 + 0x30),0x4000,
                          *(undefined8 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 8),uVar3);
    if (-1 < iVar1) {
      *(longlong *)(param_2 + 8) = (longlong)iVar1;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x30);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14527c460 FUN_14527c460 body=512 status=ok
// SIG undefined FUN_14527c460(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527c460(longlong param_1,longlong param_2,size_t param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *_Dst;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d8;
  byte local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar11 = *(ulonglong *)(param_2 + 8);
  uVar7 = 0;
  uVar8 = *(ulonglong *)(param_2 + 0x10);
  local_e0 = uVar11 - param_3;
  local_d8 = param_1;
  if ((param_3 <= uVar8) && (param_3 < 0x41)) {
    _Dst = local_c8 + (-((int)&stack0x00000010 + -0xd8) & 0x3f);
    uVar9 = uVar7;
    if (param_3 + 0x100 < uVar8) {
      uVar9 = (uVar8 - param_3) - 0x100;
    }
    local_e8 = 0;
    memset(_Dst,0,param_3);
    if (uVar9 < uVar8) {
      lVar1 = *(longlong *)(param_2 + 0x20);
      uVar10 = uVar7;
      uVar12 = uVar7;
      do {
        pbVar6 = (byte *)(uVar9 + lVar1);
        uVar2 = (longlong)((uVar9 ^ local_e0) - 1 & ~(uVar9 ^ local_e0)) >> 0x3f;
        uVar5 = ((longlong)pbVar6 - (uVar11 + lVar1) ^ uVar11 | uVar9 ^ uVar11) ^ uVar9;
        uVar7 = uVar7 | uVar2 & uVar12;
        uVar9 = uVar9 + 1;
        uVar10 = (longlong)uVar5 >> 0x3f & (uVar2 | uVar10);
        _Dst[uVar12] = _Dst[uVar12] | *pbVar6 & (byte)uVar10;
        uVar12 = uVar12 + 1;
        uVar12 = uVar12 & (longlong)((uVar12 - param_3 ^ param_3 | param_3 ^ uVar12) ^ uVar12) >>
                          0x3f;
      } while (uVar9 < uVar8);
    }
    uVar11 = 0;
    if (param_3 != 0) {
      do {
        uVar8 = uVar7 + 1;
        bVar3 = (byte)((int)(((uint)uVar7 & 0x20) - 1) >> 0x1f);
        local_e0 = CONCAT44(local_e0._4_4_,(uint)bVar3);
        uVar4 = ~(uint)bVar3;
        local_e8 = CONCAT44(local_e8._4_4_,uVar4);
        *(byte *)(local_d8 + uVar11) =
             bVar3 & _Dst[uVar7 & 0xffffffffffffffdf] | (byte)uVar4 & _Dst[uVar7 | 0x20];
        uVar11 = uVar11 + 1;
        uVar7 = uVar8 & (longlong)((uVar8 - param_3 ^ param_3 | param_3 ^ uVar8) ^ uVar8) >> 0x3f;
      } while (uVar11 < param_3);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 14527c680 FUN_14527c680 body=150 status=ok
// SIG undefined FUN_14527c680(void)

uint FUN_14527c680(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (uVar1 < param_3 + 1U) {
    return 0;
  }
  uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x20) + -1 + uVar1);
  uVar4 = uVar2 + param_3 + 1U;
  uVar2 = uVar2 + 1;
  uVar4 = 0xffffffffffffffffU -
          ((longlong)((uVar1 - uVar4 ^ uVar4 | uVar1 ^ uVar4) ^ uVar1) >> 0x3f) &
          0xffffffffffffffffU -
          ((longlong)((param_2 - uVar2 ^ uVar2 | uVar2 ^ param_2) ^ param_2) >> 0x3f);
  *(ulonglong *)(param_1 + 8) = uVar1 - (uVar2 & uVar4);
  uVar3 = (uint)uVar4;
  return ~uVar3 | uVar3 & 1;
}



// FUNCTION 14527c720 FUN_14527c720 body=387 status=ok
// SIG undefined FUN_14527c720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14527c720(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  
  uVar6 = param_4 + 1;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 1) == 0) {
    if (uVar6 <= *(ulonglong *)(param_2 + 8)) goto LAB_14527c77d;
  }
  else if (uVar6 + param_3 <= *(ulonglong *)(param_2 + 8)) {
    *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + param_3;
    *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + param_3;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) - param_3;
    *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) - param_3;
LAB_14527c77d:
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x20) + -1 + *(longlong *)(param_2 + 8));
    uVar7 = (ulonglong)bVar1;
    uVar5 = FUN_144ba3db0(*(undefined8 *)(param_1 + 0x438));
    uVar4 = FUN_144ba3da0(uVar5);
    if ((uVar4 >> 0x15 & 1) != 0) {
      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (-1 - uVar7);
      return 1;
    }
    uVar6 = uVar7 + uVar6;
    uVar2 = *(ulonglong *)(param_2 + 8);
    uVar8 = 0xffffffffffffffff -
            ((longlong)((uVar2 - uVar6 ^ uVar6 | uVar2 ^ uVar6) ^ uVar2) >> 0x3f);
    uVar6 = 0x100;
    if (uVar2 < 0x100) {
      uVar6 = uVar2;
    }
    if (uVar6 != 0) {
      uVar9 = 0;
      pbVar11 = (byte *)((uVar2 - 1) + *(longlong *)(param_2 + 0x20));
      do {
        uVar10 = uVar9 + 1;
        bVar3 = (byte)(uVar9 >> 0x38);
        uVar8 = uVar8 & ~(ulonglong)
                         (byte)(0xffU - ((char)((byte)(uVar7 - uVar9 >> 0x38) ^ bVar3 | bVar3) >> 7)
                               & (bVar1 ^ *pbVar11));
        uVar9 = uVar10;
        pbVar11 = pbVar11 + -1;
      } while (uVar10 < uVar6);
    }
    uVar6 = (~uVar8 & 0xff) - 1 & ~(~uVar8 & 0xff);
    *(ulonglong *)(param_2 + 8) = uVar2 - (uVar7 + 1 & (longlong)uVar6 >> 0x3f);
    uVar4 = (uint)((longlong)uVar6 >> 0x3f);
    return ~uVar4 | uVar4 & 1;
  }
  return 0;
}



// FUNCTION 14527c8b0 FUN_14527c8b0 body=1166 status=ok
// SIG undefined FUN_14527c8b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527c8b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = param_1 + 0xd78;
  lVar9 = *(longlong *)(param_1 + 0x508);
  lVar7 = *(longlong *)(param_1 + 0x1678) + 0xd;
  *(longlong *)(param_1 + 0xda0) = lVar7;
  uVar15 = 0x4000;
  if (0x4540 < *(ulonglong *)(param_1 + 0xd80)) {
    local_d0 = 0x66f;
    local_d8 = "ssl\\record\\ssl3_record.c";
    FUN_144eafc90(param_1,0x16,0x101);
    goto LAB_14527cd2e;
  }
  *(longlong *)(param_1 + 0xd98) = lVar7;
  *(ulonglong *)(param_1 + 0xd88) = *(ulonglong *)(param_1 + 0xd80);
  if (((**(uint **)(param_1 + 0xa8) & 0x100) != 0) && (*(longlong *)(param_1 + 0x450) != 0)) {
    uVar8 = FUN_144ba3d20();
    iVar4 = FUN_144ba3cd0(uVar8);
    uVar12 = (ulonglong)iVar4;
    if (uVar12 < 0x41) {
      if (*(ulonglong *)(param_1 + 0xd88) < uVar12) {
        local_d0 = 0x681;
        local_d8 = "ssl\\record\\ssl3_record.c";
        FUN_144eafc90(param_1,0x32,0x101);
        goto LAB_14527cd2e;
      }
      *(longlong *)(param_1 + 0xd80) = *(longlong *)(param_1 + 0xd80) - uVar12;
      lVar7 = *(longlong *)(param_1 + 0xd80);
      lVar3 = *(longlong *)(param_1 + 0xd98);
      iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 8))
                        (param_1,lVar1,local_c8,0);
      if ((iVar4 != 0) && (iVar4 = FUN_14259f120(local_c8,lVar7 + lVar3,uVar12), iVar4 == 0))
      goto LAB_14527ca4f;
      local_d0 = 0x689;
      uVar8 = 0x14;
      uVar14 = 0x119;
    }
    else {
      uVar8 = 0x50;
      local_d0 = 0x67c;
      uVar14 = 0x44;
    }
    local_d8 = "ssl\\record\\ssl3_record.c";
    FUN_144eafc90(param_1,uVar8,0x101,uVar14);
    goto LAB_14527cd2e;
  }
LAB_14527ca4f:
  iVar4 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 8) + 0xc0))(param_1,lVar1,1);
  if (iVar4 == 0) {
    iVar4 = FUN_144eafd10(param_1);
    if (iVar4 != 0) goto LAB_14527cd2e;
  }
  else {
    if ((((lVar9 != 0) && ((**(uint **)(param_1 + 0xa8) & 0x100) == 0)) &&
        (*(longlong *)(param_1 + 0x438) != 0)) &&
       (lVar9 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x450)), lVar9 != 0)) {
      uVar8 = FUN_144ba3d20(*(undefined8 *)(param_1 + 0x450));
      iVar5 = FUN_144ba3cd0(uVar8);
      if (iVar5 < 0) {
        uVar10 = 0x50;
        local_d0 = 0x6b4;
        uVar13 = 6;
      }
      else {
        uVar12 = (ulonglong)iVar5;
        if (uVar12 < 0x41) {
          if (uVar12 <= *(ulonglong *)(param_1 + 0xd88)) {
            uVar8 = FUN_144ba3db0(*(undefined8 *)(param_1 + 0x438));
            uVar6 = FUN_144ba3da0(uVar8);
            if (((uVar6 & 0xf0007) != 2) || (uVar12 + 1 <= *(ulonglong *)(param_1 + 0xd88))) {
              uVar8 = FUN_144ba3db0(*(undefined8 *)(param_1 + 0x438));
              uVar6 = FUN_144ba3da0(uVar8);
              if ((uVar6 & 0xf0007) == 2) {
                puVar11 = local_88;
                iVar5 = FUN_14527c460(local_88,lVar1,uVar12);
                if (iVar5 == 0) {
                  local_d0 = 0x6d7;
                  uVar10 = 0x50;
                  uVar13 = 0x44;
                  goto LAB_14527cc83;
                }
                *(longlong *)(param_1 + 0xd80) = *(longlong *)(param_1 + 0xd80) - uVar12;
              }
              else {
                *(longlong *)(param_1 + 0xd80) = *(longlong *)(param_1 + 0xd80) - uVar12;
                puVar11 = (undefined1 *)
                          (*(longlong *)(param_1 + 0xd80) + *(longlong *)(param_1 + 0xd98));
              }
              iVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 8))
                                (param_1,lVar1,local_c8,0);
              if (((iVar5 == 0) || (puVar11 == (undefined1 *)0x0)) ||
                 (iVar5 = FUN_14259f120(local_c8,puVar11,uVar12), iVar5 != 0)) {
                iVar4 = -1;
              }
              if (uVar12 + 0x4400 < *(ulonglong *)(param_1 + 0xd80)) goto LAB_14527cbff;
              goto LAB_14527cbfa;
            }
          }
          uVar10 = 0x32;
          local_d0 = 0x6c9;
          uVar13 = 0xa0;
        }
        else {
          uVar10 = 0x50;
          local_d0 = 0x6ba;
          uVar13 = 0x44;
        }
      }
LAB_14527cc83:
      local_d8 = "ssl\\record\\ssl3_record.c";
      FUN_144eafc90(param_1,uVar10,0x101,uVar13);
      goto LAB_14527cd2e;
    }
LAB_14527cbfa:
    if (-1 < iVar4) {
      if (*(longlong *)(param_1 + 0x460) != 0) {
        if (0x4400 < *(ulonglong *)(param_1 + 0xd80)) {
          local_d0 = 0x6f8;
          local_d8 = "ssl\\record\\ssl3_record.c";
          FUN_144eafc90(param_1,0x16,0x101);
          goto LAB_14527cd2e;
        }
        iVar4 = FUN_14527c3d0(param_1,lVar1);
        if (iVar4 == 0) {
          local_d0 = 0x6fd;
          uVar10 = 0x1e;
          uVar13 = 0x6b;
          goto LAB_14527cc83;
        }
      }
      if ((*(longlong *)(param_1 + 0x508) != 0) &&
         (cVar2 = *(char *)(*(longlong *)(param_1 + 0x508) + 0x240), (byte)(cVar2 - 1U) < 4)) {
        uVar15 = (ulonglong)(uint)(0x200 << (cVar2 - 1U & 0x1f));
      }
      if (uVar15 < *(ulonglong *)(param_1 + 0xd80)) {
        local_d0 = 0x709;
        local_d8 = "ssl\\record\\ssl3_record.c";
        FUN_144eafc90(param_1,0x16,0x101);
      }
      else {
        *(undefined8 *)(param_1 + 0xd90) = 0;
        *(undefined8 *)(param_1 + 0x1680) = 0;
        FUN_145282f50(param_1,param_2);
      }
      goto LAB_14527cd2e;
    }
  }
LAB_14527cbff:
  *(undefined8 *)(param_1 + 0xd80) = 0;
  *(undefined8 *)(param_1 + 0x1680) = 0;
LAB_14527cd2e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 14527cd50 FUN_14527cd50 body=732 status=ok
// SIG undefined FUN_14527cd50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527cd50(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int local_res8 [2];
  ulonglong local_res10;
  undefined8 uVar9;
  
  uVar9 = 0x14527cd62;
  iVar5 = FUN_144ecdbf0();
  if (iVar5 == 0) {
    return 0xffffffff;
  }
  do {
    iVar5 = FUN_144ecdde0(param_1,*(longlong *)(param_1 + 0x5b8) + 0x30);
    if (iVar5 != 0) {
      return 1;
    }
    if ((param_1[0x20f] == 0xf1) && (0xc < *(ulonglong *)(param_1 + 0x5a0))) {
LAB_14527cef6:
      uVar8 = *(ulonglong *)(param_1 + 0x360);
      if ((*(longlong *)(param_1 + 0x5a0) - 0xdU < uVar8) &&
         ((iVar5 = FUN_144eb4230(param_1,uVar8,uVar8,1,1,&local_res10), iVar5 < 1 ||
          (local_res10 != uVar8)))) {
LAB_14527cfdc:
        iVar5 = FUN_144eafd10(param_1);
        if (iVar5 != 0) {
          return 0xffffffff;
        }
        goto LAB_14527cfe8;
      }
      param_1[0x20f] = 0xf0;
      lVar7 = FUN_144ecdb90(param_1,param_1 + 0x35e,local_res8);
      if (lVar7 == 0) {
LAB_14527cfef:
        param_1[0x360] = 0;
        param_1[0x361] = 0;
        goto LAB_14527cff3;
      }
      iVar5 = FUN_145282ed0(param_1,lVar7);
      if (iVar5 == 0) {
LAB_14527cfe8:
        param_1[0x36c] = 1;
        goto LAB_14527cfef;
      }
      if (*(longlong *)(param_1 + 0x360) != 0) {
        if (local_res8[0] == 0) {
          iVar5 = FUN_14527c8b0(param_1,lVar7);
          if (iVar5 != 0) {
            return 1;
          }
          goto LAB_14527cfdc;
        }
        iVar5 = FUN_144eafbc0();
        if (((iVar5 != 0) || (iVar5 = FUN_144eafd30(param_1), iVar5 != 0)) &&
           (iVar5 = FUN_144ecde50(param_1,*(longlong *)(param_1 + 0x5b8) + 0x20,param_1 + 0x36e),
           iVar5 < 0)) {
          return 0xffffffff;
        }
        goto LAB_14527cfe8;
      }
      param_1[0x36c] = 1;
    }
    else {
      uVar6 = FUN_144eb4230(param_1,0xd,*(undefined8 *)(param_1 + 0x218),0,1,&local_res10);
      if ((int)uVar6 < 1) {
        return uVar6;
      }
      if (*(longlong *)(param_1 + 0x5a0) == 0xd) {
        pbVar4 = *(byte **)(param_1 + 0x59e);
        param_1[0x20f] = 0xf1;
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          (**(code **)(param_1 + 0x2e))
                    (0,0,0x100,pbVar4,0xd,param_1,*(undefined8 *)(param_1 + 0x30),uVar9);
        }
        param_1[0x35f] = (uint)*pbVar4;
        bVar1 = pbVar4[2];
        bVar2 = pbVar4[1];
        param_1[0x36d] = (uint)CONCAT11(pbVar4[3],pbVar4[4]);
        *(undefined4 *)((longlong)param_1 + 0x16ca) = *(undefined4 *)(pbVar4 + 5);
        *(undefined2 *)((longlong)param_1 + 0x16ce) = *(undefined2 *)(pbVar4 + 9);
        uVar8 = (ulonglong)CONCAT11(pbVar4[0xb],pbVar4[0xc]);
        param_1[0x36c] = 0;
        *(ulonglong *)(param_1 + 0x360) = uVar8;
        if ((((param_1[0x17a] != 0) || (param_1[0x35f] == 0x15)) ||
            ((uint)CONCAT11(bVar2,bVar1) == *param_1)) &&
           ((((((uint)CONCAT11(bVar2,bVar1) ^ *param_1) & 0xff00) == 0 && (uVar8 < 0x4541)) &&
            ((*(longlong *)(param_1 + 0x142) == 0 ||
             ((cVar3 = *(char *)(*(longlong *)(param_1 + 0x142) + 0x240), 3 < (byte)(cVar3 - 1U) ||
              (uVar8 <= (0x200 << (cVar3 - 1U & 0x1f)) + 0x140)))))))) goto LAB_14527cef6;
        goto LAB_14527cfe8;
      }
LAB_14527cff3:
      param_1[0x5a0] = 0;
      param_1[0x5a1] = 0;
    }
    iVar5 = FUN_144ecdbf0(param_1);
    if (iVar5 == 0) {
      return 0xffffffff;
    }
  } while( true );
}



// FUNCTION 14527d030 FUN_14527d030 body=250 status=ok
// SIG undefined FUN_14527d030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527d030(longlong param_1,longlong param_2,int param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x508);
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((*(int *)(lVar2 + 0x228) == 0) &&
       ((lVar2 = *(longlong *)(param_1 + 0x510), lVar2 == 0 || (*(int *)(lVar2 + 0x228) == 0)))) {
      uVar3 = 0x50;
      uVar5 = 0x100000076;
      uVar4 = 0x44;
      goto LAB_14527d084;
    }
    uVar1 = *(uint *)(lVar2 + 0x228);
  }
  else if (*(int *)(param_1 + 0x710) == 2) {
    uVar1 = *(uint *)(lVar2 + 0x228);
    if (*(uint *)(param_1 + 0x1714) < *(uint *)(lVar2 + 0x228)) {
      uVar1 = *(uint *)(param_1 + 0x1714);
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1714);
  }
  if (uVar1 == 0) {
    uVar5 = 0x100000086;
  }
  else {
    if (param_2 + (ulonglong)*(uint *)(param_1 + 0x1718) <= (ulonglong)(uVar1 + param_3)) {
      *(uint *)(param_1 + 0x1718) = *(uint *)(param_1 + 0x1718) + (int)param_2;
      return 1;
    }
    uVar5 = 0x10000008f;
  }
  uVar3 = 10;
  if (param_4 != 0) {
    uVar3 = 0x50;
  }
  uVar4 = 0xa4;
LAB_14527d084:
  FUN_144eafc90(param_1,uVar3,0x214,uVar4,"ssl\\record\\ssl3_record.c",uVar5);
  return 0;
}



// FUNCTION 14527d130 FUN_14527d130 body=68 status=ok
// SIG undefined FUN_14527d130(void)

bool FUN_14527d130(longlong param_1)

{
  char *pcVar1;
  
  if (((*(longlong *)(param_1 + 0x850) != 0) && (4 < *(ulonglong *)(param_1 + 0x870))) &&
     (pcVar1 = (char *)(*(longlong *)(param_1 + 0x850) + *(longlong *)(param_1 + 0x868)),
     *pcVar1 == '\x17')) {
    return (ulonglong)CONCAT11(pcVar1[3],pcVar1[4]) + 5 <= *(ulonglong *)(param_1 + 0x870);
  }
  return false;
}



// FUNCTION 14527d180 FUN_14527d180 body=162 status=ok
// SIG undefined FUN_14527d180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527d180(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  uVar1 = FUN_144b9ff50();
  lVar2 = FUN_144b9e650(uVar1);
  if (lVar2 == 0) {
    FUN_144eafc90(param_1,0x50,0x18d,0x41,"ssl\\s3_enc.c",CONCAT44(uVar3,0x146));
    return 0;
  }
  FUN_14527dcf0(param_1);
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = lVar2;
  FUN_144b9efc0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),9,1);
  return 1;
}



// FUNCTION 14527d230 FUN_14527d230 body=565 status=ok
// SIG undefined FUN_14527d230(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14527d230(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 *puVar6;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) != 0) {
    return 1;
  }
  puVar6 = &local_res18;
  iVar1 = FUN_144ea3dd0(*(undefined8 *)(param_1 + 0x508),&local_res8,&local_res10,0,0,puVar6,0);
  uVar4 = (undefined4)((ulonglong)puVar6 >> 0x20);
  if (iVar1 != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278) = local_res8;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x280) = local_res10;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x298) = local_res18;
    iVar1 = FUN_144ba3cd0(local_res10);
    if (iVar1 < 0) {
      uVar4 = 0;
    }
    else {
      iVar2 = FUN_144ba3d90(local_res8);
      iVar3 = FUN_144ba3d80(local_res8);
      iVar1 = (iVar3 + iVar1 + iVar2) * 2;
      FUN_14527d7b0(param_1);
      lVar5 = FUN_144ea64e0((longlong)iVar1,"ssl\\s3_enc.c",0x118);
      if (lVar5 == 0) {
        FUN_144eafc90(param_1,0x50,0x9d,0x41,"ssl\\s3_enc.c",CONCAT44(uVar4,0x11a));
        uVar4 = 0;
      }
      else {
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) = (longlong)iVar1;
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) = lVar5;
        uVar4 = FUN_14527e030(param_1,lVar5,iVar1);
        if ((*(uint *)(param_1 + 0x5cc) & 0x800) == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 1;
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
          if (lVar5 != 0) {
            if (*(int *)(lVar5 + 0x24) == 0x20) {
              *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
            }
            if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0) + 0x24) == 4) {
              *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
            }
          }
        }
      }
    }
    return uVar4;
  }
  FUN_144eafc90(param_1,0x50,0x9d,0x8a,"ssl\\s3_enc.c",CONCAT44(uVar4,0x103));
  return 0;
}



// FUNCTION 14527d470 FUN_14527d470 body=823 status=ok
// SIG undefined FUN_14527d470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527d470(longlong param_1,uint param_2)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  undefined4 uVar7;
  void *_Src;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  uVar7 = 1;
  lVar4 = *(longlong *)(param_1 + 0xa8);
  lVar6 = 0;
  bVar2 = false;
  lVar9 = *(longlong *)(lVar4 + 0x280);
  uVar10 = *(undefined8 *)(lVar4 + 0x278);
  if (lVar9 == 0) {
    uVar10 = 0x10000006d;
  }
  else {
    if (*(longlong *)(lVar4 + 0x298) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x298) + 0x10);
    }
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      if (*(longlong *)(param_1 + 0x468) == 0) {
        uVar7 = 1;
        lVar4 = FUN_144ba50b0();
        *(longlong *)(param_1 + 0x468) = lVar4;
        if (lVar4 == 0) {
          uVar10 = CONCAT44(uVar7,0xa1);
          uVar7 = 0x41;
          goto LAB_14527d75f;
        }
        FUN_144ba50e0(lVar4);
      }
      else {
        bVar2 = true;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x468);
      lVar4 = FUN_144b9bf70(param_1 + 0x480,lVar9);
      if (lVar4 == 0) {
        uVar10 = CONCAT44(uVar7,0xac);
        uVar7 = 0x41;
        goto LAB_14527d75f;
      }
      FUN_144ea7540(*(undefined8 *)(param_1 + 0x458));
      *(undefined8 *)(param_1 + 0x458) = 0;
      if (lVar6 != 0) {
        lVar4 = FUN_144ea7480(lVar6);
        *(longlong *)(param_1 + 0x458) = lVar4;
        if (lVar4 == 0) {
          uVar10 = CONCAT44(uVar7,0xb8);
          uVar7 = 0x8e;
          goto LAB_14527d75f;
        }
      }
      FUN_144eb2250(param_1 + 0x830);
      _Dst = (void *)(*(longlong *)(param_1 + 0xa8) + 0x58);
    }
    else {
      if (*(longlong *)(param_1 + 0x438) == 0) {
        uVar7 = 1;
        lVar4 = FUN_144ba50b0();
        *(longlong *)(param_1 + 0x438) = lVar4;
        if (lVar4 == 0) {
          uVar10 = CONCAT44(uVar7,0x7c);
          uVar7 = 0x41;
          goto LAB_14527d75f;
        }
        FUN_144ba50e0(lVar4);
      }
      else {
        bVar2 = true;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x438);
      lVar4 = FUN_144b9bf70(param_1 + 0x450,lVar9);
      if (lVar4 == 0) {
        uVar10 = CONCAT44(uVar7,0x88);
        goto LAB_14527d759;
      }
      FUN_144ea7540(*(undefined8 *)(param_1 + 0x460));
      *(undefined8 *)(param_1 + 0x460) = 0;
      if (lVar6 != 0) {
        lVar4 = FUN_144ea7480(lVar6);
        *(longlong *)(param_1 + 0x460) = lVar4;
        if (lVar4 == 0) {
          uVar10 = CONCAT44(uVar7,0x94);
          uVar7 = 0x8e;
          goto LAB_14527d75f;
        }
      }
      FUN_144eb2240(param_1 + 0x830);
      _Dst = (void *)(*(longlong *)(param_1 + 0xa8) + 0x10);
    }
    if (bVar2) {
      FUN_144ba50e0(uVar8);
    }
    pvVar1 = *(void **)(*(longlong *)(param_1 + 0xa8) + 0x270);
    iVar3 = FUN_144ba3cd0(lVar9);
    if (iVar3 < 0) {
      uVar10 = CONCAT44(uVar7,200);
    }
    else {
      _Size = (size_t)iVar3;
      iVar3 = FUN_144ba3d80(uVar10);
      lVar9 = (longlong)iVar3;
      iVar3 = FUN_144ba3d90(uVar10);
      lVar4 = (longlong)iVar3;
      if ((param_2 == 0x12) || (param_2 == 0x21)) {
        lVar6 = _Size * 2;
        lVar9 = lVar6 + lVar9 * 2;
        uVar5 = lVar9 + lVar4 * 2;
        _Src = pvVar1;
      }
      else {
        lVar6 = lVar9 + _Size * 2;
        lVar9 = lVar6 + lVar4 + lVar9;
        uVar5 = lVar9 + lVar4;
        _Src = (void *)(_Size + (longlong)pvVar1);
      }
      if (*(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x268) < uVar5) {
        uVar10 = CONCAT44(uVar7,0xe3);
      }
      else {
        memcpy(_Dst,_Src,_Size);
        iVar3 = FUN_144ba4d00(uVar8,uVar10,0,lVar6 + (longlong)pvVar1,lVar9 + (longlong)pvVar1,
                              CONCAT44(uVar7,param_2) & 0xffffffff00000002);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
          return 1;
        }
        uVar10 = 0xeb;
      }
    }
  }
LAB_14527d759:
  uVar7 = 0x44;
LAB_14527d75f:
  FUN_144eafc90(param_1,0x50,0x81,uVar7,"ssl\\s3_enc.c",uVar10);
  return 0;
}



// FUNCTION 14527d7b0 FUN_14527d7b0 body=93 status=ok
// SIG undefined FUN_14527d7b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527d7b0(longlong param_1)

{
  FUN_144ea66f0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x270),
                *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x268),"ssl\\s3_enc.c",0x13b);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x270) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x268) = 0;
  return;
}



// FUNCTION 14527d810 FUN_14527d810 body=601 status=ok
// SIG undefined FUN_14527d810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527d810(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined **ppuVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  char *local_b8;
  undefined4 local_b0;
  uint local_a8 [2];
  longlong *local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = param_5;
  lVar5 = FUN_144ba5700();
  lVar10 = 0;
  if (lVar5 == 0) {
    local_b0 = 0x1e9;
    local_b8 = "ssl\\s3_enc.c";
    FUN_144eafc90(param_1,0x50,0x184,0x41);
  }
  else {
    iVar8 = 0;
    ppuVar9 = &PTR_DAT_14c731c60;
    do {
      iVar4 = FUN_144ba5a20(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0xf0),0);
      if (iVar4 < 1) {
LAB_14527d9f7:
        local_b0 = 0x1fc;
        local_b8 = "ssl\\s3_enc.c";
        FUN_144eafc90(param_1,0x50,0x184,0x44);
        bVar3 = false;
        goto LAB_14527da24;
      }
      pcVar2 = *ppuVar9;
      cVar1 = *pcVar2;
      pcVar6 = pcVar2;
      for (uVar7 = 0; (cVar1 != '\0' && (uVar7 < 0x80000000)); uVar7 = uVar7 + 1) {
        pcVar6 = pcVar6 + 1;
        cVar1 = *pcVar6;
      }
      iVar4 = FUN_144ba5c70(lVar5,pcVar2,uVar7 & 0x7fffffff);
      if ((((((iVar4 < 1) || (iVar4 = FUN_144ba5c70(lVar5,param_3,param_4), iVar4 < 1)) ||
            (iVar4 = FUN_144ba5c70(lVar5,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20), iVar4 < 1)) ||
           ((iVar4 = FUN_144ba5c70(lVar5,*(longlong *)(param_1 + 0xa8) + 0x98,0x20), iVar4 < 1 ||
            (iVar4 = FUN_144ba5ca0(lVar5,local_98,local_a8), iVar4 < 1)))) ||
          ((iVar4 = FUN_144ba5a20(lVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0xe8),0),
           iVar4 < 1 ||
           ((iVar4 = FUN_144ba5c70(lVar5,param_3,param_4), iVar4 < 1 ||
            (iVar4 = FUN_144ba5c70(lVar5,local_98,local_a8[0]), iVar4 < 1)))))) ||
         (iVar4 = FUN_144ba5ca0(lVar5,param_2), iVar4 < 1)) goto LAB_14527d9f7;
      iVar8 = iVar8 + 1;
      param_2 = param_2 + (ulonglong)local_a8[0];
      lVar10 = lVar10 + (ulonglong)local_a8[0];
      ppuVar9 = ppuVar9 + 1;
    } while (iVar8 < 3);
    bVar3 = true;
LAB_14527da24:
    FUN_144ba5800(lVar5);
    FUN_14259f0c0(local_98,0x40);
    if (bVar3) {
      *local_a0 = lVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_d8);
}



// FUNCTION 14527da80 FUN_14527da80 body=432 status=ok
// SIG undefined FUN_14527da80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14527da80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar1 = FUN_14527dd60(param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = FUN_144ba3d20(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  iVar1 = FUN_144ba3cb0(uVar3);
  if (iVar1 != 0x72) {
    FUN_144eafc90(param_1,0x50,0x11d,0x144,"ssl\\s3_enc.c",CONCAT44(uVar5,0x1aa));
    return 0;
  }
  lVar4 = FUN_144ba5700();
  if (lVar4 == 0) {
    FUN_144eafc90(param_1,0x50,0x11d,0x41,"ssl\\s3_enc.c",CONCAT44(uVar5,0x1b1));
    return 0;
  }
  iVar1 = FUN_144ba5840(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  if (iVar1 == 0) {
    uVar3 = CONCAT44(uVar5,0x1b6);
  }
  else {
    uVar3 = FUN_144ba3d20(lVar4);
    iVar1 = FUN_144ba3cd0(uVar3);
    if (iVar1 < 0) {
      uVar3 = CONCAT44(uVar5,0x1be);
    }
    else {
      if ((((param_2 == 0) || (iVar2 = FUN_144ba5c70(lVar4,param_2,param_3), 0 < iVar2)) &&
          (iVar2 = FUN_144ba56c0(lVar4,0x1d,*(undefined4 *)(*(longlong *)(param_1 + 0x508) + 8),
                                 *(longlong *)(param_1 + 0x508) + 0x50), 0 < iVar2)) &&
         (iVar2 = FUN_144ba5ca0(lVar4,param_4,0), 0 < iVar2)) goto LAB_14527dc0c;
      uVar3 = CONCAT44(uVar5,0x1c9);
    }
  }
  FUN_144eafc90(param_1,0x50,0x11d,0x44,"ssl\\s3_enc.c",uVar3);
  iVar1 = 0;
LAB_14527dc0c:
  FUN_144ba5800(lVar4);
  return (longlong)iVar1;
}



// FUNCTION 14527dc30 FUN_14527dc30 body=186 status=ok
// SIG undefined FUN_14527dc30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527dc30(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
    if (param_3 < 0x80000000) {
      iVar1 = FUN_144b9eb80(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
      if ((0 < iVar1) && (iVar1 == (int)param_3)) {
        return 1;
      }
      uVar3 = CONCAT44(uVar2,0x16a);
      uVar2 = 0x44;
    }
    else {
      uVar3 = 0x100000164;
      uVar2 = 0xed;
    }
  }
  else {
    iVar1 = FUN_144ba5c70();
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = CONCAT44(uVar2,0x171);
    uVar2 = 0x44;
  }
  FUN_144eafc90(param_1,0x50,0x24b,uVar2,"ssl\\s3_enc.c",uVar3);
  return 0;
}



// FUNCTION 14527dcf0 FUN_14527dcf0 body=98 status=ok
// SIG undefined FUN_14527dcf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527dcf0(longlong param_1)

{
  FUN_144b9e7b0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 0;
  FUN_144ba5800(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8) = 0;
  return;
}



// FUNCTION 14527dd60 FUN_14527dd60 body=391 status=ok
// SIG undefined FUN_14527dd60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527dd60(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
    iVar1 = FUN_144b9efc0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,&local_res8);
    if (iVar1 < 1) {
      uVar5 = CONCAT44(uVar6,0x182);
      uVar4 = 0x14c;
    }
    else {
      uVar4 = FUN_144ba5700();
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8) = uVar4;
      if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe8) == 0) {
        FUN_144eafc90(param_1,0x50,0x125,0x41,"ssl\\s3_enc.c",CONCAT44(uVar6,0x189));
        return 0;
      }
      lVar3 = FUN_144ea4500(param_1);
      if (lVar3 != 0) {
        iVar2 = FUN_144ba5a20(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8),lVar3,0);
        if (iVar2 != 0) {
          iVar1 = FUN_144ba5c70(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8),local_res8,
                                (longlong)iVar1);
          if (iVar1 != 0) goto LAB_14527dea9;
        }
      }
      uVar5 = CONCAT44(uVar6,0x191);
      uVar4 = 0x44;
    }
    FUN_144eafc90(param_1,0x50,0x125,uVar4,"ssl\\s3_enc.c",uVar5);
    return 0;
  }
LAB_14527dea9:
  if (param_2 == 0) {
    FUN_144b9e7b0(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0) = 0;
  }
  return 1;
}



// FUNCTION 14527e030 FUN_14527e030 body=679 status=ok
// SIG undefined FUN_14527e030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527e030(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  char cVar9;
  char cVar10;
  char *pcVar11;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined4 local_80;
  char local_78;
  undefined4 local_74;
  undefined1 local_70 [24];
  char local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14527e04a;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 'A';
  uVar8 = 0;
  local_74 = 0;
  lVar4 = FUN_144ba5700();
  lVar5 = FUN_144ba5700();
  if ((lVar4 == 0) || (lVar5 == 0)) {
    local_80 = 0x22;
    uVar6 = 0x41;
LAB_14527e297:
    local_88 = "ssl\\s3_enc.c";
    FUN_144eafc90(param_1,0x50,0xee,uVar6);
  }
  else {
    FUN_144ba3ec0(lVar4,8);
    cVar9 = 'A';
    iVar3 = 0;
    if (0 < param_3) {
      do {
        uVar8 = uVar8 + 1;
        if (0x10 < uVar8) {
          local_80 = 0x2b;
          uVar6 = 0x44;
          goto LAB_14527e297;
        }
        cVar10 = cVar9;
        if (uVar8 != 0) {
          pcVar11 = local_58;
          for (uVar7 = (ulonglong)uVar8; cVar10 = local_78, uVar7 != 0; uVar7 = uVar7 - 1) {
            *pcVar11 = cVar9;
            pcVar11 = pcVar11 + 1;
          }
        }
        local_78 = cVar10 + '\x01';
        uVar6 = FUN_144bab020();
        iVar1 = FUN_144ba5a20(lVar5,uVar6,0);
        if (((((iVar1 == 0) || (iVar1 = FUN_144ba5c70(lVar5,local_58,uVar8), iVar1 == 0)) ||
             (iVar1 = FUN_144ba5c70(lVar5,*(longlong *)(param_1 + 0x508) + 0x50,
                                    *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8)), iVar1 == 0
             )) || ((iVar1 = FUN_144ba5c70(lVar5,*(longlong *)(param_1 + 0xa8) + 0x98,0x20),
                    iVar1 == 0 ||
                    (iVar1 = FUN_144ba5c70(lVar5,*(longlong *)(param_1 + 0xa8) + 0xb8,0x20),
                    iVar1 == 0)))) || (iVar1 = FUN_144ba5ca0(lVar5,local_70,0), iVar1 == 0)) {
LAB_14527e250:
          local_80 = 0x3e;
          uVar6 = 0x44;
          goto LAB_14527e297;
        }
        uVar6 = FUN_144e98ef0();
        iVar1 = FUN_144ba5a20(lVar4,uVar6,0);
        if (((iVar1 == 0) ||
            (iVar1 = FUN_144ba5c70(lVar4,*(longlong *)(param_1 + 0x508) + 0x50,
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8)), iVar1 == 0)
            ) || (iVar1 = FUN_144ba5c70(lVar4,local_70), iVar1 == 0)) goto LAB_14527e250;
        iVar1 = iVar3 + 0x10;
        if (param_3 < iVar1) {
          iVar2 = FUN_144ba5ca0(lVar4,local_70);
          if (iVar2 == 0) {
            local_80 = 0x44;
            uVar6 = 0x44;
            goto LAB_14527e297;
          }
          memcpy(param_2,local_70,(ulonglong)(uint)(param_3 - iVar3));
        }
        else {
          iVar3 = FUN_144ba5ca0(lVar4,param_2);
          if (iVar3 == 0) {
            local_80 = 0x4b;
            uVar6 = 0x44;
            goto LAB_14527e297;
          }
        }
        param_2 = (void *)((longlong)param_2 + 0x10);
        cVar9 = local_78;
        iVar3 = iVar1;
      } while (iVar1 < param_3);
    }
    FUN_14259f0c0(local_70,0x14);
    local_74 = 1;
  }
  FUN_144ba5800(lVar4);
  FUN_144ba5800(lVar5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14527e2f0 FUN_14527e2f0 body=1580 status=ok
// SIG undefined FUN_14527e2f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527e2f0(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  size_t _Size;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  void *_Dst;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  void *_Src;
  size_t *psVar16;
  longlong lVar17;
  undefined4 uVar18;
  
  puVar1 = *(uint **)(param_1 + 0xa8);
  bVar4 = false;
  uVar14 = *(undefined8 *)(puVar1 + 0xa0);
  uVar2 = *(undefined8 *)(puVar1 + 0x9e);
  lVar9 = *(longlong *)(puVar1 + 0xa6);
  uVar7 = puVar1[0xa2];
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    if (*(int *)(param_1 + 0x70c) == 0) {
      *puVar1 = *puVar1 & 0xfffffbff;
    }
    else {
      *puVar1 = *puVar1 | 0x400;
    }
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x40) & 0x10000) == 0) {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffffd;
    }
    else {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 2;
    }
    if ((*(longlong *)(param_1 + 0x468) == 0) ||
       ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0)) {
      lVar8 = FUN_144ba50b0();
      *(longlong *)(param_1 + 0x468) = lVar8;
      if (lVar8 == 0) {
        uVar18 = 0xa7;
        uVar15 = 0x41;
        goto LAB_14527e8df;
      }
    }
    else {
      bVar4 = true;
    }
    uVar13 = *(undefined8 *)(param_1 + 0x468);
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      lVar8 = FUN_144b9bf70(param_1 + 0x480,0);
      if (lVar8 == 0) {
        uVar18 = 0xb9;
        uVar15 = 0x41;
        goto LAB_14527e8df;
      }
    }
    else {
      lVar8 = FUN_144ba5700();
      if (lVar8 == 0) {
        uVar18 = 0xb0;
        uVar15 = 0x41;
        goto LAB_14527e8df;
      }
      *(longlong *)(param_1 + 0x480) = lVar8;
    }
    FUN_144ea7540(*(undefined8 *)(param_1 + 0x458));
    *(undefined8 *)(param_1 + 0x458) = 0;
    if (lVar9 != 0) {
      lVar9 = FUN_144ea7480(*(undefined8 *)(lVar9 + 0x10));
      *(longlong *)(param_1 + 0x458) = lVar9;
      if (lVar9 == 0) {
        uVar18 = 0xc5;
        uVar15 = 0x8e;
        goto LAB_14527e8df;
      }
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      FUN_144eb2250(param_1 + 0x830);
    }
    _Dst = (void *)(*(longlong *)(param_1 + 0xa8) + 0x58);
    psVar16 = (size_t *)(*(longlong *)(param_1 + 0xa8) + 0x50);
  }
  else {
    if (*(int *)(param_1 + 0x70c) == 0) {
      *puVar1 = *puVar1 & 0xfffffeff;
    }
    else {
      *puVar1 = *puVar1 | 0x100;
    }
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x40) & 0x10000) == 0) {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffffe;
    }
    else {
      *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) | 1;
    }
    if (*(longlong *)(param_1 + 0x438) == 0) {
      lVar8 = FUN_144ba50b0();
      *(longlong *)(param_1 + 0x438) = lVar8;
      if (lVar8 == 0) {
        uVar18 = 0x78;
        uVar15 = 0x41;
        goto LAB_14527e8df;
      }
      FUN_144ba50e0(lVar8);
    }
    else {
      bVar4 = true;
    }
    uVar13 = *(undefined8 *)(param_1 + 0x438);
    lVar8 = FUN_144b9bf70(param_1 + 0x450,0);
    if (lVar8 == 0) {
      return 0;
    }
    FUN_144ea7540(*(undefined8 *)(param_1 + 0x460));
    *(undefined8 *)(param_1 + 0x460) = 0;
    if (lVar9 != 0) {
      lVar9 = FUN_144ea7480(*(undefined8 *)(lVar9 + 0x10));
      *(longlong *)(param_1 + 0x460) = lVar9;
      if (lVar9 == 0) {
        uVar18 = 0x8c;
        uVar15 = 0x8e;
        goto LAB_14527e8df;
      }
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      FUN_144eb2240(param_1 + 0x830);
    }
    _Dst = (void *)(*(longlong *)(param_1 + 0xa8) + 0x10);
    psVar16 = (size_t *)(*(longlong *)(param_1 + 0xa8) + 8);
  }
  if (bVar4) {
    FUN_144ba50e0(uVar13);
  }
  pvVar3 = *(void **)(*(longlong *)(param_1 + 0xa8) + 0x270);
  _Size = *(size_t *)(*(longlong *)(param_1 + 0xa8) + 0x290);
  *psVar16 = _Size;
  iVar5 = FUN_144ba3d80(uVar2);
  lVar9 = (longlong)iVar5;
  uVar6 = FUN_144ba3da0(uVar2);
  if ((uVar6 & 0xf0007) == 6) {
    uVar12 = 4;
  }
  else {
    uVar6 = FUN_144ba3da0(uVar2);
    if ((uVar6 & 0xf0007) == 7) {
      uVar12 = 4;
    }
    else {
      iVar5 = FUN_144ba3d90(uVar2);
      uVar12 = (ulonglong)iVar5;
    }
  }
  if ((param_2 == 0x12) || (param_2 == 0x21)) {
    lVar17 = _Size * 2;
    lVar9 = lVar17 + lVar9 * 2;
    uVar11 = lVar9 + uVar12 * 2;
    _Src = pvVar3;
  }
  else {
    lVar17 = lVar9 + _Size * 2;
    lVar9 = lVar17 + lVar9 + uVar12;
    uVar11 = lVar9 + uVar12;
    _Src = (void *)(_Size + (longlong)pvVar3);
  }
  lVar9 = lVar9 + (longlong)pvVar3;
  lVar17 = (longlong)pvVar3 + lVar17;
  if (*(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x268) < uVar11) {
    uVar18 = 0xf8;
  }
  else {
    memcpy(_Dst,_Src,_Size);
    uVar6 = FUN_144ba3da0(uVar2);
    if ((uVar6 >> 0x15 & 1) == 0) {
      lVar10 = FUN_145282ac0(uVar7,0,_Dst,(int)*psVar16);
      if ((lVar10 == 0) || (iVar5 = FUN_144ba6150(lVar8,0,uVar14,0,lVar10), iVar5 < 1)) {
        FUN_144ba6e60(lVar10);
        uVar18 = 0x106;
        goto LAB_14527e8d9;
      }
      FUN_144ba6e60(lVar10);
    }
    uVar7 = FUN_144ba3da0(uVar2);
    if ((uVar7 & 0xf0007) == 6) {
      iVar5 = FUN_144ba4d00(uVar13,uVar2,0,lVar17,0,param_2 & 2);
      if ((iVar5 == 0) || (iVar5 = FUN_144ba5290(uVar13,0x12,uVar12 & 0xffffffff,lVar9), iVar5 == 0)
         ) {
        uVar18 = 0x119;
      }
      else {
LAB_14527e89f:
        uVar7 = FUN_144ba3da0(uVar2);
        if ((((uVar7 >> 0x15 & 1) == 0) || (*psVar16 == 0)) ||
           (iVar5 = FUN_144ba5290(uVar13,0x17,(int)*psVar16,_Dst), iVar5 != 0)) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
          return 1;
        }
        uVar18 = 0x138;
      }
    }
    else {
      uVar7 = FUN_144ba3da0(uVar2);
      if ((uVar7 & 0xf0007) == 7) {
        uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x24);
        iVar5 = FUN_144ba4d00(uVar13,uVar2,0,0,0,param_2 & 2);
        if ((iVar5 != 0) && (iVar5 = FUN_144ba5290(uVar13,9,0xc,0), iVar5 != 0)) {
          uVar14 = 8;
          if ((uVar7 & 0x30000) == 0) {
            uVar14 = 0x10;
          }
          iVar5 = FUN_144ba5290(uVar13,0x11,uVar14,0);
          if (((iVar5 != 0) &&
              (iVar5 = FUN_144ba5290(uVar13,0x12,uVar12 & 0xffffffff,lVar9), iVar5 != 0)) &&
             (iVar5 = FUN_144ba4d00(uVar13,0,0,lVar17,0,0xffffffff), iVar5 != 0))
          goto LAB_14527e89f;
        }
        uVar18 = 0x129;
      }
      else {
        iVar5 = FUN_144ba4d00(uVar13,uVar2,0,lVar17,lVar9,param_2 & 2);
        if (iVar5 != 0) goto LAB_14527e89f;
        uVar18 = 0x12f;
      }
    }
  }
LAB_14527e8d9:
  uVar15 = 0x44;
LAB_14527e8df:
  FUN_144eafc90(param_1,0x50,0xd1,uVar15,"ssl\\t1_enc.c",uVar18);
  return 0;
}



// FUNCTION 14527e920 FUN_14527e920 body=585 status=ok
// SIG undefined FUN_14527e920(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527e920(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_38 [24];
  
  uVar5 = 0;
  local_res8[0] = 0;
  local_res18 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) != 0) {
    return 1;
  }
  puVar6 = local_38;
  iVar2 = FUN_144ea3dd0(*(undefined8 *)(param_1 + 0x508),&local_res10,&local_res20,local_res8,
                        &local_res18,puVar6,*(undefined4 *)(param_1 + 0x70c));
  uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
  if (iVar2 == 0) {
    FUN_144eafc90(param_1,0x50,0xd3,0x8a,"ssl\\t1_enc.c",CONCAT44(uVar7,0x162));
    return 0;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278) = local_res10;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x280) = local_res20;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x288) = local_res8[0];
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x290) = local_res18;
  iVar2 = FUN_144ba3d80(local_res10);
  iVar3 = FUN_144ba3d90(local_res10);
  lVar1 = ((longlong)iVar3 + (longlong)iVar2 + local_res18) * 2;
  FUN_14527d7b0(param_1);
  lVar4 = FUN_144ea64e0(lVar1,"ssl\\t1_enc.c",0x16f);
  if (lVar4 == 0) {
    FUN_144eafc90(param_1,0x50,0xd3,0x41,"ssl\\t1_enc.c",CONCAT44(uVar7,0x171));
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x268) = lVar1;
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x270) = lVar4;
    iVar2 = FUN_14527f550(param_1,lVar4,lVar1);
    if (iVar2 != 0) {
      if (((*(uint *)(param_1 + 0x5cc) & 0x800) == 0) && (**(int **)(param_1 + 8) < 0x302)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 1;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0);
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x24) == 0x20) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
          }
          if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1e0) + 0x24) == 4) {
            *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xd8) = 0;
          }
        }
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 14527eb70 FUN_14527eb70 body=264 status=ok
// SIG undefined FUN_14527eb70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527eb70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88 [2];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14527eb7f;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar1 = FUN_14527dd60(param_1,0);
  if ((iVar1 != 0) && (iVar1 = FUN_144b9bff0(param_1,local_78,0x40,local_88), iVar1 != 0)) {
    local_90 = 1;
    local_98 = 0xc;
    local_b0 = *(longlong *)(param_1 + 0x508) + 0x50;
    local_a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8);
    local_b8 = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = local_88[0];
    local_a0 = param_4;
    iVar1 = FUN_14527f2a0(param_1,param_2,param_3,local_78);
    if (iVar1 != 0) {
      FUN_14259f0c0(local_78,local_88[0]);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_108);
}



// FUNCTION 14527ec90 FUN_14527ec90 body=418 status=ok
// SIG undefined FUN_14527ec90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527ec90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14527eca1;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(byte *)(*(longlong *)(param_1 + 0x508) + 0x260) & 1) == 0) {
    local_d0 = 1;
    local_d8 = 0x30;
    local_110 = *(longlong *)(param_1 + 0xa8) + 0x98;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0x20;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0x20;
    local_f0 = param_3;
    local_e8 = param_4;
    local_e0 = param_2;
    iVar1 = FUN_14527f2a0(param_1,"master secret",0xd,*(longlong *)(param_1 + 0xa8) + 0xb8);
    if (iVar1 == 0) goto LAB_14527ee22;
  }
  else {
    iVar1 = FUN_14527dd60(param_1,1);
    if ((iVar1 == 0) || (iVar1 = FUN_144b9bff0(param_1,local_b8,0x80,local_c8), iVar1 == 0))
    goto LAB_14527ee22;
    local_d0 = 1;
    local_d8 = 0x30;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = local_c8[0];
    local_f0 = param_3;
    local_e8 = param_4;
    local_e0 = param_2;
    iVar1 = FUN_14527f2a0(param_1,"extended master secret",0x16,local_b8);
    if (iVar1 == 0) goto LAB_14527ee22;
    FUN_14259f0c0(local_b8,local_c8[0]);
  }
  *param_5 = 0x30;
LAB_14527ee22:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_148);
}



// FUNCTION 14527ee40 FUN_14527ee40 body=623 status=ok
// SIG undefined FUN_14527ee40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14527ee40(longlong param_1,undefined8 param_2,undefined8 param_3,void *param_4,size_t param_5,
             void *param_6,size_t param_7,int param_8)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong *_Dst;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 uVar6;
  ulonglong uVar7;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar7 = 0x14527ee61;
  lVar4 = param_5 + 0x40;
  if (param_8 != 0) {
    lVar4 = param_5 + 0x42 + param_7;
  }
  _Dst = (longlong *)FUN_144ea64e0(lVar4,"ssl\\t1_enc.c",0x21e);
  if (_Dst == (longlong *)0x0) {
    uVar6 = CONCAT44(uVar5,599);
    uVar5 = 0x41;
  }
  else {
    memcpy(_Dst,param_4,param_5);
    lVar2 = *(longlong *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(lVar2 + 0xc0);
    *(undefined8 *)((longlong)_Dst + param_5) = *(undefined8 *)(lVar2 + 0xb8);
    ((undefined8 *)((longlong)_Dst + param_5))[1] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0xd0);
    puVar1 = (undefined8 *)((longlong)_Dst + param_5 + 0x10);
    *puVar1 = *(undefined8 *)(lVar2 + 200);
    puVar1[1] = uVar6;
    lVar2 = *(longlong *)(param_1 + 0xa8);
    uVar6 = *(undefined8 *)(lVar2 + 0xa0);
    puVar1 = (undefined8 *)(param_5 + 0x20 + (longlong)_Dst);
    *puVar1 = *(undefined8 *)(lVar2 + 0x98);
    puVar1[1] = uVar6;
    uVar6 = *(undefined8 *)(lVar2 + 0xb0);
    puVar1 = (undefined8 *)(param_5 + 0x30 + (longlong)_Dst);
    *puVar1 = *(undefined8 *)(lVar2 + 0xa8);
    puVar1[1] = uVar6;
    if (param_8 != 0) {
      *(char *)(param_5 + 0x40 + (longlong)_Dst) = (char)(param_7 >> 8);
      *(char *)(param_5 + 0x41 + (longlong)_Dst) = (char)param_7;
      if ((param_7 != 0) || (param_6 != (void *)0x0)) {
        memcpy((void *)(param_5 + 0x42 + (longlong)_Dst),param_6,param_7);
      }
    }
    iVar3 = memcmp(_Dst,"client finished",0xf);
    if (iVar3 != 0) {
      iVar3 = memcmp(_Dst,"server finished",0xf);
      if ((iVar3 != 0) &&
         (((*_Dst != 0x732072657473616d || ((int)_Dst[1] != 0x65726365)) ||
          (*(char *)((longlong)_Dst + 0xc) != 't')))) {
        iVar3 = memcmp(_Dst,"extended master secret",0x16);
        if ((iVar3 != 0) &&
           (((*_Dst != 0x617078652079656b || ((int)_Dst[1] != 0x6f69736e)) ||
            (*(char *)((longlong)_Dst + 0xc) != 'n')))) {
          uVar5 = FUN_14527f2a0(param_1,_Dst,lVar4,0,0,0,0,0,0,0,0,
                                *(longlong *)(param_1 + 0x508) + 0x50,
                                *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8),param_2,param_3,
                                uVar7 & 0xffffffff00000000);
          goto LAB_14527f079;
        }
      }
    }
    uVar6 = CONCAT44(uVar5,0x253);
    uVar5 = 0x16f;
  }
  FUN_144ba24f0(0x14,0x13a,uVar5,"ssl\\t1_enc.c",uVar6);
  uVar5 = 0;
LAB_14527f079:
  FUN_144ea66f0(_Dst,lVar4,"ssl\\t1_enc.c",0x25a);
  return uVar5;
}



// FUNCTION 14527f0b0 FUN_14527f0b0 body=226 status=ok
// SIG undefined FUN_14527f0b0(void)

undefined8 FUN_14527f0b0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  default:
    return 0xffffffff;
  case 10:
    return 10;
  case 0x14:
    return 0x14;
  case 0x15:
    return 0x15;
  case 0x16:
    return 0x16;
  case 0x1e:
    return 0x1e;
  case 0x28:
  case 0x6d:
  case 0x74:
    return 0x28;
  case 0x2a:
    return 0x2a;
  case 0x2b:
    return 0x2b;
  case 0x2c:
    return 0x2c;
  case 0x2d:
    return 0x2d;
  case 0x2e:
    return 0x2e;
  case 0x2f:
    return 0x2f;
  case 0x30:
    return 0x30;
  case 0x31:
    return 0x31;
  case 0x32:
    return 0x32;
  case 0x33:
    return 0x33;
  case 0x3c:
    return 0x3c;
  case 0x46:
    return 0x46;
  case 0x47:
    return 0x47;
  case 0x50:
    return 0x50;
  case 0x56:
    return 0x56;
  case 0x5a:
    return 0x5a;
  case 100:
    return 100;
  case 0x6e:
    return 0x6e;
  case 0x6f:
    return 0x6f;
  case 0x70:
    return 0x70;
  case 0x71:
    return 0x71;
  case 0x72:
    return 0x72;
  case 0x73:
    return 0x73;
  case 0x78:
    return 0x78;
  }
}



// FUNCTION 14527f2a0 FUN_14527f2a0 body=688 status=ok
// SIG undefined FUN_14527f2a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_14527f2a0(undefined8 param_1,longlong param_2,undefined4 param_3,longlong param_4,
             undefined4 param_5,longlong param_6,undefined4 param_7,longlong param_8,
             undefined4 param_9,longlong param_10,undefined4 param_11,longlong param_12,
             undefined4 param_13,undefined8 param_14,undefined8 param_15,int param_16)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffffd8;
  undefined4 uVar6;
  undefined8 uVar5;
  longlong lVar7;
  
  lVar7 = 0x14527f2bf;
  lVar2 = FUN_144ea4540();
  uVar4 = 0;
  if (lVar2 == 0) {
    if (param_16 != 0) {
      FUN_144eafc90(param_1,0x50,0x11c,0x44,"ssl\\t1_enc.c",0x24);
      return 0;
    }
    FUN_144ba24f0(0x14,0x11c,0x44,"ssl\\t1_enc.c",0x26,lVar7);
    return 0;
  }
  lVar3 = FUN_144ed1550(0x3fd,0);
  uVar6 = (undefined4)(in_stack_ffffffffffffffd8 >> 0x20);
  if (lVar3 != 0) {
    iVar1 = FUN_144ed2580(lVar3);
    uVar6 = (undefined4)(in_stack_ffffffffffffffd8 >> 0x20);
    if (0 < iVar1) {
      in_stack_ffffffffffffffd8 = in_stack_ffffffffffffffd8 & 0xffffffff00000000;
      iVar1 = FUN_144ed1710(lVar3,0xffffffff,0x400,0x1000,in_stack_ffffffffffffffd8,lVar2);
      uVar6 = (undefined4)(in_stack_ffffffffffffffd8 >> 0x20);
      lVar7 = lVar2;
      if (0 < iVar1) {
        uVar5 = CONCAT44(uVar6,param_13);
        iVar1 = FUN_144ed1710(lVar3,0xffffffff,0x400,0x1001,uVar5,param_12);
        uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
        lVar7 = param_12;
        if (0 < iVar1) {
          uVar5 = CONCAT44(uVar6,param_3);
          iVar1 = FUN_144ed1710(lVar3,0xffffffff,0x400,0x1002,uVar5,param_2);
          uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
          lVar7 = param_2;
          if (0 < iVar1) {
            uVar5 = CONCAT44(uVar6,param_5);
            iVar1 = FUN_144ed1710(lVar3,0xffffffff,0x400,0x1002,uVar5,param_4);
            uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
            lVar7 = param_4;
            if (0 < iVar1) {
              uVar5 = CONCAT44(uVar6,param_7);
              iVar1 = FUN_144ed1710(lVar3,0xffffffff,0x400,0x1002,uVar5,param_6);
              uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
              lVar7 = param_6;
              if (0 < iVar1) {
                uVar5 = CONCAT44(uVar6,param_9);
                iVar1 = FUN_144ed1710(lVar3,0xffffffff,0x400,0x1002,uVar5,param_8);
                uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
                lVar7 = param_8;
                if (0 < iVar1) {
                  uVar5 = CONCAT44(uVar6,param_11);
                  iVar1 = FUN_144ed1710(lVar3,0xffffffff,0x400,0x1002,uVar5,param_10);
                  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
                  lVar7 = param_10;
                  if ((0 < iVar1) &&
                     (iVar1 = FUN_144ed2820(lVar3,param_14,&param_15), lVar7 = param_10, 0 < iVar1))
                  {
                    uVar4 = 1;
                    goto LAB_14527f527;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_16 == 0) {
    FUN_144ba24f0(0x14,0x11c,0x44,"ssl\\t1_enc.c",CONCAT44(uVar6,0x37),lVar7);
  }
  else {
    FUN_144eafc90(param_1,0x50,0x11c,0x44,"ssl\\t1_enc.c",0x35);
    uVar4 = 0;
  }
LAB_14527f527:
  FUN_144ed16b0(lVar3);
  return uVar4;
}



// FUNCTION 14527f550 FUN_14527f550 body=146 status=ok
// SIG undefined FUN_14527f550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527f550(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14527f2a0(param_1,"key expansion",0xd,*(longlong *)(param_1 + 0xa8) + 0x98,0x20,
                *(longlong *)(param_1 + 0xa8) + 0xb8,0x20,0,0,0,0,
                *(longlong *)(param_1 + 0x508) + 0x50,
                *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8),param_2,param_3,1,0x14527f55a);
  return;
}



// FUNCTION 14527f5f0 FUN_14527f5f0 body=35 status=ok
// SIG undefined FUN_14527f5f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527f5f0(undefined8 param_1)

{
  FUN_144ba0740(&DAT_149d027c0,0x80,param_1);
  return;
}



// FUNCTION 14527f620 FUN_14527f620 body=37 status=ok
// SIG undefined FUN_14527f620(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527f620(undefined8 param_1)

{
  FUN_144ba0740(&DAT_149d02900,0x100,param_1);
  return;
}



// FUNCTION 14527f650 FUN_14527f650 body=37 status=ok
// SIG undefined FUN_14527f650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527f650(undefined8 param_1)

{
  FUN_144ba0740(&DAT_149d02a00,0x180,param_1);
  return;
}



// FUNCTION 14527f680 FUN_14527f680 body=37 status=ok
// SIG undefined FUN_14527f680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527f680(undefined8 param_1)

{
  FUN_144ba0740(&DAT_149d02b80,0x200,param_1);
  return;
}



// FUNCTION 14527f6b0 FUN_14527f6b0 body=37 status=ok
// SIG undefined FUN_14527f6b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527f6b0(undefined8 param_1)

{
  FUN_144ba0740(&DAT_149d03080,0x400,param_1);
  return;
}



// FUNCTION 14527f6e0 FUN_14527f6e0 body=35 status=ok
// SIG undefined FUN_14527f6e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14527f6e0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_144ba3cd0(*param_1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return (longlong)iVar1;
}



// FUNCTION 14527f710 FUN_14527f710 body=78 status=ok
// SIG undefined FUN_14527f710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14527f710(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ea6670(0x20,"crypto\\hmac\\hmac.c",0x89);
  if (lVar2 != 0) {
    iVar1 = FUN_14527f760(lVar2);
    if (iVar1 == 0) {
      FUN_14527f7e0(lVar2);
      return 0;
    }
  }
  return lVar2;
}



// FUNCTION 14527f760 FUN_14527f760 body=117 status=ok
// SIG undefined FUN_14527f760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527f760(undefined8 *param_1)

{
  int iVar1;
  
  FUN_144ba5730(param_1[2]);
  FUN_144ba5730(param_1[3]);
  FUN_144ba5730(param_1[1]);
  *param_1 = 0;
  iVar1 = FUN_14527fe20(param_1);
  if (iVar1 == 0) {
    FUN_144ba5730(param_1[2]);
    FUN_144ba5730(param_1[3]);
    FUN_144ba5730(param_1[1]);
    *param_1 = 0;
    return 0;
  }
  return 1;
}



// FUNCTION 14527f7e0 FUN_14527f7e0 body=110 status=ok
// SIG undefined FUN_14527f7e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527f7e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_144ba5730(param_1[2]);
    FUN_144ba5730(param_1[3]);
    FUN_144ba5730(param_1[1]);
    *param_1 = 0;
    FUN_144ba5800(param_1[2]);
    FUN_144ba5800(param_1[3]);
    FUN_144ba5800(param_1[1]);
    FUN_144ea6530(param_1,"crypto\\hmac\\hmac.c",0xa3);
  }
  return;
}



// FUNCTION 14527f850 FUN_14527f850 body=709 status=ok
// SIG undefined FUN_14527f850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527f850(longlong *param_1,void *param_2,uint param_3,longlong param_4,undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1a8 [32];
  uint local_188 [4];
  ulonglong local_178 [16];
  byte abStack_f8 [16];
  ulonglong local_e8 [16];
  byte abStack_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar7 = 0;
  bVar3 = false;
  if (param_4 == 0) {
    param_4 = *param_1;
    if (param_4 == 0) goto LAB_14527fb01;
  }
  else {
    if ((param_4 != *param_1) && ((param_2 == (void *)0x0 || ((int)param_3 < 0))))
    goto LAB_14527fb01;
    *param_1 = param_4;
  }
  uVar5 = FUN_144ba3ca0(param_4);
  if ((uVar5 & 2) != 0) goto LAB_14527fb01;
  if (param_2 == (void *)0x0) {
LAB_14527fabd:
    FUN_144ba5840(param_1[1],param_1[2]);
    if (!bVar3) goto LAB_14527fb01;
  }
  else {
    bVar3 = true;
    iVar4 = FUN_144ba3d10(param_4);
    if (0x90 < iVar4) goto LAB_14527fb01;
    if (iVar4 < (int)param_3) {
      iVar4 = FUN_144ba5a20(param_1[1],param_4,param_5);
      if (((iVar4 == 0) ||
          (iVar4 = FUN_144ba5c70(param_1[1],param_2,(longlong)(int)param_3), iVar4 == 0)) ||
         (iVar4 = FUN_144ba5ca0(param_1[1],local_178,local_188), iVar4 == 0)) goto LAB_14527fb01;
    }
    else {
      if (0x90 < param_3) goto LAB_14527fb01;
      memcpy(local_178,param_2,(longlong)(int)param_3);
      local_188[0] = param_3;
    }
    if (local_188[0] != 0x90) {
      memset((void *)((longlong)local_178 + (ulonglong)local_188[0]),0,
             (ulonglong)(0x90 - local_188[0]));
    }
    lVar8 = 0x80;
    lVar6 = lVar7;
    do {
      uVar2 = *(ulonglong *)((longlong)local_178 + lVar6 + 8);
      uVar5 = *(ulonglong *)((longlong)local_178 + lVar6 + 0x10);
      uVar1 = *(ulonglong *)((longlong)local_178 + lVar6 + 0x18);
      *(ulonglong *)((longlong)local_e8 + lVar6) =
           *(ulonglong *)((longlong)local_178 + lVar6) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_e8 + lVar6 + 8) = uVar2 ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_e8 + lVar6 + 0x10) = uVar5 ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_e8 + lVar6 + 0x18) = uVar1 ^ 0x3636363636363636;
      lVar6 = lVar6 + 0x20;
    } while (lVar6 < 0x80);
    lVar6 = 0x80;
    do {
      *(byte *)((longlong)local_e8 + lVar6) = *(byte *)((longlong)local_178 + lVar6) ^ 0x36;
      lVar6 = lVar6 + 1;
    } while (lVar6 < 0x90);
    iVar4 = FUN_144ba5a20(param_1[2],param_4,param_5);
    if (iVar4 != 0) {
      iVar4 = FUN_144ba3d10(param_4);
      iVar4 = FUN_144ba5c70(param_1[2],local_e8,(longlong)iVar4);
      if (iVar4 != 0) {
        do {
          uVar2 = *(ulonglong *)((longlong)local_178 + lVar7 + 8);
          uVar5 = *(ulonglong *)((longlong)local_178 + lVar7 + 0x10);
          uVar1 = *(ulonglong *)((longlong)local_178 + lVar7 + 0x18);
          *(ulonglong *)((longlong)local_e8 + lVar7) =
               *(ulonglong *)((longlong)local_178 + lVar7) ^ 0x5c5c5c5c5c5c5c5c;
          *(ulonglong *)((longlong)local_e8 + lVar7 + 8) = uVar2 ^ 0x5c5c5c5c5c5c5c5c;
          *(ulonglong *)((longlong)local_e8 + lVar7 + 0x10) = uVar5 ^ 0x5c5c5c5c5c5c5c5c;
          *(ulonglong *)((longlong)local_e8 + lVar7 + 0x18) = uVar1 ^ 0x5c5c5c5c5c5c5c5c;
          lVar7 = lVar7 + 0x20;
        } while (lVar7 < 0x80);
        do {
          *(byte *)((longlong)local_e8 + lVar8) = *(byte *)((longlong)local_178 + lVar8) ^ 0x5c;
          lVar8 = lVar8 + 1;
        } while (lVar8 < 0x90);
        iVar4 = FUN_144ba5a20(param_1[3],param_4,param_5);
        if (iVar4 != 0) {
          iVar4 = FUN_144ba3d10(param_4);
          iVar4 = FUN_144ba5c70(param_1[3],local_e8,(longlong)iVar4);
          if (iVar4 != 0) goto LAB_14527fabd;
        }
      }
    }
  }
  FUN_14259f0c0(local_178,0x90);
  FUN_14259f0c0(local_e8,0x90);
LAB_14527fb01:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 14527fb30 FUN_14527fb30 body=39 status=ok
// SIG undefined FUN_14527fb30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527fb30(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_144ba5c70(param_1[1]);
  return uVar1;
}



// FUNCTION 14527fb60 FUN_14527fb60 body=151 status=ok
// SIG undefined FUN_14527fb60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527fb60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78 [4];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14527fb6e;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*param_1 != 0) && (iVar1 = FUN_144ba5ca0(param_1[1],local_68,local_78), iVar1 != 0)) &&
      (iVar1 = FUN_144ba5840(param_1[1],param_1[3]), iVar1 != 0)) &&
     (iVar1 = FUN_144ba5c70(param_1[1],local_68,local_78[0]), iVar1 != 0)) {
    FUN_144ba5ca0(param_1[1],param_2,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 14527fc10 FUN_14527fc10 body=277 status=ok
// SIG undefined FUN_14527fc10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined *
FUN_14527fc10(undefined8 param_1,undefined *param_2,int param_3,undefined8 param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  int iVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14527fc2e;
  puVar3 = &DAT_14c7fc540;
  if (param_6 != (undefined *)0x0) {
    puVar3 = param_6;
  }
  plVar2 = (longlong *)FUN_144ea6670(0x20,"crypto\\hmac\\hmac.c");
  if ((plVar2 == (longlong *)0x0) || (iVar1 = FUN_14527f760(plVar2), iVar1 != 0)) {
    if (plVar2 != (longlong *)0x0) {
      puVar4 = param_2;
      if ((param_2 == (undefined *)0x0) && (puVar4 = &DAT_149d03480, param_3 != 0)) {
        puVar4 = param_2;
      }
      iVar1 = FUN_14527f850(plVar2,puVar4,param_3,param_1,0,uVar5);
      if ((((iVar1 != 0) && (*plVar2 != 0)) &&
          (iVar1 = FUN_144ba5c70(plVar2[1],param_4,param_5), iVar1 != 0)) &&
         (iVar1 = FUN_14527fb60(plVar2,puVar3,param_7), iVar1 != 0)) {
        FUN_14527f7e0(plVar2);
        return puVar3;
      }
    }
  }
  else {
    FUN_14527f7e0(plVar2);
    plVar2 = (longlong *)0x0;
  }
  FUN_14527f7e0(plVar2);
  return (undefined *)0x0;
}



// FUNCTION 14527fd30 FUN_14527fd30 body=154 status=ok
// SIG undefined FUN_14527fd30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14527fd30(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_14527fe20();
  if (iVar1 != 0) {
    iVar1 = FUN_144ba5840(param_1[2],param_2[2]);
    if (iVar1 != 0) {
      iVar1 = FUN_144ba5840(param_1[3],param_2[3]);
      if (iVar1 != 0) {
        iVar1 = FUN_144ba5840(param_1[1],param_2[1]);
        if (iVar1 != 0) {
          *param_1 = *param_2;
          return 1;
        }
      }
    }
  }
  FUN_144ba5730(param_1[2]);
  FUN_144ba5730(param_1[3]);
  FUN_144ba5730(param_1[1]);
  *param_1 = 0;
  return 0;
}



// FUNCTION 14527fdd0 FUN_14527fdd0 body=65 status=ok
// SIG undefined FUN_14527fdd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527fdd0(longlong param_1,undefined4 param_2)

{
  FUN_144ba3ec0(*(undefined8 *)(param_1 + 0x10));
  FUN_144ba3ec0(*(undefined8 *)(param_1 + 0x18),param_2);
  FUN_144ba3ec0(*(undefined8 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 14527fe20 FUN_14527fe20 body=101 status=ok
// SIG undefined FUN_14527fe20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14527fe20(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = FUN_144ba5700();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = FUN_144ba5700();
      *(longlong *)(param_1 + 0x18) = lVar2;
      if (lVar2 == 0) {
        return false;
      }
    }
    if (*(longlong *)(param_1 + 8) == 0) {
      uVar1 = FUN_144ba5700();
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
    return *(longlong *)(param_1 + 8) != 0;
  }
  return false;
}



// FUNCTION 14527fe90 FUN_14527fe90 body=132 status=ok
// SIG undefined FUN_14527fe90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14527fe90(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 uStack_8;
  
  uStack_8 = 0x14527fe9a;
  uVar1 = 0;
  if (0 < param_1) {
    piVar3 = &DAT_149d073e0;
    do {
      if (*piVar3 == param_1) {
        lVar2 = uVar1 * 0x20;
        local_28 = (&DAT_149d073e0)[uVar1 * 8];
        uStack_24 = *(undefined4 *)(&UNK_149d073e4 + lVar2);
        uStack_20 = *(undefined4 *)(&UNK_149d073e8 + lVar2);
        uStack_1c = *(undefined4 *)(&UNK_149d073ec + lVar2);
        local_18 = *(undefined4 *)(&UNK_149d073f0 + lVar2);
        uStack_14 = *(undefined4 *)(&UNK_149d073f4 + lVar2);
        uStack_10 = *(undefined4 *)(&UNK_149d073f8 + lVar2);
        uStack_c = *(undefined4 *)(&UNK_149d073fc + lVar2);
        lVar2 = FUN_145280310(&local_28);
        if (lVar2 != 0) {
          return lVar2;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 8;
    } while (uVar1 < 0x52);
    FUN_144ba24f0(0x10,0xae,0x81,"crypto\\ec\\ec_curve.c",0xc57);
  }
  return 0;
}



// FUNCTION 14527ff20 FUN_14527ff20 body=51 status=ok
// SIG undefined FUN_14527ff20(void)

undefined * FUN_14527ff20(int param_1)

{
  ulonglong uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = &DAT_14c731c88;
  do {
    if (*piVar2 == param_1) {
      return (&PTR_s_B_163_14c731c80)[uVar1 * 2];
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (uVar1 < 0xf);
  return (undefined *)0x0;
}



// FUNCTION 14527ff60 FUN_14527ff60 body=106 status=ok
// SIG undefined FUN_14527ff60(void)

undefined4 FUN_14527ff60(longlong param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  
  ppuVar6 = &PTR_s_B_163_14c731c80;
  uVar5 = 0;
  do {
    pcVar3 = *ppuVar6;
    lVar4 = param_1 - (longlong)pcVar3;
    do {
      cVar1 = *pcVar3;
      cVar2 = pcVar3[lVar4];
      if (cVar1 != cVar2) break;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      return (&DAT_14c731c88)[uVar5 * 4];
    }
    uVar5 = uVar5 + 1;
    ppuVar6 = ppuVar6 + 2;
    if (0xe < uVar5) {
      return 0;
    }
  } while( true );
}



// FUNCTION 14527ffd0 FUN_14527ffd0 body=813 status=ok
// SIG undefined FUN_14527ffd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14527ffd0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  size_t _Size;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  void *pvVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint local_a8;
  int local_a4;
  ulonglong local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  void *local_80;
  size_t local_78;
  longlong local_70;
  int *piStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_70 = 0;
  piStack_68 = (int *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_88 = param_2;
  lVar4 = FUN_144efbee0();
  if (lVar4 != 0) {
    local_a8 = FUN_144efc1f0(param_1);
    local_a4 = FUN_144efbef0(lVar4);
    _Size = FUN_144efc250(param_1);
    local_80 = (void *)FUN_144efc240(param_1);
    local_90 = FUN_144efc1d0(param_1);
    FUN_144eede20(param_2);
    iVar3 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x10));
    iVar6 = (int)((iVar3 + 7 >> 0x1f & 7U) + iVar3 + 7) >> 3;
    iVar3 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x40));
    iVar3 = (int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3;
    if (iVar3 <= iVar6) {
      iVar3 = iVar6;
    }
    local_78 = (size_t)(iVar3 * 6);
    local_98 = (void *)FUN_144ea64e0(local_78,"crypto\\ec\\ec_curve.c",0xcca);
    if (local_98 != (void *)0x0) {
      uVar7 = 0;
      do {
        lVar4 = FUN_144eede90(param_2);
        (&local_70)[uVar7] = lVar4;
        if (lVar4 == 0) goto LAB_1452802bb;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 6);
      local_b8 = param_2;
      iVar6 = FUN_144efc390(param_1,local_70,piStack_68,local_60);
      if ((((iVar6 != 0) && (lVar4 = FUN_144efc0f0(param_1), lVar4 != 0)) &&
          (local_b8 = param_2, iVar6 = FUN_144efcb20(param_1,lVar4,uStack_58,local_50), iVar6 != 0))
         && (iVar6 = FUN_144efc100(param_1,uStack_48,param_2), iVar6 != 0)) {
        uVar7 = 0;
        pvVar9 = local_98;
        do {
          iVar6 = FUN_144ba09d0((&local_70)[uVar7],pvVar9,iVar3);
          if (iVar6 < 1) goto LAB_1452802bb;
          uVar7 = uVar7 + 1;
          pvVar9 = (void *)((longlong)pvVar9 + (longlong)iVar3);
        } while (uVar7 < 6);
        uVar7 = (ulonglong)(int)local_a8;
        plVar10 = (longlong *)&DAT_149d073e0;
        uVar8 = 0;
        uVar5 = uVar7;
        local_a0 = uVar7;
        iVar6 = local_a4;
        do {
          local_70 = *plVar10;
          piVar2 = (int *)plVar10[1];
          iVar1 = piVar2[1];
          piStack_68 = piVar2;
          if (((*piVar2 == iVar6) && (iVar3 == piVar2[2])) &&
             (((longlong)uVar7 < 1 || ((int)uVar5 == (int)local_70)))) {
            iVar6 = FUN_144ba0340(local_90);
            if ((((iVar6 != 0) || (iVar6 = FUN_144ba0370(local_90,piVar2[3]), iVar6 != 0)) &&
                ((piVar2[1] == 0 ||
                 ((_Size == 0 ||
                  (((longlong)piVar2[1] == _Size &&
                   (iVar6 = memcmp(piVar2 + 4,local_80,_Size), iVar6 == 0)))))))) &&
               (iVar6 = memcmp(local_98,(void *)((longlong)iVar1 + (longlong)(piVar2 + 4)),local_78)
               , param_2 = local_88, iVar6 == 0)) break;
            uVar5 = (ulonglong)local_a8;
            uVar7 = local_a0;
            iVar6 = local_a4;
          }
          uVar8 = uVar8 + 0x20;
          plVar10 = plVar10 + 4;
          param_2 = local_88;
        } while (uVar8 < 0xa40);
      }
    }
LAB_1452802bb:
    FUN_144ea6530(local_98,"crypto\\ec\\ec_curve.c",0xd07);
    FUN_144eedf20(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
}



// FUNCTION 145280310 FUN_145280310 body=1268 status=ok
// SIG undefined FUN_145280310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_145280310(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff88;
  longlong lVar13;
  undefined8 uVar14;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  plVar5 = (longlong *)0x0;
  plVar11 = (longlong *)0x0;
  local_res20 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  if (*(longlong *)(param_1 + 2) == 0) {
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      plVar5 = (longlong *)(**(code **)(param_1 + 4))();
    }
    plVar11 = (longlong *)FUN_144efb8e0(plVar5);
    return plVar11;
  }
  lVar6 = FUN_144eedd20();
  plVar9 = plVar5;
  if (lVar6 == 0) {
    FUN_144ba24f0(0x10,0xaf,0x41,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xbd5));
    plVar11 = plVar5;
    plVar12 = plVar5;
    goto LAB_14528078e;
  }
  piVar1 = *(int **)(param_1 + 2);
  iVar4 = piVar1[1];
  lVar7 = (longlong)iVar4;
  iVar3 = piVar1[2];
  lVar10 = (longlong)piVar1 + lVar7 + 0x10;
  local_res20 = FUN_144ba0740(lVar10,iVar3,0);
  if (local_res20 == 0) {
LAB_145280766:
    uVar14 = CONCAT44(uVar15,0xbe2);
    uVar8 = 3;
LAB_145280777:
    FUN_144ba24f0(0x10,0xaf,uVar8,"crypto\\ec\\ec_curve.c",uVar14);
LAB_14528078b:
    plVar12 = (longlong *)0x0;
  }
  else {
    local_68 = FUN_144ba0740(iVar3 + lVar10,iVar3,0);
    if (local_68 == 0) goto LAB_145280766;
    local_60 = FUN_144ba0740(iVar3 * 2 + lVar10,iVar3,0);
    if (local_60 == 0) goto LAB_145280766;
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      uVar8 = (**(code **)(param_1 + 4))();
      plVar11 = (longlong *)FUN_144efb8e0(uVar8);
      if (plVar11 != (longlong *)0x0) {
        lVar13 = lVar6;
        iVar2 = (**(code **)(*plVar11 + 0x28))(plVar11,local_res20,local_68,local_60,lVar6);
        uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
        if (iVar2 != 0) goto LAB_1452804e3;
      }
      uVar14 = CONCAT44(uVar15,0xbea);
      uVar8 = 0x10;
      goto LAB_145280777;
    }
    if (*piVar1 != 0x196) {
      plVar11 = (longlong *)FUN_1452a3540(local_res20,local_68,local_60,lVar6);
      if (plVar11 != (longlong *)0x0) goto LAB_1452804e3;
      uVar14 = CONCAT44(uVar15,0xbf8);
      uVar8 = 0x10;
      goto LAB_145280777;
    }
    plVar11 = (longlong *)FUN_1452a34b0();
    if (plVar11 == (longlong *)0x0) {
      uVar14 = CONCAT44(uVar15,0xbef);
      uVar8 = 0x10;
      goto LAB_145280777;
    }
LAB_1452804e3:
    FUN_144efc1e0(plVar11,*param_1);
    plVar9 = (longlong *)FUN_144efc690(plVar11);
    if (plVar9 == (longlong *)0x0) {
      FUN_144ba24f0(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc01));
      goto LAB_14528078b;
    }
    plVar12 = (longlong *)FUN_144ba0740(iVar3 * 3 + lVar10,iVar3,0);
    if (plVar12 == (longlong *)0x0) {
LAB_145280732:
      FUN_144ba24f0(0x10,0xaf,3,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc07));
    }
    else {
      local_50 = FUN_144ba0740(iVar3 * 4 + lVar10,iVar3,0);
      if (local_50 == 0) goto LAB_145280732;
      lVar13 = lVar6;
      iVar2 = FUN_144efc9b0(plVar11,plVar9,plVar12,local_50,lVar6);
      uVar15 = (undefined4)((ulonglong)lVar13 >> 0x20);
      if (iVar2 == 0) {
        FUN_144ba24f0(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc0b));
        goto LAB_14528078e;
      }
      local_58 = FUN_144ba0740(iVar3 * 5 + lVar10,iVar3,0);
      if (local_58 == 0) {
LAB_145280706:
        FUN_144ba24f0(0x10,0xaf,3,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc10));
      }
      else {
        iVar3 = FUN_144ba0bb0(plVar12,piVar1[3]);
        if (iVar3 == 0) goto LAB_145280706;
        iVar3 = FUN_144efbf00(plVar11,plVar9,local_58,plVar12);
        if (iVar3 == 0) {
          FUN_144ba24f0(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc14));
        }
        else {
          if (iVar4 != 0) {
            lVar7 = FUN_144efc260(plVar11,lVar10 - lVar7,lVar7);
            if (lVar7 == 0) {
              FUN_144ba24f0(0x10,0xaf,0x10,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc19));
              goto LAB_14528078e;
            }
          }
          iVar4 = FUN_144efc210(plVar11);
          if (iVar4 != 1) goto LAB_145280799;
          lVar7 = FUN_144ea8d60(*param_1);
          if (lVar7 != 0) {
            lVar10 = FUN_144ea9be0(lVar7);
            if (lVar10 == 0) {
              FUN_144efc200(plVar11,0);
            }
            FUN_144ed0860(lVar7);
            goto LAB_145280799;
          }
          FUN_144ba24f0(0x10,0xaf,8,"crypto\\ec\\ec_curve.c",CONCAT44(uVar15,0xc2e));
        }
      }
    }
  }
LAB_14528078e:
  FUN_144efba20(plVar11);
  plVar11 = plVar5;
LAB_145280799:
  FUN_144efc7a0(plVar9);
  FUN_144eeddc0(lVar6);
  FUN_144ba0cd0(local_res20);
  FUN_144ba0cd0(local_68);
  FUN_144ba0cd0(local_60);
  FUN_144ba0cd0(local_58);
  FUN_144ba0cd0(plVar12);
  FUN_144ba0cd0(local_50);
  return plVar11;
}



// FUNCTION 145280810 FUN_145280810 body=88 status=ok
// SIG undefined FUN_145280810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 * FUN_145280810(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    return &DAT_fffffffd;
  }
  *(undefined8 *)(param_1 + 0xa0) = 6;
  *(undefined ***)(param_1 + 0x98) = &PTR_DAT_149d08810;
  puVar1 = (undefined1 *)FUN_144ba1dc0(param_2,0x2c,1,FUN_145281850,param_1);
  return puVar1;
}



// FUNCTION 145280870 FUN_145280870 body=237 status=ok
// SIG undefined FUN_145280870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145280870(byte *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  plVar2 = (longlong *)0x0;
  iVar4 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar4 = FUN_1454d6d40();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar4 = FUN_1454d6d60(*(longlong *)(param_1 + 0x20),param_2);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  if (((0 < iVar4) && (plVar2 != (longlong *)0x0)) && ((*param_1 & 0x40) != 0)) {
    lVar1 = ((*plVar2 - (longlong)plVar2) + -0x20) / 0x28;
    FUN_144ea6530(*(undefined8 *)(param_1 + lVar1 * 8 + 0x30),"ssl\\ssl_conf.c",0x1b6);
    lVar3 = FUN_144ea6dc0(param_2,"ssl\\ssl_conf.c",0x1b7);
    *(longlong *)(param_1 + lVar1 * 8 + 0x30) = lVar3;
    if (lVar3 == 0) {
      iVar4 = 0;
    }
  }
  return 0 < iVar4;
}



// FUNCTION 145280960 FUN_145280960 body=114 status=ok
// SIG undefined FUN_145280960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145280960(byte *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if ((*param_1 & 0x20) == 0) {
    return 0xfffffffe;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_1454d6ae0(*(longlong *)(param_1 + 0x18),param_2,1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_1454d69b0(*(longlong *)(param_1 + 0x20),param_2,1);
  }
  return (ulonglong)(0 < iVar1);
}



// FUNCTION 1452809e0 FUN_1452809e0 body=47 status=ok
// SIG undefined FUN_1452809e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452809e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_1454d6510();
  }
  return 0 < iVar1;
}



// FUNCTION 145280a10 FUN_145280a10 body=151 status=ok
// SIG undefined FUN_145280a10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145280a10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return true;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if (*(longlong *)(lVar3 + 0x1c8) == 0) {
    lVar2 = FUN_144bb3fc0();
    *(longlong *)(lVar3 + 0x1c8) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = FUN_144eaad90(*(undefined8 *)(lVar3 + 0x1c8),0,param_2);
  return 0 < iVar1;
}



// FUNCTION 145280ab0 FUN_145280ab0 body=152 status=ok
// SIG undefined FUN_145280ab0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145280ab0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return true;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if (*(longlong *)(lVar3 + 0x1c8) == 0) {
    lVar2 = FUN_144bb3fc0();
    *(longlong *)(lVar3 + 0x1c8) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = FUN_144eaad90(*(undefined8 *)(lVar3 + 0x1c8),param_2,0);
  return 0 < iVar1;
}



// FUNCTION 145280b50 FUN_145280b50 body=151 status=ok
// SIG undefined FUN_145280b50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145280b50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return true;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if (*(longlong *)(lVar3 + 0x1d0) == 0) {
    lVar2 = FUN_144bb3fc0();
    *(longlong *)(lVar3 + 0x1d0) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = FUN_144eaad90(*(undefined8 *)(lVar3 + 0x1d0),0,param_2);
  return 0 < iVar1;
}



// FUNCTION 145280bf0 FUN_145280bf0 body=152 status=ok
// SIG undefined FUN_145280bf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145280bf0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return true;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if (*(longlong *)(lVar3 + 0x1d0) == 0) {
    lVar2 = FUN_144bb3fc0();
    *(longlong *)(lVar3 + 0x1d0) = lVar2;
    if (lVar2 == 0) {
      return false;
    }
  }
  iVar1 = FUN_144eaad90(*(undefined8 *)(lVar3 + 0x1d0),param_2,0);
  return 0 < iVar1;
}



// FUNCTION 145280c90 FUN_145280c90 body=90 status=ok
// SIG undefined FUN_145280c90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145280c90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = FUN_144babca0();
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  uVar1 = FUN_144b9cae0(*(longlong *)(param_1 + 0xa8),param_2);
  return uVar1;
}



// FUNCTION 145280cf0 FUN_145280cf0 body=90 status=ok
// SIG undefined FUN_145280cf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145280cf0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = FUN_144babca0();
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  uVar1 = FUN_144b9cae0(*(longlong *)(param_1 + 0xa8),param_2);
  return uVar1;
}



// FUNCTION 145280d50 FUN_145280d50 body=90 status=ok
// SIG undefined FUN_145280d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145280d50(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = FUN_144babca0();
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  uVar1 = FUN_144b9cc30(*(longlong *)(param_1 + 0xa8),param_2);
  return uVar1;
}



// FUNCTION 145280db0 FUN_145280db0 body=90 status=ok
// SIG undefined FUN_145280db0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145280db0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar1 = FUN_144babca0();
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  uVar1 = FUN_144b9cc30(*(longlong *)(param_1 + 0xa8),param_2);
  return uVar1;
}



// FUNCTION 145280e10 FUN_145280e10 body=239 status=ok
// SIG undefined FUN_145280e10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145280e10(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = 0;
  if ((*(longlong *)(param_1 + 0x18) == 0) && (*(longlong *)(param_1 + 0x20) == 0)) {
    bVar1 = true;
  }
  else {
    uVar4 = FUN_144ec7470();
    lVar5 = FUN_144b9e650(uVar4);
    lVar6 = 0;
    if (lVar5 != 0) {
      iVar2 = FUN_144b9efc0(lVar5,0x6c,3,param_2);
      lVar6 = 0;
      if (0 < iVar2) {
        lVar6 = FUN_144eea5b0(lVar5,0,0,0);
        if (lVar6 != 0) {
          iVar3 = 0;
          if (*(longlong *)(param_1 + 0x18) != 0) {
            iVar3 = FUN_144b99c10(*(longlong *)(param_1 + 0x18),3,0,lVar6);
          }
          if (*(longlong *)(param_1 + 0x20) != 0) {
            iVar3 = FUN_144b99870(*(longlong *)(param_1 + 0x20),3,0,lVar6);
          }
        }
      }
    }
    FUN_144ed3d50(lVar6);
    FUN_144b9e7b0(lVar5);
    bVar1 = 0 < iVar3;
  }
  return bVar1;
}



// FUNCTION 145280f00 FUN_145280f00 body=114 status=ok
// SIG undefined FUN_145280f00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145280f00(longlong param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  iVar1 = atoi(param_2);
  if (-1 < iVar1) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar2 = FUN_144b9ab20(*(longlong *)(param_1 + 0x18),(longlong)iVar1);
      uVar3 = (ulonglong)uVar2;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar3 = FUN_144b9ab50(*(longlong *)(param_1 + 0x20),(longlong)iVar1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 145280f80 FUN_145280f80 body=114 status=ok
// SIG undefined FUN_145280f80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_145280f80(longlong param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  iVar1 = atoi(param_2);
  if (-1 < iVar1) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar2 = FUN_144b9ab90(*(longlong *)(param_1 + 0x18),(longlong)iVar1);
      uVar3 = (ulonglong)uVar2;
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar3 = FUN_144b9ab80(*(longlong *)(param_1 + 0x20),(longlong)iVar1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 145281000 FUN_145281000 body=77 status=ok
// SIG undefined FUN_145281000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145281000(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_144b99870(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = FUN_144b99c10(*(undefined8 *)(param_1 + 0x18),0x62,0,param_2,0x14528100a);
  return 0 < iVar1;
}



// FUNCTION 145281050 FUN_145281050 body=77 status=ok
// SIG undefined FUN_145281050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145281050(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_144b99870(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = FUN_144b99c10(*(undefined8 *)(param_1 + 0x18),0x66,0,param_2,0x14528105a);
  return 0 < iVar1;
}



// FUNCTION 1452810a0 FUN_1452810a0 body=77 status=ok
// SIG undefined FUN_1452810a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452810a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_144b99870(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = FUN_144b99c10(*(undefined8 *)(param_1 + 0x18),0x5c,0,param_2,0x1452810aa);
  return 0 < iVar1;
}



// FUNCTION 1452810f0 FUN_1452810f0 body=77 status=ok
// SIG undefined FUN_1452810f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452810f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_144b99870(*(longlong *)(param_1 + 0x20));
    return 0 < iVar1;
  }
  iVar1 = FUN_144b99c10(*(undefined8 *)(param_1 + 0x18),0x5c,0,param_2,0x1452810fa);
  return 0 < iVar1;
}



// FUNCTION 145281140 FUN_145281140 body=283 status=ok
// SIG undefined FUN_145281140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145281140(byte *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 1;
  if (((*param_1 & 2) != 0) &&
     ((iVar2 = _stricmp(param_2,"+automatic"), iVar2 == 0 ||
      (iVar2 = _stricmp(param_2,"automatic"), iVar2 == 0)))) {
    return true;
  }
  lVar3 = 0;
  if ((*param_1 & 1) == 0) {
LAB_1452811d7:
    iVar2 = FUN_14527ff60(param_2);
    if (((iVar2 == 0) && (iVar2 = FUN_144ea96a0(param_2), iVar2 == 0)) ||
       (lVar3 = FUN_144ed2de0(iVar2), lVar3 == 0)) {
      bVar1 = false;
    }
    else {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        if (*(longlong *)(param_1 + 0x20) != 0) {
          iVar5 = FUN_144b99870(*(longlong *)(param_1 + 0x20),4,0,lVar3);
        }
      }
      else {
        iVar5 = FUN_144b99c10(*(longlong *)(param_1 + 0x18),4,0,lVar3);
      }
      FUN_144ed2e50(lVar3);
      bVar1 = 0 < iVar5;
    }
  }
  else {
    do {
      lVar4 = lVar3 + 1;
      if (param_2[lVar3] != (&DAT_149d0972c)[lVar3]) goto LAB_1452811d7;
      lVar3 = lVar4;
    } while (lVar4 != 5);
    bVar1 = true;
  }
  return bVar1;
}



// FUNCTION 145281260 FUN_145281260 body=85 status=ok
// SIG undefined FUN_145281260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_145281260(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_144b97ed0();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_144b98af0(*(longlong *)(param_1 + 0x20),param_2);
  }
  return 0 < iVar1;
}



// FUNCTION 1452812c0 FUN_1452812c0 body=85 status=ok
// SIG undefined FUN_1452812c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452812c0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_144ea3110();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_144ea3160(*(longlong *)(param_1 + 0x20),param_2);
  }
  return 0 < iVar1;
}



// FUNCTION 145281320 FUN_145281320 body=75 status=ok
// SIG undefined FUN_145281320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145281320(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xa0) = 9;
  *(undefined ***)(param_1 + 0x98) = &PTR_DAT_149d08f50;
  FUN_144ba1dc0(param_2,0x2c,1,FUN_145281850,param_1);
  return;
}



// FUNCTION 145281370 FUN_145281370 body=29 status=ok
// SIG undefined FUN_145281370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145281370(longlong param_1,undefined8 param_2)

{
  FUN_1452819a0(param_1,param_2,*(undefined8 *)(param_1 + 0x88));
  return;
}



// FUNCTION 145281390 FUN_145281390 body=29 status=ok
// SIG undefined FUN_145281390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145281390(longlong param_1,undefined8 param_2)

{
  FUN_1452819a0(param_1,param_2,*(undefined8 *)(param_1 + 0x90));
  return;
}



// FUNCTION 1452813b0 FUN_1452813b0 body=88 status=ok
// SIG undefined FUN_1452813b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 * FUN_1452813b0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    return &DAT_fffffffd;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0xf;
  *(undefined ***)(param_1 + 0x98) = &PTR_s_SessionTicket_149d090b0;
  puVar1 = (undefined1 *)FUN_144ba1dc0(param_2,0x2c,1,FUN_145281850,param_1);
  return puVar1;
}



// FUNCTION 145281410 FUN_145281410 body=40 status=ok
// SIG undefined FUN_145281410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145281410(void)

{
  FUN_144ea6670(0xb0,"ssl\\ssl_conf.c",0x375);
  return;
}



// FUNCTION 145281440 FUN_145281440 body=238 status=ok
// SIG undefined FUN_145281440(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145281440(byte *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_1452814c1;
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x488);
  }
  else {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x138);
  }
  if ((plVar5 != (longlong *)0x0) && ((*param_1 & 0x40) != 0)) {
    uVar3 = 0;
    pbVar4 = param_1 + 0x30;
    do {
      plVar5 = plVar5 + 5;
      if (((*(longlong *)pbVar4 != 0) && (*plVar5 == 0)) &&
         (iVar2 = FUN_145280960(param_1), iVar2 == 0)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      pbVar4 = pbVar4 + 8;
    } while (uVar3 < 9);
  }
LAB_1452814c1:
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        FUN_144babe00(lVar1,FUN_144eabc40);
      }
      else {
        FUN_144b9ce40(*(longlong *)(param_1 + 0x18),lVar1);
      }
    }
    else {
      FUN_144b9ce00(*(longlong *)(param_1 + 0x20),lVar1);
    }
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
  }
  return 1;
}



// FUNCTION 145281530 FUN_145281530 body=157 status=ok
// SIG undefined FUN_145281530(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145281530(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    lVar2 = 9;
    do {
      FUN_144ea6530(*puVar1,"ssl\\ssl_conf.c",0x3a0);
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    FUN_144ea6530(*(undefined8 *)(param_1 + 8),"ssl\\ssl_conf.c",0x3a1);
    FUN_144babe00(*(undefined8 *)(param_1 + 0xa8),FUN_144eabc40);
    FUN_144ea6530(param_1,"ssl\\ssl_conf.c",0x3a3);
  }
  return;
}



// FUNCTION 1452815d0 FUN_1452815d0 body=5 status=ok
// SIG undefined FUN_1452815d0(void)

uint FUN_1452815d0(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | param_2;
  return *param_1;
}



// FUNCTION 1452815e0 FUN_1452815e0 body=114 status=ok
// SIG undefined FUN_1452815e0(void)

void FUN_1452815e0(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x28) = param_2 + 0x5cc;
    *(longlong *)(param_1 + 0x88) = param_2 + 0x5d4;
    *(longlong *)(param_1 + 0x90) = param_2 + 0x5d8;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_2 + 0x488) + 0x1c;
    *(longlong *)(param_1 + 0x80) = param_2 + 0x558;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 145281660 FUN_145281660 body=114 status=ok
// SIG undefined FUN_145281660(void)

void FUN_145281660(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x28) = param_2 + 0x120;
    *(longlong *)(param_1 + 0x88) = param_2 + 0x128;
    *(longlong *)(param_1 + 0x90) = param_2 + 300;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_2 + 0x138) + 0x1c;
    *(longlong *)(param_1 + 0x80) = param_2 + 0x158;
    return;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1452816e0 FUN_1452816e0 body=367 status=ok
// SIG undefined FUN_1452816e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 * FUN_1452816e0(byte *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong local_res10 [3];
  undefined8 in_stack_ffffffffffffffe8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar5 = 0x1452816f5;
  local_res10[0] = param_2;
  if (param_2 == 0) {
    FUN_144ba24f0(0x14,0x14e,0x181,"ssl\\ssl_conf.c",CONCAT44(uVar4,0x323),0x1452816f5);
    return (undefined1 *)0x0;
  }
  iVar1 = FUN_145281a80(param_1,local_res10);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)FUN_145281b60(param_1,local_res10[0]);
    if (puVar2 == (undefined8 *)0x0) {
      if ((*param_1 & 0x10) != 0) {
        FUN_144ba24f0(0x14,0x14e,0x182,"ssl\\ssl_conf.c",CONCAT44(uVar4,0x340),uVar5);
        FUN_144ba2bd0(2,&DAT_149d09748,local_res10[0]);
      }
    }
    else {
      if (*(short *)((longlong)puVar2 + 0x1a) == 4) {
        puVar3 = (undefined1 *)FUN_145281c40(param_1,puVar2);
        return puVar3;
      }
      if (param_3 == 0) {
        return &DAT_fffffffd;
      }
      iVar1 = (*(code *)*puVar2)(param_1,param_3);
      if (0 < iVar1) {
        return (undefined1 *)0x2;
      }
      if (iVar1 != -2) {
        if ((*param_1 & 0x10) != 0) {
          FUN_144ba24f0(0x14,0x14e,0x180,"ssl\\ssl_conf.c",CONCAT44(uVar4,0x339),uVar5);
          FUN_144ba2bd0(4,&DAT_149d09748,local_res10[0],", value=",param_3);
        }
        return (undefined1 *)0x0;
      }
    }
  }
  return (undefined1 *)0xfffffffe;
}



// FUNCTION 145281850 FUN_145281850 body=331 status=ok
// SIG undefined FUN_145281850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145281850(char *param_1,int param_2,uint *param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  uint *puVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  
  bVar3 = true;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar8 = 0;
  if (param_2 != -1) {
    if (*param_1 != '+') {
      if (*param_1 != '-') goto LAB_1452818ad;
      bVar3 = false;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
LAB_1452818ad:
  puVar7 = *(undefined8 **)(param_3 + 0x26);
  if (*(longlong *)(param_3 + 0x28) != 0) {
    do {
      if ((*(uint *)((longlong)puVar7 + 0xc) & *param_3 & 0xc) != 0) {
        if (param_2 == -1) {
          pbVar4 = (byte *)*puVar7;
          lVar10 = (longlong)param_1 - (longlong)pbVar4;
          do {
            pbVar1 = pbVar4 + lVar10;
            iVar6 = (uint)*pbVar4 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar4 = pbVar4 + 1;
          } while (*pbVar1 != 0);
        }
        else {
          if (*(int *)(puVar7 + 1) != param_2) goto LAB_14528190f;
          iVar6 = _strnicmp((char *)*puVar7,param_1,(longlong)param_2);
        }
        if (iVar6 == 0) {
          puVar5 = *(uint **)(param_3 + 10);
          if (puVar5 != (uint *)0x0) {
            bVar2 = (bool)(bVar3 ^ 1);
            if ((*(uint *)((longlong)puVar7 + 0xc) & 1) == 0) {
              bVar2 = bVar3;
            }
            uVar9 = *(uint *)((longlong)puVar7 + 0xc) & 0xf00;
            if (uVar9 != 0) {
              if (uVar9 == 0x100) {
                puVar5 = *(uint **)(param_3 + 0x1e);
              }
              else {
                if (uVar9 != 0x200) {
                  return 1;
                }
                puVar5 = *(uint **)(param_3 + 0x20);
              }
            }
            if (bVar2) {
              *puVar5 = *puVar5 | *(uint *)(puVar7 + 2);
              return 1;
            }
            *puVar5 = *puVar5 & ~*(uint *)(puVar7 + 2);
          }
          return 1;
        }
      }
LAB_14528190f:
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 3;
    } while (uVar8 < *(ulonglong *)(param_3 + 0x28));
  }
  return 0;
}



// FUNCTION 1452819a0 FUN_1452819a0 body=211 status=ok
// SIG undefined FUN_1452819a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452819a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 == (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x598);
  }
  uVar7 = 0;
  ppuVar8 = &PTR_DAT_149d09030;
  do {
    pcVar4 = *ppuVar8;
    lVar6 = param_2 - (longlong)pcVar4;
    do {
      cVar1 = *pcVar4;
      cVar2 = pcVar4[lVar6];
      if (cVar1 != cVar2) break;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      if (*(int *)(&UNK_149d09038 + uVar7 * 0x10) < 0) {
        return 0;
      }
      uVar5 = FUN_144eb5480(*(undefined4 *)*puVar3,*(int *)(&UNK_149d09038 + uVar7 * 0x10),param_3);
      return uVar5;
    }
    uVar7 = uVar7 + 1;
    ppuVar8 = ppuVar8 + 2;
    if (7 < uVar7) {
      return 0;
    }
  } while( true );
}



// FUNCTION 145281a80 FUN_145281a80 body=211 status=ok
// SIG undefined FUN_145281a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145281a80(byte *param_1,longlong *param_2)

{
  char cVar1;
  char *_Str1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  if ((param_2 != (longlong *)0x0) && (_Str1 = (char *)*param_2, _Str1 != (char *)0x0)) {
    if (*(char **)(param_1 + 8) == (char *)0x0) {
      if ((*param_1 & 1) != 0) {
        if (*_Str1 != '-') {
          return 0;
        }
        if (_Str1[1] == '\0') {
          return 0;
        }
        *param_2 = (longlong)(_Str1 + 1);
      }
      return 1;
    }
    cVar1 = *_Str1;
    pcVar4 = _Str1;
    for (uVar2 = 0; (cVar1 != '\0' && (uVar2 < 0x80000000)); uVar2 = uVar2 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    if (((*(ulonglong *)(param_1 + 0x10) < (ulonglong)(uVar2 & 0x7fffffff)) &&
        (((*param_1 & 1) == 0 ||
         (iVar3 = strncmp(_Str1,*(char **)(param_1 + 8),*(ulonglong *)(param_1 + 0x10)), iVar3 == 0)
         ))) && (((*param_1 & 2) == 0 ||
                 (iVar3 = _strnicmp((char *)*param_2,*(char **)(param_1 + 8),
                                    *(size_t *)(param_1 + 0x10)), iVar3 == 0)))) {
      *param_2 = *param_2 + *(longlong *)(param_1 + 0x10);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145281b60 FUN_145281b60 body=221 status=ok
// SIG undefined FUN_145281b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * FUN_145281b60(uint *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_2 == (char *)0x0) {
    return (undefined *)0x0;
  }
  puVar7 = &DAT_149d088a0;
  uVar8 = 0;
  do {
    uVar3 = *(ushort *)(puVar7 + 0x18);
    uVar4 = *param_1;
    if (((((uVar3 & 8) == 0) || ((uVar4 & 8) != 0)) && (((uVar3 & 4) == 0 || ((uVar4 & 4) != 0))))
       && (((uVar3 & 0x20) == 0 || ((uVar4 & 0x20) != 0)))) {
      if (((uVar4 & 1) != 0) && (pcVar6 = *(char **)(puVar7 + 0x10), pcVar6 != (char *)0x0)) {
        lVar9 = (longlong)param_2 - (longlong)pcVar6;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[lVar9];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          return puVar7;
        }
      }
      if ((((uVar4 & 2) != 0) && (*(char **)(puVar7 + 8) != (char *)0x0)) &&
         (iVar5 = _stricmp(*(char **)(puVar7 + 8),param_2), iVar5 == 0)) {
        return puVar7;
      }
    }
    uVar8 = uVar8 + 1;
    puVar7 = puVar7 + 0x20;
    if (0x2f < uVar8) {
      return (undefined *)0x0;
    }
  } while( true );
}



// FUNCTION 145281c40 FUN_145281c40 body=120 status=ok
// SIG undefined FUN_145281c40(void)

undefined8 FUN_145281c40(longlong param_1,longlong param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = param_2 + -0x149d088a0 >> 5;
  if (0x15 < uVar2) {
    return 0;
  }
  puVar1 = *(uint **)(param_1 + 0x28);
  if (puVar1 != (uint *)0x0) {
    uVar3 = *(uint *)(&DAT_149d08ea4 + uVar2 * 8) & 0xf00;
    if (uVar3 != 0) {
      if (uVar3 == 0x100) {
        puVar1 = *(uint **)(param_1 + 0x78);
      }
      else {
        if (uVar3 != 0x200) {
          return 1;
        }
        puVar1 = *(uint **)(param_1 + 0x80);
      }
    }
    if ((~*(uint *)(&DAT_149d08ea4 + uVar2 * 8) & 1) != 0) {
      *puVar1 = *puVar1 | *(uint *)(&DAT_149d08ea0 + uVar2 * 8);
      return 1;
    }
    *puVar1 = *puVar1 & ~*(uint *)(&DAT_149d08ea0 + uVar2 * 8);
  }
  return 1;
}



// FUNCTION 145281cd0 FUN_145281cd0 body=29 status=ok
// SIG undefined FUN_145281cd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145281cd0(void)

{
  FUN_144efec20(&DAT_149d09800);
  return;
}



// FUNCTION 145281cf0 FUN_145281cf0 body=29 status=ok
// SIG undefined FUN_145281cf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145281cf0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d09800);
  return;
}



// FUNCTION 145281d20 FUN_145281d20 body=73 status=ok
// SIG undefined FUN_145281d20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145281d20(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_144ef5cb0(&DAT_14993910e,*param_2,local_res18);
  FUN_144ef5d30("pathlen",*(undefined8 *)(param_2 + 2),local_res18);
  return local_res18[0];
}



// FUNCTION 145281d70 FUN_145281d70 body=406 status=ok
// SIG undefined FUN_145281d70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145281d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar3 = FUN_144efec20(&DAT_149d09950);
  if (lVar3 == 0) {
    FUN_144ba24f0(0x22,0x66,0x41,"crypto\\x509v3\\v3_bcons.c",0x3f);
    return 0;
  }
  iVar7 = 0;
  iVar2 = FUN_144babbf0(param_3);
  if (0 < iVar2) {
    do {
      puVar4 = (undefined8 *)FUN_144babc00(param_3,iVar7);
      pcVar1 = (char *)puVar4[1];
      if (((*pcVar1 == 'C') && (pcVar1[1] == 'A')) && (pcVar1[2] == '\0')) {
        iVar2 = FUN_144ef5960(puVar4,lVar3);
      }
      else {
        lVar5 = 0;
        do {
          lVar6 = lVar5 + 1;
          if (pcVar1[lVar5] != "pathlen"[lVar5]) {
            FUN_144ba24f0(0x22,0x66,0x6a,"crypto\\x509v3\\v3_bcons.c",0x4b);
            FUN_144ba2bd0(6,"section:",*puVar4,",name:",puVar4[1],",value:",puVar4[2]);
            goto LAB_145281ef0;
          }
          lVar5 = lVar6;
        } while (lVar6 != 8);
        iVar2 = FUN_144ef5bd0(puVar4,lVar3 + 8);
      }
      if (iVar2 == 0) {
LAB_145281ef0:
        FUN_144eff330(lVar3,&DAT_149d09950);
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar2 = FUN_144babbf0(param_3);
    } while (iVar7 < iVar2);
  }
  return lVar3;
}



// FUNCTION 145281f20 FUN_145281f20 body=29 status=ok
// SIG undefined FUN_145281f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145281f20(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d09950);
  return;
}



// FUNCTION 145281f40 FUN_145281f40 body=91 status=ok
// SIG undefined FUN_145281f40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145281f40(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  undefined8 uVar2;
  
  uVar2 = 0x145281f4c;
  local_res8[0] = *(undefined8 *)(param_1 + 2);
  lVar1 = FUN_144eff7f0(0,local_res8,*param_1,param_2);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xd,199,0x6e,"crypto\\asn1\\asn_pack.c",0x3c,uVar2);
  }
  return lVar1;
}



// FUNCTION 145281fa0 FUN_145281fa0 body=284 status=ok
// SIG undefined FUN_145281fa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_145281fa0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x145281fbb;
  if (((param_3 == (longlong *)0x0) || (piVar2 = (int *)*param_3, piVar2 == (int *)0x0)) &&
     (piVar2 = (int *)FUN_144f03a20(), piVar2 == (int *)0x0)) {
    FUN_144ba24f0(0xd,0xc6,0x41,"crypto\\asn1\\asn_pack.c",0x16,uVar5);
  }
  else {
    FUN_144ea6530(*(undefined8 *)(piVar2 + 2),"crypto\\asn1\\asn_pack.c",0x1d);
    piVar2[2] = 0;
    piVar2[3] = 0;
    iVar1 = FUN_144f01520(param_1,piVar2 + 2,param_2);
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      uVar4 = 0x21;
      uVar3 = 0x70;
    }
    else {
      if (*(longlong *)(piVar2 + 2) != 0) {
        if (param_3 == (longlong *)0x0) {
          return piVar2;
        }
        if (*param_3 == 0) {
          *param_3 = (longlong)piVar2;
          return piVar2;
        }
        return piVar2;
      }
      uVar4 = 0x25;
      uVar3 = 0x41;
    }
    FUN_144ba24f0(0xd,0xc6,uVar3,"crypto\\asn1\\asn_pack.c",uVar4,uVar5);
    if ((param_3 == (longlong *)0x0) || (*param_3 == 0)) {
      FUN_144f03a80(piVar2);
    }
  }
  return (int *)0x0;
}



// FUNCTION 1452820c0 FUN_1452820c0 body=138 status=ok
// SIG undefined FUN_1452820c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452820c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    param_1 = FUN_144bab020();
  }
  if (param_2 == 0) {
    uVar1 = FUN_144bb4f50(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144bb4f40(param_2);
    uVar2 = FUN_144bb4f30(param_2);
  }
  uVar3 = FUN_144bb6790(param_3);
  FUN_145282150(param_1,uVar1,uVar3,uVar2);
  return;
}



// FUNCTION 145282150 FUN_145282150 body=361 status=ok
// SIG undefined FUN_145282150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145282150(undefined8 param_1,undefined8 param_2,int *param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x145282161;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)FUN_144ec67f0();
  if (plVar2 != (longlong *)0x0) {
    FUN_144ed0860(*plVar2);
    iVar1 = FUN_144ba3cb0(param_1);
    if (iVar1 == 0) {
      local_98 = CONCAT44(local_98._4_4_,0x3a);
      uVar5 = 0x78;
LAB_1452821bc:
      FUN_144ba24f0(0x27,0x65,uVar5,"crypto\\ocsp\\ocsp_lib.c");
    }
    else {
      lVar3 = FUN_144ea8d60(iVar1);
      *plVar2 = lVar3;
      if (lVar3 != 0) {
        puVar4 = (undefined4 *)FUN_144efe770();
        plVar2[1] = (longlong)puVar4;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 5;
          iVar1 = FUN_144bb5a40(param_2,param_1,local_78,local_88);
          if (iVar1 == 0) {
            local_98 = CONCAT44(local_98._4_4_,0x55);
            uVar5 = 0x66;
            goto LAB_1452821bc;
          }
          iVar1 = FUN_144ef2c50(plVar2 + 2,local_78,local_88[0]);
          if (iVar1 != 0) {
            local_90 = 0;
            local_98 = param_1;
            iVar1 = FUN_144ba5d40(*(undefined8 *)(param_3 + 2),(longlong)*param_3,local_78,local_88)
            ;
            if (((iVar1 != 0) &&
                (iVar1 = FUN_144ef2c50(plVar2 + 5,local_78,local_88[0]), iVar1 != 0)) &&
               ((param_4 == 0 || (iVar1 = FUN_144f03b30(plVar2 + 8,param_4), iVar1 != 0))))
            goto LAB_1452821cb;
          }
        }
      }
    }
  }
  FUN_144ec6810(plVar2);
LAB_1452821cb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1452822d0 FUN_1452822d0 body=81 status=ok
// SIG undefined FUN_1452822d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452822d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_14526beb0(*param_1,*param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_144ef2c30(param_1 + 2,param_2 + 2);
    if (iVar1 == 0) {
      FUN_144ef2c30(param_1 + 5,param_2 + 5);
    }
  }
  return;
}



// FUNCTION 145282330 FUN_145282330 body=98 status=ok
// SIG undefined FUN_145282330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145282330(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_14526beb0(*param_1,*param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_144ef2c30(param_1 + 2,param_2 + 2);
    if (iVar1 == 0) {
      iVar1 = FUN_144ef2c30(param_1 + 5,param_2 + 5);
      if (iVar1 == 0) {
        FUN_144ef10c0(param_1 + 8,param_2 + 8);
      }
    }
  }
  return;
}



// FUNCTION 1452823a0 FUN_1452823a0 body=397 status=ok
// SIG undefined FUN_1452823a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452823a0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1452823ba;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar8 = 0;
  iVar1 = FUN_144babbf0(param_2);
  lVar7 = param_3;
  lVar3 = param_3;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined8 *)FUN_144babc00(param_2,iVar8);
      lVar3 = FUN_1452ab6d0(param_1,puVar2[1],lVar7);
      if (lVar3 == 0) {
LAB_1452824dd:
        local_a8 = CONCAT44(local_a8._4_4_,0x5e);
        FUN_144ba24f0(0x22,0x8a,0x41,"crypto\\x509v3\\v3_info.c");
        if ((param_3 == 0) && (lVar7 != 0)) {
          FUN_144babe00(lVar7,FUN_144ef58f0);
        }
        goto LAB_14528251d;
      }
      lVar4 = FUN_144babc00(lVar3,iVar8);
      FUN_144ed0b30(local_98,0x50,*puVar2);
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar7) != '\0');
      lVar6 = -1;
      do {
        lVar5 = lVar6 + 1;
        lVar9 = lVar6 + 1;
        lVar6 = lVar5;
      } while (local_98[lVar9] != '\0');
      lVar9 = (longlong)((int)lVar7 + (int)lVar5 + 4);
      lVar6 = FUN_144ea64e0(lVar9,"crypto\\x509v3\\v3_info.c",0x52);
      lVar7 = lVar3;
      if (lVar6 == 0) goto LAB_1452824dd;
      local_a8 = *(undefined8 *)(lVar4 + 8);
      FUN_144ec7760(lVar6,lVar9,"%s - %s",local_98);
      FUN_144ea6530(*(undefined8 *)(lVar4 + 8),"crypto\\x509v3\\v3_info.c",0x56);
      *(longlong *)(lVar4 + 8) = lVar6;
      iVar8 = iVar8 + 1;
      iVar1 = FUN_144babbf0(param_2);
    } while (iVar8 < iVar1);
  }
  if ((param_3 == 0) && (lVar3 == 0)) {
    FUN_144babca0();
  }
LAB_14528251d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 145282550 FUN_145282550 body=572 status=ok
// SIG undefined FUN_145282550(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145282550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 local_48 [8];
  char *local_40;
  undefined8 local_38;
  
  iVar2 = FUN_144babbf0(param_3);
  lVar3 = FUN_144babce0(0,iVar2);
  if (lVar3 == 0) {
    FUN_144ba24f0(0x22,0x8b,0x41,"crypto\\x509v3\\v3_info.c",0x72);
    return 0;
  }
  iVar8 = 0;
  if (0 < iVar2) {
    do {
      lVar4 = FUN_144babc00(param_3,iVar8);
      plVar5 = (longlong *)FUN_144efec20(&DAT_149d09b10);
      if (plVar5 == (longlong *)0x0) {
        uVar10 = 0x79;
LAB_14528275c:
        uVar9 = 0x41;
LAB_145282762:
        FUN_144ba24f0(0x22,0x8b,uVar9,"crypto\\x509v3\\v3_info.c",uVar10);
LAB_145282776:
        FUN_144babe00(lVar3,FUN_1452827b0);
        return 0;
      }
      FUN_144bac1c0(lVar3,plVar5);
      pcVar6 = strchr(*(char **)(lVar4 + 8),0x3b);
      if (pcVar6 == (char *)0x0) {
        uVar10 = 0x80;
        uVar9 = 0x8f;
        goto LAB_145282762;
      }
      iVar1 = *(int *)(lVar4 + 8);
      local_40 = pcVar6 + 1;
      local_38 = *(undefined8 *)(lVar4 + 0x10);
      lVar7 = FUN_1452abf80(plVar5[1],param_1,param_2,local_48,0);
      if (lVar7 == 0) goto LAB_145282776;
      lVar4 = FUN_144ea6e30(*(undefined8 *)(lVar4 + 8),(longlong)((int)pcVar6 - iVar1),
                            "crypto\\x509v3\\v3_info.c",0x88);
      if (lVar4 == 0) {
        uVar10 = 0x8a;
        goto LAB_14528275c;
      }
      lVar7 = FUN_144ea90e0(lVar4,0);
      *plVar5 = lVar7;
      if (lVar7 == 0) {
        FUN_144ba24f0(0x22,0x8b,0x77,"crypto\\x509v3\\v3_info.c",0x90);
        FUN_144ba2bd0(2,"value=",lVar4);
        FUN_144ea6530(lVar4,"crypto\\x509v3\\v3_info.c",0x92);
        goto LAB_145282776;
      }
      FUN_144ea6530(lVar4,"crypto\\x509v3\\v3_info.c",0x95);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar2);
  }
  return lVar3;
}



// FUNCTION 1452827b0 FUN_1452827b0 body=29 status=ok
// SIG undefined FUN_1452827b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452827b0(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_149d09b10);
  return;
}



// FUNCTION 1452827d0 FUN_1452827d0 body=22 status=ok
// SIG undefined FUN_1452827d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452827d0(void)

{
  FUN_144ecf480();
  return;
}



// FUNCTION 1452827f0 FUN_1452827f0 body=22 status=ok
// SIG undefined FUN_1452827f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452827f0(void)

{
  FUN_144ecf410();
  return;
}



// FUNCTION 145282810 FUN_145282810 body=22 status=ok
// SIG undefined FUN_145282810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145282810(void)

{
  FUN_144ecf250();
  return;
}



// FUNCTION 145282830 FUN_145282830 body=22 status=ok
// SIG undefined FUN_145282830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145282830(void)

{
  FUN_144ecf1c0();
  return;
}



// FUNCTION 145282850 FUN_145282850 body=89 status=ok
// SIG undefined FUN_145282850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145282850(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x28) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014528287f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(*(longlong *)(param_1 + 0x30));
    return uVar1;
  }
  FUN_144ba24f0(0x22,0x8e,0x94,"crypto\\x509v3\\v3_conf.c",0x181);
  return 0;
}



// FUNCTION 1452828b0 FUN_1452828b0 body=43 status=ok
// SIG undefined FUN_1452828b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452828b0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  if ((param_2 != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x28) + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(undefined8 *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 1452828e0 FUN_1452828e0 body=456 status=ok
// SIG undefined FUN_1452828e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452828e0(LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  char *pcVar5;
  FILE *pFVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  int cbMultiByte;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined8 uStackY_80;
  undefined1 auStackY_78 [32];
  wchar_t local_48 [8];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1452828f3;
  local_38 = DAT_14c707940 ^ (ulonglong)local_48;
  cVar1 = *param_1;
  uVar12 = 0;
  pcVar5 = param_1;
  for (uVar9 = uVar12; (cVar1 != '\0' && (uVar9 < 0x80000000)); uVar9 = uVar9 + 1) {
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  cbMultiByte = (uVar9 & 0x7fffffff) + 1;
  uStackY_80 = 0x145282960;
  iVar3 = MultiByteToWideChar(0xfde9,8,param_1,cbMultiByte,(LPWSTR)0x0,0);
  DVar4 = 8;
  if (iVar3 < 1) {
    uStackY_80 = 0x14528296c;
    DVar4 = GetLastError();
    if (DVar4 == 0x3ec) {
      uStackY_80 = 0x145282993;
      iVar3 = MultiByteToWideChar(0xfde9,0,param_1,cbMultiByte,(LPWSTR)0x0,0);
      DVar4 = 0;
      if (0 < iVar3) goto LAB_1452829bb;
    }
    uStackY_80 = 0x14528299f;
    DVar4 = GetLastError();
    puVar10 = auStackY_78;
    puVar11 = auStackY_78;
    if (DVar4 != 0x459) goto LAB_145282a9c;
  }
  else {
LAB_1452829bb:
    uVar8 = (longlong)iVar3 * 2 + 0xf;
    if (uVar8 <= (ulonglong)((longlong)iVar3 * 2)) {
      uVar8 = 0xffffffffffffff0;
    }
    uStackY_80 = 0x1452829e0;
    lVar2 = -(uVar8 & 0xfffffffffffffff0);
    *(int *)(&stack0xffffffffffffffb0 + lVar2) = iVar3;
    *(wchar_t **)(&stack0xffffffffffffffa8 + lVar2) = (wchar_t *)((longlong)local_48 + lVar2);
    *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x145282a05;
    iVar3 = MultiByteToWideChar(0xfde9,DVar4,param_1,cbMultiByte,
                                *(LPWSTR *)(&stack0xffffffffffffffa8 + lVar2),
                                *(int *)(&stack0xffffffffffffffb0 + lVar2));
    puVar11 = auStackY_78 + lVar2;
    if (iVar3 == 0) goto LAB_145282a9c;
    cVar1 = *param_2;
    pcVar5 = param_2;
    for (; (cVar1 != '\0' && (uVar12 < 0x80000000)); uVar12 = uVar12 + 1) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    *(undefined4 *)(&stack0xffffffffffffffb0 + lVar2) = 8;
    *(wchar_t **)(&stack0xffffffffffffffa8 + lVar2) = local_48;
    *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x145282a5d;
    iVar3 = MultiByteToWideChar(0xfde9,0,param_2,(uVar12 & 0x7fffffff) + 1,
                                *(LPWSTR *)(&stack0xffffffffffffffa8 + lVar2),
                                *(int *)(&stack0xffffffffffffffb0 + lVar2));
    puVar11 = auStackY_78 + lVar2;
    if (iVar3 == 0) goto LAB_145282a9c;
    *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x145282a6e;
    pFVar6 = _wfopen((wchar_t *)((longlong)local_48 + lVar2),local_48);
    puVar11 = auStackY_78 + lVar2;
    if (pFVar6 != (FILE *)0x0) goto LAB_145282a9c;
    *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x145282a7c;
    piVar7 = _errno();
    puVar10 = auStackY_78 + lVar2;
    if (*piVar7 != 2) {
      *(undefined8 *)(auStackY_78 + lVar2 + -8) = 0x145282a8b;
      piVar7 = _errno();
      puVar10 = auStackY_78 + lVar2;
      puVar11 = auStackY_78 + lVar2;
      if (*piVar7 != 9) goto LAB_145282a9c;
    }
  }
  *(undefined8 *)(puVar10 + -8) = 0x1452829b6;
  fopen(param_1,param_2);
  puVar11 = puVar10;
LAB_145282a9c:
  uVar8 = local_38 ^ (ulonglong)local_48;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -8) = &UNK_145282aa8;
  FUN_144d8e3a0(uVar8);
}



// FUNCTION 145282ac0 FUN_145282ac0 body=151 status=ok
// SIG undefined FUN_145282ac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145282ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x145282ada;
  local_18 = 0;
  lVar2 = FUN_144ed1550();
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_145282d00(lVar2);
    uVar3 = 0;
    if (0 < iVar1) {
      iVar1 = FUN_144ed1710(lVar2,0xffffffff,4,6,param_4,param_3);
      if (0 < iVar1) {
        FUN_145282d80(lVar2,&local_18);
        uVar3 = local_18;
      }
    }
    FUN_144ed16b0(lVar2);
  }
  return uVar3;
}



// FUNCTION 145282b60 FUN_145282b60 body=127 status=ok
// SIG undefined FUN_145282b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145282b60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x28) == 0)) {
    FUN_144ba24f0(6,0x95,0x96,"crypto\\evp\\pmeth_gn.c",0x18,0x145282b6c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 2;
    if (*(code **)(lVar1 + 0x20) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x20))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 145282be0 FUN_145282be0 body=277 status=ok
// SIG undefined FUN_145282be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145282be0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x145282bf0;
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) && (*(longlong *)(*param_1 + 0x28) != 0)) {
    if ((int)param_1[4] == 2) {
      if (param_2 != (longlong *)0x0) {
        if (*param_2 == 0) {
          lVar2 = FUN_144ba6d80();
          *param_2 = lVar2;
          if (lVar2 == 0) {
            FUN_144ba24f0(6,0x94,0x41,"crypto\\evp\\pmeth_gn.c",0x39,uVar3);
            return -1;
          }
        }
        iVar1 = (**(code **)(*param_1 + 0x28))(param_1,*param_2);
        if (iVar1 < 1) {
          FUN_144ba6e60(*param_2);
          *param_2 = 0;
        }
        return iVar1;
      }
    }
    else {
      FUN_144ba24f0(6,0x94,0x97,"crypto\\evp\\pmeth_gn.c",0x2e,0x145282bf0);
    }
    return -1;
  }
  FUN_144ba24f0(6,0x94,0x96,"crypto\\evp\\pmeth_gn.c",0x29,0x145282bf0);
  return -2;
}



// FUNCTION 145282d00 FUN_145282d00 body=127 status=ok
// SIG undefined FUN_145282d00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145282d00(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_1 == (longlong *)0x0) || (lVar1 = *param_1, lVar1 == 0)) ||
     (*(longlong *)(lVar1 + 0x38) == 0)) {
    FUN_144ba24f0(6,0x93,0x96,"crypto\\evp\\pmeth_gn.c",0x4a,0x145282d0c);
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 4;
    if (*(code **)(lVar1 + 0x30) == (code *)0x0) {
      return 1;
    }
    uVar2 = (**(code **)(lVar1 + 0x30))();
    if ((int)uVar2 < 1) {
      *(undefined4 *)(param_1 + 4) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 145282d80 FUN_145282d80 body=227 status=ok
// SIG undefined FUN_145282d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145282d80(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (((param_1 != (longlong *)0x0) && (*param_1 != 0)) && (*(longlong *)(*param_1 + 0x38) != 0)) {
    if ((int)param_1[4] == 4) {
      if (param_2 != (longlong *)0x0) {
        if (*param_2 == 0) {
          lVar2 = FUN_144ba6d80();
          *param_2 = lVar2;
          if (lVar2 == 0) {
            return -1;
          }
        }
        iVar1 = (**(code **)(*param_1 + 0x38))(param_1,*param_2);
        if (iVar1 < 1) {
          FUN_144ba6e60(*param_2);
          *param_2 = 0;
        }
        return iVar1;
      }
    }
    else {
      FUN_144ba24f0(6,0x92,0x97,"crypto\\evp\\pmeth_gn.c",0x60,0x145282d90);
    }
    return -1;
  }
  FUN_144ba24f0(6,0x92,0x96,"crypto\\evp\\pmeth_gn.c",0x5c,0x145282d90);
  return -2;
}



// FUNCTION 145282e70 FUN_145282e70 body=32 status=ok
// SIG undefined FUN_145282e70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145282e70(undefined8 param_1,undefined8 param_2)

{
  FUN_144ba02f0(param_1,FUN_145282e90,param_2);
  return;
}



// FUNCTION 145282e90 FUN_145282e90 body=62 status=ok
// SIG undefined FUN_145282e90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145282e90(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba0300(param_3);
  **(undefined4 **)(lVar1 + 0x40) = param_1;
  *(undefined4 *)(*(longlong *)(lVar1 + 0x40) + 4) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000145282eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(lVar1);
  return;
}



// FUNCTION 145282ed0 FUN_145282ed0 body=113 status=ok
// SIG undefined FUN_145282ed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145282ed0(longlong param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_145282fc0(param_1 + 0x16c8,param_2 + 1);
  if ((iVar1 < 1) && ((0x1f < (uint)-iVar1 || ((*param_2 >> (-iVar1 & 0x1fU) & 1) != 0)))) {
    return 0;
  }
  FUN_14527b550(param_1 + 0xd78,param_1 + 0x16c8);
  return 1;
}



// FUNCTION 145282f50 FUN_145282f50 body=107 status=ok
// SIG undefined FUN_145282f50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145282f50(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(param_1 + 0x16c8);
  puVar2 = param_2 + 1;
  uVar1 = FUN_145282fc0(puVar3);
  if ((int)uVar1 < 1) {
    if (-uVar1 < 0x20) {
      *param_2 = *param_2 | 1 << (-uVar1 & 0x1f);
    }
    return;
  }
  if (uVar1 < 0x20) {
    *param_2 = *param_2 << ((byte)uVar1 & 0x1f) | 1;
    *(undefined8 *)puVar2 = *puVar3;
    return;
  }
  *param_2 = 1;
  *(undefined8 *)puVar2 = *puVar3;
  return;
}



// FUNCTION 145282fc0 FUN_145282fc0 body=225 status=ok
// SIG undefined FUN_145282fc0(void)

ulonglong FUN_145282fc0(byte *param_1,byte *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_1 << 0x38 | (ulonglong)param_1[1] << 0x30 |
          (ulonglong)param_1[2] << 0x28 | (ulonglong)param_1[3] << 0x20 |
          (ulonglong)param_1[4] << 0x18 | (ulonglong)param_1[5] << 0x10 |
          (ulonglong)CONCAT11(param_1[6],param_1[7]);
  uVar2 = (ulonglong)*param_2 << 0x38 | (ulonglong)param_2[1] << 0x30 |
          (ulonglong)param_2[2] << 0x28 | (ulonglong)param_2[3] << 0x20 |
          (ulonglong)param_2[4] << 0x18 | (ulonglong)param_2[5] << 0x10 |
          (ulonglong)CONCAT11(param_2[6],param_2[7]);
  uVar1 = uVar3 - uVar2;
  if ((uVar3 <= uVar2) || (-1 < (longlong)uVar1)) {
    if ((uVar3 < uVar2) && (0 < (longlong)uVar1)) {
      return 0xffffff80;
    }
    if ((longlong)uVar1 < 0x81) {
      uVar2 = uVar1 & 0xffffffff;
      if ((longlong)uVar1 < -0x80) {
        uVar2 = 0xffffff80;
      }
      return uVar2;
    }
  }
  return 0x80;
}



// FUNCTION 1452830b0 FUN_1452830b0 body=50 status=ok
// SIG undefined FUN_1452830b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1452830b0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1452830f0();
  FUN_144ba1350(param_1);
  return uVar1;
}



// FUNCTION 1452830f0 FUN_1452830f0 body=400 status=ok
// SIG undefined FUN_1452830f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452830f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_145283270;
  }
  FUN_144eede20(param_3);
  puVar4 = param_1;
  if (param_2 == param_1) {
    puVar4 = (undefined8 *)FUN_144eede90(param_3);
  }
  plVar5 = (longlong *)FUN_144eede90(param_3);
  if ((puVar4 != (undefined8 *)0x0) && (plVar5 != (longlong *)0x0)) {
    iVar2 = iVar1 * 2;
    lVar6 = FUN_144ba1290(puVar4,iVar2);
    if (lVar6 != 0) {
      if (iVar1 == 4) {
        FUN_145284c00(*puVar4,*param_2);
      }
      else if (iVar1 == 8) {
        FUN_1452845a0(*puVar4,*param_2);
      }
      else {
        if (0xf < iVar1) {
          cVar3 = FUN_144ba0420((longlong)iVar1);
          iVar7 = 1 << (cVar3 - 1U & 0x1f);
          if (iVar1 == iVar7) {
            lVar6 = FUN_144ba1290(plVar5,iVar7 * 4);
            if (lVar6 != 0) {
              FUN_1452833a0(*puVar4,*param_2,iVar1,*plVar5);
              goto LAB_14528322d;
            }
          }
          else {
            lVar6 = FUN_144ba1290(plVar5,iVar2);
            if (lVar6 != 0) {
              puVar8 = (undefined1 *)*plVar5;
              goto LAB_14528321f;
            }
          }
          goto LAB_145283256;
        }
        puVar8 = local_148;
LAB_14528321f:
        FUN_145283290(*puVar4,*param_2,iVar1,puVar8);
      }
LAB_14528322d:
      *(undefined4 *)(puVar4 + 2) = 0;
      *(int *)(puVar4 + 1) = iVar2;
      if (param_1 != puVar4) {
        FUN_144ba06b0(param_1,puVar4);
      }
    }
  }
LAB_145283256:
  FUN_144eedf20(param_3);
LAB_145283270:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
}



// FUNCTION 145283290 FUN_145283290 body=270 status=ok
// SIG undefined FUN_145283290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145283290(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  iVar4 = param_3 + -1;
  puVar5 = param_1 + 1;
  param_1[param_3 * 2 + -1] = 0;
  *param_1 = 0;
  puVar3 = param_2;
  if (0 < iVar4) {
    puVar3 = param_2 + 1;
    uVar1 = FUN_145283700(puVar5,puVar3,iVar4,*param_2);
    puVar5[iVar4] = uVar1;
    puVar5 = param_1 + 3;
  }
  if (0 < param_3 + -2) {
    iVar2 = param_3 + -2;
    lVar6 = (longlong)iVar4 * 8;
    do {
      uVar1 = *puVar3;
      lVar6 = lVar6 + -8;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -1;
      uVar1 = FUN_1452835a0(puVar5,puVar3,iVar4,uVar1);
      *(undefined8 *)(lVar6 + (longlong)puVar5) = uVar1;
      puVar5 = puVar5 + 2;
    } while (0 < iVar2);
  }
  FUN_145283a40(param_1,param_1,param_1,param_3 * 2);
  FUN_145283810(param_4,param_2,param_3);
  FUN_145283a40(param_1,param_1,param_4,param_3 * 2);
  return;
}



// FUNCTION 1452833a0 FUN_1452833a0 body=504 status=ok
// SIG undefined FUN_1452833a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452833a0(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  size_t _Size;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong local_40;
  
  iVar4 = param_3 / 2;
  if (param_3 == 4) {
    FUN_145284c00(param_1,param_2);
    return;
  }
  if (param_3 != 8) {
    if (0xf < param_3) {
      lVar8 = (longlong)iVar4 * 8 + param_2;
      iVar5 = FUN_144ba13b0(param_2,lVar8,iVar4);
      bVar3 = false;
      if (iVar5 < 1) {
        if (iVar5 < 0) {
          FUN_145283b80(param_4,lVar8,param_2,iVar4);
        }
        else {
          bVar3 = true;
        }
      }
      else {
        FUN_145283b80(param_4,param_2,lVar8,iVar4);
      }
      _Size = (longlong)param_3 * 8;
      lVar2 = param_4 + (longlong)(param_3 * 2) * 8;
      if (bVar3) {
        memset((void *)(_Size + param_4),0,_Size);
      }
      else {
        FUN_1452833a0(_Size + param_4,param_4,iVar4,lVar2);
      }
      local_40 = _Size + param_4;
      FUN_1452833a0(param_1,param_2,iVar4,lVar2);
      FUN_1452833a0(param_1 + _Size,lVar8,iVar4,lVar2);
      iVar5 = FUN_145283a40(param_4,param_1,param_1 + _Size,param_3);
      iVar6 = FUN_145283b80(local_40,param_4,local_40,param_3);
      lVar8 = (longlong)iVar4 * 8 + param_1;
      iVar7 = FUN_145283a40(lVar8,lVar8,local_40,param_3);
      iVar7 = (iVar5 - iVar6) + iVar7;
      if (iVar7 != 0) {
        puVar9 = (ulonglong *)(param_1 + (longlong)(param_3 + iVar4) * 8);
        uVar10 = *(longlong *)(param_1 + (longlong)(param_3 + iVar4) * 8) + (longlong)iVar7;
        *puVar9 = uVar10;
        if (uVar10 < (ulonglong)(longlong)iVar7) {
          do {
            puVar1 = puVar9 + 1;
            *puVar1 = *puVar1 + 1;
            puVar9 = puVar9 + 1;
          } while (*puVar1 == 0);
        }
      }
      return;
    }
    FUN_145283290(param_1,param_2,param_3);
    return;
  }
  FUN_1452845a0(param_1,param_2);
  return;
}



// FUNCTION 1452835a0 FUN_1452835a0 body=337 status=ok
// SIG undefined FUN_1452835a0(void)

ulonglong FUN_1452835a0(longlong *param_1,ulonglong *param_2,uint param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  
  uVar16 = 0;
  if (0 < (int)param_3) {
    for (; (param_3 & 0xfffffffc) != 0; param_3 = param_3 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *param_2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      auVar11[8] = *param_1 + uVar16 < uVar16;
      auVar11._0_8_ = *param_1 + uVar16;
      auVar11._9_7_ = 0;
      auVar11 = auVar1 * auVar6 + auVar11;
      *param_1 = auVar11._0_8_;
      uVar17 = auVar11._8_8_;
      uVar16 = param_1[1] + uVar17;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_4;
      auVar12[8] = uVar16 < uVar17;
      auVar12._0_8_ = uVar16;
      auVar12._9_7_ = 0;
      auVar12 = auVar2 * auVar7 + auVar12;
      param_1[1] = auVar12._0_8_;
      uVar17 = auVar12._8_8_;
      uVar16 = param_1[2] + uVar17;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      auVar13[8] = uVar16 < uVar17;
      auVar13._0_8_ = uVar16;
      auVar13._9_7_ = 0;
      auVar13 = auVar3 * auVar8 + auVar13;
      param_1[2] = auVar13._0_8_;
      uVar17 = auVar13._8_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      uVar16 = param_1[3] + uVar17;
      auVar14[8] = uVar16 < uVar17;
      auVar14._0_8_ = uVar16;
      auVar14._9_7_ = 0;
      auVar14 = auVar4 * auVar9 + auVar14;
      param_1[3] = auVar14._0_8_;
      uVar16 = auVar14._8_8_;
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    }
    if (param_3 != 0) {
      plVar18 = param_1;
      do {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = *(ulonglong *)(((longlong)param_2 - (longlong)param_1) + (longlong)plVar18);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4;
        auVar15[8] = *plVar18 + uVar16 < uVar16;
        auVar15._0_8_ = *plVar18 + uVar16;
        auVar15._9_7_ = 0;
        auVar15 = auVar5 * auVar10 + auVar15;
        *plVar18 = auVar15._0_8_;
        uVar16 = auVar15._8_8_;
        param_3 = param_3 - 1;
        plVar18 = plVar18 + 1;
      } while (param_3 != 0);
    }
    return uVar16;
  }
  return 0;
}



// FUNCTION 145283700 FUN_145283700 body=257 status=ok
// SIG undefined FUN_145283700(void)

ulonglong FUN_145283700(ulonglong *param_1,ulonglong *param_2,uint param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  
  uVar14 = 0;
  if (0 < (int)param_3) {
    for (; (param_3 & 0xfffffffc) != 0; param_3 = param_3 - 4) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *param_2;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      uVar12 = SUB168(auVar1 * auVar6,0);
      uVar14 = uVar12 + uVar14;
      *param_1 = uVar14;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_2[1];
      auVar7._8_8_ = 0;
      auVar7._0_8_ = param_4;
      uVar13 = SUB168(auVar2 * auVar7,0);
      uVar12 = uVar13 + SUB168(auVar1 * auVar6,8) + (ulonglong)(uVar14 < uVar12);
      param_1[1] = uVar12;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[2];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_4;
      uVar14 = SUB168(auVar3 * auVar8,0);
      uVar13 = uVar14 + SUB168(auVar2 * auVar7,8) + (ulonglong)(uVar12 < uVar13);
      param_1[2] = uVar13;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2[3];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_4;
      uVar12 = SUB168(auVar4 * auVar9,0);
      uVar14 = uVar12 + SUB168(auVar3 * auVar8,8) + (ulonglong)(uVar13 < uVar14);
      param_1[3] = uVar14;
      uVar14 = SUB168(auVar4 * auVar9,8) + (ulonglong)(uVar14 < uVar12);
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    }
    if (param_3 != 0) {
      puVar15 = param_2;
      do {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar14;
        uVar14 = *puVar15;
        puVar15 = puVar15 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = param_4;
        auVar11 = auVar5 * auVar10 + auVar11;
        *(longlong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar15) =
             auVar11._0_8_;
        uVar14 = auVar11._8_8_;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    return uVar14;
  }
  return 0;
}



// FUNCTION 145283810 FUN_145283810 body=157 status=ok
// SIG undefined FUN_145283810(void)

void FUN_145283810(undefined1 (*param_1) [16],ulonglong *param_2,uint param_3)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (0 < (int)param_3) {
    for (; (param_3 & 0xfffffffc) != 0; param_3 = param_3 - 4) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *param_2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *param_2;
      *param_1 = auVar2 * auVar7;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2[1];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_2[1];
      param_1[1] = auVar3 * auVar8;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2[2];
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_2[2];
      param_1[2] = auVar4 * auVar9;
      puVar1 = param_2 + 3;
      param_2 = param_2 + 4;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = *puVar1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *puVar1;
      param_1[3] = auVar5 * auVar10;
      param_1 = param_1 + 4;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *param_2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *param_2;
      param_2 = param_2 + 1;
      *param_1 = auVar6 * auVar11;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// FUNCTION 1452838b0 FUN_1452838b0 body=385 status=ok
// SIG undefined FUN_1452838b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452838b0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar6 = 0;
  iVar11 = 2;
  if (param_3 == 0) {
    return 0xffffffffffffffff;
  }
  iVar2 = FUN_144ba0420(param_3);
  uVar8 = param_1 - param_3;
  if (param_1 < param_3) {
    uVar8 = param_1;
  }
  if (0x40 - iVar2 != 0) {
    bVar1 = (byte)(0x40 - iVar2);
    param_3 = param_3 << (bVar1 & 0x3f);
    uVar8 = param_2 >> (0x40 - bVar1 & 0x3f) | uVar8 << (bVar1 & 0x3f);
    param_2 = param_2 << (bVar1 & 0x3f);
  }
  uVar10 = param_3 >> 0x20;
  do {
    if (uVar8 >> 0x20 == uVar10) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = uVar8 / uVar10;
    }
    lVar9 = uVar5 * uVar10;
    uVar7 = uVar5 * (param_3 & 0xffffffff);
    uVar3 = uVar8 - lVar9;
    if ((uVar3 & 0xffffffff00000000) == 0) {
      do {
        if (uVar7 <= (uVar3 << 0x20 | param_2 >> 0x20)) break;
        lVar9 = lVar9 - uVar10;
        uVar3 = uVar8 - lVar9;
        uVar5 = uVar5 - 1;
        uVar7 = uVar7 - (param_3 & 0xffffffff);
      } while ((uVar3 & 0xffffffff00000000) == 0);
    }
    uVar4 = (uVar7 >> 0x20) + lVar9;
    uVar3 = uVar4 + 1;
    if (uVar7 << 0x20 <= param_2) {
      uVar3 = uVar4;
    }
    if (uVar8 < uVar3) {
      uVar8 = uVar8 + param_3;
      uVar5 = uVar5 - 1;
    }
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) {
      return uVar5 | uVar6;
    }
    uVar8 = uVar8 - uVar3 << 0x20 | param_2 - (uVar7 << 0x20) >> 0x20;
    uVar6 = uVar5 << 0x20;
    param_2 = param_2 << 0x20;
  } while( true );
}



// FUNCTION 145283a40 FUN_145283a40 body=316 status=ok
// SIG undefined FUN_145283a40(void)

ulonglong FUN_145283a40(ulonglong *param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_4 < 1) {
    return 0;
  }
  uVar5 = 0;
  for (; (param_4 & 0xfffffffc) != 0; param_4 = param_4 - 4) {
    lVar2 = *param_3;
    uVar4 = *param_2 + uVar5;
    *param_1 = lVar2 + uVar4;
    lVar3 = param_3[1];
    uVar4 = (ulonglong)(uVar4 < uVar5) + (ulonglong)(lVar2 + uVar4 < uVar4);
    uVar5 = param_2[1] + uVar4;
    param_1[1] = lVar3 + uVar5;
    lVar2 = param_3[2];
    uVar4 = (ulonglong)(uVar5 < uVar4) + (ulonglong)(lVar3 + uVar5 < uVar5);
    uVar5 = param_2[2] + uVar4;
    param_1[2] = lVar2 + uVar5;
    lVar3 = param_3[3];
    uVar4 = (ulonglong)(uVar5 < uVar4) + (ulonglong)(lVar2 + uVar5 < uVar5);
    uVar5 = param_2[3] + uVar4;
    param_1[3] = lVar3 + uVar5;
    uVar5 = (ulonglong)(uVar5 < uVar4) + (ulonglong)(lVar3 + uVar5 < uVar5);
    param_2 = param_2 + 4;
    param_3 = param_3 + 4;
    param_1 = param_1 + 4;
  }
  if (param_4 != 0) {
    plVar6 = param_2;
    do {
      lVar2 = *plVar6;
      plVar1 = (longlong *)(((longlong)param_3 - (longlong)param_2) + (longlong)plVar6);
      plVar6 = plVar6 + 1;
      uVar4 = lVar2 + uVar5;
      uVar7 = *plVar1 + uVar4;
      *(ulonglong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)plVar6) = uVar7;
      uVar5 = (ulonglong)(uVar4 < uVar5) + (ulonglong)(uVar7 < uVar4);
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  return uVar5;
}



// FUNCTION 145283b80 FUN_145283b80 body=318 status=ok
// SIG undefined FUN_145283b80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_145283b80(longlong *param_1,ulonglong *param_2,ulonglong *param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = 0;
  if (0 < (int)param_4) {
    for (; (param_4 & 0xfffffffc) != 0; param_4 = param_4 - 4) {
      uVar1 = *param_2;
      uVar2 = *param_3;
      *param_1 = (uVar1 - (longlong)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = (uint)(uVar1 < uVar2);
      }
      uVar1 = param_2[1];
      uVar2 = param_3[1];
      param_1[1] = (uVar1 - (longlong)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = (uint)(uVar1 < uVar2);
      }
      uVar1 = param_2[2];
      uVar2 = param_3[2];
      param_1[2] = (uVar1 - (longlong)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = (uint)(uVar1 < uVar2);
      }
      uVar1 = param_2[3];
      uVar2 = param_3[3];
      param_1[3] = (uVar1 - (longlong)(int)uVar3) - uVar2;
      if (uVar1 != uVar2) {
        uVar3 = (uint)(uVar1 < uVar2);
      }
      param_2 = param_2 + 4;
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    }
    if (param_4 != 0) {
      lVar4 = (longlong)param_3 - (longlong)param_2;
      lVar5 = (longlong)param_1 - (longlong)param_2;
      do {
        uVar1 = *param_2;
        uVar2 = *(ulonglong *)(lVar4 + (longlong)param_2);
        *(ulonglong *)(lVar5 + (longlong)param_2) = (uVar1 - (longlong)(int)uVar3) - uVar2;
        if (uVar1 != uVar2) {
          uVar3 = (uint)(uVar1 < uVar2);
        }
        param_2 = param_2 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
  }
  return uVar3;
}



// FUNCTION 145283cc0 FUN_145283cc0 body=1778 status=ok
// SIG undefined FUN_145283cc0(void)

void FUN_145283cc0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  ulonglong uVar191;
  ulonglong uVar192;
  ulonglong uVar193;
  ulonglong uVar194;
  ulonglong uVar195;
  ulonglong uVar196;
  ulonglong uVar197;
  ulonglong uVar198;
  ulonglong uVar199;
  ulonglong uVar200;
  ulonglong uVar201;
  ulonglong uVar202;
  ulonglong uVar203;
  ulonglong uVar204;
  ulonglong uVar205;
  ulonglong uVar206;
  ulonglong uVar207;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_3;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar65,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3[1];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = *param_2;
  uVar191 = SUB168(auVar2 * auVar66,0);
  uVar199 = SUB168(auVar1 * auVar65,8) + uVar191;
  auVar129._8_8_ = 0;
  auVar129._0_8_ = uVar199;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[1];
  auVar129 = auVar3 * auVar67 + auVar129;
  param_1[1] = auVar129._0_8_;
  uVar192 = auVar129._8_8_;
  uVar191 = SUB168(auVar2 * auVar66,8) + (ulonglong)(uVar199 < uVar191) + uVar192;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = uVar191;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_3;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[2];
  auVar130 = auVar4 * auVar68 + auVar130;
  auVar131._8_8_ = 0;
  auVar131._0_8_ = auVar130._0_8_;
  uVar193 = auVar130._8_8_;
  uVar191 = (uVar191 < uVar192) + uVar193;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3[1];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[1];
  auVar131 = auVar5 * auVar69 + auVar131;
  auVar132._8_8_ = 0;
  auVar132._0_8_ = auVar131._0_8_;
  uVar194 = auVar131._8_8_;
  uVar192 = uVar191 + uVar194;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3[2];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = *param_2;
  auVar132 = auVar6 * auVar70 + auVar132;
  param_1[2] = auVar132._0_8_;
  uVar195 = auVar132._8_8_;
  uVar199 = uVar192 + uVar195;
  auVar133._8_8_ = 0;
  auVar133._0_8_ = uVar199;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[3];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = *param_2;
  auVar133 = auVar7 * auVar71 + auVar133;
  auVar134._8_8_ = 0;
  auVar134._0_8_ = auVar133._0_8_;
  uVar196 = auVar133._8_8_;
  uVar194 = (ulonglong)(uVar191 < uVar193) + (ulonglong)(uVar192 < uVar194) +
            (ulonglong)(uVar199 < uVar195) + uVar196;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[1];
  auVar134 = auVar8 * auVar72 + auVar134;
  auVar135._8_8_ = 0;
  auVar135._0_8_ = auVar134._0_8_;
  uVar191 = auVar134._8_8_;
  uVar195 = uVar194 + uVar191;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[1];
  auVar73._8_8_ = 0;
  auVar73._0_8_ = param_2[2];
  auVar135 = auVar9 * auVar73 + auVar135;
  auVar136._8_8_ = 0;
  auVar136._0_8_ = auVar135._0_8_;
  uVar192 = auVar135._8_8_;
  uVar200 = uVar195 + uVar192;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = param_2[3];
  auVar136 = auVar10 * auVar74 + auVar136;
  uVar199 = auVar136._8_8_;
  uVar201 = uVar200 + uVar199;
  auVar137._8_8_ = 0;
  auVar137._0_8_ = uVar201;
  param_1[3] = auVar136._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_3;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = param_2[4];
  auVar137 = auVar11 * auVar75 + auVar137;
  auVar138._8_8_ = 0;
  auVar138._0_8_ = auVar137._0_8_;
  uVar193 = auVar137._8_8_;
  uVar195 = (ulonglong)(uVar194 < uVar196) + (ulonglong)(uVar195 < uVar191) +
            (ulonglong)(uVar200 < uVar192) + (ulonglong)(uVar201 < uVar199) + uVar193;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_3[1];
  auVar76._8_8_ = 0;
  auVar76._0_8_ = param_2[3];
  auVar138 = auVar12 * auVar76 + auVar138;
  auVar139._8_8_ = 0;
  auVar139._0_8_ = auVar138._0_8_;
  uVar191 = auVar138._8_8_;
  uVar200 = uVar195 + uVar191;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3[2];
  auVar77._8_8_ = 0;
  auVar77._0_8_ = param_2[2];
  auVar139 = auVar13 * auVar77 + auVar139;
  auVar140._8_8_ = 0;
  auVar140._0_8_ = auVar139._0_8_;
  uVar192 = auVar139._8_8_;
  uVar201 = uVar200 + uVar192;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[3];
  auVar78._8_8_ = 0;
  auVar78._0_8_ = param_2[1];
  auVar140 = auVar14 * auVar78 + auVar140;
  auVar141._8_8_ = 0;
  auVar141._0_8_ = auVar140._0_8_;
  uVar199 = auVar140._8_8_;
  uVar204 = uVar201 + uVar199;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[4];
  auVar79._8_8_ = 0;
  auVar79._0_8_ = *param_2;
  auVar141 = auVar15 * auVar79 + auVar141;
  param_1[4] = auVar141._0_8_;
  uVar194 = auVar141._8_8_;
  uVar205 = uVar204 + uVar194;
  auVar142._8_8_ = 0;
  auVar142._0_8_ = uVar205;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[5];
  auVar80._8_8_ = 0;
  auVar80._0_8_ = *param_2;
  auVar142 = auVar16 * auVar80 + auVar142;
  auVar143._8_8_ = 0;
  auVar143._0_8_ = auVar142._0_8_;
  uVar196 = auVar142._8_8_;
  uVar191 = (ulonglong)(uVar195 < uVar193) + (ulonglong)(uVar200 < uVar191) +
            (ulonglong)(uVar201 < uVar192) + (ulonglong)(uVar204 < uVar199) +
            (ulonglong)(uVar205 < uVar194) + uVar196;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_3[4];
  auVar81._8_8_ = 0;
  auVar81._0_8_ = param_2[1];
  auVar143 = auVar17 * auVar81 + auVar143;
  auVar144._8_8_ = 0;
  auVar144._0_8_ = auVar143._0_8_;
  uVar200 = auVar143._8_8_;
  uVar192 = uVar191 + uVar200;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[3];
  auVar82._8_8_ = 0;
  auVar82._0_8_ = param_2[2];
  auVar144 = auVar18 * auVar82 + auVar144;
  auVar145._8_8_ = 0;
  auVar145._0_8_ = auVar144._0_8_;
  uVar201 = auVar144._8_8_;
  uVar199 = uVar192 + uVar201;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[2];
  auVar83._8_8_ = 0;
  auVar83._0_8_ = param_2[3];
  auVar145 = auVar19 * auVar83 + auVar145;
  auVar146._8_8_ = 0;
  auVar146._0_8_ = auVar145._0_8_;
  uVar204 = auVar145._8_8_;
  uVar193 = uVar199 + uVar204;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_3[1];
  auVar84._8_8_ = 0;
  auVar84._0_8_ = param_2[4];
  auVar146 = auVar20 * auVar84 + auVar146;
  auVar147._8_8_ = 0;
  auVar147._0_8_ = auVar146._0_8_;
  uVar205 = auVar146._8_8_;
  uVar194 = uVar193 + uVar205;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = *param_3;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = param_2[5];
  auVar147 = auVar21 * auVar85 + auVar147;
  param_1[5] = auVar147._0_8_;
  uVar197 = auVar147._8_8_;
  uVar195 = uVar194 + uVar197;
  auVar148._8_8_ = 0;
  auVar148._0_8_ = uVar195;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_3;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = param_2[6];
  auVar148 = auVar22 * auVar86 + auVar148;
  auVar149._8_8_ = 0;
  auVar149._0_8_ = auVar148._0_8_;
  uVar198 = auVar148._8_8_;
  uVar200 = (ulonglong)(uVar191 < uVar196) + (ulonglong)(uVar192 < uVar200) +
            (ulonglong)(uVar199 < uVar201) + (ulonglong)(uVar193 < uVar204) +
            (ulonglong)(uVar194 < uVar205) + (ulonglong)(uVar195 < uVar197) + uVar198;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_3[1];
  auVar87._8_8_ = 0;
  auVar87._0_8_ = param_2[5];
  auVar149 = auVar23 * auVar87 + auVar149;
  auVar150._8_8_ = 0;
  auVar150._0_8_ = auVar149._0_8_;
  uVar191 = auVar149._8_8_;
  uVar201 = uVar200 + uVar191;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_3[2];
  auVar88._8_8_ = 0;
  auVar88._0_8_ = param_2[4];
  auVar150 = auVar24 * auVar88 + auVar150;
  auVar151._8_8_ = 0;
  auVar151._0_8_ = auVar150._0_8_;
  uVar192 = auVar150._8_8_;
  uVar204 = uVar201 + uVar192;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_3[3];
  auVar89._8_8_ = 0;
  auVar89._0_8_ = param_2[3];
  auVar151 = auVar25 * auVar89 + auVar151;
  auVar152._8_8_ = 0;
  auVar152._0_8_ = auVar151._0_8_;
  uVar199 = auVar151._8_8_;
  uVar205 = uVar204 + uVar199;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_3[4];
  auVar90._8_8_ = 0;
  auVar90._0_8_ = param_2[2];
  auVar152 = auVar26 * auVar90 + auVar152;
  auVar153._8_8_ = 0;
  auVar153._0_8_ = auVar152._0_8_;
  uVar193 = auVar152._8_8_;
  uVar197 = uVar205 + uVar193;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_3[5];
  auVar91._8_8_ = 0;
  auVar91._0_8_ = param_2[1];
  auVar153 = auVar27 * auVar91 + auVar153;
  auVar154._8_8_ = 0;
  auVar154._0_8_ = auVar153._0_8_;
  uVar194 = auVar153._8_8_;
  uVar202 = uVar197 + uVar194;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_3[6];
  auVar92._8_8_ = 0;
  auVar92._0_8_ = *param_2;
  auVar154 = auVar28 * auVar92 + auVar154;
  param_1[6] = auVar154._0_8_;
  uVar195 = auVar154._8_8_;
  uVar203 = uVar202 + uVar195;
  auVar155._8_8_ = 0;
  auVar155._0_8_ = uVar203;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_3[7];
  auVar93._8_8_ = 0;
  auVar93._0_8_ = *param_2;
  auVar155 = auVar29 * auVar93 + auVar155;
  auVar156._8_8_ = 0;
  auVar156._0_8_ = auVar155._0_8_;
  uVar196 = auVar155._8_8_;
  uVar204 = (ulonglong)(uVar200 < uVar198) + (ulonglong)(uVar201 < uVar191) +
            (ulonglong)(uVar204 < uVar192) + (ulonglong)(uVar205 < uVar199) +
            (ulonglong)(uVar197 < uVar193) + (ulonglong)(uVar202 < uVar194) +
            (ulonglong)(uVar203 < uVar195) + uVar196;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_3[6];
  auVar94._8_8_ = 0;
  auVar94._0_8_ = param_2[1];
  auVar156 = auVar30 * auVar94 + auVar156;
  auVar157._8_8_ = 0;
  auVar157._0_8_ = auVar156._0_8_;
  uVar191 = auVar156._8_8_;
  uVar205 = uVar204 + uVar191;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_3[5];
  auVar95._8_8_ = 0;
  auVar95._0_8_ = param_2[2];
  auVar157 = auVar31 * auVar95 + auVar157;
  auVar158._8_8_ = 0;
  auVar158._0_8_ = auVar157._0_8_;
  uVar192 = auVar157._8_8_;
  uVar197 = uVar205 + uVar192;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_3[4];
  auVar96._8_8_ = 0;
  auVar96._0_8_ = param_2[3];
  auVar158 = auVar32 * auVar96 + auVar158;
  auVar159._8_8_ = 0;
  auVar159._0_8_ = auVar158._0_8_;
  uVar199 = auVar158._8_8_;
  uVar198 = uVar197 + uVar199;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_3[3];
  auVar97._8_8_ = 0;
  auVar97._0_8_ = param_2[4];
  auVar159 = auVar33 * auVar97 + auVar159;
  auVar160._8_8_ = 0;
  auVar160._0_8_ = auVar159._0_8_;
  uVar193 = auVar159._8_8_;
  uVar202 = uVar198 + uVar193;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_3[2];
  auVar98._8_8_ = 0;
  auVar98._0_8_ = param_2[5];
  auVar160 = auVar34 * auVar98 + auVar160;
  auVar161._8_8_ = 0;
  auVar161._0_8_ = auVar160._0_8_;
  uVar194 = auVar160._8_8_;
  uVar203 = uVar202 + uVar194;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_3[1];
  auVar99._8_8_ = 0;
  auVar99._0_8_ = param_2[6];
  auVar161 = auVar35 * auVar99 + auVar161;
  auVar162._8_8_ = 0;
  auVar162._0_8_ = auVar161._0_8_;
  uVar195 = auVar161._8_8_;
  uVar206 = uVar203 + uVar195;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *param_3;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = param_2[7];
  auVar162 = auVar36 * auVar100 + auVar162;
  param_1[7] = auVar162._0_8_;
  uVar200 = auVar162._8_8_;
  uVar207 = uVar206 + uVar200;
  auVar163._8_8_ = 0;
  auVar163._0_8_ = uVar207;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = param_3[1];
  auVar101._8_8_ = 0;
  auVar101._0_8_ = param_2[7];
  auVar163 = auVar37 * auVar101 + auVar163;
  auVar164._8_8_ = 0;
  auVar164._0_8_ = auVar163._0_8_;
  uVar201 = auVar163._8_8_;
  uVar200 = (ulonglong)(uVar204 < uVar196) + (ulonglong)(uVar205 < uVar191) +
            (ulonglong)(uVar197 < uVar192) + (ulonglong)(uVar198 < uVar199) +
            (ulonglong)(uVar202 < uVar193) + (ulonglong)(uVar203 < uVar194) +
            (ulonglong)(uVar206 < uVar195) + (ulonglong)(uVar207 < uVar200) + uVar201;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_3[2];
  auVar102._8_8_ = 0;
  auVar102._0_8_ = param_2[6];
  auVar164 = auVar38 * auVar102 + auVar164;
  auVar165._8_8_ = 0;
  auVar165._0_8_ = auVar164._0_8_;
  uVar191 = auVar164._8_8_;
  uVar204 = uVar200 + uVar191;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_3[3];
  auVar103._8_8_ = 0;
  auVar103._0_8_ = param_2[5];
  auVar165 = auVar39 * auVar103 + auVar165;
  auVar166._8_8_ = 0;
  auVar166._0_8_ = auVar165._0_8_;
  uVar192 = auVar165._8_8_;
  uVar205 = uVar204 + uVar192;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_3[4];
  auVar104._8_8_ = 0;
  auVar104._0_8_ = param_2[4];
  auVar166 = auVar40 * auVar104 + auVar166;
  auVar167._8_8_ = 0;
  auVar167._0_8_ = auVar166._0_8_;
  uVar199 = auVar166._8_8_;
  uVar197 = uVar205 + uVar199;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_3[5];
  auVar105._8_8_ = 0;
  auVar105._0_8_ = param_2[3];
  auVar167 = auVar41 * auVar105 + auVar167;
  auVar168._8_8_ = 0;
  auVar168._0_8_ = auVar167._0_8_;
  uVar193 = auVar167._8_8_;
  uVar198 = uVar197 + uVar193;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_3[6];
  auVar106._8_8_ = 0;
  auVar106._0_8_ = param_2[2];
  auVar168 = auVar42 * auVar106 + auVar168;
  auVar169._8_8_ = 0;
  auVar169._0_8_ = auVar168._0_8_;
  uVar194 = auVar168._8_8_;
  uVar202 = uVar198 + uVar194;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_3[7];
  auVar107._8_8_ = 0;
  auVar107._0_8_ = param_2[1];
  auVar169 = auVar43 * auVar107 + auVar169;
  param_1[8] = auVar169._0_8_;
  uVar195 = auVar169._8_8_;
  uVar203 = uVar202 + uVar195;
  auVar170._8_8_ = 0;
  auVar170._0_8_ = uVar203;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_3[7];
  auVar108._8_8_ = 0;
  auVar108._0_8_ = param_2[2];
  auVar170 = auVar44 * auVar108 + auVar170;
  auVar171._8_8_ = 0;
  auVar171._0_8_ = auVar170._0_8_;
  uVar196 = auVar170._8_8_;
  uVar200 = (ulonglong)(uVar200 < uVar201) + (ulonglong)(uVar204 < uVar191) +
            (ulonglong)(uVar205 < uVar192) + (ulonglong)(uVar197 < uVar199) +
            (ulonglong)(uVar198 < uVar193) + (ulonglong)(uVar202 < uVar194) +
            (ulonglong)(uVar203 < uVar195) + uVar196;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_3[6];
  auVar109._8_8_ = 0;
  auVar109._0_8_ = param_2[3];
  auVar171 = auVar45 * auVar109 + auVar171;
  auVar172._8_8_ = 0;
  auVar172._0_8_ = auVar171._0_8_;
  uVar191 = auVar171._8_8_;
  uVar201 = uVar200 + uVar191;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_3[5];
  auVar110._8_8_ = 0;
  auVar110._0_8_ = param_2[4];
  auVar172 = auVar46 * auVar110 + auVar172;
  auVar173._8_8_ = 0;
  auVar173._0_8_ = auVar172._0_8_;
  uVar192 = auVar172._8_8_;
  uVar204 = uVar201 + uVar192;
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_3[4];
  auVar111._8_8_ = 0;
  auVar111._0_8_ = param_2[5];
  auVar173 = auVar47 * auVar111 + auVar173;
  auVar174._8_8_ = 0;
  auVar174._0_8_ = auVar173._0_8_;
  uVar199 = auVar173._8_8_;
  uVar205 = uVar204 + uVar199;
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_3[3];
  auVar112._8_8_ = 0;
  auVar112._0_8_ = param_2[6];
  auVar174 = auVar48 * auVar112 + auVar174;
  auVar175._8_8_ = 0;
  auVar175._0_8_ = auVar174._0_8_;
  uVar193 = auVar174._8_8_;
  uVar197 = uVar205 + uVar193;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_3[2];
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_2[7];
  auVar175 = auVar49 * auVar113 + auVar175;
  uVar194 = auVar175._8_8_;
  uVar198 = uVar197 + uVar194;
  auVar176._8_8_ = 0;
  auVar176._0_8_ = uVar198;
  param_1[9] = auVar175._0_8_;
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_3[3];
  auVar114._8_8_ = 0;
  auVar114._0_8_ = param_2[7];
  auVar176 = auVar50 * auVar114 + auVar176;
  auVar177._8_8_ = 0;
  auVar177._0_8_ = auVar176._0_8_;
  uVar195 = auVar176._8_8_;
  uVar191 = (ulonglong)(uVar200 < uVar196) + (ulonglong)(uVar201 < uVar191) +
            (ulonglong)(uVar204 < uVar192) + (ulonglong)(uVar205 < uVar199) +
            (ulonglong)(uVar197 < uVar193) + (ulonglong)(uVar198 < uVar194) + uVar195;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_3[4];
  auVar115._8_8_ = 0;
  auVar115._0_8_ = param_2[6];
  auVar177 = auVar51 * auVar115 + auVar177;
  auVar178._8_8_ = 0;
  auVar178._0_8_ = auVar177._0_8_;
  uVar196 = auVar177._8_8_;
  uVar192 = uVar191 + uVar196;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_3[5];
  auVar116._8_8_ = 0;
  auVar116._0_8_ = param_2[5];
  auVar178 = auVar52 * auVar116 + auVar178;
  auVar179._8_8_ = 0;
  auVar179._0_8_ = auVar178._0_8_;
  uVar200 = auVar178._8_8_;
  uVar199 = uVar192 + uVar200;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_3[6];
  auVar117._8_8_ = 0;
  auVar117._0_8_ = param_2[4];
  auVar179 = auVar53 * auVar117 + auVar179;
  auVar180._8_8_ = 0;
  auVar180._0_8_ = auVar179._0_8_;
  uVar201 = auVar179._8_8_;
  uVar193 = uVar199 + uVar201;
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_3[7];
  auVar118._8_8_ = 0;
  auVar118._0_8_ = param_2[3];
  auVar180 = auVar54 * auVar118 + auVar180;
  param_1[10] = auVar180._0_8_;
  uVar204 = auVar180._8_8_;
  uVar194 = uVar193 + uVar204;
  auVar181._8_8_ = 0;
  auVar181._0_8_ = uVar194;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_3[7];
  auVar119._8_8_ = 0;
  auVar119._0_8_ = param_2[4];
  auVar181 = auVar55 * auVar119 + auVar181;
  auVar182._8_8_ = 0;
  auVar182._0_8_ = auVar181._0_8_;
  uVar205 = auVar181._8_8_;
  uVar194 = (ulonglong)(uVar191 < uVar195) + (ulonglong)(uVar192 < uVar196) +
            (ulonglong)(uVar199 < uVar200) + (ulonglong)(uVar193 < uVar201) +
            (ulonglong)(uVar194 < uVar204) + uVar205;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_3[6];
  auVar120._8_8_ = 0;
  auVar120._0_8_ = param_2[5];
  auVar182 = auVar56 * auVar120 + auVar182;
  auVar183._8_8_ = 0;
  auVar183._0_8_ = auVar182._0_8_;
  uVar191 = auVar182._8_8_;
  uVar195 = uVar194 + uVar191;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_3[5];
  auVar121._8_8_ = 0;
  auVar121._0_8_ = param_2[6];
  auVar183 = auVar57 * auVar121 + auVar183;
  auVar184._8_8_ = 0;
  auVar184._0_8_ = auVar183._0_8_;
  uVar192 = auVar183._8_8_;
  uVar196 = uVar195 + uVar192;
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_3[4];
  auVar122._8_8_ = 0;
  auVar122._0_8_ = param_2[7];
  auVar184 = auVar58 * auVar122 + auVar184;
  param_1[0xb] = auVar184._0_8_;
  uVar199 = auVar184._8_8_;
  uVar200 = uVar196 + uVar199;
  auVar185._8_8_ = 0;
  auVar185._0_8_ = uVar200;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_3[5];
  auVar123._8_8_ = 0;
  auVar123._0_8_ = param_2[7];
  auVar185 = auVar59 * auVar123 + auVar185;
  auVar186._8_8_ = 0;
  auVar186._0_8_ = auVar185._0_8_;
  uVar193 = auVar185._8_8_;
  uVar194 = (ulonglong)(uVar194 < uVar205) + (ulonglong)(uVar195 < uVar191) +
            (ulonglong)(uVar196 < uVar192) + (ulonglong)(uVar200 < uVar199) + uVar193;
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_3[6];
  auVar124._8_8_ = 0;
  auVar124._0_8_ = param_2[6];
  auVar186 = auVar60 * auVar124 + auVar186;
  auVar187._8_8_ = 0;
  auVar187._0_8_ = auVar186._0_8_;
  uVar191 = auVar186._8_8_;
  uVar195 = uVar194 + uVar191;
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_3[7];
  auVar125._8_8_ = 0;
  auVar125._0_8_ = param_2[5];
  auVar187 = auVar61 * auVar125 + auVar187;
  param_1[0xc] = auVar187._0_8_;
  uVar192 = auVar187._8_8_;
  uVar196 = uVar195 + uVar192;
  auVar188._8_8_ = 0;
  auVar188._0_8_ = uVar196;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_3[7];
  auVar126._8_8_ = 0;
  auVar126._0_8_ = param_2[6];
  auVar188 = auVar62 * auVar126 + auVar188;
  auVar189._8_8_ = 0;
  auVar189._0_8_ = auVar188._0_8_;
  uVar199 = auVar188._8_8_;
  uVar191 = (ulonglong)(uVar194 < uVar193) + (ulonglong)(uVar195 < uVar191) +
            (ulonglong)(uVar196 < uVar192) + uVar199;
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_3[6];
  auVar127._8_8_ = 0;
  auVar127._0_8_ = param_2[7];
  auVar189 = auVar63 * auVar127 + auVar189;
  param_1[0xd] = auVar189._0_8_;
  uVar193 = auVar189._8_8_;
  uVar192 = uVar191 + uVar193;
  auVar190._8_8_ = (ulonglong)(uVar191 < uVar199) + (ulonglong)(uVar192 < uVar193);
  auVar190._0_8_ = uVar192;
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_3[7];
  auVar128._8_8_ = 0;
  auVar128._0_8_ = param_2[7];
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar64 * auVar128 + auVar190;
  return;
}



// FUNCTION 1452843c0 FUN_1452843c0 body=476 status=ok
// SIG undefined FUN_1452843c0(void)

void FUN_1452843c0(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar17,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3[1];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = *param_2;
  uVar47 = SUB168(auVar2 * auVar18,0);
  uVar53 = SUB168(auVar1 * auVar17,8) + uVar47;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar53;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[1];
  auVar33 = auVar3 * auVar19 + auVar33;
  param_1[1] = auVar33._0_8_;
  uVar48 = auVar33._8_8_;
  uVar47 = SUB168(auVar2 * auVar18,8) + (ulonglong)(uVar53 < uVar47) + uVar48;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar47;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_3;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[2];
  auVar34 = auVar4 * auVar20 + auVar34;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = auVar34._0_8_;
  uVar49 = auVar34._8_8_;
  uVar47 = (uVar47 < uVar48) + uVar49;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_3[1];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[1];
  auVar35 = auVar5 * auVar21 + auVar35;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = auVar35._0_8_;
  uVar50 = auVar35._8_8_;
  uVar48 = uVar47 + uVar50;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_3[2];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *param_2;
  auVar36 = auVar6 * auVar22 + auVar36;
  param_1[2] = auVar36._0_8_;
  uVar51 = auVar36._8_8_;
  uVar53 = uVar48 + uVar51;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar53;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3[3];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *param_2;
  auVar37 = auVar7 * auVar23 + auVar37;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = auVar37._0_8_;
  uVar52 = auVar37._8_8_;
  uVar50 = (ulonglong)(uVar47 < uVar49) + (ulonglong)(uVar48 < uVar50) +
           (ulonglong)(uVar53 < uVar51) + uVar52;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_3[2];
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[1];
  auVar38 = auVar8 * auVar24 + auVar38;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = auVar38._0_8_;
  uVar47 = auVar38._8_8_;
  uVar51 = uVar50 + uVar47;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_3[1];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[2];
  auVar39 = auVar9 * auVar25 + auVar39;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = auVar39._0_8_;
  uVar48 = auVar39._8_8_;
  uVar54 = uVar51 + uVar48;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[3];
  auVar40 = auVar10 * auVar26 + auVar40;
  uVar53 = auVar40._8_8_;
  uVar55 = uVar54 + uVar53;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar55;
  param_1[3] = auVar40._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_3[1];
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[3];
  auVar41 = auVar11 * auVar27 + auVar41;
  auVar42._8_8_ = 0;
  auVar42._0_8_ = auVar41._0_8_;
  uVar49 = auVar41._8_8_;
  uVar50 = (ulonglong)(uVar50 < uVar52) + (ulonglong)(uVar51 < uVar47) +
           (ulonglong)(uVar54 < uVar48) + (ulonglong)(uVar55 < uVar53) + uVar49;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_3[2];
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[2];
  auVar42 = auVar12 * auVar28 + auVar42;
  auVar43._8_8_ = 0;
  auVar43._0_8_ = auVar42._0_8_;
  uVar47 = auVar42._8_8_;
  uVar51 = uVar50 + uVar47;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3[3];
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[1];
  auVar43 = auVar13 * auVar29 + auVar43;
  param_1[4] = auVar43._0_8_;
  uVar48 = auVar43._8_8_;
  uVar52 = uVar51 + uVar48;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = uVar52;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[3];
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[2];
  auVar44 = auVar14 * auVar30 + auVar44;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = auVar44._0_8_;
  uVar53 = auVar44._8_8_;
  uVar47 = (ulonglong)(uVar50 < uVar49) + (ulonglong)(uVar51 < uVar47) +
           (ulonglong)(uVar52 < uVar48) + uVar53;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[2];
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[3];
  auVar45 = auVar15 * auVar31 + auVar45;
  param_1[5] = auVar45._0_8_;
  uVar49 = auVar45._8_8_;
  uVar48 = uVar47 + uVar49;
  auVar46._8_8_ = (ulonglong)(uVar47 < uVar53) + (ulonglong)(uVar48 < uVar49);
  auVar46._0_8_ = uVar48;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[3];
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[3];
  *(undefined1 (*) [16])(param_1 + 6) = auVar16 * auVar32 + auVar46;
  return;
}



// FUNCTION 1452845a0 FUN_1452845a0 body=1626 status=ok
// SIG undefined FUN_1452845a0(void)

void FUN_1452845a0(undefined8 *param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  ulonglong uVar135;
  ulonglong uVar136;
  ulonglong uVar137;
  ulonglong uVar138;
  ulonglong uVar139;
  ulonglong uVar140;
  ulonglong uVar141;
  ulonglong uVar142;
  ulonglong uVar143;
  ulonglong uVar144;
  ulonglong uVar145;
  ulonglong uVar146;
  ulonglong uVar147;
  ulonglong uVar148;
  ulonglong uVar149;
  ulonglong uVar150;
  ulonglong uVar151;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar37,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = param_2[1];
  auVar2 = auVar2 * auVar38;
  uVar142 = SUB168(auVar1 * auVar37,8) + auVar2._0_8_;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = uVar142;
  param_1[1] = SUB168(auVar2 + auVar73,0);
  uVar135 = SUB168(auVar2 + auVar73,8);
  uVar142 = auVar2._8_8_ + (ulonglong)(uVar142 < auVar2._0_8_) + uVar135;
  auVar74._8_8_ = 0;
  auVar74._0_8_ = uVar142;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar39._8_8_ = 0;
  auVar39._0_8_ = param_2[1];
  auVar74 = auVar3 * auVar39 + auVar74;
  auVar108._8_8_ = 0;
  auVar108._0_8_ = auVar74._0_8_;
  uVar136 = auVar74._8_8_;
  uVar147 = (uVar142 < uVar135) + uVar136;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = param_2[2];
  auVar108 = auVar4 * auVar40 + auVar108;
  auVar75._8_8_ = 0;
  auVar75._0_8_ = auVar108._0_8_;
  uVar135 = auVar108._8_8_;
  uVar148 = uVar147 + uVar135;
  auVar75 = auVar4 * auVar40 + auVar75;
  param_1[2] = auVar75._0_8_;
  uVar137 = auVar75._8_8_;
  uVar149 = uVar148 + uVar137;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = uVar149;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = param_2[3];
  auVar109 = auVar5 * auVar41 + auVar109;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = auVar109._0_8_;
  uVar142 = auVar109._8_8_;
  uVar148 = (ulonglong)(uVar147 < uVar136) + (ulonglong)(uVar148 < uVar135) +
            (ulonglong)(uVar149 < uVar137) + uVar142;
  auVar76 = auVar5 * auVar41 + auVar76;
  auVar110._8_8_ = 0;
  auVar110._0_8_ = auVar76._0_8_;
  uVar136 = auVar76._8_8_;
  uVar149 = uVar148 + uVar136;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar42._8_8_ = 0;
  auVar42._0_8_ = param_2[2];
  auVar110 = auVar6 * auVar42 + auVar110;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = auVar110._0_8_;
  uVar135 = auVar110._8_8_;
  uVar143 = uVar149 + uVar135;
  auVar77 = auVar6 * auVar42 + auVar77;
  param_1[3] = auVar77._0_8_;
  uVar137 = auVar77._8_8_;
  uVar144 = uVar143 + uVar137;
  auVar78._8_8_ = 0;
  auVar78._0_8_ = uVar144;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar43._8_8_ = 0;
  auVar43._0_8_ = param_2[2];
  auVar78 = auVar7 * auVar43 + auVar78;
  auVar111._8_8_ = 0;
  auVar111._0_8_ = auVar78._0_8_;
  uVar147 = auVar78._8_8_;
  uVar149 = (ulonglong)(uVar148 < uVar142) + (ulonglong)(uVar149 < uVar136) +
            (ulonglong)(uVar143 < uVar135) + (ulonglong)(uVar144 < uVar137) + uVar147;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar44._8_8_ = 0;
  auVar44._0_8_ = param_2[3];
  auVar111 = auVar8 * auVar44 + auVar111;
  auVar79._8_8_ = 0;
  auVar79._0_8_ = auVar111._0_8_;
  uVar135 = auVar111._8_8_;
  uVar143 = uVar149 + uVar135;
  auVar79 = auVar8 * auVar44 + auVar79;
  auVar112._8_8_ = 0;
  auVar112._0_8_ = auVar79._0_8_;
  uVar137 = auVar79._8_8_;
  uVar144 = uVar143 + uVar137;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *param_2;
  auVar45._8_8_ = 0;
  auVar45._0_8_ = param_2[4];
  auVar112 = auVar9 * auVar45 + auVar112;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = auVar112._0_8_;
  uVar142 = auVar112._8_8_;
  uVar138 = uVar144 + uVar142;
  auVar80 = auVar9 * auVar45 + auVar80;
  param_1[4] = auVar80._0_8_;
  uVar148 = auVar80._8_8_;
  uVar139 = uVar138 + uVar148;
  auVar113._8_8_ = 0;
  auVar113._0_8_ = uVar139;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_2;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = param_2[5];
  auVar113 = auVar10 * auVar46 + auVar113;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = auVar113._0_8_;
  uVar136 = auVar113._8_8_;
  uVar143 = (ulonglong)(uVar149 < uVar147) + (ulonglong)(uVar143 < uVar135) +
            (ulonglong)(uVar144 < uVar137) + (ulonglong)(uVar138 < uVar142) +
            (ulonglong)(uVar139 < uVar148) + uVar136;
  auVar81 = auVar10 * auVar46 + auVar81;
  auVar114._8_8_ = 0;
  auVar114._0_8_ = auVar81._0_8_;
  uVar137 = auVar81._8_8_;
  uVar144 = uVar143 + uVar137;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[1];
  auVar47._8_8_ = 0;
  auVar47._0_8_ = param_2[4];
  auVar114 = auVar11 * auVar47 + auVar114;
  auVar82._8_8_ = 0;
  auVar82._0_8_ = auVar114._0_8_;
  uVar135 = auVar114._8_8_;
  uVar138 = uVar144 + uVar135;
  auVar82 = auVar11 * auVar47 + auVar82;
  auVar115._8_8_ = 0;
  auVar115._0_8_ = auVar82._0_8_;
  uVar147 = auVar82._8_8_;
  uVar139 = uVar138 + uVar147;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[2];
  auVar48._8_8_ = 0;
  auVar48._0_8_ = param_2[3];
  auVar115 = auVar12 * auVar48 + auVar115;
  auVar83._8_8_ = 0;
  auVar83._0_8_ = auVar115._0_8_;
  uVar142 = auVar115._8_8_;
  uVar150 = uVar139 + uVar142;
  auVar83 = auVar12 * auVar48 + auVar83;
  uVar148 = auVar83._8_8_;
  uVar151 = uVar150 + uVar148;
  auVar84._8_8_ = 0;
  auVar84._0_8_ = uVar151;
  param_1[5] = auVar83._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[3];
  auVar49._8_8_ = 0;
  auVar49._0_8_ = param_2[3];
  auVar84 = auVar13 * auVar49 + auVar84;
  auVar116._8_8_ = 0;
  auVar116._0_8_ = auVar84._0_8_;
  uVar149 = auVar84._8_8_;
  uVar144 = (ulonglong)(uVar143 < uVar136) + (ulonglong)(uVar144 < uVar137) +
            (ulonglong)(uVar138 < uVar135) + (ulonglong)(uVar139 < uVar147) +
            (ulonglong)(uVar150 < uVar142) + (ulonglong)(uVar151 < uVar148) + uVar149;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  auVar50._8_8_ = 0;
  auVar50._0_8_ = param_2[4];
  auVar116 = auVar14 * auVar50 + auVar116;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = auVar116._0_8_;
  uVar135 = auVar116._8_8_;
  uVar138 = uVar144 + uVar135;
  auVar85 = auVar14 * auVar50 + auVar85;
  auVar117._8_8_ = 0;
  auVar117._0_8_ = auVar85._0_8_;
  uVar147 = auVar85._8_8_;
  uVar139 = uVar138 + uVar147;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[1];
  auVar51._8_8_ = 0;
  auVar51._0_8_ = param_2[5];
  auVar117 = auVar15 * auVar51 + auVar117;
  auVar86._8_8_ = 0;
  auVar86._0_8_ = auVar117._0_8_;
  uVar142 = auVar117._8_8_;
  uVar150 = uVar139 + uVar142;
  auVar86 = auVar15 * auVar51 + auVar86;
  auVar118._8_8_ = 0;
  auVar118._0_8_ = auVar86._0_8_;
  uVar148 = auVar86._8_8_;
  uVar151 = uVar150 + uVar148;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_2;
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_2[6];
  auVar118 = auVar16 * auVar52 + auVar118;
  auVar87._8_8_ = 0;
  auVar87._0_8_ = auVar118._0_8_;
  uVar136 = auVar118._8_8_;
  uVar145 = uVar151 + uVar136;
  auVar87 = auVar16 * auVar52 + auVar87;
  param_1[6] = auVar87._0_8_;
  uVar143 = auVar87._8_8_;
  uVar146 = uVar145 + uVar143;
  auVar119._8_8_ = 0;
  auVar119._0_8_ = uVar146;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *param_2;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = param_2[7];
  auVar119 = auVar17 * auVar53 + auVar119;
  auVar88._8_8_ = 0;
  auVar88._0_8_ = auVar119._0_8_;
  uVar137 = auVar119._8_8_;
  uVar138 = (ulonglong)(uVar144 < uVar149) + (ulonglong)(uVar138 < uVar135) +
            (ulonglong)(uVar139 < uVar147) + (ulonglong)(uVar150 < uVar142) +
            (ulonglong)(uVar151 < uVar148) + (ulonglong)(uVar145 < uVar136) +
            (ulonglong)(uVar146 < uVar143) + uVar137;
  auVar88 = auVar17 * auVar53 + auVar88;
  auVar120._8_8_ = 0;
  auVar120._0_8_ = auVar88._0_8_;
  uVar147 = auVar88._8_8_;
  uVar139 = uVar138 + uVar147;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[1];
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_2[6];
  auVar120 = auVar18 * auVar54 + auVar120;
  auVar89._8_8_ = 0;
  auVar89._0_8_ = auVar120._0_8_;
  uVar135 = auVar120._8_8_;
  uVar150 = uVar139 + uVar135;
  auVar89 = auVar18 * auVar54 + auVar89;
  auVar121._8_8_ = 0;
  auVar121._0_8_ = auVar89._0_8_;
  uVar148 = auVar89._8_8_;
  uVar151 = uVar150 + uVar148;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[2];
  auVar55._8_8_ = 0;
  auVar55._0_8_ = param_2[5];
  auVar121 = auVar19 * auVar55 + auVar121;
  auVar90._8_8_ = 0;
  auVar90._0_8_ = auVar121._0_8_;
  uVar142 = auVar121._8_8_;
  uVar145 = uVar151 + uVar142;
  auVar90 = auVar19 * auVar55 + auVar90;
  auVar122._8_8_ = 0;
  auVar122._0_8_ = auVar90._0_8_;
  uVar149 = auVar90._8_8_;
  uVar146 = uVar145 + uVar149;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  auVar56._8_8_ = 0;
  auVar56._0_8_ = param_2[4];
  auVar122 = auVar20 * auVar56 + auVar122;
  auVar91._8_8_ = 0;
  auVar91._0_8_ = auVar122._0_8_;
  uVar136 = auVar122._8_8_;
  uVar140 = uVar146 + uVar136;
  auVar91 = auVar20 * auVar56 + auVar91;
  param_1[7] = auVar91._0_8_;
  uVar143 = auVar91._8_8_;
  uVar141 = uVar140 + uVar143;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = uVar141;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_2[4];
  auVar57._8_8_ = 0;
  auVar57._0_8_ = param_2[4];
  auVar92 = auVar21 * auVar57 + auVar92;
  auVar123._8_8_ = 0;
  auVar123._0_8_ = auVar92._0_8_;
  uVar144 = auVar92._8_8_;
  uVar143 = (ulonglong)(uVar138 < uVar137) + (ulonglong)(uVar139 < uVar147) +
            (ulonglong)(uVar150 < uVar135) + (ulonglong)(uVar151 < uVar148) +
            (ulonglong)(uVar145 < uVar142) + (ulonglong)(uVar146 < uVar149) +
            (ulonglong)(uVar140 < uVar136) + (ulonglong)(uVar141 < uVar143) + uVar144;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = param_2[3];
  auVar58._8_8_ = 0;
  auVar58._0_8_ = param_2[5];
  auVar123 = auVar22 * auVar58 + auVar123;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = auVar123._0_8_;
  uVar135 = auVar123._8_8_;
  uVar138 = uVar143 + uVar135;
  auVar93 = auVar22 * auVar58 + auVar93;
  auVar124._8_8_ = 0;
  auVar124._0_8_ = auVar93._0_8_;
  uVar147 = auVar93._8_8_;
  uVar139 = uVar138 + uVar147;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = param_2[2];
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_2[6];
  auVar124 = auVar23 * auVar59 + auVar124;
  auVar94._8_8_ = 0;
  auVar94._0_8_ = auVar124._0_8_;
  uVar142 = auVar124._8_8_;
  uVar150 = uVar139 + uVar142;
  auVar94 = auVar23 * auVar59 + auVar94;
  auVar125._8_8_ = 0;
  auVar125._0_8_ = auVar94._0_8_;
  uVar148 = auVar94._8_8_;
  uVar151 = uVar150 + uVar148;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = param_2[1];
  auVar60._8_8_ = 0;
  auVar60._0_8_ = param_2[7];
  auVar125 = auVar24 * auVar60 + auVar125;
  auVar95._8_8_ = 0;
  auVar95._0_8_ = auVar125._0_8_;
  uVar136 = auVar125._8_8_;
  uVar145 = uVar151 + uVar136;
  auVar95 = auVar24 * auVar60 + auVar95;
  param_1[8] = auVar95._0_8_;
  uVar149 = auVar95._8_8_;
  uVar146 = uVar145 + uVar149;
  auVar126._8_8_ = 0;
  auVar126._0_8_ = uVar146;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = param_2[2];
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_2[7];
  auVar126 = auVar25 * auVar61 + auVar126;
  auVar96._8_8_ = 0;
  auVar96._0_8_ = auVar126._0_8_;
  uVar137 = auVar126._8_8_;
  uVar143 = (ulonglong)(uVar143 < uVar144) + (ulonglong)(uVar138 < uVar135) +
            (ulonglong)(uVar139 < uVar147) + (ulonglong)(uVar150 < uVar142) +
            (ulonglong)(uVar151 < uVar148) + (ulonglong)(uVar145 < uVar136) +
            (ulonglong)(uVar146 < uVar149) + uVar137;
  auVar96 = auVar25 * auVar61 + auVar96;
  auVar127._8_8_ = 0;
  auVar127._0_8_ = auVar96._0_8_;
  uVar136 = auVar96._8_8_;
  uVar144 = uVar143 + uVar136;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = param_2[3];
  auVar62._8_8_ = 0;
  auVar62._0_8_ = param_2[6];
  auVar127 = auVar26 * auVar62 + auVar127;
  auVar97._8_8_ = 0;
  auVar97._0_8_ = auVar127._0_8_;
  uVar135 = auVar127._8_8_;
  uVar138 = uVar144 + uVar135;
  auVar97 = auVar26 * auVar62 + auVar97;
  auVar128._8_8_ = 0;
  auVar128._0_8_ = auVar97._0_8_;
  uVar147 = auVar97._8_8_;
  uVar139 = uVar138 + uVar147;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = param_2[4];
  auVar63._8_8_ = 0;
  auVar63._0_8_ = param_2[5];
  auVar128 = auVar27 * auVar63 + auVar128;
  auVar98._8_8_ = 0;
  auVar98._0_8_ = auVar128._0_8_;
  uVar142 = auVar128._8_8_;
  uVar150 = uVar139 + uVar142;
  auVar98 = auVar27 * auVar63 + auVar98;
  param_1[9] = auVar98._0_8_;
  uVar148 = auVar98._8_8_;
  uVar151 = uVar150 + uVar148;
  auVar99._8_8_ = 0;
  auVar99._0_8_ = uVar151;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = param_2[5];
  auVar64._8_8_ = 0;
  auVar64._0_8_ = param_2[5];
  auVar99 = auVar28 * auVar64 + auVar99;
  auVar129._8_8_ = 0;
  auVar129._0_8_ = auVar99._0_8_;
  uVar149 = auVar99._8_8_;
  uVar148 = (ulonglong)(uVar143 < uVar137) + (ulonglong)(uVar144 < uVar136) +
            (ulonglong)(uVar138 < uVar135) + (ulonglong)(uVar139 < uVar147) +
            (ulonglong)(uVar150 < uVar142) + (ulonglong)(uVar151 < uVar148) + uVar149;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_2[4];
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_2[6];
  auVar129 = auVar29 * auVar65 + auVar129;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = auVar129._0_8_;
  uVar135 = auVar129._8_8_;
  uVar143 = uVar148 + uVar135;
  auVar100 = auVar29 * auVar65 + auVar100;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = auVar100._0_8_;
  uVar137 = auVar100._8_8_;
  uVar144 = uVar143 + uVar137;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = param_2[3];
  auVar66._8_8_ = 0;
  auVar66._0_8_ = param_2[7];
  auVar130 = auVar30 * auVar66 + auVar130;
  auVar101._8_8_ = 0;
  auVar101._0_8_ = auVar130._0_8_;
  uVar142 = auVar130._8_8_;
  uVar138 = uVar144 + uVar142;
  auVar101 = auVar30 * auVar66 + auVar101;
  param_1[10] = auVar101._0_8_;
  uVar147 = auVar101._8_8_;
  uVar139 = uVar138 + uVar147;
  auVar131._8_8_ = 0;
  auVar131._0_8_ = uVar139;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = param_2[4];
  auVar67._8_8_ = 0;
  auVar67._0_8_ = param_2[7];
  auVar131 = auVar31 * auVar67 + auVar131;
  auVar102._8_8_ = 0;
  auVar102._0_8_ = auVar131._0_8_;
  uVar136 = auVar131._8_8_;
  uVar148 = (ulonglong)(uVar148 < uVar149) + (ulonglong)(uVar143 < uVar135) +
            (ulonglong)(uVar144 < uVar137) + (ulonglong)(uVar138 < uVar142) +
            (ulonglong)(uVar139 < uVar147) + uVar136;
  auVar102 = auVar31 * auVar67 + auVar102;
  auVar132._8_8_ = 0;
  auVar132._0_8_ = auVar102._0_8_;
  uVar142 = auVar102._8_8_;
  uVar149 = uVar148 + uVar142;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = param_2[5];
  auVar68._8_8_ = 0;
  auVar68._0_8_ = param_2[6];
  auVar132 = auVar32 * auVar68 + auVar132;
  auVar103._8_8_ = 0;
  auVar103._0_8_ = auVar132._0_8_;
  uVar135 = auVar132._8_8_;
  uVar143 = uVar149 + uVar135;
  auVar103 = auVar32 * auVar68 + auVar103;
  param_1[0xb] = auVar103._0_8_;
  uVar137 = auVar103._8_8_;
  uVar144 = uVar143 + uVar137;
  auVar104._8_8_ = 0;
  auVar104._0_8_ = uVar144;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = param_2[6];
  auVar69._8_8_ = 0;
  auVar69._0_8_ = param_2[6];
  auVar104 = auVar33 * auVar69 + auVar104;
  auVar133._8_8_ = 0;
  auVar133._0_8_ = auVar104._0_8_;
  uVar147 = auVar104._8_8_;
  uVar137 = (ulonglong)(uVar148 < uVar136) + (ulonglong)(uVar149 < uVar142) +
            (ulonglong)(uVar143 < uVar135) + (ulonglong)(uVar144 < uVar137) + uVar147;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = param_2[5];
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_2[7];
  auVar133 = auVar34 * auVar70 + auVar133;
  auVar105._8_8_ = 0;
  auVar105._0_8_ = auVar133._0_8_;
  uVar135 = auVar133._8_8_;
  uVar148 = uVar137 + uVar135;
  auVar105 = auVar34 * auVar70 + auVar105;
  param_1[0xc] = auVar105._0_8_;
  uVar136 = auVar105._8_8_;
  uVar149 = uVar148 + uVar136;
  auVar106._8_8_ = 0;
  auVar106._0_8_ = uVar149;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = param_2[6];
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_2[7];
  auVar106 = auVar35 * auVar71 + auVar106;
  auVar134._8_8_ = 0;
  auVar134._0_8_ = auVar106._0_8_;
  uVar142 = auVar106._8_8_;
  uVar136 = (ulonglong)(uVar137 < uVar147) + (ulonglong)(uVar148 < uVar135) +
            (ulonglong)(uVar149 < uVar136) + uVar142;
  auVar134 = auVar35 * auVar71 + auVar134;
  param_1[0xd] = auVar134._0_8_;
  uVar135 = auVar134._8_8_;
  uVar137 = uVar136 + uVar135;
  auVar107._8_8_ = (ulonglong)(uVar136 < uVar142) + (ulonglong)(uVar137 < uVar135);
  auVar107._0_8_ = uVar137;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = param_2[7];
  auVar72._8_8_ = 0;
  auVar72._0_8_ = param_2[7];
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar36 * auVar72 + auVar107;
  return;
}



// FUNCTION 145284c00 FUN_145284c00 body=440 status=ok
// SIG undefined FUN_145284c00(void)

void FUN_145284c00(undefined8 *param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *param_2;
  *param_1 = SUB168(auVar1 * auVar11,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[1];
  auVar2 = auVar2 * auVar12;
  uVar38 = SUB168(auVar1 * auVar11,8) + auVar2._0_8_;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar38;
  param_1[1] = SUB168(auVar2 + auVar21,0);
  uVar35 = SUB168(auVar2 + auVar21,8);
  uVar38 = auVar2._8_8_ + (ulonglong)(uVar38 < auVar2._0_8_) + uVar35;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar38;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2[1];
  auVar22 = auVar3 * auVar13 + auVar22;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = auVar22._0_8_;
  uVar36 = auVar22._8_8_;
  uVar39 = (uVar38 < uVar35) + uVar36;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_2[2];
  auVar30 = auVar4 * auVar14 + auVar30;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = auVar30._0_8_;
  uVar35 = auVar30._8_8_;
  uVar40 = uVar39 + uVar35;
  auVar23 = auVar4 * auVar14 + auVar23;
  param_1[2] = auVar23._0_8_;
  uVar37 = auVar23._8_8_;
  uVar41 = uVar40 + uVar37;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar41;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_2[3];
  auVar31 = auVar5 * auVar15 + auVar31;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = auVar31._0_8_;
  uVar38 = auVar31._8_8_;
  uVar40 = (ulonglong)(uVar39 < uVar36) + (ulonglong)(uVar40 < uVar35) +
           (ulonglong)(uVar41 < uVar37) + uVar38;
  auVar24 = auVar5 * auVar15 + auVar24;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = auVar24._0_8_;
  uVar36 = auVar24._8_8_;
  uVar41 = uVar40 + uVar36;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_2[2];
  auVar32 = auVar6 * auVar16 + auVar32;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = auVar32._0_8_;
  uVar35 = auVar32._8_8_;
  uVar42 = uVar41 + uVar35;
  auVar25 = auVar6 * auVar16 + auVar25;
  param_1[3] = auVar25._0_8_;
  uVar37 = auVar25._8_8_;
  uVar43 = uVar42 + uVar37;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar43;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_2[2];
  auVar26 = auVar7 * auVar17 + auVar26;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = auVar26._0_8_;
  uVar39 = auVar26._8_8_;
  uVar37 = (ulonglong)(uVar40 < uVar38) + (ulonglong)(uVar41 < uVar36) +
           (ulonglong)(uVar42 < uVar35) + (ulonglong)(uVar43 < uVar37) + uVar39;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_2[3];
  auVar33 = auVar8 * auVar18 + auVar33;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = auVar33._0_8_;
  uVar35 = auVar33._8_8_;
  uVar40 = uVar37 + uVar35;
  auVar27 = auVar8 * auVar18 + auVar27;
  param_1[4] = auVar27._0_8_;
  uVar36 = auVar27._8_8_;
  uVar41 = uVar40 + uVar36;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar41;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[2];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2[3];
  auVar28 = auVar9 * auVar19 + auVar28;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = auVar28._0_8_;
  uVar38 = auVar28._8_8_;
  uVar36 = (ulonglong)(uVar37 < uVar39) + (ulonglong)(uVar40 < uVar35) +
           (ulonglong)(uVar41 < uVar36) + uVar38;
  auVar34 = auVar9 * auVar19 + auVar34;
  param_1[5] = auVar34._0_8_;
  uVar35 = auVar34._8_8_;
  uVar37 = uVar36 + uVar35;
  auVar29._8_8_ = (ulonglong)(uVar36 < uVar38) + (ulonglong)(uVar37 < uVar35);
  auVar29._0_8_ = uVar37;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[3];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_2[3];
  *(undefined1 (*) [16])(param_1 + 6) = auVar10 * auVar20 + auVar29;
  return;
}



// FUNCTION 145284dc0 FUN_145284dc0 body=3 status=ok
// SIG undefined FUN_145284dc0(void)

undefined8 FUN_145284dc0(void)

{
  return 0;
}



// FUNCTION 145284dd0 FUN_145284dd0 body=105 status=ok
// SIG undefined FUN_145284dd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145284dd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ea64e0(0x18,"crypto\\conf\\conf_def.c",0x6a);
  if ((lVar2 != 0) && (iVar1 = (**(code **)(param_1 + 0x10))(lVar2), iVar1 == 0)) {
    FUN_144ea6530(lVar2,"crypto\\conf\\conf_def.c",0x6d);
    return 0;
  }
  return lVar2;
}



// FUNCTION 145284ea0 FUN_145284ea0 body=68 status=ok
// SIG undefined FUN_145284ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145284ea0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1452869f0();
    FUN_144ea6530(param_1,"crypto\\conf\\conf_def.c",0x8e);
    return 1;
  }
  return 0;
}



// FUNCTION 145284ef0 FUN_145284ef0 body=40 status=ok
// SIG undefined FUN_145284ef0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145284ef0(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  FUN_1452869f0();
  return 1;
}



// FUNCTION 145284f20 FUN_145284f20 body=200 status=ok
// SIG undefined FUN_145284f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_145284f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x145284f35;
  lVar3 = FUN_144ec7480(param_2,&DAT_149ecafe0);
  if (lVar3 != 0) {
    uVar2 = FUN_145284ff0(param_1,lVar3,param_3);
    FUN_144b9e7b0(lVar3);
    return uVar2;
  }
  uVar1 = FUN_144ba26c0();
  if ((uVar1 & 0xfff) == 0x80) {
    FUN_144ba24f0(0xe,0x78,0x72,"crypto\\conf\\conf_def.c",0xa8,uVar4);
    return 0;
  }
  FUN_144ba24f0(0xe,0x78,2,"crypto\\conf\\conf_def.c",0xaa,uVar4);
  return 0;
}



// FUNCTION 145284ff0 FUN_145284ff0 body=2697 status=ok
// SIG undefined FUN_145284ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145284ff0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  short *_Dst;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined8 uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  uint local_c8;
  int local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  longlong local_a8;
  undefined2 local_a0;
  byte *local_98;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  byte *local_78;
  ulonglong local_70;
  undefined4 *local_68;
  longlong local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14528500f;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar12 = 0;
  local_c8 = 0;
  local_ac = 1;
  local_60 = *(longlong *)(param_1 + 0x10);
  uVar20 = 0;
  uVar19 = 0;
  local_98 = (byte *)0x0;
  local_80 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b8 = param_2;
  local_68 = param_3;
  local_a8 = FUN_144ea6fc0();
  if (local_a8 == 0) {
    local_d8 = 0xcb;
    FUN_144ba24f0(0xe,0x79,7,"crypto\\conf\\conf_def.c");
    uVar19 = uVar12;
    uVar20 = uVar12;
    goto LAB_145285954;
  }
  pbVar7 = (byte *)FUN_144ea6dc0("default","crypto\\conf\\conf_def.c",0xcf);
  local_98 = pbVar7;
  local_78 = pbVar7;
  if (pbVar7 == (byte *)0x0) {
    local_d8 = 0xd1;
  }
  else {
    iVar6 = FUN_1452869a0(param_1);
    if (iVar6 != 0) {
      lVar11 = FUN_145286630(param_1,pbVar7);
      lVar9 = local_a8;
      if (lVar11 == 0) {
        local_d8 = 0xdc;
        FUN_144ba24f0(0xe,0x79,0x67,"crypto\\conf\\conf_def.c");
        uVar20 = 0;
      }
      else {
        iVar6 = 0;
        local_c0 = 0;
        local_b0 = 0;
        lVar8 = FUN_144ea70e0(local_a8,0x200);
        iVar5 = 1;
        if (lVar8 != 0) {
LAB_145285160:
          lVar8 = local_80;
          _Dst = (short *)((longlong)iVar6 + *(longlong *)(lVar9 + 8));
          *(undefined1 *)_Dst = 0;
          while( true ) {
            FUN_144b9e970(param_2,_Dst,0x1ff);
            *(undefined1 *)((longlong)_Dst + 0x1ff) = 0;
            uVar19 = 0xffffffffffffffff;
            do {
              uVar20 = uVar19;
              uVar19 = uVar20 + 1;
            } while (*(char *)((longlong)_Dst + uVar19) != '\0');
            lVar9 = param_2;
            if (iVar5 != 0) {
              local_a0 = 0xbbef;
              if (((2 < (int)uVar19) && (*_Dst == -0x4411)) && ((char)_Dst[1] == -0x41)) {
                uVar14 = (int)uVar20 - 2;
                memmove(_Dst,(undefined1 *)((longlong)_Dst + 3),(longlong)(int)uVar14);
                uVar19 = (ulonglong)uVar14;
                *(undefined1 *)((longlong)(int)uVar14 + (longlong)_Dst) = 0;
                param_2 = local_b8;
              }
              local_ac = 0;
              lVar9 = param_2;
            }
            uVar14 = (uint)uVar19;
            if ((uVar14 != 0) || (local_b0 != 0)) break;
            if (local_88 == 0) {
LAB_14528523d:
              param_2 = FUN_144bac250(lVar8);
              if (param_2 == 0) {
                FUN_144ea7070(local_a8);
                FUN_144ea6530(local_98,"crypto\\conf\\conf_def.c",0x1bf);
                FUN_144babdb0(lVar8);
                goto LAB_145285a6d;
              }
            }
            else {
              param_2 = FUN_145286450(uVar12,&local_88);
              if (param_2 == 0) {
                FUN_144ea6530(uVar12,"crypto\\conf\\conf_def.c",0x108);
                uVar12 = 0;
                local_90 = 0;
                goto LAB_14528523d;
              }
            }
            FUN_144b9e8f0(lVar9);
            iVar5 = local_ac;
            local_b8 = param_2;
          }
          bVar21 = false;
          local_b0 = 0;
          uVar19 = uVar19 & 0xffffffff;
          uVar15 = uVar14;
          if (0 < (int)uVar14) {
            pcVar13 = (char *)((longlong)_Dst + (longlong)(int)uVar14 + -1);
            do {
              uVar15 = (uint)uVar19;
              if ((*pcVar13 != '\r') && (*pcVar13 != '\n')) break;
              pcVar13 = pcVar13 + -1;
              uVar15 = uVar15 - 1;
              uVar19 = (ulonglong)uVar15;
            } while (0 < (longlong)(pcVar13 + (1 - (longlong)_Dst)));
          }
          if ((uVar14 == 0) || (uVar15 != uVar14)) {
            local_c8 = local_c8 + 1;
            *(undefined1 *)((longlong)(int)uVar15 + (longlong)_Dst) = 0;
          }
          else {
            bVar21 = true;
            local_b0 = 1;
          }
          uVar20 = 0;
          local_c0 = local_c0 + uVar15;
          param_2 = lVar9;
          lVar9 = local_b8;
          if (local_c0 < 1) {
LAB_14528534c:
            iVar6 = local_c0;
            if (!bVar21) {
              pbVar7 = *(byte **)(local_a8 + 8);
              iVar6 = 0;
              local_c0 = 0;
              FUN_145285c50(param_1,pbVar7);
              while (((bVar1 = *pbVar7, bVar1 < 0x80 &&
                      ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1) !=
                       0)) && ((0x7f < bVar1 ||
                               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3
                                & 1) == 0))))) {
                pbVar7 = pbVar7 + 1;
              }
              bVar1 = *pbVar7;
              if ((0x7f < bVar1) ||
                 (param_2 = local_b8, lVar9 = local_b8,
                 (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1) == 0)) {
                uVar19 = uVar20;
                if (bVar1 != 0x5b) {
                  pbVar10 = (byte *)FUN_145285bd0(param_1,pbVar7);
                  pbVar18 = local_98;
                  pbVar16 = pbVar10;
                  if ((*pbVar10 == 0x3a) && (pbVar10[1] == 0x3a)) {
                    *pbVar10 = 0;
                    pbVar16 = pbVar10 + 2;
                    pbVar10 = (byte *)FUN_145285bd0(param_1,pbVar10 + 2);
                    pbVar18 = pbVar7;
                    pbVar7 = pbVar16;
                    pbVar16 = pbVar10;
                  }
                  while (((bVar1 = *pbVar10, bVar1 < 0x80 &&
                          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1)
                           != 0)) &&
                         ((0x7f < bVar1 ||
                          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1)
                           == 0))))) {
                    pbVar10 = pbVar10 + 1;
                  }
                  iVar5 = strncmp((char *)pbVar7,".include",8);
                  if (iVar5 == 0) {
                    if ((pbVar10 != pbVar7 + 8) || (*pbVar10 == 0x3d)) {
                      local_70 = 0;
                      pbVar7 = pbVar10;
                      if (*pbVar10 == 0x3d) {
                        do {
                          pbVar10 = pbVar10 + 1;
                          bVar1 = *pbVar10;
                          pbVar7 = pbVar10;
                          if ((0x7f < bVar1) ||
                             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 &
                              1) == 0)) break;
                        } while ((0x7f < bVar1) ||
                                ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >>
                                  3 & 1) == 0));
                      }
                      while ((0x7f < *pbVar10 ||
                             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar10 * 2) >>
                               3 & 1) == 0))) {
                        pbVar10 = pbVar10 + 1;
                      }
                      do {
                        pbVar16 = pbVar10;
                        pbVar10 = pbVar16 + -1;
                        if ((pbVar10 < pbVar7) || (0x7f < *pbVar10)) break;
                      } while ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar10 * 2) >>
                                4 & 1) != 0);
                      *pbVar16 = 0;
                      iVar5 = FUN_145285e60(param_1,pbVar18,&local_70,pbVar7);
                      uVar4 = local_70;
                      param_2 = local_b8;
                      uVar19 = 0;
                      if (iVar5 == 0) goto LAB_145285950;
                      lVar8 = FUN_145286350(local_70,&local_88,&local_90);
                      uVar12 = local_90;
                      if (uVar4 != local_90) {
                        FUN_144ea6530(uVar4,"crypto\\conf\\conf_def.c",0x17e);
                      }
                      param_2 = local_b8;
                      lVar9 = local_b8;
                      if (lVar8 != 0) {
                        if ((local_80 == 0) && (local_80 = FUN_144babca0(), local_80 == 0)) {
                          local_d8 = 0x188;
                          FUN_144ba24f0(0xe,0x79,0x41,"crypto\\conf\\conf_def.c");
                          FUN_144b9e7b0(lVar8);
                          param_2 = local_b8;
                        }
                        else {
                          lVar3 = local_b8;
                          iVar5 = FUN_144bac1c0(local_80,local_b8);
                          param_2 = lVar8;
                          lVar9 = lVar8;
                          if (iVar5 != 0) goto LAB_145285807;
                          local_d8 = 0x18e;
                          FUN_144ba24f0(0xe,0x79,0x41,"crypto\\conf\\conf_def.c");
                          FUN_144b9e7b0(lVar8);
                          param_2 = lVar3;
                          uVar19 = uVar20;
                        }
                        goto LAB_145285950;
                      }
                      goto LAB_145285807;
                    }
LAB_145285916:
                    local_d8 = 0x197;
                    uVar17 = 0x65;
                  }
                  else {
                    if (*pbVar10 != 0x3d) goto LAB_145285916;
                    *pbVar16 = 0;
                    uVar17 = FUN_145285b10(param_1,pbVar10 + 1);
                    FUN_145285b60(param_1,uVar17);
                    uVar20 = FUN_144ea64e0(0x18,"crypto\\conf\\conf_def.c",0x19f);
                    if (uVar20 == 0) {
                      local_d8 = 0x1a0;
                      uVar17 = 0x41;
                    }
                    else {
                      lVar9 = FUN_144ea6dc0(pbVar7,"crypto\\conf\\conf_def.c",0x1a3);
                      *(undefined8 *)(uVar20 + 0x10) = 0;
                      *(longlong *)(uVar20 + 8) = lVar9;
                      if (lVar9 == 0) {
                        local_d8 = 0x1a6;
                        uVar17 = 0x41;
                      }
                      else {
                        iVar6 = FUN_145285e60(param_1,pbVar18,uVar20 + 0x10,uVar17);
                        param_2 = local_b8;
                        uVar19 = uVar20;
                        if (iVar6 == 0) goto LAB_145285950;
                        pbVar7 = pbVar18;
                        do {
                          bVar1 = *pbVar7;
                          bVar2 = pbVar7[(longlong)local_98 - (longlong)pbVar18];
                          if (bVar1 != bVar2) break;
                          pbVar7 = pbVar7 + 1;
                        } while (bVar2 != 0);
                        lVar9 = lVar11;
                        if (((bVar1 != bVar2) &&
                            (lVar9 = FUN_145286760(param_1,pbVar18), lVar9 == 0)) &&
                           (lVar9 = FUN_145286630(param_1,pbVar18), lVar9 == 0)) {
                          local_d8 = 0x1b2;
                          goto LAB_14528585a;
                        }
                        iVar5 = FUN_1452867f0(param_1,lVar9,uVar20);
                        param_2 = local_b8;
                        uVar12 = local_90;
                        iVar6 = local_c0;
                        lVar9 = local_b8;
                        if (iVar5 != 0) goto LAB_145285807;
                        local_d8 = 0x1b8;
                        uVar17 = 0x41;
                      }
                    }
                  }
LAB_145285860:
                  FUN_144ba24f0(0xe,0x79,uVar17,"crypto\\conf\\conf_def.c");
                  param_2 = local_b8;
                  uVar19 = uVar20;
                  goto LAB_145285950;
                }
                do {
                  pbVar7 = pbVar7 + 1;
                  bVar1 = *pbVar7;
                  pbVar10 = pbVar7;
                  pbVar18 = pbVar7;
                  if ((0x7f < bVar1) ||
                     ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1) == 0
                     )) break;
                } while ((0x7f < bVar1) ||
                        ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1)
                         == 0));
LAB_145285413:
                bVar1 = *pbVar10;
                pbVar16 = pbVar10;
                if (bVar1 < 0x80) {
                  if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 5 & 1) == 0
                     ) {
                    if ((0x7f < bVar1) ||
                       ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x307) ==
                        0)) goto LAB_145285480;
                    pbVar10 = pbVar10 + 1;
                  }
                  else {
                    if ((0x7f < pbVar10[1]) ||
                       (lVar9 = 1,
                       (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)pbVar10[1] * 2) >> 3 & 1
                       ) == 0)) {
                      lVar9 = 2;
                    }
                    pbVar10 = pbVar10 + lVar9;
                  }
                  goto LAB_145285413;
                }
LAB_145285480:
                while (((bVar1 = *pbVar16, bVar1 < 0x80 &&
                        ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1)
                         != 0)) &&
                       ((0x7f < bVar1 ||
                        ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1)
                         == 0))))) {
                  pbVar16 = pbVar16 + 1;
                }
                if (*pbVar16 != 0x5d) {
                  if ((*pbVar16 == 0) ||
                     (bVar21 = pbVar18 == pbVar16, pbVar10 = pbVar16, pbVar18 = pbVar16, bVar21)) {
                    local_d8 = 0x152;
                    FUN_144ba24f0(0xe,0x79,100,"crypto\\conf\\conf_def.c");
                    param_2 = local_b8;
                    goto LAB_145285950;
                  }
                  goto LAB_145285413;
                }
                *pbVar10 = 0;
                iVar5 = FUN_145285e60(param_1,0,&local_78,pbVar7);
                pbVar7 = local_78;
                if (iVar5 == 0) {
                  local_98 = local_78;
                  param_2 = local_b8;
                  goto LAB_145285950;
                }
                local_98 = local_78;
                lVar11 = FUN_145286760(param_1,local_78);
                param_2 = local_b8;
                lVar9 = local_b8;
                if ((lVar11 == 0) &&
                   (lVar11 = FUN_145286630(param_1,pbVar7), param_2 = local_b8, lVar9 = local_b8,
                   lVar11 == 0)) {
                  local_d8 = 0x15c;
LAB_14528585a:
                  uVar17 = 0x67;
                  goto LAB_145285860;
                }
              }
            }
          }
          else {
            iVar6 = local_c0 + -1;
            pbVar7 = (byte *)((longlong)iVar6 + *(longlong *)(local_a8 + 8));
            bVar1 = *pbVar7;
            if (((0x7f < bVar1) ||
                ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 5 & 1) == 0)) ||
               ((1 < local_c0 &&
                ((bVar1 = pbVar7[-1], bVar1 < 0x80 &&
                 ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 5 & 1) != 0))))
               )) goto LAB_14528534c;
            local_b0 = 1;
            local_c0 = iVar6;
          }
LAB_145285807:
          local_b8 = lVar9;
          lVar9 = local_a8;
          lVar8 = FUN_144ea70e0(local_a8,(longlong)(iVar6 + 0x200));
          iVar5 = local_ac;
          if (lVar8 == 0) goto LAB_145285929;
          goto LAB_145285160;
        }
LAB_145285929:
        local_d8 = 0xe4;
        FUN_144ba24f0(0xe,0x79,7,"crypto\\conf\\conf_def.c");
        param_2 = local_b8;
        uVar19 = 0;
LAB_145285950:
        uVar20 = (ulonglong)local_c8;
      }
      goto LAB_145285954;
    }
    local_d8 = 0xd6;
  }
  FUN_144ba24f0(0xe,0x79,0x41,"crypto\\conf\\conf_def.c");
LAB_145285954:
  FUN_144ea7070(local_a8);
  FUN_144ea6530(local_98,"crypto\\conf\\conf_def.c",0x1c8);
  lVar9 = local_80;
  iVar6 = FUN_144babbf0(local_80);
  while (0 < iVar6) {
    lVar11 = FUN_144bac250(lVar9);
    FUN_144b9e8f0(param_2);
    iVar6 = FUN_144babbf0(lVar9);
    param_2 = lVar11;
  }
  FUN_144babdb0(lVar9);
  FUN_144ea6530(local_90,"crypto\\conf\\conf_def.c",0x1d5);
  if (local_88 != 0) {
    FUN_144ec6e60(&local_88);
  }
  if (local_68 != (undefined4 *)0x0) {
    *local_68 = (int)uVar20;
  }
  FUN_144ec7760(local_58,0xd,&DAT_149d09e5c,uVar20);
  FUN_144ba2bd0(2,"line ",local_58);
  if (local_60 != *(longlong *)(param_1 + 0x10)) {
    FUN_144ecf300();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (uVar19 != 0) {
    FUN_144ea6530(*(undefined8 *)(uVar19 + 8),"crypto\\conf\\conf_def.c",0x1e2);
    FUN_144ea6530(*(undefined8 *)(uVar19 + 0x10),"crypto\\conf\\conf_def.c",0x1e3);
    FUN_144ea6530(uVar19,"crypto\\conf\\conf_def.c",0x1e4);
  }
LAB_145285a6d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 145285aa0 FUN_145285aa0 body=42 status=ok
// SIG undefined FUN_145285aa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145285aa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144ea88e0(*(undefined8 *)(param_1 + 0x10),FUN_1452865e0,param_2,param_4,0x145285aaa);
  return 1;
}



// FUNCTION 145285b00 FUN_145285b00 body=8 status=ok
// SIG undefined FUN_145285b00(void)

undefined ** FUN_145285b00(void)

{
  return &PTR_s_OpenSSL_default_14c731db0;
}



// FUNCTION 145285b10 FUN_145285b10 body=68 status=ok
// SIG undefined FUN_145285b10(void)

byte * FUN_145285b10(longlong param_1,byte *param_2)

{
  byte bVar1;
  
  while (((bVar1 = *param_2, bVar1 < 0x80 &&
          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1) != 0)) &&
         ((0x7f < bVar1 ||
          ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1) == 0))))) {
    param_2 = param_2 + 1;
  }
  return param_2;
}



// FUNCTION 145285b60 FUN_145285b60 body=112 status=ok
// SIG undefined FUN_145285b60(void)

void FUN_145285b60(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = param_2;
  while ((0x7f < *pbVar2 ||
         ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar2 * 2) >> 3 & 1) == 0))) {
    pbVar2 = pbVar2 + 1;
  }
  do {
    pbVar1 = pbVar2;
    pbVar2 = pbVar1 + -1;
    if ((pbVar2 < param_2) || (0x7f < *pbVar2)) break;
  } while ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar2 * 2) >> 4 & 1) != 0);
  *pbVar1 = 0;
  return;
}



// FUNCTION 145285bd0 FUN_145285bd0 body=126 status=ok
// SIG undefined FUN_145285bd0(void)

byte * FUN_145285bd0(longlong param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  while( true ) {
    while( true ) {
      bVar1 = *param_2;
      if (0x7f < bVar1) {
        return param_2;
      }
      if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 5 & 1) == 0) break;
      if ((0x7f < param_2[1]) ||
         (lVar2 = 1,
         (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2[1] * 2) >> 3 & 1) == 0)) {
        lVar2 = 2;
      }
      param_2 = param_2 + lVar2;
    }
    if (0x7f < bVar1) break;
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) & 0x307) == 0) {
      return param_2;
    }
    param_2 = param_2 + 1;
  }
  return param_2;
}



// FUNCTION 145285c50 FUN_145285c50 body=510 status=ok
// SIG undefined FUN_145285c50(void)

void FUN_145285c50(longlong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  for (; bVar1 = *param_2, bVar1 < 0x80; param_2 = param_2 + 1) {
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 0xb & 1) != 0)
    goto LAB_145285e52;
    if ((0x7f < bVar1) ||
       ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 4 & 1) == 0)) break;
  }
LAB_145285cb0:
  bVar1 = *param_2;
  if (bVar1 < 0x80) {
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 7 & 1) != 0) {
LAB_145285e52:
      *param_2 = 0;
      return;
    }
    if (0x7f < bVar1) goto LAB_145285e4a;
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 10 & 1) != 0) {
      while( true ) {
        do {
          pbVar4 = param_2;
          pbVar5 = pbVar4 + 1;
          bVar2 = *pbVar5;
          if ((bVar2 < 0x80) &&
             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar2 * 2) >> 3 & 1) != 0))
          goto LAB_145285d39;
          param_2 = pbVar5;
        } while (bVar2 != bVar1);
        if (pbVar4[2] != bVar1) break;
        param_2 = pbVar4 + 2;
      }
LAB_145285d39:
      param_2 = pbVar4 + 2;
      if (*pbVar5 != bVar1) {
        param_2 = pbVar5;
      }
      goto LAB_145285cb0;
    }
    if (bVar1 < 0x80) {
      lVar3 = *(longlong *)(param_1 + 8);
      if ((*(ushort *)(lVar3 + (ulonglong)bVar1 * 2) >> 6 & 1) != 0) {
        do {
          do {
            pbVar5 = param_2;
            pbVar4 = pbVar5 + 1;
            bVar2 = *pbVar4;
            param_2 = pbVar4;
            if (((bVar2 < 0x80) && ((*(ushort *)(lVar3 + (ulonglong)bVar2 * 2) >> 3 & 1) != 0)) ||
               (bVar2 == bVar1)) {
              param_2 = pbVar5 + 2;
              if (*pbVar4 != bVar1) {
                param_2 = pbVar4;
              }
              goto LAB_145285cb0;
            }
          } while ((0x7f < bVar2) || ((*(ushort *)(lVar3 + (ulonglong)bVar2 * 2) >> 5 & 1) == 0));
          param_2 = pbVar5 + 2;
        } while ((0x7f < pbVar5[2]) ||
                ((*(ushort *)(lVar3 + (ulonglong)pbVar5[2] * 2) >> 3 & 1) == 0));
        goto LAB_145285cb0;
      }
      if (0x7f < bVar1) goto LAB_145285e4a;
      if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 5 & 1) != 0) {
        if ((0x7f < param_2[1]) ||
           (lVar3 = 1,
           (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)param_2[1] * 2) >> 3 & 1) == 0)) {
          lVar3 = 2;
        }
        param_2 = param_2 + lVar3;
        goto LAB_145285cb0;
      }
      if ((bVar1 < 0x80) &&
         ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar1 * 2) >> 3 & 1) != 0)) {
        return;
      }
    }
  }
LAB_145285e4a:
  param_2 = param_2 + 1;
  goto LAB_145285cb0;
}



// FUNCTION 145285e60 FUN_145285e60 body=1256 status=ok
// SIG undefined FUN_145285e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145285e60(longlong param_1,byte *param_2,longlong *param_3,byte *param_4)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  byte bVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  byte *pbVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined4 uVar18;
  
  bVar2 = 0;
  iVar10 = 0;
  plVar3 = (longlong *)FUN_144ea6fc0();
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_4[lVar4] != 0);
  lVar4 = FUN_144ea70e0(plVar3);
  if (lVar4 != 0) {
    do {
      pbVar9 = param_4;
LAB_145285f00:
      bVar6 = *pbVar9;
      lVar4 = (longlong)iVar10;
      if (bVar6 < 0x80) {
        if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar6 * 2) >> 6 & 1) != 0) {
          while( true ) {
            bVar13 = pbVar9[1];
            pbVar8 = pbVar9 + 1;
            if (((bVar13 < 0x80) &&
                ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar13 * 2) >> 3 & 1) != 0))
               || (bVar13 == bVar6)) break;
            if ((bVar13 < 0x80) &&
               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar13 * 2) >> 5 & 1) != 0)) {
              bVar13 = pbVar9[2];
              pbVar8 = pbVar9 + 2;
              if ((bVar13 < 0x80) &&
                 ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar13 * 2) >> 3 & 1) != 0))
              break;
            }
            iVar10 = iVar10 + 1;
            *(byte *)(lVar4 + plVar3[1]) = bVar13;
            lVar4 = lVar4 + 1;
            pbVar9 = pbVar8;
          }
LAB_145286011:
          pbVar9 = pbVar8;
          if (*pbVar8 == bVar6) {
            pbVar9 = pbVar8 + 1;
          }
          goto LAB_145285f00;
        }
        if (0x7f < bVar6) goto LAB_1452860e4;
        if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar6 * 2) >> 10 & 1) != 0) {
          do {
            bVar13 = pbVar9[1];
            pbVar8 = pbVar9 + 1;
            if ((bVar13 < 0x80) &&
               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar13 * 2) >> 3 & 1) != 0))
            goto LAB_145286011;
            if (bVar13 == bVar6) {
              if (pbVar9[2] != bVar6) goto LAB_145286011;
              pbVar8 = pbVar9 + 2;
            }
            iVar10 = iVar10 + 1;
            *(byte *)(lVar4 + plVar3[1]) = *pbVar8;
            lVar4 = lVar4 + 1;
            pbVar9 = pbVar8;
          } while( true );
        }
        if (bVar6 < 0x80) {
          if ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar6 * 2) >> 5 & 1) != 0) {
            bVar6 = pbVar9[1];
            pbVar9 = pbVar9 + 2;
            if ((bVar6 < 0x80) &&
               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar6 * 2) >> 3 & 1) != 0)) {
LAB_145286258:
              *(undefined1 *)((longlong)iVar10 + plVar3[1]) = 0;
              FUN_144ea6530(*param_3,"crypto\\conf\\conf_def.c",0x29e);
              *param_3 = plVar3[1];
              FUN_144ea6530(plVar3,"crypto\\conf\\conf_def.c",0x2a0);
              return 1;
            }
            if (bVar6 == 0x72) {
              iVar10 = iVar10 + 1;
              *(undefined1 *)(lVar4 + plVar3[1]) = 0xd;
            }
            else if (bVar6 == 0x6e) {
              iVar10 = iVar10 + 1;
              *(undefined1 *)(lVar4 + plVar3[1]) = 10;
            }
            else if (bVar6 == 0x62) {
              iVar10 = iVar10 + 1;
              *(undefined1 *)(lVar4 + plVar3[1]) = 8;
            }
            else {
              if (bVar6 == 0x74) {
                bVar6 = 9;
              }
              iVar10 = iVar10 + 1;
              *(byte *)(lVar4 + plVar3[1]) = bVar6;
            }
            goto LAB_145285f00;
          }
          if ((bVar6 < 0x80) &&
             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)bVar6 * 2) >> 3 & 1) != 0))
          goto LAB_145286258;
        }
      }
LAB_1452860e4:
      if (bVar6 != 0x24) {
        iVar10 = iVar10 + 1;
        *(byte *)(lVar4 + plVar3[1]) = bVar6;
        pbVar9 = pbVar9 + 1;
        goto LAB_145285f00;
      }
      pbVar8 = pbVar9 + 1;
      if (pbVar9[1] == 0x7b) {
        bVar6 = 0x7d;
        pbVar8 = pbVar9 + 2;
        pbVar14 = pbVar8;
      }
      else if (pbVar9[1] == 0x28) {
        bVar6 = 0x29;
        pbVar8 = pbVar9 + 2;
        pbVar14 = pbVar8;
      }
      else {
        bVar6 = 0;
        pbVar14 = pbVar8;
      }
      while ((*pbVar8 < 0x80 &&
             ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar8 * 2) & 0x107) != 0))) {
        pbVar8 = pbVar8 + 1;
      }
      pbVar12 = pbVar8;
      pbVar11 = pbVar14;
      pbVar16 = param_2;
      pbVar17 = (byte *)0x0;
      if ((*pbVar8 == 0x3a) && (pbVar8[1] == 0x3a)) {
        *pbVar8 = 0;
        pbVar11 = pbVar8 + 2;
        bVar2 = 0x3a;
        pbVar12 = pbVar11;
        while ((pbVar16 = pbVar14, pbVar17 = pbVar8, *pbVar12 < 0x80 &&
               ((*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)*pbVar12 * 2) & 0x107) != 0)))
        {
          pbVar12 = pbVar12 + 1;
        }
      }
      bVar13 = *pbVar12;
      *pbVar12 = 0;
      param_4 = pbVar12;
      if (bVar6 != 0) {
        if (bVar13 == bVar6) {
          param_4 = pbVar12 + 1;
          goto LAB_1452861a3;
        }
        uVar18 = 0x26a;
        uVar15 = 0x66;
LAB_145286308:
        FUN_144ba24f0(0xe,0x65,uVar15,"crypto\\conf\\conf_def.c",uVar18);
        break;
      }
LAB_1452861a3:
      pcVar5 = (char *)FUN_1452868b0(param_1,pbVar16,pbVar11);
      if (pbVar17 != (byte *)0x0) {
        *pbVar17 = bVar2;
      }
      *pbVar12 = bVar13;
      if (pcVar5 == (char *)0x0) {
        uVar18 = 0x27e;
        uVar15 = 0x68;
        goto LAB_145286308;
      }
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (pcVar5[lVar7] != '\0');
      if ((byte *)0x10000 < pbVar9 + *plVar3 + (lVar7 - (longlong)param_4)) {
        FUN_144ba24f0(0xe,0x65,0x74,"crypto\\conf\\conf_def.c",0x283);
        break;
      }
      lVar7 = FUN_144ea7230(plVar3);
      if (lVar7 == 0) goto LAB_1452862b6;
      cVar1 = *pcVar5;
      while (cVar1 != '\0') {
        pcVar5 = pcVar5 + 1;
        iVar10 = iVar10 + 1;
        *(char *)(lVar4 + plVar3[1]) = cVar1;
        lVar4 = lVar4 + 1;
        cVar1 = *pcVar5;
      }
      *pbVar12 = bVar13;
    } while( true );
  }
LAB_145286321:
  FUN_144ea7070(plVar3);
  return 0;
LAB_1452862b6:
  FUN_144ba24f0(0xe,0x65,0x41,"crypto\\conf\\conf_def.c",0x287);
  goto LAB_145286321;
}



// FUNCTION 145286350 FUN_145286350 body=242 status=ok
// SIG undefined FUN_145286350(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145286350(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14528635e;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  iVar1 = _stat64i32(param_1,&local_58);
  if (iVar1 < 0) {
    piVar2 = _errno();
    uVar5 = 0x16;
    local_68 = 0x2b4;
    iVar1 = *piVar2;
    uVar4 = 2;
  }
  else {
    if ((local_58._6_2_ & 0xf000) != 0x4000) {
      FUN_144ec7480(param_1,L"rInvalid resolution in tiff: zero or negative.");
      goto LAB_145286435;
    }
    if (*param_2 == 0) {
      lVar3 = FUN_145286450(param_1,param_2);
      if (lVar3 != 0) {
        *param_3 = param_1;
      }
      goto LAB_145286435;
    }
    uVar5 = 0x74;
    local_68 = 0x2bd;
    uVar4 = 0xe;
    iVar1 = 0x6f;
  }
  FUN_144ba24f0(uVar4,uVar5,iVar1,"crypto\\conf\\conf_def.c");
  FUN_144ba2bd0(1,param_1);
LAB_145286435:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 145286450 FUN_145286450 body=396 status=ok
// SIG undefined FUN_145286450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145286450(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar5;
  
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(param_1 + lVar7) != '\0');
  lVar2 = FUN_144ec6b20(param_2,param_1);
  do {
    if (lVar2 == 0) {
LAB_1452865b2:
      FUN_144ec6e60(param_2);
      *param_2 = 0;
      return 0;
    }
    uVar4 = 0xffffffffffffffff;
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 1;
    } while (*(char *)(lVar2 + uVar4) != '\0');
    if (((5 < uVar4) && (iVar1 = _stricmp((char *)(lVar2 + -5 + uVar4),".conf"), iVar1 == 0)) ||
       ((4 < uVar4 && (iVar1 = _stricmp((char *)(lVar2 + -4 + uVar4),".cnf"), iVar1 == 0)))) {
      lVar6 = uVar5 + 3 + lVar7;
      pcVar3 = (char *)FUN_144ea6670(lVar6,"crypto\\conf\\conf_def.c",0x2e2);
      if (pcVar3 == (char *)0x0) {
        FUN_144ba24f0(0xe,0x6b,0x41,"crypto\\conf\\conf_def.c",0x2e4);
        goto LAB_1452865b2;
      }
      if (*pcVar3 == '\0') {
        FUN_144ea68a0(pcVar3,param_1,lVar6);
        FUN_144ea6900(pcVar3,L"/Disabled",lVar6);
      }
      FUN_144ea6900(pcVar3,lVar2,lVar6);
      lVar2 = FUN_144ec7480(pcVar3,L"rInvalid resolution in tiff: zero or negative.");
      FUN_144ea6530(pcVar3,"crypto\\conf\\conf_def.c",0x2fa);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
    lVar2 = FUN_144ec6b20(param_2,param_1);
  } while( true );
}



// FUNCTION 1452865e0 FUN_1452865e0 body=76 status=ok
// SIG undefined FUN_1452865e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452865e0(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] != 0) {
    FUN_144ec7640(param_2,"[%s] %s=%s\n",*param_1,param_1[1],param_1[2]);
    return;
  }
  FUN_144ec7640(param_2,"[[%s]]\n",*param_1);
  return;
}



// FUNCTION 145286630 FUN_145286630 body=303 status=ok
// SIG undefined FUN_145286630(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_145286630(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *_Dst;
  longlong lVar5;
  uint uVar6;
  char *pcVar7;
  size_t _Size;
  
  puVar4 = (undefined8 *)0x0;
  lVar3 = FUN_144babca0();
  if ((lVar3 != 0) &&
     (puVar4 = (undefined8 *)FUN_144ea64e0(0x18,"crypto\\conf\\conf_api.c",0xc5),
     puVar4 != (undefined8 *)0x0)) {
    cVar1 = *param_2;
    pcVar7 = param_2;
    for (uVar6 = 0; (cVar1 != '\0' && (uVar6 < 0x80000000)); uVar6 = uVar6 + 1) {
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
    }
    _Size = (size_t)(int)((uVar6 & 0x7fffffff) + 1);
    _Dst = (void *)FUN_144ea64e0(_Size,"crypto\\conf\\conf_api.c",200);
    *puVar4 = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_2,_Size);
      puVar4[1] = 0;
      puVar4[2] = lVar3;
      lVar5 = FUN_144ea86c0(*(undefined8 *)(param_1 + 0x10),puVar4);
      if ((lVar5 == 0) && (iVar2 = FUN_144ea8520(*(undefined8 *)(param_1 + 0x10)), iVar2 < 1)) {
        return puVar4;
      }
    }
  }
  FUN_144babdb0(lVar3);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_144ea6530(*puVar4,"crypto\\conf\\conf_api.c",0xd7);
  }
  FUN_144ea6530(puVar4,"crypto\\conf\\conf_api.c",0xd8);
  return (undefined8 *)0x0;
}



// FUNCTION 145286760 FUN_145286760 body=63 status=ok
// SIG undefined FUN_145286760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145286760(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_28 [4];
  undefined8 uStack_8;
  
  uStack_8 = 0x14528676a;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28[1] = 0;
    local_28[0] = param_2;
    uVar1 = FUN_144ea8820(*(undefined8 *)(param_1 + 0x10),local_28);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1452867a0 FUN_1452867a0 body=72 status=ok
// SIG undefined FUN_1452867a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452867a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_28 [4];
  undefined8 uStack_8;
  
  uStack_8 = 0x1452867aa;
  if ((param_1 != 0) && (param_2 != 0)) {
    local_28[1] = 0;
    local_28[0] = param_2;
    lVar1 = FUN_144ea8820(*(undefined8 *)(param_1 + 0x10),local_28);
    if (lVar1 != 0) {
      return *(undefined8 *)(lVar1 + 0x10);
    }
  }
  return 0;
}



// FUNCTION 1452867f0 FUN_1452867f0 body=188 status=ok
// SIG undefined FUN_1452867f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452867f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = param_2[2];
  *param_3 = *param_2;
  uVar2 = FUN_144bac1c0(uVar1,param_3);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = FUN_144ea86c0(*(undefined8 *)(param_1 + 0x10),param_3);
  if (lVar3 != 0) {
    FUN_144bac120(uVar1,lVar3);
    FUN_144ea6530(*(undefined8 *)(lVar3 + 8),"crypto\\conf\\conf_api.c",0x3f);
    FUN_144ea6530(*(undefined8 *)(lVar3 + 0x10),"crypto\\conf\\conf_api.c",0x40);
    FUN_144ea6530(lVar3,"crypto\\conf\\conf_api.c",0x41);
  }
  return 1;
}



// FUNCTION 1452868b0 FUN_1452868b0 body=228 status=ok
// SIG undefined FUN_1452868b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_1452868b0(longlong param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char *local_28;
  longlong local_20;
  undefined8 uStack_10;
  
  uStack_10 = 0x1452868c5;
  if (param_3 != 0) {
    if (param_1 == 0) {
      lVar1 = FUN_144ecf180(param_3);
      return lVar1;
    }
    if (param_2 != (char *)0x0) {
      local_28 = param_2;
      local_20 = param_3;
      lVar1 = FUN_144ea8820(*(undefined8 *)(param_1 + 0x10),&local_28);
      if (lVar1 != 0) goto LAB_145286968;
      lVar1 = 0;
      do {
        lVar2 = lVar1 + 1;
        if (param_2[lVar1] != (&DAT_149d09ea8)[lVar1]) goto LAB_145286940;
        lVar1 = lVar2;
      } while (lVar2 != 4);
      lVar1 = FUN_144ecf180(param_3);
      if (lVar1 != 0) {
        return lVar1;
      }
    }
LAB_145286940:
    local_28 = "default";
    local_20 = param_3;
    lVar1 = FUN_144ea8820(*(undefined8 *)(param_1 + 0x10),&local_28);
    if (lVar1 != 0) {
LAB_145286968:
      return *(longlong *)(lVar1 + 0x10);
    }
  }
  return 0;
}



// FUNCTION 1452869a0 FUN_1452869a0 body=77 status=ok
// SIG undefined FUN_1452869a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452869a0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = FUN_144ea8530(FUN_145286b60,&LAB_145286ba0);
    *(longlong *)(param_1 + 0x10) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1452869f0 FUN_1452869f0 body=88 status=ok
// SIG undefined FUN_1452869f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452869f0(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    FUN_144ea8a00(*(longlong *)(param_1 + 0x10),0);
    FUN_144ea88e0(*(undefined8 *)(param_1 + 0x10),FUN_145286a50,*(undefined8 *)(param_1 + 0x10));
    FUN_144ea8870(*(undefined8 *)(param_1 + 0x10),FUN_145286a80);
    FUN_144ea8620(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 145286a50 FUN_145286a50 body=43 status=ok
// SIG undefined FUN_145286a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145286a50(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_144ea8790(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 145286a80 FUN_145286a80 body=218 status=ok
// SIG undefined FUN_145286a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145286a80(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1[1] == 0) {
    uVar1 = param_1[2];
    iVar2 = FUN_144babbf0(uVar1);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      lVar3 = FUN_144babc00(uVar1,iVar2);
      FUN_144ea6530(*(undefined8 *)(lVar3 + 0x10),"crypto\\conf\\conf_api.c",0xb3);
      FUN_144ea6530(*(undefined8 *)(lVar3 + 8),"crypto\\conf\\conf_api.c",0xb4);
      FUN_144ea6530(lVar3,"crypto\\conf\\conf_api.c",0xb5);
    }
    FUN_144babdb0(uVar1);
    FUN_144ea6530(*param_1,"crypto\\conf\\conf_api.c",0xb8);
    FUN_144ea6530(param_1,"crypto\\conf\\conf_api.c",0xb9);
  }
  return;
}



// FUNCTION 145286b60 FUN_145286b60 body=57 status=ok
// SIG undefined FUN_145286b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_145286b60(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_144ea8970(param_1[1]);
  iVar2 = FUN_144ea8970(*param_1);
  return iVar2 << 2 ^ uVar1;
}



// FUNCTION 145286c30 FUN_145286c30 body=327 status=ok
// SIG undefined FUN_145286c30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145286c30(longlong param_1)

{
  int iVar1;
  LPCSTR lpLibFileName;
  HMODULE hLibModule;
  HMODULE pHVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x145286c4a;
  pHVar2 = (HMODULE)0x0;
  lpLibFileName = (LPCSTR)FUN_144ecf970(param_1,0);
  if (lpLibFileName == (LPCSTR)0x0) {
    uVar4 = 0x67;
    uVar3 = 0x6f;
    hLibModule = pHVar2;
  }
  else {
    hLibModule = LoadLibraryA(lpLibFileName);
    if (hLibModule == (HMODULE)0x0) {
      FUN_144ba24f0(0x25,0x78,0x67,"crypto\\dso\\dso_win32.c",0x6c,uVar5);
      FUN_144ba2bd0(3,"filename(",lpLibFileName,&DAT_149dfbe79);
      goto LAB_145286d1d;
    }
    pHVar2 = (HMODULE)FUN_144ea64e0(8,"crypto\\dso\\dso_win32.c");
    if (pHVar2 == (HMODULE)0x0) {
      uVar4 = 0x72;
      uVar3 = 0x41;
    }
    else {
      *(HMODULE *)pHVar2 = hLibModule;
      iVar1 = FUN_144bac1c0(*(undefined8 *)(param_1 + 8),pHVar2);
      if (iVar1 != 0) {
        *(LPCSTR *)(param_1 + 0x38) = lpLibFileName;
        return 1;
      }
      uVar4 = 0x77;
      uVar3 = 0x69;
    }
  }
  FUN_144ba24f0(0x25,0x78,uVar3,"crypto\\dso\\dso_win32.c",uVar4,uVar5);
LAB_145286d1d:
  FUN_144ea6530(lpLibFileName,"crypto\\dso\\dso_win32.c",0x7f);
  FUN_144ea6530(pHVar2,"crypto\\dso\\dso_win32.c",0x80);
  if (hLibModule != (HMODULE)0x0) {
    FreeLibrary(hLibModule);
  }
  return 0;
}



// FUNCTION 145286d80 FUN_145286d80 body=256 status=ok
// SIG undefined FUN_145286d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145286d80(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0x145286d8c;
  if (param_1 == 0) {
    FUN_144ba24f0(0x25,0x79,0x43,"crypto\\dso\\dso_win32.c",0x8a,0x145286d8c);
    return 0;
  }
  iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
  if (iVar1 < 1) {
    return 1;
  }
  puVar3 = (undefined8 *)FUN_144bac250(*(undefined8 *)(param_1 + 8));
  if (puVar3 == (undefined8 *)0x0) {
    FUN_144ba24f0(0x25,0x79,0x68,"crypto\\dso\\dso_win32.c",0x91,uVar4);
    return 0;
  }
  BVar2 = FreeLibrary((HMODULE)*puVar3);
  if (BVar2 == 0) {
    FUN_144ba24f0(0x25,0x79,0x6b,"crypto\\dso\\dso_win32.c",0x95,uVar4);
    FUN_144bac1c0(*(undefined8 *)(param_1 + 8),puVar3);
    return 0;
  }
  FUN_144ea6530(puVar3,"crypto\\dso\\dso_win32.c",0x9d);
  return 1;
}



// FUNCTION 145286e80 FUN_145286e80 body=250 status=ok
// SIG undefined FUN_145286e80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

FARPROC FUN_145286e80(longlong param_1,LPCSTR param_2)

{
  int iVar1;
  undefined8 *puVar2;
  FARPROC pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x145286e90;
  if ((param_1 == 0) || (param_2 == (LPCSTR)0x0)) {
    uVar5 = 0xaa;
    uVar4 = 0x43;
  }
  else {
    iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
    if (iVar1 < 1) {
      uVar5 = 0xae;
      uVar4 = 0x69;
    }
    else {
      iVar1 = FUN_144babbf0(*(undefined8 *)(param_1 + 8));
      puVar2 = (undefined8 *)FUN_144babc00(*(undefined8 *)(param_1 + 8),iVar1 + -1);
      if (puVar2 != (undefined8 *)0x0) {
        pFVar3 = GetProcAddress((HMODULE)*puVar2,param_2);
        if (pFVar3 != (FARPROC)0x0) {
          return pFVar3;
        }
        FUN_144ba24f0(0x25,0x65,0x6a,"crypto\\dso\\dso_win32.c",0xb8,uVar6);
        FUN_144ba2bd0(3,"symname(",param_2,&DAT_149dfbe79);
        return (FARPROC)0x0;
      }
      uVar5 = 0xb3;
      uVar4 = 0x68;
    }
  }
  FUN_144ba24f0(0x25,0x65,uVar4,"crypto\\dso\\dso_win32.c",uVar5,uVar6);
  return (FARPROC)0x0;
}



// FUNCTION 145286f80 FUN_145286f80 body=265 status=ok
// SIG undefined FUN_145286f80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145286f80(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x145286f95;
  bVar2 = false;
  cVar1 = *param_2;
  pcVar4 = param_2;
  for (uVar6 = 0; (cVar1 != '\0' && (uVar6 < 0x80000000)); uVar6 = uVar6 + 1) {
    pcVar4 = pcVar4 + 1;
    cVar1 = *pcVar4;
  }
  pcVar4 = strstr(param_2,(char *)L"/Disabled");
  if (((pcVar4 == (char *)0x0) && (pcVar4 = strstr(param_2,"\\"), pcVar4 == (char *)0x0)) &&
     (pcVar4 = strstr(param_2,(char *)L":Asset"), pcVar4 == (char *)0x0)) {
    bVar2 = true;
    uVar7 = 0x1d0;
    iVar3 = (uVar6 & 0x7fffffff) + 5;
  }
  else {
    iVar3 = (uVar6 & 0x7fffffff) + 1;
    uVar7 = 0x1d3;
  }
  lVar5 = FUN_144ea64e0((longlong)iVar3,"crypto\\dso\\dso_win32.c",uVar7);
  if (lVar5 != 0) {
    pcVar4 = "%s.dll";
    if (!bVar2) {
      pcVar4 = "%s";
    }
    FUN_1424c2e40(lVar5,pcVar4,param_2);
    return lVar5;
  }
  FUN_144ba24f0(0x25,0x7d,0x6d,"crypto\\dso\\dso_win32.c",0x1d5,uVar8);
  return 0;
}



// FUNCTION 145287090 FUN_145287090 body=512 status=ok
// SIG undefined FUN_145287090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145287090(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1452870aa;
  plVar3 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  if (param_2 == 0) {
    if (param_3 == 0) {
      FUN_144ba24f0(0x25,0x86,0x43,"crypto\\dso\\dso_win32.c",0x18e,0x1452870aa);
      return 0;
    }
    lVar2 = FUN_144ea6dc0(param_3,"crypto\\dso\\dso_win32.c",0x198);
    plVar4 = plVar3;
    if (lVar2 != 0) goto LAB_14528724e;
    uVar5 = 0x19a;
  }
  else if (param_3 == 0) {
    lVar2 = FUN_144ea6dc0(param_2,"crypto\\dso\\dso_win32.c",0x192);
    if (lVar2 != 0) {
LAB_14528724e:
      FUN_144ea6530(plVar3,"crypto\\dso\\dso_win32.c",0x1c0);
      FUN_144ea6530(plVar4,"crypto\\dso\\dso_win32.c",0x1c1);
      return lVar2;
    }
    uVar5 = 0x194;
  }
  else {
    plVar3 = (longlong *)FUN_145287700(param_1,param_2,0);
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)FUN_145287700(param_1,param_3,1);
      if (plVar4 == (longlong *)0x0) {
        FUN_144ba24f0(0x25,0x86,0x41,"crypto\\dso\\dso_win32.c",0x1a5);
        FUN_144ea6530(plVar3,"crypto\\dso\\dso_win32.c",0x1a6);
        return 0;
      }
      if ((*plVar3 == 0) && (plVar3[2] == 0)) {
        *plVar3 = *plVar4;
        *(int *)(plVar3 + 1) = (int)plVar4[1];
        plVar3[2] = plVar4[2];
        *(int *)(plVar3 + 3) = (int)plVar4[3];
      }
      if ((char *)plVar3[6] == (char *)0x0) {
        plVar3[6] = plVar4[6];
        *(int *)(plVar3 + 7) = (int)plVar4[7];
      }
      else {
        cVar1 = *(char *)plVar3[6];
        if ((cVar1 != '\\') && (cVar1 != '/')) {
          plVar3[4] = plVar4[6];
          *(int *)(plVar3 + 5) = (int)plVar4[7];
        }
      }
      if (plVar3[8] == 0) {
        plVar3[8] = plVar4[8];
        *(int *)(plVar3 + 9) = (int)plVar4[9];
      }
      lVar2 = FUN_1452878f0(param_1,plVar3);
      goto LAB_14528724e;
    }
    uVar5 = 0x1a0;
  }
  FUN_144ba24f0(0x25,0x86,0x41,"crypto\\dso\\dso_win32.c",uVar5,uVar6);
  return 0;
}



// FUNCTION 145287290 FUN_145287290 body=605 status=ok
// SIG undefined FUN_145287290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145287290(code *param_1,void *param_2,int param_3)

{
  uint uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  HANDLE hObject;
  INT_PTR IVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 local_278 [6];
  code *local_260;
  uint local_258;
  char local_148;
  char local_147 [271];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (param_1 == (code *)0x0) {
    param_1 = FUN_145287290;
  }
  hModule = LoadLibraryW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    local_288 = 0x20d;
    FUN_144ba24f0(0x25,0x6d,0x6c,"crypto\\dso\\dso_win32.c");
  }
  else {
    pFVar2 = GetProcAddress(hModule,"CreateToolhelp32Snapshot");
    if (pFVar2 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      local_288 = 0x215;
      FUN_144ba24f0(0x25,0x6d,0x6c,"crypto\\dso\\dso_win32.c");
    }
    else {
      pFVar3 = GetProcAddress(hModule,"Module32First");
      pFVar4 = GetProcAddress(hModule,"Module32Next");
      hObject = (HANDLE)(*pFVar2)(8);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        FreeLibrary(hModule);
        local_288 = 0x229;
        FUN_144ba24f0(0x25,0x6d,0x6c,"crypto\\dso\\dso_win32.c");
      }
      else {
        local_278[0] = 0x238;
        IVar5 = (*pFVar3)(hObject,local_278);
        if ((int)IVar5 == 0) {
          CloseHandle(hObject);
          FreeLibrary(hModule);
          local_288 = 0x232;
          FUN_144ba24f0(0x25,0x6d,0x72,"crypto\\dso\\dso_win32.c");
        }
        else {
          do {
            if ((local_260 <= param_1) && (param_1 < local_260 + local_258)) {
              CloseHandle(hObject);
              FreeLibrary(hModule);
              pcVar6 = &local_148;
              for (uVar1 = 0; (local_148 != '\0' && (uVar1 < 0x80000000)); uVar1 = uVar1 + 1) {
                pcVar6 = pcVar6 + 1;
                local_148 = *pcVar6;
              }
              if (0 < param_3) {
                uVar7 = param_3 - 1;
                if ((int)(uVar1 & 0x7fffffff) < param_3) {
                  uVar7 = uVar1 & 0x7fffffff;
                }
                memcpy(param_2,&local_148,(longlong)(int)uVar7);
                *(undefined1 *)((longlong)(int)uVar7 + (longlong)param_2) = 0;
              }
              goto LAB_145287466;
            }
            IVar5 = (*pFVar4)(hObject,local_278);
          } while ((int)IVar5 != 0);
          CloseHandle(hObject);
          FreeLibrary(hModule);
        }
      }
    }
  }
LAB_145287466:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_2a8);
}



// FUNCTION 145287500 FUN_145287500 body=470 status=ok
// SIG undefined FUN_145287500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145287500(LPCSTR param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  HANDLE hObject;
  INT_PTR IVar4;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_268 [10];
  HMODULE local_240;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_298;
  hModule = LoadLibraryW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    local_278 = 0x270;
    FUN_144ba24f0(0x25,0x8e,0x6c,"crypto\\dso\\dso_win32.c");
  }
  else {
    pFVar1 = GetProcAddress(hModule,"CreateToolhelp32Snapshot");
    if (pFVar1 == (FARPROC)0x0) {
      FreeLibrary(hModule);
      local_278 = 0x278;
      FUN_144ba24f0(0x25,0x8e,0x6c,"crypto\\dso\\dso_win32.c");
    }
    else {
      pFVar2 = GetProcAddress(hModule,"Module32First");
      pFVar3 = GetProcAddress(hModule,"Module32Next");
      hObject = (HANDLE)(*pFVar1)(8);
      if (hObject == (HANDLE)0xffffffffffffffff) {
        FreeLibrary(hModule);
        local_278 = 0x288;
        FUN_144ba24f0(0x25,0x8e,0x6c,"crypto\\dso\\dso_win32.c");
      }
      else {
        local_268[0] = 0x238;
        IVar4 = (*pFVar2)(hObject,local_268);
        if ((int)IVar4 == 0) {
          CloseHandle(hObject);
          FreeLibrary(hModule);
        }
        else {
          do {
            pFVar1 = GetProcAddress(local_240,param_1);
            if (pFVar1 != (FARPROC)0x0) {
              CloseHandle(hObject);
              FreeLibrary(hModule);
              goto LAB_1452876cd;
            }
            IVar4 = (*pFVar3)(hObject,local_268);
          } while ((int)IVar4 != 0);
          CloseHandle(hObject);
          FreeLibrary(hModule);
        }
      }
    }
  }
LAB_1452876cd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_298);
}



// FUNCTION 1452876f0 FUN_1452876f0 body=8 status=ok
// SIG undefined FUN_1452876f0(void)

undefined ** FUN_1452876f0(void)

{
  return &PTR_s_OpenSSL__win32__shared_library_m_14c731e50;
}



// FUNCTION 145287700 FUN_145287700 body=492 status=ok
// SIG undefined FUN_145287700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_145287700(undefined8 param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = 0x145287715;
  if (param_2 == (char *)0x0) {
    FUN_144ba24f0(0x25,0x88,0x6f,"crypto\\dso\\dso_win32.c",0xd5,0x145287715);
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)FUN_144ea6670(0x50,"crypto\\dso\\dso_win32.c",0xd9);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_144ba24f0(0x25,0x88,0x41,"crypto\\dso\\dso_win32.c",0xdb,uVar7);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (((*param_2 == '\\') && (param_2[1] == '\\')) ||
       ((pcVar6 = param_2, iVar4 = 1, *param_2 == '/' && (param_2[1] == '/')))) {
      param_2 = param_2 + 2;
      *puVar3 = param_2;
      pcVar6 = param_2;
      iVar4 = 0;
    }
    while( true ) {
      cVar1 = *param_2;
      iVar5 = (int)param_2;
      iVar2 = (int)pcVar6;
      if (cVar1 == '\0') break;
      if (cVar1 == '/') {
LAB_14528780a:
        if (iVar4 == 0) {
          iVar4 = 2;
          param_2 = param_2 + 1;
          *(int *)(puVar3 + 1) = iVar5 - iVar2;
          puVar3[6] = param_2;
          pcVar6 = param_2;
        }
        else {
          param_2 = param_2 + 1;
          iVar2 = (int)param_2 - iVar2;
          if (iVar4 == 1) {
            iVar4 = 2;
            puVar3[6] = pcVar6;
            *(int *)(puVar3 + 7) = iVar2;
            pcVar6 = param_2;
          }
          else {
            *(int *)(puVar3 + 7) = *(int *)(puVar3 + 7) + iVar2;
            pcVar6 = param_2;
          }
        }
      }
      else if (cVar1 == ':') {
        if (iVar4 != 1) {
          FUN_144ba24f0(0x25,0x88,0x73,"crypto\\dso\\dso_win32.c",0xee,uVar7);
          FUN_144ea6530(puVar3,"crypto\\dso\\dso_win32.c",0xef);
          return (undefined8 *)0x0;
        }
        puVar3[2] = pcVar6;
        iVar4 = 2;
        param_2 = param_2 + 1;
        *(int *)(puVar3 + 3) = iVar5 - iVar2;
        puVar3[6] = param_2;
        pcVar6 = param_2;
      }
      else {
        if (cVar1 == '\\') goto LAB_14528780a;
        param_2 = param_2 + 1;
      }
    }
    if (iVar4 == 0) {
      *(int *)(puVar3 + 1) = iVar5 - iVar2;
    }
    else if (param_2 != pcVar6 && -1 < (longlong)param_2 - (longlong)pcVar6) {
      if (param_3 == 0) {
        puVar3[8] = pcVar6;
        *(int *)(puVar3 + 9) = iVar5 - iVar2;
      }
      else {
        if (iVar4 == 1) {
          puVar3[6] = pcVar6;
          *(undefined4 *)(puVar3 + 7) = 0;
        }
        *(int *)(puVar3 + 7) = *(int *)(puVar3 + 7) + (iVar5 - iVar2);
      }
    }
    if (*(int *)(puVar3 + 1) == 0) {
      *puVar3 = 0;
    }
    if (*(int *)(puVar3 + 3) == 0) {
      puVar3[2] = 0;
    }
    if (*(int *)(puVar3 + 7) == 0) {
      puVar3[6] = 0;
    }
    if (*(int *)(puVar3 + 9) == 0) {
      puVar3[8] = 0;
    }
  }
  return puVar3;
}



// FUNCTION 1452878f0 FUN_1452878f0 body=745 status=ok
// SIG undefined FUN_1452878f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * FUN_1452878f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  char *_Dest;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  uVar8 = 0x145287900;
  iVar1 = 0;
  iVar6 = 0;
  if (param_2 == (longlong *)0x0) {
    FUN_144ba24f0(0x25,0x87,0x43,"crypto\\dso\\dso_win32.c",0x137,0x145287900);
    return (char *)0x0;
  }
  if (*param_2 == 0) {
    if (param_2[2] != 0) {
      iVar1 = (int)param_2[3];
      goto LAB_145287964;
    }
  }
  else {
    iVar1 = (int)param_2[1] + 2;
    if (((param_2[4] != 0) || (param_2[6] != 0)) || (param_2[8] != 0)) {
LAB_145287964:
      iVar1 = iVar1 + 1;
    }
  }
  iVar1 = iVar1 + (int)param_2[5];
  if ((param_2[4] != 0) && ((param_2[6] != 0 || (param_2[8] != 0)))) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (int)param_2[7];
  if ((param_2[6] != 0) && (param_2[8] != 0)) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 + (int)param_2[9];
  if (iVar1 == 0) {
    FUN_144ba24f0(0x25,0x87,0x71,"crypto\\dso\\dso_win32.c",0x14c,0x145287900);
    return (char *)0x0;
  }
  _Dest = (char *)FUN_144ea64e0((longlong)(iVar1 + 1),"crypto\\dso\\dso_win32.c",0x150);
  if (_Dest == (char *)0x0) {
    FUN_144ba24f0(0x25,0x87,0x41,"crypto\\dso\\dso_win32.c",0x152,uVar8);
    return (char *)0x0;
  }
  if (*param_2 == 0) {
    if ((char *)param_2[2] == (char *)0x0) goto LAB_145287a8e;
    strncpy(_Dest,(char *)param_2[2],(longlong)(int)param_2[3]);
    iVar6 = (int)param_2[3];
    _Dest[iVar6] = ':';
  }
  else {
    _Dest[0] = '\\';
    _Dest[1] = '\\';
    _Dest[2] = '\0';
    strncpy(_Dest + 2,(char *)*param_2,(longlong)(int)param_2[1]);
    iVar6 = (int)param_2[1] + 2;
    if (((param_2[4] == 0) && (param_2[6] == 0)) && (param_2[8] == 0)) goto LAB_145287a8e;
    _Dest[iVar6] = '\\';
  }
  iVar6 = iVar6 + 1;
LAB_145287a8e:
  pcVar2 = (char *)param_2[4];
  lVar3 = (longlong)(int)param_2[5];
  pcVar7 = pcVar2;
  if (0 < lVar3) {
    do {
      pcVar2 = pcVar2 + lVar3;
      pcVar5 = pcVar2;
      if (pcVar2 != pcVar7) {
        pcVar4 = pcVar7;
        do {
          pcVar5 = pcVar2;
          if ((*pcVar4 == '\0') || (pcVar5 = pcVar4, *pcVar4 == '/')) break;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar2;
        } while ((ulonglong)((longlong)pcVar4 - (longlong)pcVar7) <
                 (ulonglong)((longlong)pcVar2 - (longlong)pcVar7));
      }
      strncpy(_Dest + iVar6,pcVar7,(longlong)pcVar5 - (longlong)pcVar7);
      iVar1 = (int)pcVar7;
      pcVar7 = pcVar5 + 1;
      iVar1 = iVar6 + ((int)pcVar5 - iVar1);
      iVar6 = iVar1 + 1;
      _Dest[iVar1] = '\\';
      pcVar2 = (char *)param_2[4];
      lVar3 = (longlong)(int)param_2[5];
    } while ((longlong)pcVar7 - (longlong)pcVar2 < lVar3);
  }
  pcVar2 = (char *)param_2[6];
  lVar3 = (longlong)(int)param_2[7];
  pcVar7 = pcVar2;
  if (0 < lVar3) {
    do {
      pcVar2 = pcVar2 + lVar3;
      pcVar5 = pcVar2;
      if (pcVar2 != pcVar7) {
        pcVar4 = pcVar7;
        do {
          pcVar5 = pcVar2;
          if ((*pcVar4 == '\0') || (pcVar5 = pcVar4, *pcVar4 == '/')) break;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar2;
        } while ((ulonglong)((longlong)pcVar4 - (longlong)pcVar7) <
                 (ulonglong)((longlong)pcVar2 - (longlong)pcVar7));
      }
      strncpy(_Dest + iVar6,pcVar7,(longlong)pcVar5 - (longlong)pcVar7);
      iVar1 = (int)pcVar7;
      pcVar7 = pcVar5 + 1;
      iVar1 = iVar6 + ((int)pcVar5 - iVar1);
      iVar6 = iVar1 + 1;
      _Dest[iVar1] = '\\';
      pcVar2 = (char *)param_2[6];
      lVar3 = (longlong)(int)param_2[7];
    } while ((longlong)pcVar7 - (longlong)pcVar2 < lVar3);
  }
  strncpy(_Dest + iVar6,(char *)param_2[8],(longlong)(int)param_2[9]);
  _Dest[(int)param_2[9] + iVar6] = '\0';
  return _Dest;
}



// FUNCTION 145287be0 FUN_145287be0 body=712 status=ok
// SIG undefined FUN_145287be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145287be0(code *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  char *pcVar12;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  int local_1a0;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined8 local_188;
  code *local_180;
  char local_178 [304];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_198 = 0;
  if (param_5 < 0) {
    param_5 = 0;
  }
  else if (0x40 < param_5) {
    param_5 = 0x40;
  }
  iVar2 = param_5;
  if (6 < param_5) {
    iVar2 = 6;
  }
  local_194 = 0;
  iVar2 = (param_5 - iVar2) + 3;
  local_190 = 0x10 - ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  iVar2 = param_4 / local_190;
  lVar9 = (longlong)local_190;
  local_18c = iVar2 + 1;
  if (param_4 <= iVar2 * local_190) {
    local_18c = iVar2;
  }
  local_188 = param_2;
  local_180 = param_1;
  if (0 < local_18c) {
    iVar2 = 0;
    do {
      iVar7 = local_198;
      local_1a8 = &DAT_149e02088;
      local_1a0 = iVar2;
      iVar3 = FUN_144ec7760(local_178,0x121,"%*s%04x - ",param_5);
      iVar11 = 0;
      uVar8 = (ulonglong)iVar3;
      lVar10 = 0;
      if (0 < lVar9) {
        pcVar12 = local_178 + uVar8;
        do {
          iVar7 = (int)uVar8;
          if (3 < 0x121U - (longlong)iVar7) {
            if (iVar2 + iVar11 < param_4) {
              uVar4 = 0x20;
              if (iVar11 == 7) {
                uVar4 = 0x2d;
              }
              local_1a8 = (undefined1 *)CONCAT44(local_1a8._4_4_,uVar4);
              FUN_144ec7760(local_178 + iVar7,4,"%02x%c",*(undefined1 *)(iVar2 + lVar10 + param_3));
            }
            else {
              builtin_strncpy(pcVar12,"   ",4);
            }
            uVar8 = (ulonglong)(iVar7 + 3);
            pcVar12 = pcVar12 + 3;
          }
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 1;
          iVar7 = local_198;
        } while (lVar10 < lVar9);
      }
      lVar10 = (longlong)(int)uVar8;
      if (2 < 0x121U - lVar10) {
        uVar8 = (ulonglong)((int)uVar8 + 2);
        (local_178 + lVar10)[0] = ' ';
        (local_178 + lVar10)[1] = ' ';
        local_178[lVar10 + 2] = '\0';
      }
      iVar3 = (int)uVar8;
      lVar10 = 0;
      if (0 < lVar9) {
        uVar5 = (longlong)iVar3;
        iVar11 = iVar2;
        do {
          iVar3 = (int)uVar8;
          if (param_4 <= iVar11) break;
          uVar6 = uVar5;
          if (1 < 0x121U - (longlong)iVar3) {
            cVar1 = *(char *)(iVar2 + lVar10 + param_3);
            if (0x5e < (byte)(cVar1 - 0x20U)) {
              cVar1 = '.';
            }
            local_178[uVar5] = cVar1;
            uVar8 = (ulonglong)(iVar3 + 1);
            uVar6 = uVar5 + 1;
            if (0x120 < uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_144e2bb84();
            }
            local_178[uVar5 + 1] = '\0';
          }
          iVar3 = (int)uVar8;
          iVar11 = iVar11 + 1;
          lVar10 = lVar10 + 1;
          uVar5 = uVar6;
        } while (lVar10 < lVar9);
      }
      uVar8 = (ulonglong)iVar3;
      if (1 < 0x121 - uVar8) {
        local_178[uVar8] = '\n';
        uVar8 = (ulonglong)(iVar3 + 1);
        if (0x120 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_144e2bb84();
        }
        local_178[uVar8] = '\0';
      }
      local_198 = (*local_180)(local_178,uVar8,local_188);
      iVar2 = iVar2 + local_190;
      local_198 = iVar7 + local_198;
      local_194 = local_194 + 1;
    } while (local_194 < local_18c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 145287ec0 FUN_145287ec0 body=47 status=ok
// SIG undefined FUN_145287ec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145287ec0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_145287be0(FUN_145288030,param_1,param_2,param_3,0);
  return;
}



// FUNCTION 145287ef0 FUN_145287ef0 body=44 status=ok
// SIG undefined FUN_145287ef0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145287ef0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_145287be0(FUN_145288030,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 145287f20 FUN_145287f20 body=260 status=ok
// SIG undefined FUN_145287f20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145287f20(undefined8 param_1,undefined4 param_2,int param_3,longlong param_4,int param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < param_5) {
    param_5 = param_5 + -1;
    uVar3 = uVar2;
    if (0 < param_5) {
      do {
        if ((uVar2 != 0) && ((int)uVar3 == 0)) {
          FUN_144ec7640(param_1,&DAT_149c02f70,param_2,&DAT_149e02088);
        }
        FUN_144ec7640(param_1,"%02X:",*(undefined1 *)(uVar2 + param_4));
        uVar3 = (longlong)((int)uVar3 + 1) % (longlong)param_3;
        iVar1 = (int)uVar3;
        uVar3 = uVar3 & 0xffffffff;
        if (iVar1 == 0) {
          FUN_144ec7640(param_1,&DAT_149dfc0af);
        }
        uVar2 = uVar2 + 1;
      } while ((longlong)uVar2 < (longlong)param_5);
      if ((param_5 != 0) && (iVar1 == 0)) {
        FUN_144ec7640(param_1,&DAT_149c02f70,param_2,&DAT_149e02088);
      }
    }
    FUN_144ec7640(param_1,&DAT_149e01569,*(undefined1 *)(param_4 + param_5));
  }
  return 1;
}



// FUNCTION 145288030 FUN_145288030 body=34 status=ok
// SIG undefined FUN_145288030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145288030(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_144b9eb80(param_3,param_1,param_2);
  return;
}



// FUNCTION 145288060 FUN_145288060 body=56 status=ok
// SIG undefined FUN_145288060(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145288060(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144ed4800();
  *(longlong *)(param_1 + 0x28) = lVar1;
  if (lVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return 1;
}



// FUNCTION 1452880a0 FUN_1452880a0 body=95 status=ok
// SIG undefined FUN_1452880a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452880a0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ed4800();
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar1 = FUN_144ed4940(lVar2,*(undefined8 *)(param_2 + 0x28));
    return iVar1 != 0;
  }
  return false;
}



// FUNCTION 145288100 FUN_145288100 body=26 status=ok
// SIG undefined FUN_145288100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145288100(longlong param_1)

{
  FUN_144ed4900(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145288120 FUN_145288120 body=122 status=ok
// SIG undefined FUN_145288120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145288120(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ed4800();
  if (lVar2 != 0) {
    iVar1 = FUN_144ed4940(lVar2,*(undefined8 *)(param_1 + 0x28));
    if (iVar1 != 0) {
      FUN_144ba69a0(param_2,0x37e,lVar2);
      return 1;
    }
    FUN_144ed4900(lVar2);
  }
  return 0;
}



// FUNCTION 1452881a0 FUN_1452881a0 body=57 status=ok
// SIG undefined FUN_1452881a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452881a0(undefined8 param_1,undefined8 param_2)

{
  FUN_144ba3ec0(param_2,0x100);
  FUN_144ba3d30(param_2,FUN_1452883a0);
  return 1;
}



// FUNCTION 1452881e0 FUN_1452881e0 body=26 status=ok
// SIG undefined FUN_1452881e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452881e0(longlong param_1)

{
  FUN_144ed4cd0(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 145288200 FUN_145288200 body=158 status=ok
// SIG undefined FUN_145288200(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145288200(longlong param_1,int param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14528820c;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 1) {
    if ((*(longlong *)(param_1 + 0x10) != 0) &&
       (iVar2 = FUN_144ed4940(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28)),
       iVar2 == 0)) {
      return 0;
    }
    lVar4 = 0;
    param_4 = 0;
  }
  else {
    if (param_2 != 6) {
      if (param_2 != 0xc) {
        return 0xfffffffe;
      }
      uVar6 = *(undefined8 *)(param_1 + 8);
      lVar4 = 0;
      lVar3 = 0;
      lVar5 = param_4;
      goto LAB_14528825c;
    }
    if (param_4 == 0) {
      return 0;
    }
    if (param_3 < 0) {
      return 0;
    }
    lVar4 = (longlong)param_3;
  }
  lVar5 = 0;
  uVar6 = 0;
  lVar3 = param_4;
LAB_14528825c:
  iVar2 = FUN_144ed49f0(uVar1,lVar3,lVar4,lVar5,uVar6,uVar7);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 1452882a0 FUN_1452882a0 body=250 status=ok
// SIG undefined FUN_1452882a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1452882a0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x1452882ac;
  if (param_3 == 0) {
    return 0;
  }
  uVar6 = 0;
  uVar4 = uVar6;
  do {
    uVar5 = uVar4 + 1;
    uVar1 = uVar6;
    if (*(char *)(param_2 + uVar4) != "cipher"[uVar4]) {
      do {
        uVar4 = uVar1;
        if (*(char *)(param_2 + uVar4) != (&DAT_14b474526)[uVar4]) {
          do {
            uVar4 = uVar6;
            if (*(char *)(param_2 + uVar4) != (&DAT_149d0a0a0)[uVar4]) {
              return 0xfffffffe;
            }
            uVar6 = uVar4 + 1;
          } while (uVar4 + 1 != 7);
          uVar4 = FUN_144ed1870(param_1,uVar4 & 0xffffffff);
          return uVar4;
        }
        uVar1 = uVar4 + 1;
      } while (uVar4 + 1 != 4);
      uVar4 = FUN_144ed1830(param_1,(int)uVar4 + 3);
      return uVar4;
    }
    uVar4 = uVar5;
  } while (uVar5 != 7);
  lVar3 = FUN_144baaaf0(param_3);
  if (lVar3 != 0) {
    iVar2 = FUN_144ed49f0(*(undefined8 *)(param_1 + 0x28),0,0,lVar3,*(undefined8 *)(param_1 + 8),
                          uVar7);
    return (ulonglong)(iVar2 != 0);
  }
  return 0;
}



// FUNCTION 1452883a0 FUN_1452883a0 body=65 status=ok
// SIG undefined FUN_1452883a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_1452883a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ba3d40();
  iVar1 = FUN_144ed4bb0(*(undefined8 *)(lVar2 + 0x28),param_2,param_3);
  return iVar1 != 0;
}



// FUNCTION 1452883f0 FUN_1452883f0 body=134 status=ok
// SIG undefined FUN_1452883f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452883f0(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x1452883fc;
  puVar1 = (undefined4 *)FUN_144ea6670(0x60,"crypto\\dh\\dh_pmeth.c",0x35);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_144ba24f0(5,0x7d,0x41,"crypto\\dh\\dh_pmeth.c",0x36,uVar2);
    return 0;
  }
  *puVar1 = 0x800;
  puVar1[3] = 0xffffffff;
  puVar1[1] = 2;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  *(undefined4 **)(param_1 + 0x40) = puVar1 + 10;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return 1;
}



// FUNCTION 145288480 FUN_145288480 body=85 status=ok
// SIG undefined FUN_145288480(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145288480(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    FUN_144ea6530(*(undefined8 *)(lVar1 + 0x48),"crypto\\dh\\dh_pmeth.c",0x49);
    FUN_144ed0860(*(undefined8 *)(lVar1 + 0x38));
    FUN_144ea6530(lVar1,"crypto\\dh\\dh_pmeth.c",0x4b);
    return;
  }
  return;
}



// FUNCTION 1452884e0 FUN_1452884e0 body=212 status=ok
// SIG undefined FUN_1452884e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452884e0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_1452883f0();
  if (iVar3 != 0) {
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    puVar2 = *(undefined4 **)(param_1 + 0x28);
    *puVar2 = *puVar1;
    puVar2[3] = puVar1[3];
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[4] = puVar1[4];
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
    puVar2[8] = puVar1[8];
    puVar2[9] = puVar1[9];
    *(undefined1 *)(puVar2 + 0xc) = *(undefined1 *)(puVar1 + 0xc);
    lVar4 = FUN_14526bd70(*(undefined8 *)(puVar1 + 0xe));
    *(longlong *)(puVar2 + 0xe) = lVar4;
    if (lVar4 != 0) {
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      if (*(longlong *)(puVar1 + 0x12) != 0) {
        lVar4 = FUN_144ea6d10(*(longlong *)(puVar1 + 0x12),*(undefined8 *)(puVar1 + 0x14),
                              "crypto\\dh\\dh_pmeth.c",0x66);
        *(longlong *)(puVar2 + 0x12) = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
        *(undefined8 *)(puVar2 + 0x14) = *(undefined8 *)(puVar1 + 0x14);
      }
      *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(puVar1 + 0x16);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1452885c0 FUN_1452885c0 body=728 status=ok
// SIG undefined FUN_1452885c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_1452885c0(longlong param_1,int param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x28);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (0xff < (int)param_3) {
        *puVar1 = param_3;
        return 1;
      }
    }
    else if (param_2 == 2) {
      return 1;
    }
  }
  else {
    switch(param_2) {
    case 0x1002:
      if (puVar1[2] == 0) {
        puVar1[1] = param_3;
        return 1;
      }
      break;
    case 0x1003:
      if ((param_3 - 1 < 3) && (puVar1[9] == 0)) {
        puVar1[8] = param_3;
        return 1;
      }
      break;
    case 0x1004:
      if (puVar1[2] != 0) {
        puVar1[3] = param_3;
        return 1;
      }
      break;
    case 0x1005:
      if (param_3 < 3) {
        puVar1[2] = param_3;
        return 1;
      }
      break;
    case 0x1006:
      if (param_3 == 0xfffffffe) {
        return (int)(char)puVar1[0xc];
      }
      if (param_3 - 1 < 2) {
        *(char *)(puVar1 + 0xc) = (char)param_3;
        return 1;
      }
      break;
    case 0x1007:
      *(uint **)(puVar1 + 0x10) = param_4;
      return 1;
    case 0x1008:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0x10);
      return 1;
    case 0x1009:
      if (0 < (int)param_3) {
        *(longlong *)(puVar1 + 0x16) = (longlong)(int)param_3;
        return 1;
      }
      break;
    case 0x100a:
      *param_4 = puVar1[0x16];
      return 1;
    case 0x100b:
      FUN_144ea6530(*(undefined8 *)(puVar1 + 0x12),"crypto\\dh\\dh_pmeth.c",0xc3);
      *(uint **)(puVar1 + 0x12) = param_4;
      if (param_4 == (uint *)0x0) {
        puVar1[0x14] = 0;
        puVar1[0x15] = 0;
        return 1;
      }
      *(longlong *)(puVar1 + 0x14) = (longlong)(int)param_3;
      return 1;
    case 0x100c:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0x12);
      return puVar1[0x14];
    case 0x100d:
      FUN_144ed0860(*(undefined8 *)(puVar1 + 0xe));
      *(uint **)(puVar1 + 0xe) = param_4;
      return 1;
    case 0x100e:
      *(undefined8 *)param_4 = *(undefined8 *)(puVar1 + 0xe);
      return 1;
    case 0x100f:
      if ((0 < (int)param_3) && (puVar1[8] == 0)) {
        puVar1[9] = param_3;
        return 1;
      }
      break;
    case 0x1010:
      puVar1[4] = param_3;
      return 1;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 1452888e0 FUN_1452888e0 body=619 status=ok
// SIG undefined FUN_1452888e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452888e0(longlong param_1,char *param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x1452888f5;
  iVar1 = strcmp(param_2,"dh_paramgen_prime_len");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar5 = FUN_144ed1710(param_1,0x1c,2,0x1001,iVar1,0);
    return uVar5;
  }
  iVar1 = strcmp(param_2,"dh_rfc5114");
  if (iVar1 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar2 = atoi(param_3);
    if (uVar2 < 4) {
      *(uint *)(lVar3 + 0x20) = uVar2;
      return 1;
    }
  }
  else {
    iVar1 = strcmp(param_2,"dh_param");
    if (iVar1 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      iVar1 = FUN_144ea96a0(param_3);
      if (iVar1 != 0) {
        *(int *)(lVar3 + 0x24) = iVar1;
        return 1;
      }
      FUN_144ba24f0(5,0x78,0x6e,"crypto\\dh\\dh_pmeth.c",0xf4,uVar5);
    }
    else {
      iVar1 = strcmp(param_2,"dh_paramgen_generator");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = FUN_144ed1710(param_1,0x1c,2,0x1002,iVar1,0);
        return uVar5;
      }
      iVar1 = strcmp(param_2,"dh_paramgen_subprime_len");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = FUN_144ed1710(param_1,0x1c,2,0x1004,iVar1,0);
        return uVar5;
      }
      iVar1 = strcmp(param_2,"dh_paramgen_type");
      if (iVar1 == 0) {
        iVar1 = atoi(param_3);
        uVar5 = FUN_144ed1710(param_1,0x1c,2,0x1005,iVar1,0);
        return uVar5;
      }
      lVar3 = 0;
      while (lVar4 = lVar3 + 1, param_2[lVar3] == (&DAT_149d0a34c)[lVar3]) {
        lVar3 = lVar4;
        if (lVar4 == 7) {
          iVar1 = atoi(param_3);
          uVar5 = FUN_144ed1710(param_1,0x1c,0x400,0x1010,iVar1,0);
          return uVar5;
        }
      }
    }
  }
  return 0xfffffffe;
}



// FUNCTION 145288b50 FUN_145288b50 body=433 status=ok
// SIG undefined FUN_145288b50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145288b50(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  iVar2 = puVar1[8];
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      uVar3 = FUN_1454d8790();
    }
    else if (iVar2 == 2) {
      uVar3 = FUN_1454d8810();
    }
    else {
      if (iVar2 != 3) {
        return -2;
      }
      uVar3 = FUN_1454d8890();
    }
    FUN_144ba69a0(param_2,0x398,uVar3);
    return 1;
  }
  if (puVar1[9] == 0) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_144ba0270();
      if (lVar4 == 0) {
        return 0;
      }
      FUN_145282e70(lVar4,param_1);
    }
    if (puVar1[2] == 0) {
      lVar5 = FUN_144ed3d30();
      if (lVar5 != 0) {
        iVar2 = FUN_1454d8590(lVar5,*puVar1,puVar1[1],lVar4);
        FUN_144ba02c0(lVar4);
        if (iVar2 == 0) {
          FUN_144ed3d50(lVar5);
          return 0;
        }
        FUN_144ba69a0(param_2,0x1c,lVar5);
        return iVar2;
      }
      FUN_144ba02c0(lVar4);
    }
    else {
      lVar5 = FUN_145288f90(puVar1,lVar4);
      FUN_144ba02c0(lVar4);
      if (lVar5 != 0) {
        lVar4 = FUN_144ed43d0(lVar5);
        FUN_144ed4200(lVar5);
        if (lVar4 != 0) {
          FUN_144ba69a0(param_2,0x398,lVar4);
          return 1;
        }
      }
    }
    return 0;
  }
  lVar4 = FUN_1454d8910();
  if (lVar4 != 0) {
    FUN_144ba69a0(param_2,0x1c,lVar4);
    return 1;
  }
  return 0;
}



// FUNCTION 145288d10 FUN_145288d10 body=167 status=ok
// SIG undefined FUN_145288d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145288d10(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_1[2] == 0) && (*(int *)(param_1[5] + 0x24) == 0)) {
    FUN_144ba24f0(5,0x71,0x6b,"crypto\\dh\\dh_pmeth.c",0x194,0x145288d20);
  }
  else {
    if (*(int *)(param_1[5] + 0x24) == 0) {
      lVar2 = FUN_144ed3d30();
    }
    else {
      lVar2 = FUN_1454d8910();
    }
    if (lVar2 != 0) {
      FUN_144ba69a0(param_2,*(undefined4 *)*param_1,lVar2);
      if ((param_1[2] != 0) && (iVar1 = FUN_144ba6ec0(param_2), iVar1 == 0)) {
        return 0;
      }
      uVar3 = FUN_1452998a0(*(undefined8 *)(param_2 + 0x28));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145288dc0 FUN_145288dc0 body=455 status=ok
// SIG undefined FUN_145288dc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145288dc0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_1 + 0x18) == 0)) {
    FUN_144ba24f0(5,0x70,0x6c,"crypto\\dh\\dh_pmeth.c",0x1ac);
    return 0;
  }
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28) + 0x20);
  if (*(char *)(lVar1 + 0x30) == '\x01') {
    if (param_2 == 0) {
      iVar3 = FUN_144ed3e50(uVar4);
      *param_3 = (longlong)iVar3;
    }
    else {
      if (*(int *)(lVar1 + 0x10) == 0) {
        uVar4 = FUN_1452998c0(param_2,uVar2,uVar4);
      }
      else {
        uVar4 = FUN_145299980();
      }
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      *param_3 = (longlong)(int)uVar4;
    }
LAB_145288e28:
    uVar4 = 1;
  }
  else {
    if (((*(char *)(lVar1 + 0x30) == '\x02') && (lVar5 = *(longlong *)(lVar1 + 0x58), lVar5 != 0))
       && (*(longlong *)(lVar1 + 0x38) != 0)) {
      if (param_2 == 0) {
        *param_3 = lVar5;
        goto LAB_145288e28;
      }
      if (*param_3 == lVar5) {
        uVar6 = 0;
        iVar3 = FUN_144ed3e50(uVar4);
        lVar7 = (longlong)iVar3;
        lVar5 = FUN_144ea64e0(lVar7,"crypto\\dh\\dh_pmeth.c",0x1ce);
        if (((lVar5 != 0) && (iVar3 = FUN_145299980(lVar5,uVar2,uVar4), 0 < iVar3)) &&
           (iVar3 = FUN_1454d8a50(param_2,*param_3,lVar5,lVar7,*(undefined8 *)(lVar1 + 0x38),
                                  *(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),
                                  *(undefined8 *)(lVar1 + 0x40)), iVar3 != 0)) {
          uVar6 = 1;
          *param_3 = *(longlong *)(lVar1 + 0x58);
        }
        FUN_144ea66f0(lVar5,lVar7,"crypto\\dh\\dh_pmeth.c",0x1da);
        return uVar6;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 145288f90 FUN_145288f90 body=306 status=ok
// SIG undefined FUN_145288f90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_145288f90(int *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  uVar6 = 0x145288fa9;
  iVar1 = *param_1;
  iVar4 = param_1[3];
  lVar3 = *(longlong *)(param_1 + 6);
  if (2 < param_1[2]) {
    return 0;
  }
  lVar2 = FUN_144ed4040();
  if (lVar2 == 0) {
    return 0;
  }
  if ((iVar4 == -1) && (iVar4 = 0xa0, 0x7ff < iVar1)) {
    iVar4 = 0x100;
  }
  if (lVar3 == 0) {
    if (iVar1 < 0x800) {
      lVar3 = FUN_144bab020();
    }
    else {
      lVar3 = FUN_144bab040();
    }
  }
  if (param_1[2] == 1) {
    iVar1 = FUN_1454d8e90(lVar2,(longlong)iVar1,(longlong)iVar4,lVar3,0,0,0,0,0,param_2);
  }
  else {
    if (param_1[2] != 2) goto LAB_14528909a;
    iVar1 = FUN_1454d96d0(lVar2,(longlong)iVar1,(longlong)iVar4,lVar3,0,0,CONCAT44(uVar5,0xffffffff)
                          ,0,0,0,param_2,uVar6);
  }
  if (0 < iVar1) {
    return lVar2;
  }
LAB_14528909a:
  FUN_144ed4200(lVar2);
  return 0;
}



// FUNCTION 1452890d0 FUN_1452890d0 body=98 status=ok
// SIG undefined FUN_1452890d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452890d0(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_144ea64e0(0x20,"crypto\\dsa\\dsa_pmeth.c",0x22);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = 0x800;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 6) = 0;
  puVar1[1] = 0xe0;
  *(undefined4 **)(param_1 + 0x28) = puVar1;
  *(undefined4 **)(param_1 + 0x40) = puVar1 + 4;
  *(undefined4 *)(param_1 + 0x48) = 2;
  return 1;
}



// FUNCTION 145289140 FUN_145289140 body=152 status=ok
// SIG undefined FUN_145289140(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145289140(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_144ea64e0(0x20,"crypto\\dsa\\dsa_pmeth.c",0x22);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x800;
    puVar2[1] = 0xe0;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined4 **)(param_1 + 0x28) = puVar2;
    *(undefined4 **)(param_1 + 0x40) = puVar2 + 4;
    *(undefined4 *)(param_1 + 0x48) = 2;
    puVar1 = *(undefined4 **)(param_2 + 0x28);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
    *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar1 + 6);
    return 1;
  }
  return 0;
}



// FUNCTION 1452891e0 FUN_1452891e0 body=37 status=ok
// SIG undefined FUN_1452891e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1452891e0(longlong param_1)

{
  FUN_144ea6530(*(undefined8 *)(param_1 + 0x28),"crypto\\dsa\\dsa_pmeth.c",0x44);
  return;
}



// FUNCTION 145289210 FUN_145289210 body=150 status=ok
// SIG undefined FUN_145289210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145289210(longlong param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint local_res8 [2];
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) != 0) &&
     (iVar1 = FUN_144ba3cd0(), param_5 != iVar1)) {
    return 0;
  }
  uVar2 = FUN_144ee7850(0,param_4,(undefined4)param_5,param_2,local_res8,uVar2);
  if (0 < (int)uVar2) {
    *param_3 = (ulonglong)local_res8[0];
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1452892b0 FUN_1452892b0 body=128 status=ok
// SIG undefined FUN_1452892b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_1452892b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) != 0) &&
     (iVar1 = FUN_144ba3cd0(), param_5 != iVar1)) {
    return 0;
  }
  uVar2 = FUN_144ee78e0(0,param_4,(undefined4)param_5,param_2,param_3,uVar2);
  return uVar2;
}



// FUNCTION 145289330 FUN_145289330 body=557 status=ok
// SIG undefined FUN_145289330(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145289330(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x145289340;
  piVar1 = *(int **)(param_1 + 0x28);
  if (param_2 < 0x1002) {
    if (param_2 == 0x1001) {
      if (0xff < param_3) {
        *piVar1 = param_3;
        return 1;
      }
    }
    else {
      switch(param_2) {
      case 1:
        iVar2 = FUN_144ba3cb0(param_4);
        if ((((iVar2 == 0x40) || (iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x74)) ||
            (((iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x42 ||
              (((iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x2a3 ||
                (iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x2a0)) ||
               (iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x2a1)))) ||
             ((iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x2a2 ||
              (iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x448)))))) ||
           ((iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x449 ||
            ((iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x44a ||
             (iVar2 = FUN_144ba3cb0(param_4), iVar2 == 1099)))))) {
          *(undefined8 **)(piVar1 + 6) = param_4;
          return 1;
        }
        uVar3 = 0x92;
LAB_1452894ec:
        FUN_144ba24f0(10,0x78,0x6a,"crypto\\dsa\\dsa_pmeth.c",uVar3,uVar4);
        return 0;
      case 2:
        FUN_144ba24f0(10,0x78,0x96,"crypto\\dsa\\dsa_pmeth.c",0xa3,0x145289340);
        break;
      case 5:
      case 7:
      case 0xb:
        return 1;
      case 0xd:
        *param_4 = *(undefined8 *)(piVar1 + 6);
        return 1;
      }
    }
  }
  else if (param_2 == 0x1002) {
    if ((((param_3 == 0xa0) || (param_3 == 0xe0)) || (param_3 == 0)) || (param_3 == 0x100)) {
      piVar1[1] = param_3;
      return 1;
    }
  }
  else if (param_2 == 0x1003) {
    iVar2 = FUN_144ba3cb0(param_4);
    if (((iVar2 == 0x40) || (iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x2a3)) ||
       (iVar2 = FUN_144ba3cb0(param_4), iVar2 == 0x2a0)) {
      *(undefined8 **)(piVar1 + 2) = param_4;
      return 1;
    }
    uVar3 = 0x80;
    goto LAB_1452894ec;
  }
  return 0xfffffffe;
}



// FUNCTION 1452895a0 FUN_1452895a0 body=346 status=ok
// SIG undefined FUN_1452895a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452895a0(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x1452895b5;
  iVar1 = strcmp(param_2,"dsa_paramgen_bits");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar3 = FUN_144ed1710(param_1,0x74,2,0x1001,iVar1,0);
    return uVar3;
  }
  iVar1 = strcmp(param_2,"dsa_paramgen_q_bits");
  if (iVar1 == 0) {
    iVar1 = atoi(param_3);
    uVar3 = FUN_144ed1710(param_1,0x74,2,0x1002,iVar1,0);
    return uVar3;
  }
  iVar1 = strcmp(param_2,"dsa_paramgen_md");
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  lVar2 = FUN_144baab30(param_3);
  if (lVar2 == 0) {
    FUN_144ba24f0(10,0x68,0x6a,"crypto\\dsa\\dsa_pmeth.c",0xbb,uVar3);
    return 0;
  }
  uVar3 = FUN_144ed1710(param_1,0x74,2,0x1003,0,lVar2);
  return uVar3;
}



// FUNCTION 145289700 FUN_145289700 body=226 status=ok
// SIG undefined FUN_145289700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145289700(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  piVar1 = *(int **)(param_1 + 0x28);
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar3 = FUN_144ba0270();
    if (lVar3 == 0) {
      return 0;
    }
    FUN_145282e70(lVar3,param_1);
  }
  lVar4 = FUN_144ed4040();
  if (lVar4 == 0) {
    FUN_144ba02c0(lVar3);
    return 0;
  }
  iVar2 = FUN_1454d8e90(lVar4,(longlong)*piVar1,(longlong)piVar1[1],*(undefined8 *)(piVar1 + 2),0,0,
                        0,0,0,lVar3);
  FUN_144ba02c0(lVar3);
  if (iVar2 == 0) {
    FUN_144ed4200(lVar4);
    return 0;
  }
  FUN_144ba69a0(param_2,0x74,lVar4);
  return iVar2;
}



// FUNCTION 1452897f0 FUN_1452897f0 body=136 status=ok
// SIG undefined FUN_1452897f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1452897f0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_144ba24f0(10,0x79,0x6b,"crypto\\dsa\\dsa_pmeth.c",0xe5,0x145289800);
  }
  else {
    lVar2 = FUN_144ed4040();
    if (lVar2 != 0) {
      FUN_144ba69a0(param_2,0x74,lVar2);
      iVar1 = FUN_144ba6ec0(param_2,*(undefined8 *)(param_1 + 0x10));
      if (iVar1 != 0) {
        uVar3 = FUN_1454da220(*(undefined8 *)(param_2 + 0x28));
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 145289880 FUN_145289880 body=176 status=ok
// SIG undefined FUN_145289880(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_145289880(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 == 0) {
    FUN_144ba24f0(0x10,0xdb,0x8b,"crypto\\ec\\ec_pmeth.c",0x191,0x145289890);
    return 0;
  }
  lVar3 = FUN_144ed2d70();
  if (lVar3 != 0) {
    iVar2 = FUN_144ed31b0(lVar3,*plVar1);
    if ((iVar2 != 0) && (iVar2 = FUN_144ba69a0(param_2,0x198,lVar3), iVar2 != 0)) {
      return iVar2;
    }
    FUN_144ed2e50(lVar3);
    return 0;
  }
  return 0;
}



// FUNCTION 145289930 FUN_145289930 body=210 status=ok
// SIG undefined FUN_145289930(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145289930(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if ((*(longlong *)(param_1 + 0x10) == 0) && (*plVar1 == 0)) {
    FUN_144ba24f0(0x10,199,0x8b,"crypto\\ec\\ec_pmeth.c",0x1a4,0x145289945);
    return 0;
  }
  lVar3 = FUN_144ed2d70();
  if (lVar3 != 0) {
    iVar2 = FUN_144ba69a0(param_2,0x198,lVar3);
    if (iVar2 == 0) {
      FUN_144ed2e50(lVar3);
    }
    else {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        iVar2 = FUN_144ed31b0(lVar3,*plVar1);
      }
      else {
        iVar2 = FUN_144ba6ec0(param_2);
      }
      if (iVar2 != 0) {
        uVar4 = FUN_144ed3270(lVar3);
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 145289a10 FUN_145289a10 body=103 status=ok
// SIG undefined FUN_145289a10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145289a10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x145289a1c;
  lVar1 = FUN_144ea6670(0x40,"crypto\\ec\\ec_pmeth.c",0x2d);
  if (lVar1 == 0) {
    FUN_144ba24f0(0x10,0x11a,0x41,"crypto\\ec\\ec_pmeth.c",0x2e,uVar2);
    return 0;
  }
  *(undefined2 *)(lVar1 + 0x18) = 0x1ff;
  *(longlong *)(param_1 + 0x28) = lVar1;
  return 1;
}



// FUNCTION 145289a80 FUN_145289a80 body=202 status=ok
// SIG undefined FUN_145289a80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145289a80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = FUN_145289a10();
  if (iVar3 == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (*plVar1 != 0) {
    lVar4 = FUN_144efbe70();
    *plVar2 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  plVar2[1] = plVar1[1];
  if (plVar1[2] != 0) {
    lVar4 = FUN_144ed3120();
    plVar2[2] = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  *(undefined1 *)((longlong)plVar2 + 0x19) = *(undefined1 *)((longlong)plVar1 + 0x19);
  plVar2[4] = plVar1[4];
  plVar2[7] = plVar1[7];
  if (plVar1[5] == 0) {
    plVar2[5] = 0;
  }
  else {
    lVar4 = FUN_144ea6d10(plVar1[5],plVar1[6],"crypto\\ec\\ec_pmeth.c",0x4f);
    plVar2[5] = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  plVar2[6] = plVar1[6];
  return 1;
}



// FUNCTION 145289b50 FUN_145289b50 body=110 status=ok
// SIG undefined FUN_145289b50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145289b50(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_144efba20(*puVar1);
    FUN_144ed2e50(puVar1[2]);
    FUN_144ea6530(puVar1[5],"crypto\\ec\\ec_pmeth.c",0x5e);
    FUN_144ea6530(puVar1,"crypto\\ec\\ec_pmeth.c",0x5f);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145289bc0 FUN_145289bc0 body=198 status=ok
// SIG undefined FUN_145289bc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_145289bc0(longlong param_1,longlong param_2,ulonglong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint local_res8 [2];
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar6;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x145289bd8;
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  iVar2 = FUN_144ee6e30(uVar5);
  if (iVar2 < 1) {
LAB_145289c29:
    uVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)iVar2;
    if (param_2 != 0) {
      if (*param_3 < uVar4) {
        FUN_144ba24f0(0x10,0xda,100,"crypto\\ec\\ec_pmeth.c",CONCAT44(uVar3,0x77),uVar6);
        goto LAB_145289c29;
      }
      if (*(longlong *)(lVar1 + 8) == 0) {
        uVar3 = 0x40;
      }
      else {
        uVar3 = FUN_144ba3cb0();
      }
      uVar5 = FUN_1454da3d0(uVar3,param_4,param_5,param_2,local_res8,uVar5);
      if ((int)uVar5 < 1) {
        return uVar5;
      }
      uVar4 = (ulonglong)local_res8[0];
    }
    *param_3 = uVar4;
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 145289c90 FUN_145289c90 body=119 status=ok
// SIG undefined FUN_145289c90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_145289c90(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = FUN_144ba3cb0();
  }
  FUN_1454da490(uVar2,param_4,param_5,param_2,param_3,uVar1);
  return;
}



// FUNCTION 145289d10 FUN_145289d10 body=399 status=ok
// SIG undefined FUN_145289d10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_145289d10(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar4 = 0;
  if (*(char *)(lVar1 + 0x19) == '\x01') {
    uVar4 = FUN_14528a5a0();
  }
  else if (param_2 == 0) {
    *param_3 = *(longlong *)(lVar1 + 0x38);
    uVar4 = 1;
  }
  else {
    if (*param_3 == *(longlong *)(lVar1 + 0x38)) {
      if ((*(longlong *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
        lVar6 = *(longlong *)(lVar1 + 0x10);
        if (lVar6 == 0) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
        }
        uVar5 = FUN_144ed31a0(lVar6);
        iVar3 = FUN_144efc3e0(uVar5);
        local_res8 = (longlong)((int)(iVar3 + 7 + (iVar3 + 7 >> 0x1f & 7U)) >> 3);
        lVar6 = FUN_144ea64e0(local_res8,"crypto\\ec\\ec_pmeth.c",0xcd);
        if (lVar6 == 0) {
          FUN_144ba24f0(0x10,0x11b,0x41,"crypto\\ec\\ec_pmeth.c",CONCAT44(uVar7,0xce));
          return 0;
        }
        iVar3 = FUN_14528a5a0(param_1,lVar6,&local_res8);
        lVar2 = local_res8;
        if ((iVar3 != 0) &&
           (iVar3 = FUN_1454da4e0(param_2,*param_3,lVar6,local_res8,*(undefined8 *)(lVar1 + 0x28),
                                  *(undefined8 *)(lVar1 + 0x30),*(undefined8 *)(lVar1 + 0x20)),
           iVar3 != 0)) {
          uVar4 = 1;
        }
        FUN_144ea66f0(lVar6,lVar2,"crypto\\ec\\ec_pmeth.c",0xda);
        return uVar4;
      }
      FUN_144ba24f0(0x10,0xd9,0x8c,"crypto\\ec\\ec_pmeth.c",0xa0);
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 145289ea0 FUN_145289ea0 body=1147 status=ok
// SIG undefined FUN_145289ea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_145289ea0(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (0x1001 < param_2) {
    switch(param_2) {
    case 0x1002:
      if (*plVar1 != 0) {
        FUN_144efc200(*plVar1,param_3);
        return 1;
      }
      FUN_144ba24f0(0x10,0xc5,0x8b,"crypto\\ec\\ec_pmeth.c",0xf0,0x145289eb5);
      return 0;
    case 0x1003:
      if (param_3 == -2) {
        if ((char)plVar1[3] == -1) {
          uVar4 = FUN_144ed2d90(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28));
          return uVar4 >> 0xc & 1;
        }
        return (int)(char)plVar1[3];
      }
      if (param_3 + 1U < 3) {
        *(char *)(plVar1 + 3) = (char)param_3;
        if (param_3 == -1) {
          FUN_144ed2e50(plVar1[2]);
          plVar1[2] = 0;
          return 1;
        }
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x28);
        lVar2 = *(longlong *)(lVar5 + 0x18);
        if (lVar2 != 0) {
          iVar3 = FUN_144ba0350(*(undefined8 *)(lVar2 + 0x18));
          if (iVar3 != 0) {
            return 1;
          }
          if (plVar1[2] == 0) {
            lVar5 = FUN_144ed3120(lVar5);
            plVar1[2] = lVar5;
            if (lVar5 == 0) {
              return 0;
            }
          }
          if (param_3 == 0) {
            FUN_144ed2db0(plVar1[2],0x1000);
            return 1;
          }
          FUN_144ed2da0();
          return 1;
        }
      }
      break;
    case 0x1004:
      if (param_3 == -2) {
        return (int)*(char *)((longlong)plVar1 + 0x19);
      }
      if (param_3 - 1U < 2) {
        *(char *)((longlong)plVar1 + 0x19) = (char)param_3;
        return 1;
      }
      break;
    case 0x1005:
      plVar1[4] = (longlong)param_4;
      return 1;
    case 0x1006:
      *param_4 = plVar1[4];
      return 1;
    case 0x1007:
      if (0 < param_3) {
        plVar1[7] = (longlong)param_3;
        return 1;
      }
      break;
    case 0x1008:
      *(int *)param_4 = (int)plVar1[7];
      return 1;
    case 0x1009:
      FUN_144ea6530(plVar1[5],"crypto\\ec\\ec_pmeth.c",0x134);
      plVar1[5] = (longlong)param_4;
      if (param_4 == (longlong *)0x0) {
        plVar1[6] = 0;
        return 1;
      }
      plVar1[6] = (longlong)param_3;
      return 1;
    case 0x100a:
      *param_4 = plVar1[5];
      return *(uint *)(plVar1 + 6);
    }
switchD_145289ef6_caseD_3:
    return 0xfffffffe;
  }
  if (param_2 == 0x1001) {
    lVar5 = FUN_14527fe90(param_3);
    if (lVar5 == 0) {
      FUN_144ba24f0(0x10,0xc5,0x8d,"crypto\\ec\\ec_pmeth.c",0xe7);
      return 0;
    }
    FUN_144efba20(*plVar1);
    *plVar1 = lVar5;
switchD_145289ef6_caseD_2:
    return 1;
  }
  switch(param_2) {
  case 1:
    iVar3 = FUN_144ba3cb0(param_4);
    if ((((((iVar3 != 0x40) && (iVar3 = FUN_144ba3cb0(param_4), iVar3 != 0x1a0)) &&
          (iVar3 = FUN_144ba3cb0(param_4), iVar3 != 0x2a3)) &&
         ((iVar3 = FUN_144ba3cb0(param_4), iVar3 != 0x2a0 &&
          (iVar3 = FUN_144ba3cb0(param_4), iVar3 != 0x2a1)))) &&
        ((iVar3 = FUN_144ba3cb0(param_4), iVar3 != 0x2a2 &&
         ((iVar3 = FUN_144ba3cb0(param_4), iVar3 != 0x448 &&
          (iVar3 = FUN_144ba3cb0(param_4), iVar3 != 0x449)))))) &&
       ((iVar3 = FUN_144ba3cb0(param_4), iVar3 != 0x44a &&
        (iVar3 = FUN_144ba3cb0(param_4), iVar3 != 1099)))) {
      FUN_144ba24f0(0x10,0xc5,0x8a,"crypto\\ec\\ec_pmeth.c",0x14b);
      return 0;
    }
    plVar1[1] = (longlong)param_4;
    return 1;
  case 2:
  case 5:
  case 7:
  case 0xb:
    goto switchD_145289ef6_caseD_2;
  default:
    goto switchD_145289ef6_caseD_3;
  case 0xd:
    *param_4 = plVar1[1];
    return 1;
  }
}



// FUNCTION 14528a380 FUN_14528a380 body=531 status=ok
// SIG undefined FUN_14528a380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14528a380(undefined8 param_1,char *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x14528a395;
  iVar1 = strcmp(param_2,"ec_paramgen_curve");
  if (iVar1 == 0) {
    iVar1 = FUN_14527ff60(param_3);
    if (((iVar1 == 0) && (iVar1 = FUN_144ea96a0(param_3), iVar1 == 0)) &&
       (iVar1 = FUN_144ea9580(param_3), iVar1 == 0)) {
      FUN_144ba24f0(0x10,0xc6,0x8d,"crypto\\ec\\ec_pmeth.c",0x16d,uVar4);
      return 0;
    }
    uVar4 = FUN_144ed1710(param_1,0x198,6,0x1001,iVar1,0);
    return uVar4;
  }
  iVar1 = strcmp(param_2,"ec_param_enc");
  if (iVar1 == 0) {
    iVar1 = strcmp(param_3,"explicit");
    if (iVar1 == 0) {
      uVar4 = 0x1002;
      uVar3 = 6;
      iVar1 = 0;
    }
    else {
      iVar1 = strcmp(param_3,"named_curve");
      if (iVar1 != 0) {
        return 0xfffffffe;
      }
      iVar1 = 1;
      uVar4 = 0x1002;
      uVar3 = 6;
    }
  }
  else {
    iVar1 = strcmp(param_2,"ecdh_kdf_md");
    if (iVar1 == 0) {
      lVar2 = FUN_144baab30(param_3);
      if (lVar2 != 0) {
        uVar4 = FUN_144ed1710(param_1,0x198,0x400,0x1005,0,lVar2);
        return uVar4;
      }
      FUN_144ba24f0(0x10,0xc6,0x97,"crypto\\ec\\ec_pmeth.c",0x17d,uVar4);
      return 0;
    }
    iVar1 = strcmp(param_2,"ecdh_cofactor_mode");
    if (iVar1 != 0) {
      return 0xfffffffe;
    }
    iVar1 = atoi(param_3);
    uVar4 = 0x1003;
    uVar3 = 0x400;
  }
  uVar4 = FUN_144ed1710(param_1,0x198,uVar3,uVar4,iVar1,0);
  return uVar4;
}


