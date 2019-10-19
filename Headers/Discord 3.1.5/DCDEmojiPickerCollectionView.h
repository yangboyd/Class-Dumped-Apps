//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, RCTEventDispatcher, UICollectionViewFlowLayout;

@interface DCDEmojiPickerCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>
{
    _Bool _dark;
    _Bool _ignoreOnScroll;
    NSArray *_data;
    CDUnknownBlockType _onFocusSection;
    CDUnknownBlockType _onSelectEmoji;
    RCTEventDispatcher *_eventDispatcher;
    UICollectionViewFlowLayout *_layout;
}

@property(nonatomic) _Bool ignoreOnScroll; // @synthesize ignoreOnScroll=_ignoreOnScroll;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) RCTEventDispatcher *eventDispatcher; // @synthesize eventDispatcher=_eventDispatcher;
@property(nonatomic) _Bool dark; // @synthesize dark=_dark;
@property(copy, nonatomic) CDUnknownBlockType onSelectEmoji; // @synthesize onSelectEmoji=_onSelectEmoji;
@property(copy, nonatomic) CDUnknownBlockType onFocusSection; // @synthesize onFocusSection=_onFocusSection;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)didTapEmoji:(id)arg1;
- (void)handleScroll;
- (long long)getDisabledStartIndex:(id)arg1;
- (id)getCategory:(id)arg1;
- (id)getSectionTitle:(id)arg1;
- (id)getEmoji:(id)arg1;
- (id)getEmojis:(id)arg1;
- (id)getSection:(id)arg1;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateData:(id)arg1 animated:(_Bool)arg2;
- (void)scrollTo:(long long)arg1 y:(long long)arg2 animated:(_Bool)arg3;
- (void)scrollToSection:(long long)arg1;
- (void)dealloc;
- (id)initWithEventDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

