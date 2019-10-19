//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, SCAdReportTrackInfo, SCAdSnapTrackInfo, SCStoryAdTrackInfo;

@interface SCAdTrackInfo : NSObject <NSCopying>
{
    _Bool _isUnskippableAd;
    long long _adType;
    NSDictionary *_viewContext;
    SCAdSnapTrackInfo *_singleSnapTrackInfo;
    SCStoryAdTrackInfo *_storyAdTrackInfo;
    SCAdReportTrackInfo *_adReportTrackInfo;
    struct CGSize _tileSize;
    struct CGSize _screenSize;
}

@property(readonly, nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(readonly, nonatomic) struct CGSize tileSize; // @synthesize tileSize=_tileSize;
@property(readonly, copy, nonatomic) SCAdReportTrackInfo *adReportTrackInfo; // @synthesize adReportTrackInfo=_adReportTrackInfo;
@property(readonly, copy, nonatomic) SCStoryAdTrackInfo *storyAdTrackInfo; // @synthesize storyAdTrackInfo=_storyAdTrackInfo;
@property(readonly, copy, nonatomic) SCAdSnapTrackInfo *singleSnapTrackInfo; // @synthesize singleSnapTrackInfo=_singleSnapTrackInfo;
@property(readonly, copy, nonatomic) NSDictionary *viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) _Bool isUnskippableAd; // @synthesize isUnskippableAd=_isUnskippableAd;
@property(readonly, nonatomic) long long adType; // @synthesize adType=_adType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdType:(long long)arg1 isUnskippableAd:(_Bool)arg2 viewContext:(id)arg3 singleSnapTrackInfo:(id)arg4 storyAdTrackInfo:(id)arg5 adReportTrackInfo:(id)arg6 tileSize:(struct CGSize)arg7 screenSize:(struct CGSize)arg8;

@end

