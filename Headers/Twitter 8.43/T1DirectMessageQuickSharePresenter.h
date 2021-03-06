//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, T1DirectMessageQuickShareItem, TFNTwitterAccount;

@interface T1DirectMessageQuickSharePresenter : NSObject
{
    _Bool _shouldForceShowDismissButton;
    NSString *_title;
    NSString *_prefilledText;
    NSString *_placeholderText;
    CDUnknownBlockType _didDismissBlock;
    TFNTwitterAccount *_account;
    T1DirectMessageQuickShareItem *_item;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) T1DirectMessageQuickShareItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(nonatomic) _Bool shouldForceShowDismissButton; // @synthesize shouldForceShowDismissButton=_shouldForceShowDismissButton;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(copy, nonatomic) NSString *prefilledText; // @synthesize prefilledText=_prefilledText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)presentFromViewController:(id)arg1 source:(id)arg2;
- (id)init;
- (id)initWithAccount:(id)arg1 item:(id)arg2;

@end

