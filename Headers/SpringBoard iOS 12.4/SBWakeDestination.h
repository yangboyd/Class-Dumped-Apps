//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBSRemoteAlertDefinition;

@interface SBWakeDestination : NSObject
{
    unsigned long long _type;
    NSString *_identifier;
    SBSRemoteAlertDefinition *_remoteAlertDefinition;
}

@property(retain, nonatomic) SBSRemoteAlertDefinition *remoteAlertDefinition; // @synthesize remoteAlertDefinition=_remoteAlertDefinition;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

