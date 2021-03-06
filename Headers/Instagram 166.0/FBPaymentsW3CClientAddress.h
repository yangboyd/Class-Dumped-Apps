//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface FBPaymentsW3CClientAddress : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_addressLine;
    NSString *_country;
    NSString *_city;
    NSString *_dependentLocality;
    NSString *_organization;
    NSString *_phone;
    NSString *_postalCode;
    NSString *_recipient;
    NSString *_region;
    NSString *_regionCode;
    NSString *_sortingCode;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sortingCode; // @synthesize sortingCode=_sortingCode;
@property(readonly, copy, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(readonly, copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
@property(readonly, copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(readonly, copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(readonly, copy, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(readonly, copy, nonatomic) NSString *dependentLocality; // @synthesize dependentLocality=_dependentLocality;
@property(readonly, copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, copy, nonatomic) NSArray *addressLine; // @synthesize addressLine=_addressLine;
- (id)initWithAddressLine:(id)arg1 country:(id)arg2 city:(id)arg3 dependentLocality:(id)arg4 organization:(id)arg5 phone:(id)arg6 postalCode:(id)arg7 recipient:(id)arg8 region:(id)arg9 regionCode:(id)arg10 sortingCode:(id)arg11;

@end

