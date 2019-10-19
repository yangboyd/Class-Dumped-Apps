//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseControl.h>

#import "RUIThemeUpdateCallbackProtocol-Protocol.h"

@class BaseButton, NSString;

@interface ChatMediaToolbar : BaseControl <RUIThemeUpdateCallbackProtocol>
{
    long long _source;
    BaseButton *_postsButton;
    BaseButton *_snoomojiButton;
    BaseButton *_photosButton;
    BaseButton *_uSlashButton;
    BaseButton *_rSlashButton;
}

@property(retain, nonatomic) BaseButton *rSlashButton; // @synthesize rSlashButton=_rSlashButton;
@property(retain, nonatomic) BaseButton *uSlashButton; // @synthesize uSlashButton=_uSlashButton;
@property(retain, nonatomic) BaseButton *photosButton; // @synthesize photosButton=_photosButton;
@property(retain, nonatomic) BaseButton *snoomojiButton; // @synthesize snoomojiButton=_snoomojiButton;
@property(retain, nonatomic) BaseButton *postsButton; // @synthesize postsButton=_postsButton;
@property(nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)themeDidChange:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)configureButton:(id)arg1 withImageName:(id)arg2 theme:(id)arg3;
- (id)baseButtonWithImageName:(id)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

