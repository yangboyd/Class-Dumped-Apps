//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IESMMEffectStickerInfo : NSObject
{
    _Bool _canUseAmazing;
    _Bool _needReload;
    _Bool _isfreezeFrame;
    _Bool _syncTimeDomain;
    unsigned int _stickerID;
    int _load_resource_timeOut;
    NSString *_path;
    double _startTime;
    double _endTime;
    NSString *_stickerTag;
}

@property(nonatomic) _Bool syncTimeDomain; // @synthesize syncTimeDomain=_syncTimeDomain;
@property(nonatomic) _Bool isfreezeFrame; // @synthesize isfreezeFrame=_isfreezeFrame;
@property(nonatomic) int load_resource_timeOut; // @synthesize load_resource_timeOut=_load_resource_timeOut;
@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(nonatomic) _Bool canUseAmazing; // @synthesize canUseAmazing=_canUseAmazing;
@property(retain, nonatomic) NSString *stickerTag; // @synthesize stickerTag=_stickerTag;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int stickerID; // @synthesize stickerID=_stickerID;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

