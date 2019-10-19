//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface YTContact : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    UIImage *_photo;
    NSArray *_emailAddresses;
    NSArray *_emailAddressLabels;
    NSArray *_phoneNumbers;
    NSArray *_phoneNumberLabels;
}

+ (id)contactKeyWithFirstName:(id)arg1 lastName:(id)arg2 phoneNumber:(id)arg3 phoneLabel:(id)arg4;
@property(readonly, nonatomic) NSArray *phoneNumberLabels; // @synthesize phoneNumberLabels=_phoneNumberLabels;
@property(readonly, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, nonatomic) NSArray *emailAddressLabels; // @synthesize emailAddressLabels=_emailAddressLabels;
@property(readonly, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, nonatomic) UIImage *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;
- (id)initWithPerson:(void *)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 photo:(id)arg3 emailAddresses:(id)arg4 emailAddressLabels:(id)arg5 phoneNumbers:(id)arg6 phoneNumberLabels:(id)arg7;
@property(readonly, nonatomic) NSString *fullName;
- (id)description;
@property(readonly, nonatomic) NSString *contactKey;

@end

