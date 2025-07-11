// BasicSystem.cpp
#include "BasicSystem.hpp"
#include "BasicSystem_regen.ipp"


long __cdecl get_bodypart_from_item(long nItemID, long nGender, long* pnBodyPart, int32_t bAll)
{
  int gender_from_id; // eax
  int result; // eax
  int v6; // ecx
  int v7; // eax

  gender_from_id = get_gender_from_id(nItemID);
  if ( nGender != 2 && gender_from_id != 2 && gender_from_id != nGender )
    return 0;
  v6 = nItemID / 10000;
  switch ( nItemID / 10000 )
  {
    case 100:
      *pnBodyPart = 1;
      result = 1;
      break;
    case 101:
      *pnBodyPart = 2;
      result = 1;
      break;
    case 102:
      *pnBodyPart = 3;
      result = 1;
      break;
    case 103:
      *pnBodyPart = 4;
      result = 1;
      break;
    case 104:
    case 105:
      *pnBodyPart = 5;
      result = 1;
      break;
    case 106:
      *pnBodyPart = 6;
      result = 1;
      break;
    case 107:
      *pnBodyPart = 7;
      result = 1;
      break;
    case 108:
      *pnBodyPart = 8;
      result = 1;
      break;
    case 109:
    case 119:
    case 134:
      *pnBodyPart = 10;
      result = 1;
      break;
    case 110:
      *pnBodyPart = 9;
      result = 1;
      break;
    case 111:
      *pnBodyPart = 12;
      if ( bAll )
      {
        pnBodyPart[1] = 13;
        pnBodyPart[2] = 15;
        pnBodyPart[3] = 16;
        result = 4;
      }
      else
      {
        result = 1;
      }
      break;
    case 112:
      *pnBodyPart = 17;
      if ( !bAll )
        goto LABEL_71;
      pnBodyPart[1] = 59;
      result = 2;
      break;
    case 113:
      *pnBodyPart = 50;
      result = 1;
      break;
    case 114:
      *pnBodyPart = 49;
      result = 1;
      break;
    case 115:
      *pnBodyPart = 51;
      result = 1;
      break;
    case 161:
      *pnBodyPart = 1100;
      result = 1;
      break;
    case 162:
      *pnBodyPart = 1101;
      result = 1;
      break;
    case 163:
      *pnBodyPart = 1102;
      result = 1;
      break;
    case 164:
      *pnBodyPart = 1103;
      result = 1;
      break;
    case 165:
      *pnBodyPart = 1104;
      result = 1;
      break;
    case 180:
      if ( nItemID == 1802100 )
      {
        if ( bAll )
          goto LABEL_39;
        *pnBodyPart = 21;
        result = 1;
      }
      else
      {
        *pnBodyPart = 14;
        if ( bAll )
        {
          pnBodyPart[1] = 30;
          pnBodyPart[2] = 38;
          result = 3;
        }
        else
        {
          result = 1;
        }
      }
      break;
    case 181:
      switch ( nItemID )
      {
        case 1812000:
          *pnBodyPart = 23;
          if ( !bAll )
            goto LABEL_71;
          pnBodyPart[1] = 34;
          pnBodyPart[2] = 42;
          result = 3;
          break;
        case 1812001:
          *pnBodyPart = 22;
          if ( bAll )
          {
            pnBodyPart[1] = 33;
            pnBodyPart[2] = 41;
            result = 3;
          }
          else
          {
            result = 1;
          }
          break;
        case 1812002:
          *pnBodyPart = 24;
          result = 1;
          break;
        case 1812003:
          *pnBodyPart = 25;
          result = 1;
          break;
        case 1812004:
          *pnBodyPart = 26;
          if ( bAll )
          {
            pnBodyPart[1] = 35;
            pnBodyPart[2] = 43;
            result = 3;
          }
          else
          {
            result = 1;
          }
          break;
        case 1812005:
          *pnBodyPart = 27;
          if ( bAll )
          {
            pnBodyPart[1] = 36;
            pnBodyPart[2] = 44;
            result = 3;
          }
          else
          {
            result = 1;
          }
          break;
        case 1812006:
          *pnBodyPart = 28;
          if ( !bAll )
            goto LABEL_71;
          pnBodyPart[1] = 37;
          pnBodyPart[2] = 45;
          result = 3;
          break;
        case 1812007:
          *pnBodyPart = 46;
          if ( bAll )
          {
            pnBodyPart[1] = 47;
            pnBodyPart[3] = 48;
            result = 3;
          }
          else
          {
            result = 1;
          }
          break;
        default:
          goto $LN10_10;
      }
      break;
    case 182:
$LN10_10:
      if ( bAll )
      {
LABEL_39:
        *pnBodyPart = 21;
        pnBodyPart[1] = 31;
        pnBodyPart[2] = 39;
        result = 3;
      }
      else
      {
        *pnBodyPart = 21;
        result = 1;
      }
      break;
    case 183:
      *pnBodyPart = 29;
      if ( !bAll )
        goto LABEL_71;
      pnBodyPart[1] = 32;
      pnBodyPart[2] = 40;
      result = 3;
      break;
    case 190:
      *pnBodyPart = 18;
      result = 1;
      break;
    case 191:
      *pnBodyPart = 19;
      result = 1;
      break;
    case 192:
      *pnBodyPart = 20;
      result = 1;
      break;
    case 194:
      *pnBodyPart = 1000;
      result = 1;
      break;
    case 195:
      *pnBodyPart = 1001;
      result = 1;
      break;
    case 196:
      *pnBodyPart = 1002;
      result = 1;
      break;
    case 197:
      *pnBodyPart = 1003;
      result = 1;
      break;
    default:
      v7 = v6 / 10;
      if ( v6 / 10 != 13 && v7 != 14 && v7 != 16 && v7 != 17 )
        return 0;
      *pnBodyPart = 11;
LABEL_71:
      result = 1;
      break;
  }
  return result;
}

