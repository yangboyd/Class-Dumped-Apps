//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOSShared/SDModelObject.h>

@class NSString;

@interface WMCheckinPickupPerson : SDModelObject
{
    _Bool _primary;
    NSString *_completeName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_phoneNumber;
    NSString *_email;
    NSString *_displayName;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *completeName; // @synthesize completeName=_completeName;
- (_Bool)validModel;
- (id)mappingDictionaryForData:(id)arg1;

@end

