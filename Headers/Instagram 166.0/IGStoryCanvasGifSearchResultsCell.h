//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGAnimatedImageViewDelegate-Protocol.h>

@class CAShapeLayer, IGAnimatedImageView, IGCircularProgressView, NSString, UIVisualEffectView;
@protocol IGStoryCanvasGifSearchResultsCellDelegate;

@interface IGStoryCanvasGifSearchResultsCell : UICollectionViewCell <IGAnimatedImageViewDelegate>
{
    IGAnimatedImageView *_animatedImageView;
    UIVisualEffectView *_visualEffectView;
    IGCircularProgressView *_progressView;
    CAShapeLayer *_selectedBorderLayer;
    _Bool _canSearchByAuthor;
    id <IGStoryCanvasGifSearchResultsCellDelegate> _delegate;
}

+ (struct CGSize)preferredSizeForStickerModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasGifSearchResultsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)animatedImageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)_searchByAuthor;
- (void)_didLongPress;
- (void)configureWithStickerModel:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

