//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEFeedLayoutProvider-Protocol.h"

@class HMEFeedLayoutSizeCalculator, HMEFeedRecapModuleViewController, NSArray, NSString, UICollectionViewLayout;

@interface HMEFeedCompositionalLayoutProviderImpl : NSObject <HMEFeedLayoutProvider>
{
    _Bool _isAnimationSupported;
    UICollectionViewLayout *_layout;
    HMEFeedRecapModuleViewController *_recapModuleViewController;
    NSArray *_sections;
    HMEFeedLayoutSizeCalculator *_layoutSizeCalculator;
    struct UIEdgeInsets _collectionViewContentInset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMEFeedLayoutSizeCalculator *layoutSizeCalculator; // @synthesize layoutSizeCalculator=_layoutSizeCalculator;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) HMEFeedRecapModuleViewController *recapModuleViewController; // @synthesize recapModuleViewController=_recapModuleViewController;
@property(readonly, nonatomic) struct UIEdgeInsets collectionViewContentInset; // @synthesize collectionViewContentInset=_collectionViewContentInset;
@property(readonly, nonatomic) _Bool isAnimationSupported; // @synthesize isAnimationSupported=_isAnimationSupported;
@property(readonly, nonatomic) UICollectionViewLayout *layout; // @synthesize layout=_layout;
- (id)layoutGroupForSection:(id)arg1 collectionViewWidth:(double)arg2;
- (id)supplementaryItemForFooterViewModel:(id)arg1;
- (id)supplementaryItemForHeaderViewModel:(id)arg1;
- (id)supplementaryItemsForSection:(id)arg1;
- (_Bool)shouldInvalidateLayoutOnViewTransition;
- (void)invalidateFooterAtSection:(unsigned long long)arg1;
- (void)invalidateSizeAtIndexPath:(id)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (void)updateWithSections:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

