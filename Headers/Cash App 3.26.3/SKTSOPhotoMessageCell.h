//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Smooch/SKTSOTextMessageCell.h>

@class CAGradientLayer, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface SKTSOPhotoMessageCell : SKTSOTextMessageCell
{
    UIImageView *_mediaImageView;
    UIView *_dimOverlay;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_imagePlaceholderLabel;
    UIView *_progressOverlay;
    CAGradientLayer *_progressOverlayMask;
}

@property(retain) CAGradientLayer *progressOverlayMask; // @synthesize progressOverlayMask=_progressOverlayMask;
@property(retain) UIView *progressOverlay; // @synthesize progressOverlay=_progressOverlay;
@property(retain) UILabel *imagePlaceholderLabel; // @synthesize imagePlaceholderLabel=_imagePlaceholderLabel;
@property(retain) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain) UIView *dimOverlay; // @synthesize dimOverlay=_dimOverlay;
@property(retain, nonatomic) UIImageView *mediaImageView; // @synthesize mediaImageView=_mediaImageView;
- (void).cxx_destruct;
- (id)loadImageFullText:(id)arg1;
- (id)retryText;
- (id)largeImageText;
- (void)updateImagePlaceholderLabelText:(id)arg1;
- (void)reloadImage:(_Bool)arg1;
- (void)reloadImage;
- (void)stopWatchingProgressNotifications;
- (void)watchProgressNotifications;
- (void)handleMediaTapped:(id)arg1;
- (void)updateProgress;
- (void)updateProgressAnimated:(_Bool)arg1;
- (void)adjustCell;
- (void)layoutContent;
- (void)initMediaImageView;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 vendingMachine:(id)arg3;
- (void)dealloc;

@end

