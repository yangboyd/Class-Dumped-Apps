//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewCell.h"

@class MDCCollectionViewTextCell, UILabel;

@interface HMETappableTextCell : MDCCollectionViewCell
{
    CDUnknownBlockType _textActionBlock;
    CDUnknownBlockType _detailTextActionBlock;
    MDCCollectionViewTextCell *_textCell;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MDCCollectionViewTextCell *textCell; // @synthesize textCell=_textCell;
@property(copy, nonatomic) CDUnknownBlockType detailTextActionBlock; // @synthesize detailTextActionBlock=_detailTextActionBlock;
@property(copy, nonatomic) CDUnknownBlockType textActionBlock; // @synthesize textActionBlock=_textActionBlock;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void)detailTextLabelTapped;
- (void)textLabelTapped;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

