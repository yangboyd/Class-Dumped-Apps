//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GMKPhoneAccessInfo : NSObject
{
    NSString *_phoneNumber;
    NSString *_pin;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)initWithPhoneNumber:(id)arg1 pin:(id)arg2;

@end

