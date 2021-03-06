//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTRemoteConfigurationFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _exampleBoolean;
    long long _exampleInteger;
    unsigned long long _remoteconfigSystemTestPropertyEnum;
    unsigned long long _simpleMessage;
    unsigned long long _rcAaTestProperty;
    NSString *_remoteconfigSystemTestPropertyEnumString;
    NSString *_simpleMessageString;
    NSString *_rcAaTestPropertyString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rcAaTestPropertyString; // @synthesize rcAaTestPropertyString=_rcAaTestPropertyString;
@property(retain, nonatomic) NSString *simpleMessageString; // @synthesize simpleMessageString=_simpleMessageString;
@property(retain, nonatomic) NSString *remoteconfigSystemTestPropertyEnumString; // @synthesize remoteconfigSystemTestPropertyEnumString=_remoteconfigSystemTestPropertyEnumString;
@property(readonly, nonatomic) unsigned long long rcAaTestProperty; // @synthesize rcAaTestProperty=_rcAaTestProperty;
@property(readonly, nonatomic) unsigned long long simpleMessage; // @synthesize simpleMessage=_simpleMessage;
@property(readonly, nonatomic) unsigned long long remoteconfigSystemTestPropertyEnum; // @synthesize remoteconfigSystemTestPropertyEnum=_remoteconfigSystemTestPropertyEnum;
@property(readonly, nonatomic) long long exampleInteger; // @synthesize exampleInteger=_exampleInteger;
@property(readonly, nonatomic) _Bool exampleBoolean; // @synthesize exampleBoolean=_exampleBoolean;
- (unsigned long long)mapRcAaTestPropertyToEnumValue:(id)arg1;
- (unsigned long long)mapSimpleMessageToEnumValue:(id)arg1;
- (unsigned long long)mapRemoteconfigSystemTestPropertyEnumToEnumValue:(id)arg1;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

