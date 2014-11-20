//
//  Spot.h
//  ticpen
//
//  Created by ポイフル on 2014/11/20.
//  Copyright (c) 2014年 KUISAP. All rights reserved.
//

#ifndef __ticpen__Spot__
#define __ticpen__Spot__

#include <string>
#include <stdio.h>
#include "GeoData.hpp"

namespace tpn {
    class Spot_ {
    public:
        /////////////////////////////
        // ** Constructors **
        /////////////////////////////
        Spot_ (const int pId);
        
        /////////////////////////////
        // ** Getters **
        /////////////////////////////
        
        /////////////////////////////
        // ** Setters **
        /////////////////////////////
        void setGeo(tpn::GeoData pGeo);
        void setName(std::string pName);
        void setImg_url(std::string pURL);
        void setLike(bool pLike);
        
        
    private:
        /////////////////////////////
        // ** Fields **
        /////////////////////////////
        int mId;                // スポットID
        std::string mName;      // スポット名
        std::string mImg_fname; // キャッシュファイル名
        std::string mImg_url;   // 画像URL
        GeoData mGeo;           // GPSデータ，緯度経度
        bool mLike;             // Likeしたかどうか？
        
        /////////////////////////////
        // ** Methods **
        /////////////////////////////
        
    };
}


#endif /* defined(__ticpen__Spot__) */

