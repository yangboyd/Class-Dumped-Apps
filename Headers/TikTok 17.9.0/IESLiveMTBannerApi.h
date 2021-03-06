//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveApi.h"

@class NSNumber;

@interface IESLiveMTBannerApi : HTSLiveApi
{
    unsigned long long _bannerType;
    NSNumber *_roomID;
    NSNumber *_liveAdType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *liveAdType; // @synthesize liveAdType=_liveAdType;
@property(readonly, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(nonatomic) unsigned long long bannerType; // @synthesize bannerType=_bannerType;
- (void)fetchInRoomBannersWithCallback:(CDUnknownBlockType)arg1;
- (void)fetchLivePageBannersWithPageType:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchGiftTaskWithCallback:(CDUnknownBlockType)arg1;
- (id)initWithType:(unsigned long long)arg1 roomID:(id)arg2;
- (id)initWithRoomID:(id)arg1;
- (id)init;

@end

