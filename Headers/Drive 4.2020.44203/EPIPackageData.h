//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class EPIConfigurationSnapshot, EPIRegistrationData, EXHScope;

@interface EPIPackageData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRegistration; // @dynamic hasRegistration;
@property(nonatomic) _Bool hasScope; // @dynamic hasScope;
@property(nonatomic) _Bool hasSnapshot; // @dynamic hasSnapshot;
@property(retain, nonatomic) EPIRegistrationData *registration; // @dynamic registration;
@property(retain, nonatomic) EXHScope *scope; // @dynamic scope;
@property(retain, nonatomic) EPIConfigurationSnapshot *snapshot; // @dynamic snapshot;

@end

