//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIImageView, UILabel;

@interface NFUIExternalPlaybackOverlayView : UIView
{
    UIImageView *_imageView;
    UIView *_dimmedOverlayView;
    UILabel *_tvIconLabel;
    UILabel *_nowPlayingLabel;
    NSDictionary *_subviewsForVFL;
}

@property(retain, nonatomic) NSDictionary *subviewsForVFL; // @synthesize subviewsForVFL=_subviewsForVFL;
@property(retain, nonatomic) UILabel *nowPlayingLabel; // @synthesize nowPlayingLabel=_nowPlayingLabel;
@property(retain, nonatomic) UILabel *tvIconLabel; // @synthesize tvIconLabel=_tvIconLabel;
@property(retain, nonatomic) UIView *dimmedOverlayView; // @synthesize dimmedOverlayView=_dimmedOverlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)addConstraintsWithVisualFormat:(id)arg1;
- (void)applyLayoutConstraints;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

