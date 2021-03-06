//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;
@protocol AMIPermissionRequestDelegate;

@interface AMIPermissionRequest : NSObject
{
    unsigned long long _permission;
    NSString *_primerImageUrl;
    NSString *_deniedPrimerImageUrl;
    long long _primerImageContentMode;
    UIColor *_primerButtonBackground;
    NSString *_primerButtonText;
    NSString *_primerText;
    NSString *_primerDescriptionText;
    NSArray *_buttonTitles;
    unsigned long long _primerButtonIndex;
    unsigned long long _presentationStyle;
    id <AMIPermissionRequestDelegate> _delegate;
}

@property(nonatomic) __weak id <AMIPermissionRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(nonatomic) unsigned long long primerButtonIndex; // @synthesize primerButtonIndex=_primerButtonIndex;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(retain, nonatomic) NSString *primerDescriptionText; // @synthesize primerDescriptionText=_primerDescriptionText;
@property(retain, nonatomic) NSString *primerText; // @synthesize primerText=_primerText;
@property(retain, nonatomic) NSString *primerButtonText; // @synthesize primerButtonText=_primerButtonText;
@property(retain, nonatomic) UIColor *primerButtonBackground; // @synthesize primerButtonBackground=_primerButtonBackground;
@property(nonatomic) long long primerImageContentMode; // @synthesize primerImageContentMode=_primerImageContentMode;
@property(retain, nonatomic) NSString *deniedPrimerImageUrl; // @synthesize deniedPrimerImageUrl=_deniedPrimerImageUrl;
@property(retain, nonatomic) NSString *primerImageUrl; // @synthesize primerImageUrl=_primerImageUrl;
@property(nonatomic) unsigned long long permission; // @synthesize permission=_permission;
- (void).cxx_destruct;
- (void)performSanityCheckForBottomSheetExperience;
- (void)performSanityCheckForFullScreenExperience;
- (void)performSanityCheck;
@property(readonly, nonatomic) NSString *deniedText;
- (void)requestPermission;
- (_Bool)canRequestPermission;
- (_Bool)hasPermission;
- (void)initialize;
- (id)initWithPermission:(unsigned long long)arg1;
- (id)initWithPermission:(unsigned long long)arg1 primerText:(id)arg2 primerDescription:(id)arg3 primerButtonIndex:(unsigned long long)arg4 buttons:(id)arg5;
- (id)initWithPermission:(unsigned long long)arg1 primerText:(id)arg2 primerDescription:(id)arg3 primerImageUrl:(id)arg4 deniedPrimerImageUrl:(id)arg5 primerButtonText:(id)arg6;

@end

