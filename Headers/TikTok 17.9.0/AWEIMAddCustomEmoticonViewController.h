//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWEUITextLoadingView, NSData, PHAsset, UIImageView, UIView, YYImage;

@interface AWEIMAddCustomEmoticonViewController : UIViewController
{
    UIImageView *_previewImageView;
    YYImage *_image;
    NSData *_data;
    PHAsset *_asset;
    AWEUITextLoadingView *_hud;
    UIView *_backgoundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgoundView; // @synthesize backgoundView=_backgoundView;
@property(retain, nonatomic) AWEUITextLoadingView *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) YYImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
- (void)backBtnClicked;
- (void)successAddCustomSticker;
- (void)p_uploadEmoticonStatus:(long long)arg1;
- (void)ensureAddEmoticon;
- (void)p_setupUI;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 data:(id)arg2 asset:(id)arg3;

@end

