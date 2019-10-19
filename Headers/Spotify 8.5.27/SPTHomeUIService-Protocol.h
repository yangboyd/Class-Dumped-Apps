//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol HUBComponentLayoutManager, HUBContentOperation, SPTHomeUIComponentFactory;

@protocol SPTHomeUIService <SPTService>
@property(readonly, nonatomic) id <SPTHomeUIComponentFactory> componentFactory;
- (id <HUBComponentLayoutManager>)provideHomeComponentLayoutManager;
- (id <HUBContentOperation>)provideHomePromoV2MockHubContentOperation;
- (id <HUBContentOperation>)provideHomeMockHubContentOperation;
@end

