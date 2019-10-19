//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults, SPSession, SPTAccesspointWebTokenRequest;
@protocol SPTResubModalURLManagerDelegate;

@interface SPTResubModalURLManager : NSObject
{
    id <SPTResubModalURLManagerDelegate> _delegate;
    SPSession *_session;
    NSUserDefaults *_userDefaults;
    SPTAccesspointWebTokenRequest *_webAccessTokenRequest;
    NSString *_webAccessToken;
}

@property(retain, nonatomic) NSString *webAccessToken; // @synthesize webAccessToken=_webAccessToken;
@property(retain, nonatomic) SPTAccesspointWebTokenRequest *webAccessTokenRequest; // @synthesize webAccessTokenRequest=_webAccessTokenRequest;
@property(nonatomic) __weak NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SPTResubModalURLManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)baseURLString;
- (id)URLWithToken;
- (_Bool)hasWebAccessToken;
- (void)handleWebAccessTokenResponse:(id)arg1;
- (void)startDownloadingToken;
- (id)initWithSession:(id)arg1 userDefaults:(id)arg2;

@end

