//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTSwipeableTableViewBaseCell.h"

#import "CellContentWidth-Protocol.h"
#import "CellPositionSupport-Protocol.h"
#import "GBTAccessibilityCustomActionSupport-Protocol.h"
#import "GBTBadgeSupport-Protocol.h"
#import "GBTShadowSupport-Protocol.h"
#import "GBTStaticHeightSupport-Protocol.h"
#import "UpdateableWithNugget-Protocol.h"

@class GBTNugget, NSMutableArray, NSMutableDictionary, NSString, UIView;
@protocol CellContentWidthDelegate, GBTVisualElementDataSource;

@interface GBTSwipeableTableViewCell : GBTSwipeableTableViewBaseCell <GBTBadgeSupport, CellContentWidth, CellPositionSupport, GBTAccessibilityCustomActionSupport, GBTShadowSupport, GBTStaticHeightSupport, UpdateableWithNugget>
{
    NSMutableDictionary *_accessibilityActionByThreadActionMap;
    UIView *_backgroundView;
    _Bool _backViewRespondsToUpdateWithNugget;
    UIView *_focusBar;
    _Bool _frontViewRespondsToCustomAccessibilityActions;
    _Bool _frontViewRespondsToUpdateWithNugget;
    _Bool _hasSwipeActionSupport;
    id <CellContentWidthDelegate> _contentWidthDelegate;
    unsigned long long _cellPosition;
    NSMutableArray *_gbt_accessibilityActions;
    id <GBTVisualElementDataSource> _visualElementDataSource;
    GBTNugget *_nugget;
}

+ (id)labelForAction:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GBTNugget *nugget; // @synthesize nugget=_nugget;
@property(nonatomic) __weak id <GBTVisualElementDataSource> visualElementDataSource; // @synthesize visualElementDataSource=_visualElementDataSource;
@property(retain, nonatomic) NSMutableArray *gbt_accessibilityActions; // @synthesize gbt_accessibilityActions=_gbt_accessibilityActions;
@property(nonatomic) unsigned long long cellPosition; // @synthesize cellPosition=_cellPosition;
@property(nonatomic) __weak id <CellContentWidthDelegate> contentWidthDelegate; // @synthesize contentWidthDelegate=_contentWidthDelegate;
@property(nonatomic, getter=isShadowVisible) _Bool shadowVisible;
@property(nonatomic, getter=isShadowEnabled) _Bool shadowEnabled;
@property(nonatomic) struct CGRect maskFrame;
- (void)setMultiselectEnabled:(_Bool)arg1;
- (void)forceHideSnoozeBadge:(_Bool)arg1;
- (void)didSelectAccessibilityCustomAction:(id)arg1;
- (void)updateAccessibilityCustomActions;
- (id)swipeableSelf;
- (void)updateWithNugget:(id)arg1 parentVisualElement:(id)arg2;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setFocused:(_Bool)arg1;
- (void)setInitialFocus:(_Bool)arg1;
- (_Bool)isSwipeable;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

