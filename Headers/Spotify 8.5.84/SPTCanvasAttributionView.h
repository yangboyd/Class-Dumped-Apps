//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEGradientView, SPTCanvasNowPlayingAccessoryView, UILabel;
@protocol SPTCanvasTapArtistAttributionDelegate;

@interface SPTCanvasAttributionView : UIView
{
    id <SPTCanvasTapArtistAttributionDelegate> _delegate;
    SPTCanvasNowPlayingAccessoryView *_imageAccessory;
    GLUEGradientView *_backgroundView;
    UILabel *_captionLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(readonly, nonatomic) GLUEGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SPTCanvasNowPlayingAccessoryView *imageAccessory; // @synthesize imageAccessory=_imageAccessory;
@property(nonatomic) __weak id <SPTCanvasTapArtistAttributionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)artistTapped:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateCaptionWithName:(id)arg1;
- (void)updateAvatar:(id)arg1 name:(id)arg2;
- (void)setUp;
- (id)init;

@end

