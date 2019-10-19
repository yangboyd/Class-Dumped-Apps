//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCLoadingIndicatorView, SCMemoriesRoundButton, UIImageView, UILabel;
@protocol SCGalleryEmptyTabViewDelegate;

@interface SCGalleryEmptyTabView : UIView
{
    UIImageView *_backgroundImageView;
    SCLoadingIndicatorView *_loadingView;
    SCMemoriesRoundButton *_importButton;
    UILabel *_textLabel;
    id <SCGalleryEmptyTabViewDelegate> _delegate;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <SCGalleryEmptyTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_importButtonPressed;
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 viewMode:(unsigned long long)arg2;

@end

