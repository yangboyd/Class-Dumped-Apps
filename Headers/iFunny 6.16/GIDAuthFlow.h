//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GIDCallbackQueue.h>

@class GIDProfileData, NSError, NSString, OIDAuthState;

@interface GIDAuthFlow : GIDCallbackQueue
{
    OIDAuthState *_authState;
    NSError *_error;
    NSString *_emmSupport;
    GIDProfileData *_profileData;
}

@property(retain, nonatomic) GIDProfileData *profileData; // @synthesize profileData=_profileData;
@property(copy, nonatomic) NSString *emmSupport; // @synthesize emmSupport=_emmSupport;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) OIDAuthState *authState; // @synthesize authState=_authState;
- (void).cxx_destruct;

@end

