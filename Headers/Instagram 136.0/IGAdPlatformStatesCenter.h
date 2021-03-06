//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGAdPlatformStatesSnapshot-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol IGAdPlatformSponsoredItemInfoProviding><IGUnitItemInformationProviding><IGAdGapRuleEnforceable;

@interface IGAdPlatformStatesCenter : NSObject <IGAdPlatformStatesSnapshot>
{
    NSMutableDictionary *_requestInformationDict;
    struct NSObject *_lastInsertedSponsoredItem;
}

@property(readonly, nonatomic) NSObject<IGAdPlatformSponsoredItemInfoProviding><IGUnitItemInformationProviding><IGAdGapRuleEnforceable> *lastInsertedSponsoredItem; // @synthesize lastInsertedSponsoredItem=_lastInsertedSponsoredItem;
- (void).cxx_destruct;
- (_Bool)didInsertSponsoredItem:(struct NSObject *)arg1;
- (id)allInsertionTrackingModels;
- (void)sponsoredItemSeen:(id)arg1;
- (void)sponsoredItemInvalidated:(struct NSObject *)arg1;
- (void)sponsoredItemInserted:(struct NSObject *)arg1 adIndex:(long long)arg2;
- (void)sponsoredItemAddedToPool:(struct NSObject *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

