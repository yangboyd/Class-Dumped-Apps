//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL, UIViewController;

@interface MSIDBaseWebRequestConfiguration : NSObject
{
    _Bool _prefersEphemeralWebBrowserSession;
    _Bool _ignoreInvalidState;
    NSURL *_startURL;
    NSString *_endRedirectUrl;
    NSDictionary *_customHeaders;
    UIViewController *_parentController;
    long long _presentationType;
    NSString *_state;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool ignoreInvalidState; // @synthesize ignoreInvalidState=_ignoreInvalidState;
@property(readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property(nonatomic) long long presentationType; // @synthesize presentationType=_presentationType;
@property(nonatomic) _Bool prefersEphemeralWebBrowserSession; // @synthesize prefersEphemeralWebBrowserSession=_prefersEphemeralWebBrowserSession;
@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController=_parentController;
@property(retain, nonatomic) NSDictionary *customHeaders; // @synthesize customHeaders=_customHeaders;
@property(retain, nonatomic) NSString *endRedirectUrl; // @synthesize endRedirectUrl=_endRedirectUrl;
@property(retain, nonatomic) NSURL *startURL; // @synthesize startURL=_startURL;
- (id)responseWithResultURL:(id)arg1 factory:(id)arg2 context:(id)arg3 error:(id *)arg4;
- (id)initWithStartURL:(id)arg1 endRedirectUri:(id)arg2 state:(id)arg3 ignoreInvalidState:(_Bool)arg4;

@end

