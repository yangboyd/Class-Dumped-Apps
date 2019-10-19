//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCellLinkProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTMMessageViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class NSString, YTIMessageRenderer, YTMMessageView;
@protocol YTCellLinkDelegate, YTResponder;

@interface YTMMessageCell : YTCollectionViewCell <YTFormattedStringLabelDelegate, YTMMessageViewDelegate, YTCollectionViewCellProtocol, YTResponder, YTCellLinkProtocol>
{
    YTMMessageView *_messageView;
    YTIMessageRenderer *_entry;
    id <YTResponder> _parentResponder;
    id <YTCellLinkDelegate> _cellLinkDelegate;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(nonatomic) __weak id <YTCellLinkDelegate> cellLinkDelegate; // @synthesize cellLinkDelegate=_cellLinkDelegate;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)messageViewDidTapButton:(id)arg1;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

