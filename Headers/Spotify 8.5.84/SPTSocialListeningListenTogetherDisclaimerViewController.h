//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GLUEButton, GLUELabel, NSString, SPTSocialListeningGLUETheme, UIView;
@protocol SPTSocialListeningListenTogetherDisclaimerViewControllerDelegate;

@interface SPTSocialListeningListenTogetherDisclaimerViewController : UIViewController
{
    id <SPTSocialListeningListenTogetherDisclaimerViewControllerDelegate> _delegate;
    SPTSocialListeningGLUETheme *_theme;
    UIView *_backgroundView;
    UIView *_decorationViewLargeCircle;
    UIView *_decorationViewSmallCircle;
    GLUELabel *_titleLabel;
    GLUELabel *_messageLabel;
    GLUEButton *_primaryButton;
    GLUEButton *_secondaryButton;
    GLUELabel *_noteLabel;
    NSString *_name;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GLUELabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) GLUEButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) GLUEButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(retain, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *decorationViewSmallCircle; // @synthesize decorationViewSmallCircle=_decorationViewSmallCircle;
@property(retain, nonatomic) UIView *decorationViewLargeCircle; // @synthesize decorationViewLargeCircle=_decorationViewLargeCircle;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SPTSocialListeningGLUETheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTSocialListeningListenTogetherDisclaimerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapSecondaryButton;
- (void)didTapPrimaryButton;
- (void)setTitleLabelText;
- (void)addConstraints;
- (void)setupNoteLabel;
- (void)setupSecondaryButton;
- (void)setupPrimaryButton;
- (void)setupMessageLabel;
- (void)setupTitleLabel;
- (void)setupLargeDecorationView;
- (void)setupSmallDecorationView;
- (void)setupBackgroundView;
- (void)setupViews;
- (void)viewDidLoad;
- (void)configureWithName:(id)arg1;
- (id)initWithTheme:(id)arg1;

@end

