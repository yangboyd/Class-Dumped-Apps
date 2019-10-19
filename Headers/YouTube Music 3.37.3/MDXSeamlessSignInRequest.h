//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDXSeamlessSignInLogger, MDXSeamlessSignInTheme, NSString, SSOService;
@protocol MDXScreen;

@interface MDXSeamlessSignInRequest : NSObject
{
    id <MDXScreen> _screen;
    SSOService *_SSOService;
    MDXSeamlessSignInTheme *_theme;
    MDXSeamlessSignInLogger *_logger;
    NSString *_deviceAuthCode;
    NSString *_signInSessionID;
    long long _signInType;
}

@property(readonly, nonatomic) long long signInType; // @synthesize signInType=_signInType;
@property(readonly, nonatomic) NSString *signInSessionID; // @synthesize signInSessionID=_signInSessionID;
@property(readonly, nonatomic) NSString *deviceAuthCode; // @synthesize deviceAuthCode=_deviceAuthCode;
@property(readonly, nonatomic) MDXSeamlessSignInLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) MDXSeamlessSignInTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SSOService *SSOService; // @synthesize SSOService=_SSOService;
@property(readonly, nonatomic) id <MDXScreen> screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithScreen:(id)arg1 deviceAuthCode:(id)arg2 signInSessionID:(id)arg3 signInType:(long long)arg4 theme:(id)arg5 SSOService:(id)arg6 logger:(id)arg7;

@end

