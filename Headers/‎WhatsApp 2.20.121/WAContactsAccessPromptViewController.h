//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

@class UIButton, UILabel, WAContactsAccessPromptViewControllerConfiguration;

@interface WAContactsAccessPromptViewController : WAViewController
{
    WAContactsAccessPromptViewControllerConfiguration *_configuration;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_settingsButton;
}

+ (void)presentFromViewController:(id)arg1 animated:(_Bool)arg2 withConfiguration:(id)arg3;
+ (id)promptWithConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WAContactsAccessPromptViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)wa_fontSizeDidChange;
- (void)viewDidLoad;
- (void)cancelAction:(id)arg1;
- (void)openSettings:(id)arg1;
- (void)reloadFonts;

@end

