//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEWaterFallSectionControllerProtocol-Protocol.h"

@class AWEWaterFallSectionCollectionContext, NSString;

@interface AWELocalAreaAwemeSectionController : NSObject <AWEWaterFallSectionControllerProtocol>
{
    AWEWaterFallSectionCollectionContext *collectionContext;
    long long _entranceIndex;
    NSString *_cardId;
    NSString *_cardType;
}

@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(nonatomic) long long entranceIndex; // @synthesize entranceIndex=_entranceIndex;
@property(retain, nonatomic) AWEWaterFallSectionCollectionContext *collectionContext; // @synthesize collectionContext;
- (void).cxx_destruct;
- (void)p_bindStateAndAction;
- (void)rx_store:(id)arg1 didSetWithModule:(id)arg2;
- (id)awemeList;
- (id)store;
- (id)awemeModelForZoomTransition;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (id)p_awemeAtIndex:(long long)arg1;
- (double)p_itemWidth;
- (double)p_collectionViewMargin;
- (void)didSelectItem:(id)arg1;
- (double)minimumColumnSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItem:(id)arg1;
- (id)cellForItem:(id)arg1;
- (id)items;
- (id)initWithCardId:(id)arg1 cardType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

