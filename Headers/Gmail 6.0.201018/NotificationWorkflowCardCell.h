//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTSwipeableTableViewCell.h"

#import "CacheableHeightForNugget-Protocol.h"
#import "GBTCellFrontViewDelegate-Protocol.h"

@class GBTSmartMailInteractionForwarder, NSString;
@protocol GBTSmartMailInteractionSupport;

@interface NotificationWorkflowCardCell : GBTSwipeableTableViewCell <GBTCellFrontViewDelegate, CacheableHeightForNugget>
{
    GBTSmartMailInteractionForwarder *_forwarder;
}

+ (double)heightForObject:(id)arg1 width:(double)arg2;
+ (_Bool)hasCacheableHeightForNugget:(id)arg1;
+ (Class)backViewClass;
+ (Class)frontViewClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GBTSmartMailInteractionSupport> smartMailDelegate;
- (id)cellFrontViewParentVisualElement:(id)arg1;
- (void)cellFrontView:(id)arg1 didInvokeAction:(unsigned long long)arg2;
- (void)updateWithNugget:(id)arg1 parentVisualElement:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

