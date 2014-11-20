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
#include "GeoData.h"

namespace tpn {
    class Spot_ {
    public:
        /////////////////////////////
        // ** Constructors **
        /////////////////////////////
        Spot_ (const int pId);
        
        /////////////////////////////
        // ** Getters and setters **
        /////////////////////////////
        
    private:
        /////////////////////////////
        // ** Fields **
        /////////////////////////////
        int mId;
        std::string mName;
        std::string mImg_fname;
        std::string mImg_url;
        GeoData mGeo;
        bool mLike;
        
        /////////////////////////////
        // ** Methods **
        /////////////////////////////
        
    };
}


#endif /* defined(__ticpen__Spot__) */

