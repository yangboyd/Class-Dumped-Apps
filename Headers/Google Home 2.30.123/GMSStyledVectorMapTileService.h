//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSDASHTileService.h"

@class GMSAPIClientParameters, GMSMapStyle, NSString;

@interface GMSStyledVectorMapTileService : GMSDASHTileService
{
    GMSMapStyle *_mapStyle;
    NSString *_styleFingerprint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *styleFingerprint; // @synthesize styleFingerprint=_styleFingerprint;
@property(readonly, nonatomic) GMSAPIClientParameters *apiClientParameters;
- (id)initWithConnection:(id)arg1 paintService:(id)arg2 clientParameters:(id)arg3 requestBuilder:(id)arg4 timingClock:(id)arg5 tileDataCache:(id)arg6 offlineTileDataCache:(id)arg7 memCacheSize:(unsigned long long)arg8 styleTableService:(id)arg9 serviceFlags:(unsigned int)arg10 tileType:(id)arg11 mapStyle:(id)arg12;

@end

