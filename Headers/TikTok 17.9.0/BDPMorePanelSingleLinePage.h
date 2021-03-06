//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BDPMorePanelPage-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString;

@interface BDPMorePanelSingleLinePage : UIView <BDPMorePanelPage>
{
    NSMutableArray *_renderCells;
    NSArray *_items;
    double _itemTopSpace;
    NSMutableArray *_cellSpaces;
    NSLayoutConstraint *_itemTopConstraint;
}

+ (long long)capacity;
@property(retain, nonatomic) NSLayoutConstraint *itemTopConstraint; // @synthesize itemTopConstraint=_itemTopConstraint;
@property(retain, nonatomic) NSMutableArray *cellSpaces; // @synthesize cellSpaces=_cellSpaces;
@property(nonatomic) double itemTopSpace; // @synthesize itemTopSpace=_itemTopSpace;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *renderCells; // @synthesize renderCells=_renderCells;
- (void).cxx_destruct;
- (void)updateItems:(id)arg1;
- (void)setupLayout;
- (void)setupUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

