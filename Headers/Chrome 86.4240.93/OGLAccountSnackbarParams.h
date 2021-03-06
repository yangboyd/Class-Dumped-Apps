//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/NSCopying-Protocol.h>

@class UIWindow;
@protocol OGLAccount;

@interface OGLAccountSnackbarParams : NSObject <NSCopying>
{
    id <OGLAccount> _account;
    long long _snackbarType;
    UIWindow *_window;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _completionHandlerWithError;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandlerWithError; // @synthesize completionHandlerWithError=_completionHandlerWithError;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) long long snackbarType; // @synthesize snackbarType=_snackbarType;
@property(retain, nonatomic) id <OGLAccount> account; // @synthesize account=_account;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

