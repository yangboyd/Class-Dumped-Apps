//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYPhoneNumberModel, NSNumber, NSString;

@interface TMVerifyIdentityPlatformModel : NSObject
{
    _Bool _isSafeEnv;
    DYPhoneNumberModel *_phoneNumber;
    NSString *_email;
    NSNumber *_platform;
    NSString *_trackerInformation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *trackerInformation; // @synthesize trackerInformation=_trackerInformation;
@property(nonatomic) _Bool isSafeEnv; // @synthesize isSafeEnv=_isSafeEnv;
@property(retain, nonatomic) NSNumber *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) DYPhoneNumberModel *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (_Bool)disableTransfer;
- (id)initWithSafety:(_Bool)arg1;

@end

