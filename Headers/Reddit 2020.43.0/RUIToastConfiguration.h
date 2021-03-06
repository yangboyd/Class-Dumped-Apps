//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedditUI/RUIMutableToastConfiguration-Protocol.h>

@class NSArray, NSAttributedString, NSString, NSURL, RUIToastAction, UIColor, UIImage;

@interface RUIToastConfiguration : NSObject <RUIMutableToastConfiguration>
{
    NSString *_message;
    long long _toastType;
    NSAttributedString *_attributedMessage;
    UIColor *_sideBarColor;
    UIImage *_icon;
    NSURL *_iconURL;
    double _autoDismissDelay;
    NSString *_identifier;
    CDUnknownBlockType _dismissCallBack;
    RUIToastAction *_rightButtonAction;
    NSArray *_bottomButtonActions;
}

+ (id)imageForRUIToastType:(long long)arg1;
+ (id)sidebarColorForRUIToastType:(long long)arg1;
+ (id)configurationWithMessage:(id)arg1 toastType:(long long)arg2 buildBlock:(CDUnknownBlockType)arg3;
+ (id)configurationWithMessage:(id)arg1 toastType:(long long)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *bottomButtonActions; // @synthesize bottomButtonActions=_bottomButtonActions;
@property(retain, nonatomic) RUIToastAction *rightButtonAction; // @synthesize rightButtonAction=_rightButtonAction;
@property(copy, nonatomic) CDUnknownBlockType dismissCallBack; // @synthesize dismissCallBack=_dismissCallBack;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) double autoDismissDelay; // @synthesize autoDismissDelay=_autoDismissDelay;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIColor *sideBarColor; // @synthesize sideBarColor=_sideBarColor;
@property(copy, nonatomic) NSAttributedString *attributedMessage; // @synthesize attributedMessage=_attributedMessage;
@property(nonatomic) long long toastType; // @synthesize toastType=_toastType;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

