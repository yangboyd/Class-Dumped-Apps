//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol IGUnlockedStickerServiceAnnouncer;

@interface IGUnlockedStickerService : NSObject
{
    id <IGUnlockedStickerServiceAnnouncer> _announcer;
    NSMutableDictionary *_unlockedStickerModelById;
    NSMutableSet *_optimisticallyUnlockedStickerIds;
}

- (void).cxx_destruct;
- (void)_addStickerModel:(id)arg1 forStickerId:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)optimisticallyUnlockStickerId:(id)arg1;
- (_Bool)hasUnlockedStickerId:(id)arg1;
- (id)unlockedStickerViewForStickerId:(id)arg1;
- (void)fetchStickerNuxWithNetworker:(id)arg1 analyticsModule:(id)arg2;
- (void)fetchWithStickerId:(id)arg1 actionSourceType:(long long)arg2 networker:(id)arg3 analyticsModule:(id)arg4;
- (id)init;

@end

