//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "HTHorizontalSelectionListCell-Protocol.h"

@class M13BadgeView, NSString, UIView;

@interface HTHorizontalSelectionListCustomViewCell : UICollectionViewCell <HTHorizontalSelectionListCell>
{
    unsigned long long _state;
    NSString *_badgeValue;
    UIView *_customView;
    M13BadgeView *_badgeView;
}

@property(retain, nonatomic) M13BadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setCustomView:(id)arg1 insets:(struct UIEdgeInsets)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

