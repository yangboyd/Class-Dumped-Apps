//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMLightweightCell.h"

#import "YTReusableView-Protocol.h"

@class NSString, QTMButton, YTFormattedStringLabel, YTIVideoMetadataRenderer, YTMBevelView;
@protocol YTMLightweightVideoMetadataCellDelegate;

@interface YTMLightweightVideoMetadataCell : YTMLightweightCell <YTReusableView>
{
    YTIVideoMetadataRenderer *_renderer;
    YTFormattedStringLabel *_titleLabel;
    QTMButton *_expandButton;
    YTMBevelView *_separatorView;
    _Bool _hasCalculatedLines;
    _Bool _expanded;
    id <YTMLightweightVideoMetadataCellDelegate> _delegate;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2 expanded:(_Bool)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak id <YTMLightweightVideoMetadataCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapExpandButton:(id)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (int)numberOfLinesForTitleWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

