//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AIRSavedIdentitiesRequester : NSObject
{
}

+ (void)createChineseIdentity:(id)arg1 idNumber:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 listingID:(id)arg5 checkinDate:(id)arg6 checkoutDate:(id)arg7 inSession:(id)arg8 completion:(CDUnknownBlockType)arg9;
+ (void)createPassport:(id)arg1 passportNumber:(id)arg2 expirationDate:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 nationality:(id)arg6 inSession:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)getSavedIdentities:(id)arg1 listingID:(id)arg2 checkinDate:(id)arg3 checkoutDate:(id)arg4 inSession:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end

