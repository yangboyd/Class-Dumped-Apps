//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LoginCredentials : NSObject
{
    NSString *_username;
    NSString *_password;
    NSString *_countryCode;
    NSString *_countryIsoCode;
}

@property(retain, nonatomic) NSString *countryIsoCode; // @synthesize countryIsoCode=_countryIsoCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)initWithUsername:(id)arg1 password:(id)arg2 countryCode:(id)arg3 countryIsoCode:(id)arg4;
- (id)initWithUsername:(id)arg1 password:(id)arg2;

@end

