//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDKCredentials;

@interface GDKAccountsManagerParams : NSObject
{
    _Bool _myGoogleAccountSwitchingEnabled_31;
    _Bool _enableOneGoogleAccountSnackbarAfterSignIn_41;
    GDKCredentials *_credentials_11;
}

@property(readonly, nonatomic) _Bool enableOneGoogleAccountSnackbarAfterSignIn; // @synthesize enableOneGoogleAccountSnackbarAfterSignIn=_enableOneGoogleAccountSnackbarAfterSignIn_41;
@property(readonly, nonatomic) _Bool myGoogleAccountSwitchingEnabled; // @synthesize myGoogleAccountSwitchingEnabled=_myGoogleAccountSwitchingEnabled_31;
@property(readonly, nonatomic) GDKCredentials *credentials; // @synthesize credentials=_credentials_11;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCredentials:(id)arg1 myGoogleAccountSwitchingEnabled:(_Bool)arg2 enableOneGoogleAccountSnackbarAfterSignIn:(_Bool)arg3;

@end

