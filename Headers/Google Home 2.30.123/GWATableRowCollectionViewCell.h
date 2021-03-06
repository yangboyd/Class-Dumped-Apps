//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

#import "GWACollectionCell-Protocol.h"

@class GWATableRowCollectionViewCellContent, NSString, UIStackView;

@interface GWATableRowCollectionViewCell : MDCCollectionViewCell <GWACollectionCell>
{
    UIStackView *_tableRowStackView;
    GWATableRowCollectionViewCellContent *_content;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) GWATableRowCollectionViewCellContent *content; // @synthesize content=_content;
@property(readonly, nonatomic) UIStackView *tableRowStackView; // @synthesize tableRowStackView=_tableRowStackView;
- (void)collectionCellTapped;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

