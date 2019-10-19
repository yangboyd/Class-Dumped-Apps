//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTCellAccessoryView-Protocol.h"
#import "SPTThemableView-Protocol.h"

@class NSString, UIImageView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTDisclosureAccessoryView : UIView <SPTCellAccessoryView, SPTThemableView>
{
    _Bool _disabled;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIImageView *_chevronView;
}

+ (id)disclosureAccessoryView;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (struct CGSize)SPTCellAccessoryViewPositionAdjustment;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

