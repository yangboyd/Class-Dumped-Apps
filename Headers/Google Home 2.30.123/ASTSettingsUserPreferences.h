//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASTSettingsUserPreferences : NSObject
{
    NSString *_userID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (id)keyWithUserScope:(id)arg1;
- (id)objectForKey:(id)arg1 defaultObject:(id)arg2;
@property(nonatomic) _Bool consentValuePropositionShown;
@property(nonatomic) _Bool udcPermissionGranted;
@property(nonatomic) _Bool authWithTouchIDEnabledForAuto;
@property(nonatomic) _Bool authWithTouchIDEnabledForPayments;
@property(nonatomic) _Bool authRequiredForPayments;
- (id)initWithUserID:(id)arg1;

@end

