//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WALinkLabelDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UILabel, UIView, WALinkLabel;

@interface WAChatPromptCardCell : UITableViewCell <WALinkLabelDelegate>
{
    UIView *_backgroundView;
    UILabel *_promptTextLabel;
    WALinkLabel *_bottomTextLabel;
    NSMutableArray *_buttons;
    double _lastLayoutWidth;
    NSArray *_buttonActions;
    NSString *_promptText;
    NSString *_bottomText;
    CDUnknownBlockType _bottomTextLinkHandler;
}

+ (double)preferredHeightForWidth:(double)arg1 promptText:(id)arg2 buttonRowsCount:(long long)arg3 bottomText:(id)arg4;
+ (double)bottomTextLabelHeightForText:(id)arg1 maxWidth:(double)arg2;
+ (double)promptTextLabelHeightForText:(id)arg1 maxWidth:(double)arg2;
+ (void)configureBottomTextLinkLabel:(id)arg1;
+ (void)configurePromptTextLabel:(id)arg1;
+ (id)bottomTextFont;
+ (id)buttonTitleFontForButtonWithStyle:(unsigned long long)arg1;
+ (id)promptTextFont;
+ (id)makeButton;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType bottomTextLinkHandler; // @synthesize bottomTextLinkHandler=_bottomTextLinkHandler;
@property(copy, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(copy, nonatomic) NSString *promptText; // @synthesize promptText=_promptText;
@property(copy, nonatomic) NSArray *buttonActions; // @synthesize buttonActions=_buttonActions;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)layoutButtons;
- (void)layoutSubviews;
- (long long)buttonActionsCount;
- (void)enumerateButtonsAndActionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)reloadButtons;
- (id)accessibilityElements;
- (void)setupSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

