//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTRemoteConfigurationPropertyValue.h"

@class NSString;

@interface SPTRemoteConfigurationPropertyValueEnum : SPTRemoteConfigurationPropertyValue
{
    NSString *_value;
}

@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 componentId:(id)arg2 value:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