int32_t __cdecl is_correct_bodypart(long nItemID, long nBodyPart, long nGender)
{
    int gender_from_id; // eax
    bool result; // eax
    int v5; // ecx
    int v6; // eax
    int v7; // eax

    gender_from_id = get_gender_from_id(nItemID);
    if (nGender != 2 && gender_from_id != 2 && gender_from_id != nGender)
        return 0;
    v5 = nItemID / 10000;
    switch (nItemID / 10000)
    {
    case 100:
        return nBodyPart == 1;
    case 101:
        return nBodyPart == 2;
    case 102:
        return nBodyPart == 3;
    case 103:
        return nBodyPart == 4;
    case 104:
    case 105:
        return nBodyPart == 5;
    case 106:
        return nBodyPart == 6;
    case 107:
        return nBodyPart == 7;
    case 108:
        return nBodyPart == 8;
    case 109:
    case 119:
    case 134:
        return nBodyPart == 10;
    case 110:
        return nBodyPart == 9;
    case 111:
        if (nBodyPart != 12 && nBodyPart != 13 && nBodyPart != 15 && nBodyPart != 16)
            return 0;
        goto LABEL_20;
    case 112:
        if (nBodyPart == 17 || nBodyPart == 59)
            goto LABEL_20;
        return 0;
    case 113:
        return nBodyPart == 50;
    case 114:
        return nBodyPart == 49;
    case 115:
        return nBodyPart == 51;
    case 161:
        return nBodyPart == 1100;
    case 162:
        return nBodyPart == 1101;
    case 163:
        return nBodyPart == 1102;
    case 164:
        return nBodyPart == 1103;
    case 165:
        return nBodyPart == 1104;
    case 180:
        v6 = nBodyPart;
        if (nItemID == 1802100)
            goto LABEL_72;
        if (nBodyPart == 14 || nBodyPart == 30 || nBodyPart == 38)
            goto LABEL_20;
        result = 0;
        break;
    case 181:
        switch (nItemID)
        {
        case 1812000:
            if (nBodyPart == 23 || nBodyPart == 34 || nBodyPart == 42)
                goto LABEL_20;
            result = 0;
            break;
        case 1812001:
            if (nBodyPart == 22 || nBodyPart == 33 || nBodyPart == 41)
                goto LABEL_20;
            result = 0;
            break;
        case 1812002:
            result = nBodyPart == 24;
            break;
        case 1812003:
            result = nBodyPart == 25;
            break;
        case 1812004:
            if (nBodyPart == 26 || nBodyPart == 35 || nBodyPart == 43)
                goto LABEL_20;
            result = 0;
            break;
        case 1812005:
            if (nBodyPart == 27 || nBodyPart == 36 || nBodyPart == 44)
                goto LABEL_20;
            result = 0;
            break;
        case 1812006:
            if (nBodyPart == 28 || nBodyPart == 37 || nBodyPart == 45)
                goto LABEL_20;
            result = 0;
            break;
        case 1812007:
            if (nBodyPart == 46 || nBodyPart == 47 || nBodyPart == 48)
                goto LABEL_20;
            result = 0;
            break;
        default:
            return 0;
        }
        return result;
    case 182:
        v6 = nBodyPart;
    LABEL_72:
        if (v6 == 21 || v6 == 31 || v6 == 39)
            goto LABEL_20;
        result = 0;
        break;
    case 183:
        if (nBodyPart == 29 || nBodyPart == 32 || nBodyPart == 40)
        LABEL_20:
            result = 1;
        else
            result = 0;
        break;
    case 190:
        result = nBodyPart == 18;
        break;
    case 191:
        result = nBodyPart == 19;
        break;
    case 192:
        result = nBodyPart == 20;
        break;
    case 194:
        result = nBodyPart == 1000;
        break;
    case 195:
        result = nBodyPart == 1001;
        break;
    case 196:
        result = nBodyPart == 1002;
        break;
    case 197:
        result = nBodyPart == 1003;
        break;
    default:
        v7 = v5 / 10;
        if (v5 / 10 != 13 && v7 != 14 && v7 != 16 && v7 != 17)
            return 0;
        result = nBodyPart == 11;
        break;
    }
    return result;
}
