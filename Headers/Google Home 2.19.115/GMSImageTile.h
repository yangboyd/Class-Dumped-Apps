//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSTile-Protocol.h"

@class GMSTileCoords, GMSTileType, NSArray, NSData, NSString;
@protocol GMSTileExpirationState;

@interface GMSImageTile : NSObject <GMSTile>
{
    NSArray *_pbMapDataCopyrights;
    NSArray *_mapDataCopyrights;
    NSArray *_pbImageryCopyrights;
    NSArray *_imageryCopyrights;
    NSString *_versionID;
    int _dataVersion;
    int _majorEpoch;
    int _tileEdgeLength;
    int _copyrightYear;
    GMSTileCoords *_coords;
    GMSTileType *_tileType;
    NSData *_data;
    id <GMSTileExpirationState> _expirationState;
}

+ (id)unpackedTileWithTileCoords:(id)arg1 data:(id)arg2 offset:(unsigned long long)arg3 tileType:(id)arg4 extractMapCopyrights:(_Bool)arg5 validationTime:(long long)arg6;
+ (id)dataForDataVersion:(int)arg1 tileEdgeLength:(int)arg2 imageTileData:(id)arg3;
@property(readonly, nonatomic) id <GMSTileExpirationState> expirationState; // @synthesize expirationState=_expirationState;
@property(readonly, nonatomic) int copyrightYear; // @synthesize copyrightYear=_copyrightYear;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) int tileEdgeLength; // @synthesize tileEdgeLength=_tileEdgeLength;
@property(readonly, nonatomic) int majorEpoch; // @synthesize majorEpoch=_majorEpoch;
@property(readonly, nonatomic) int dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) GMSTileType *tileType; // @synthesize tileType=_tileType;
@property(readonly, nonatomic) GMSTileCoords *coords; // @synthesize coords=_coords;
- (void).cxx_destruct;
- (void)setImageryCopyrights:(id)arg1;
@property(readonly, nonatomic) NSArray *imageryCopyrights;
- (void)setMapDataCopyrights:(id)arg1;
@property(readonly, nonatomic) NSArray *mapDataCopyrights;
- (_Bool)isTileStoreTile;
- (void)refreshServerPerTileEpoch:(int)arg1 validationTime:(long long)arg2;
- (void)refreshValidationTime:(long long)arg1;
@property(readonly, nonatomic) NSString *versionID;
@property(readonly, nonatomic) int serverPerTileEpoch;
@property(readonly, nonatomic) int perTileEpoch;
@property(readonly, copy) NSString *description;
- (id)initWithTileCoords:(id)arg1 dataVersion:(int)arg2 majorEpoch:(int)arg3 tileEdgeLength:(int)arg4 data:(id)arg5 tileType:(id)arg6 extractMapCopyrights:(_Bool)arg7 validationTime:(long long)arg8 versionID:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

