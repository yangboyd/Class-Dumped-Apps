//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTActiveStateCollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTCustomInsetsCell-Protocol.h"

@class NSArray, NSString, YTHorizontalButtonListView;
@protocol YTHorizontalButtonListViewDelegate, YTResponder;

@interface YTHorizontalButtonListCell : YTActiveStateCollectionViewCell <YTCollectionViewCellProtocol, YTCustomInsetsCell>
{
    YTHorizontalButtonListView *_view;
    id <YTResponder> _parentResponder;
}

+ (struct UIEdgeInsets)customSectionInsetForInset:(struct UIEdgeInsets)arg1;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)prepareForReuse;
- (id)accessibilityElements;
- (id)entry;
- (void)setEntry:(id)arg1;
- (_Bool)shouldbeIgnoredForSelectionByIPVAlgo;
@property(readonly, nonatomic) NSArray *buttons;
@property(nonatomic) __weak id <YTHorizontalButtonListViewDelegate> delegate;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

