//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class IGMusicAnimatedAudioIndicatorBars, NSAttributedString, UIImageView, UILabel;

@interface IGStoryViewerMusicAttributionView : UIControl
{
    IGMusicAnimatedAudioIndicatorBars *_audioIndicator;
    UILabel *_textLabel;
    UIImageView *_explicitIcon;
    _Bool _audioIndicatorVisible;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool audioIndicatorVisible; // @synthesize audioIndicatorVisible=_audioIndicatorVisible;
@property(nonatomic) _Bool audioIndicatorAnimating;
@property(nonatomic) _Bool isExplicit;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

