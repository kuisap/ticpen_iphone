//
//  GeoData.h
//  ticpen
//
//  Created by ポイフル on 2014/11/20.
//  Copyright (c) 2014年 KUISAP. All rights reserved.
//

#ifndef __ticpen__GeoData__
#define __ticpen__GeoData__

#include <stdio.h>

namespace tpn {
    class GeoData {
    public:
        /////////////////////////////
        // ** Constructors **
        /////////////////////////////
        GeoData (int pId);
        GeoData (){};
    private:
        /////////////////////////////
        // ** Fields **
        /////////////////////////////
        double mLatitudo;   //緯度
        double mLongitudo;  //経度
    };
};

#endif /* defined(__ticpen__GeoData__) */
