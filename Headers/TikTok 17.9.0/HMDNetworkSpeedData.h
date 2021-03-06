//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDNetworkSpeedData : NSObject
{
    _Bool _cellularAvailable;
    _Bool _WIFIAvailable;
    double _uploadSpeed_WIFI;
    double _downloadSpeed_WIFI;
    double _uploadSpeed_cellular;
    double _downloadSpeed_cellular;
    double _actualAverageTime;
}

+ (id)stringlizationOfSpeed:(double)arg1;
@property double actualAverageTime; // @synthesize actualAverageTime=_actualAverageTime;
@property(getter=isWIFIAvailable) _Bool WIFIAvailable; // @synthesize WIFIAvailable=_WIFIAvailable;
@property(getter=isCellularAvailable) _Bool cellularAvailable; // @synthesize cellularAvailable=_cellularAvailable;
@property double downloadSpeed_cellular; // @synthesize downloadSpeed_cellular=_downloadSpeed_cellular;
@property double uploadSpeed_cellular; // @synthesize uploadSpeed_cellular=_uploadSpeed_cellular;
@property double downloadSpeed_WIFI; // @synthesize downloadSpeed_WIFI=_downloadSpeed_WIFI;
@property double uploadSpeed_WIFI; // @synthesize uploadSpeed_WIFI=_uploadSpeed_WIFI;

@end

