//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "GTETasksCellViewGestureHandling-Protocol.h"
#import "GTEViewCell-Protocol.h"

@class MDCInkView, NSDictionary, NSObject, NSString, UIImageView, UILabel, UIView;
@protocol GTELoggersProvider><GTETasksKitFeatureFlagsProvider, GTETasksDoneHeaderViewDelegate, GTEThemerProvider><GTETimeServiceProvider><GTEChipConfiguratorProvider><GTERecurrenceInterpreterProvider;

@interface GTETasksDoneHeaderView : UICollectionViewCell <GTEViewCell, GTETasksCellViewGestureHandling>
{
    NSObject<GTEThemerProvider><GTETimeServiceProvider><GTEChipConfiguratorProvider><GTERecurrenceInterpreterProvider> *_appContext;
    NSObject<GTELoggersProvider><GTETasksKitFeatureFlagsProvider> *_userContext;
    UILabel *_title;
    NSDictionary *_titleAttributes;
    UIImageView *_arrow;
    UIView *_topDelimiter;
    MDCInkView *_inkView;
    _Bool _expanded;
    id <GTETasksDoneHeaderViewDelegate> _delegate;
    long long _doneCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long doneCount; // @synthesize doneCount=_doneCount;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak id <GTETasksDoneHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeInk;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)handleInk:(id)arg1;
- (_Bool)inkGestureShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (_Bool)panGestureShouldBegin:(id)arg1;
- (void)handleTap:(id)arg1;
- (_Bool)tapGestureShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
@property(nonatomic) _Bool topDelimiterHidden;
- (void)prepareWithAppContext:(id)arg1 userContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

