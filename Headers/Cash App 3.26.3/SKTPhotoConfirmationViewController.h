//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel, UIView, UIVisualEffectView;
@protocol SKTPhotoConfirmationDelegate;

@interface SKTPhotoConfirmationViewController : UIViewController
{
    id <SKTPhotoConfirmationDelegate> _delegate;
    UIView *_containerView;
    UIVisualEffectView *_blurEffectView;
    UIButton *_okButton;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    NSString *_titleText;
    UIImageView *_imageView;
    UIImage *_image;
    UIView *_buttonsHorizontalSeparatorView;
    UIView *_buttonsVerticalSeparatorView;
}

@property(retain, nonatomic) UIView *buttonsVerticalSeparatorView; // @synthesize buttonsVerticalSeparatorView=_buttonsVerticalSeparatorView;
@property(retain, nonatomic) UIView *buttonsHorizontalSeparatorView; // @synthesize buttonsHorizontalSeparatorView=_buttonsHorizontalSeparatorView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property __weak id <SKTPhotoConfirmationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)close;
- (void)confirm;
- (void)reframeButtons;
- (void)reframeImage;
- (void)reframeTitle;
- (void)reframeContainer;
- (void)reframeView;
- (void)setUpImageView;
- (void)setUpSeparators;
- (void)setUpTitle;
- (void)setUpButtons;
- (void)setUpContainer;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 title:(id)arg2;

@end

