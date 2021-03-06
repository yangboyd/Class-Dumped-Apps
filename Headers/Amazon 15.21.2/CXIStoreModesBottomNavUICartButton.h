//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CXIStoreModesBottomNavUIButton.h"

@class CXIStoreModesBottomNavBarItem, UIFont, UILabel;

@interface CXIStoreModesBottomNavUICartButton : CXIStoreModesBottomNavUIButton
{
    UILabel *_cartBadgeLabel;
    UIFont *_cartValueFont;
    CXIStoreModesBottomNavBarItem *_cartButtonBarItem;
}

@property(retain, nonatomic) CXIStoreModesBottomNavBarItem *cartButtonBarItem; // @synthesize cartButtonBarItem=_cartButtonBarItem;
@property(retain, nonatomic) UIFont *cartValueFont; // @synthesize cartValueFont=_cartValueFont;
@property(retain, nonatomic) UILabel *cartBadgeLabel; // @synthesize cartBadgeLabel=_cartBadgeLabel;
- (void).cxx_destruct;
- (void)clearOldStoreSpecificCartCountLabelSubView;
- (id)labelTextForQuantity:(long long)arg1;
- (void)applyStoreSpecificCartCountLabelWithCount:(long long)arg1;
- (void)updateCartBarButton:(unsigned long long)arg1;
- (void)initCartCounterProperties:(id)arg1;
- (id)initWithItem:(id)arg1 action:(id)arg2;

@end

